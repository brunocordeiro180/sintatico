%define parse.error verbose
%define lr.type canonical-lr
%{
#include "scope.stack.h"
#include "symbol.table.h"
#include <stdio.h>
#include <stdlib.h>

Symbol symbolTable[1000];

extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* s);
extern int scopeStack[100];
extern int scopeId;

%}

%token <token> STRING ID INT FLOAT
%token <token> WRITE WRITELN READ
%token <token> IF ELSE
%token <token> ASSIGN FOR
%token <token> LIST_CONSTRUCTOR NIL
%token <token> RETURN TYPE
%token <token> MAP FILTER UNARY_LIST_OP LOG_OP EXCLAMATION SUM_OP MUL_OP REL_OP UNARY_LOG_OP
%token <token> ';' ',' '(' ')' '{' '}' ':' '?' '%'


%union{
	struct Token{
		int line;
		int column;
		int scope;
		char lexeme[100];
	} token;
}

%%

S:
  decl_list
;

decl_list:
	decl_list decl 
	| decl
;

decl: 
	var_decl 
	| fun_decl 
;

var_decl:
	TYPE ID ';' {
		insertSymbol(symbolTable, $2.lexeme, $2.line, $2.column, $1.lexeme, "var", $2.scope);
	}
;

fun_decl: 
	TYPE ID '(' params ')' block_stmt {
		insertSymbol(symbolTable, $2.lexeme, $2.line, $2.column, $1.lexeme, "fun",$2.scope);
	}
	| TYPE ID '(' ')' block_stmt {
		insertSymbol(symbolTable, $2.lexeme, $2.line, $2.column, $1.lexeme, "fun", $2.scope);
	}
;

params:
	params ',' param_decl 
	| param_decl 
;

param_decl:
	TYPE ID {
		insertSymbol(symbolTable, $2.lexeme, $2.line, $2.column, $1.lexeme, "param", (scopeId + 1));
	}
;

statement: 
	exp_stmt
	| block_stmt
	| if_stmt
	| return_stmt
	| write_stmt
	| writeln_stmt
	| read_stmt
	| var_decl
	| for_stmt
;

for_stmt:
	FOR '(' assing_exp ';' rel_exp ';' assing_exp ')' block_stmt
;

exp_stmt:
	exp ';'
	| ';'
;

exp: 
	assing_exp
	| simple_exp
;

assing_exp:
	ID ASSIGN exp
;

block_stmt:
	'{' stmt_list '}'
;


stmt_list:
	|statement stmt_list
	|statement
;

if_stmt:
	IF '(' bin_exp ')' statement
	| IF '(' bin_exp ')' block_stmt ELSE statement
;

return_stmt:
	RETURN ';'
	| RETURN exp ';'
;

write_stmt:
	WRITE '(' simple_exp ')' ';'
;

writeln_stmt:
	WRITELN '(' simple_exp ')' ';'
;

read_stmt:
	READ '(' ID ')' ';'
;

simple_exp:
	bin_exp
	| list_exp
;

list_exp:
	factor ':' factor
	| '?' factor 
	| '%' factor 
	| factor MAP factor
	| factor FILTER factor
;

bin_exp:
	bin_exp LOG_OP unary_log_exp
	| unary_log_exp
;

unary_log_exp:
	UNARY_LOG_OP unary_log_exp 
	| EXCLAMATION unary_log_exp
	| rel_exp
;

rel_exp:
	rel_exp REL_OP sum_exp 
	| sum_exp
;

sum_exp:
	sum_exp SUM_OP mul_exp
	| mul_exp
;

mul_exp:
	mul_exp MUL_OP factor 
	| factor
	| SUM_OP factor
;

factor:
	immutable
	| ID
;

immutable:
	'(' simple_exp ')' 
	| call 
	| constant
;

call:
	ID '(' args ')'
	| ID '(' ')' 
;

args: 
	args ',' simple_exp
	| simple_exp
;

constant:
	NIL
	| INT 
	| FLOAT 
	| STRING
;	

%%

extern void yyerror(const char* s)
{
	printf("Syntax Error:\n%s\n", s);
}

int main(int argc, char **argv){
	initializeTable(symbolTable);
	initializeScopeStack(scopeStack);
    yyparse();
	printSymbolTable(symbolTable);
    yylex_destroy();
    return 0;
}