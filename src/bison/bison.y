%define parse.error verbose
%define lr.type canonical-lr
%{
#include "scope.stack.h"
#include "symbol.table.h"
#include "token.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>

Symbol symbolTable[1000];

extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* s);
extern int scopeStack[100];
extern int scopeId;
extern Node *tree;
%}

%token <token> ID INT FLOAT NIL
%token <token> IF ELSE
%token <token> ASSIGN FOR
%token <token> RETURN TYPE
%token <token> WRITE WRITELN READ
%token <token> MUL_OP
%token <token> SUM_OP 
%token <token> REL_OP
%token <token> UNARY_LOG_OP EXCLAMATION
%token <token> LOG_OP 
%token <token> ':' '?' '%' MAP FILTER
%right THEN ELSE
%token <token> STRING 
%token <token> ';' ',' '(' ')' '{' '}'

%type <node> S
%type <node> decl_list
%type <node> decl
%type <node> var_decl
%type <node> fun_decl
%type <node> params
%type <node> param_decl
%type <node> statement
%type <node> for_stmt
%type <node> exp_stmt
%type <node> exp
%type <node> assing_exp
%type <node> block_stmt
%type <node> stmt_list
%type <node> if_stmt
%type <node> return_stmt
%type <node> write_stmt
%type <node> writeln_stmt
%type <node> read_stmt
%type <node> simple_exp
%type <node> list_exp
%type <node> bin_exp
%type <node> unary_log_exp
%type <node> rel_exp
%type <node> sum_exp
%type <node> mul_exp
%type <node> factor
%type <node> immutable
%type <node> call
%type <node> args
%type <node> constant 


%code requires {
    #include "token.h"
	#include "node.h"
}

%union{
	Token token;
	Node* node;
}

%%

S:
  decl_list {
	  tree = $$;
  }
;

decl_list:
	decl_list decl {
		$$ = createNode("decl_list", 1);
		$$->leaf1 = $1;
		$$->leaf2 = $2;
	}
	| decl {
		$$ = $1;
	}
;

decl: 
	var_decl {
		$$ = createNode("var_decl", 1);
	}
	| fun_decl {
		$$ = createNode("fun_decl", 1);
	}
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
	stmt_list statement
	|%empty
;

if_stmt:
	IF '(' bin_exp ')' statement %prec THEN
	| IF '(' bin_exp ')' statement ELSE statement
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
	initializeList();
	initializeScopeStack(scopeStack);
    yyparse();
	printTree();
	printSymbolTable(symbolTable);
    yylex_destroy();
    return 0;
}