%define parse.error verbose
%define lr.type canonical-lr
%{
#include "scope.stack.h"
#include "symbol.table.h"
#include "token.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		$$ = createNode("decl_list");
		$$->leaf1 = $1;
		$$->leaf2 = $2;
	}
	| decl {
		$$ = $1;
	}
;

decl: 
	var_decl {
		$$ = $1;
	}
	| fun_decl {
		$$ =  $1;
	}
;

var_decl:
	TYPE ID ';' {
		$$ = createNode("var_decl");
		
		Node * aux1 = createNode("\0");
		aux1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf1 = aux1;

		Node *aux2 = createNode("\0");
		aux2->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf2 = aux2;

		insertSymbol(symbolTable, $2.lexeme, $2.line, $2.column, $1.lexeme, "var", $2.scope);
	}
;

fun_decl: 
	TYPE ID '(' params ')' block_stmt {
		$$ = createNode("fun_decl");
		
		Node * aux1 = createNode("\0");
		aux1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf1 = aux1;

		Node *aux2 = createNode("\0");
		aux2->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf2 = aux2;
		
		$$->leaf3 = $4;
		$$->leaf4 = $6;

		insertSymbol(symbolTable, $2.lexeme, $2.line, $2.column, $1.lexeme, "fun",$2.scope);
	}
	| TYPE ID '(' ')' block_stmt {
		$$ = createNode("fun_decl");
		
		Node * aux1 = createNode("\0");
		aux1->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf1 = aux1;

		Node *aux2 = createNode("\0");
		aux2->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf2 = aux2;
		
		$$->leaf3 = $5;

		insertSymbol(symbolTable, $2.lexeme, $2.line, $2.column, $1.lexeme, "fun", $2.scope);
	}
;

params:
	params ',' param_decl  {
		$$ = $3;
	}
	| param_decl {
		$$ = createNode("param_decl");
		$$->leaf1 = $1;
	}
;

param_decl:
	TYPE ID {
		char type[100];
		strcpy(type, $1.lexeme);
		
		$$ = createNode(type);
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);

		insertSymbol(symbolTable, $2.lexeme, $2.line, $2.column, $1.lexeme, "param", (scopeId + 1));
	}
;

statement: 
	exp_stmt {
		$$ = $1;
	}
	| block_stmt {
		$$ = $1;
	}
	| if_stmt {
		$$ = $1;
	}
	| return_stmt {
		$$ = $1;
	}
	| write_stmt {
		$$ = $1;
	}
	| writeln_stmt {
		$$ = $1;
	}
	| read_stmt {
		$$ = $1;
	}
	| var_decl {
		$$ = createNode("var_decl");
		$$->leaf1 = $1;
	}
	| for_stmt {
		$$ = $1;
	}
;

for_stmt:
	FOR '(' assing_exp ';' rel_exp ';' assing_exp ')' block_stmt {
		$$ = createNode("for_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken($1.lexeme, $1.line, $1.column);
		
		$$->leaf1 = aux;
		$$->leaf2 = $3;
		$$->leaf3 = $5;
		$$->leaf4 = $7;
		$$->leaf5 = $9;
	}
;

exp_stmt:
	exp ';' {
		$$ = $1;
	}
	| ';' {
		/* do nothing */
	}
;

exp: 
	assing_exp {
		$$ = $1;
	}
	| simple_exp {
		$$ = $1;
	}
;

assing_exp:
	ID ASSIGN exp {
		$$ = createNode("assing_exp");

		Node* aux1 = createNode("\0");
		aux1->token = allocateToken($1.lexeme, $1.line, $1.column);

		Node* aux2 = createNode("\0");
		aux2->token = allocateToken($2.lexeme, $2.line, $2.column);

		$$->leaf1 = aux1;
		$$->leaf2 = aux2;
		$$->leaf3 = $3;
	}
;

block_stmt:
	'{' stmt_list '}' {
		$$ = $2;
	}
;


stmt_list:
	stmt_list statement {
		$$ = createNode("stmt_list");
		$$->leaf1 = $1;
		$$->leaf2 = $2;
	}
	|%empty
;

if_stmt:
	IF '(' bin_exp ')' statement %prec THEN {
		$$ = createNode("if_stmt");

		Node *aux1 = createNode("\0");
		aux1->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf1 = aux1;
		$$->leaf2 = $3;
		$$->leaf3 = $5;
	}
	| IF '(' bin_exp ')' statement ELSE statement {
		$$ = createNode("if_stmt");

		Node *aux1 = createNode("\0");
		aux1->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf1 = aux1;
		$$->leaf2 = $3;
		$$->leaf3 = $5;
		$$->leaf4 = $7;
		$$->leaf4->token = allocateToken($6.lexeme, $6.line, $6.column);
	}
;

return_stmt:
	RETURN ';' {
		$$ = createNode("return_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf1 = aux;
	}
	| RETURN exp ';' {
		$$ = createNode("return_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf1 = aux;
		$$->leaf2 = $2;
	}
;

write_stmt:
	WRITE '(' simple_exp ')' ';' {
		$$ = createNode("write_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf1 = aux;
		$$->leaf2 = $3;
	}
;

writeln_stmt:
	WRITELN '(' simple_exp ')' ';' {
		$$ = createNode("writeln_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf1 = aux;
		$$->leaf2 = $3;
	}
;

read_stmt:
	READ '(' ID ')' ';' {
		$$ = createNode("read_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken($1.lexeme, $1.line, $1.column);

		$$->leaf1 = aux;

		char id[100];
		strcpy(id, "\0");
		
		Node* aux2 = createNode(id);
		aux2->token = allocateToken($3.lexeme, $3.line, $3.column);


		$$->leaf2 = aux2;
	}
;

simple_exp:
	bin_exp {
		$$ = $1;
	}
	| list_exp {
		$$ = $1;
	}
;

list_exp:
	factor ':' factor {
		$$ = createNode("list_exp");
		$$->leaf1 = $1;
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf2 = $3;
	}
	| '?' factor {
		$$ = createNode("list_exp"); 
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf1 = $2;
	}
	| '%' factor {
		$$ = createNode("list_exp"); 
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf1 = $2;
	}
	| factor MAP factor {
		$$ = createNode("list_exp");
		$$->leaf1 = $1;
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf2 = $3;
	}
	| factor FILTER factor {
		$$ = createNode("list_exp");
		$$->leaf1 = $1;
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf2 = $3;
	}
;

bin_exp:
	bin_exp LOG_OP unary_log_exp
	| unary_log_exp {
		$$ = $1;
	}
;

unary_log_exp:
	UNARY_LOG_OP unary_log_exp 
	| EXCLAMATION unary_log_exp
	| rel_exp {
		$$ = $1;
	}
;

rel_exp:
	rel_exp REL_OP sum_exp {
		$$ = createNode("rel_exp");
		$$->leaf1 = $1;
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf2 = $3;
	}
	| sum_exp {
		$$ = $1;
	}
;

sum_exp:
	sum_exp SUM_OP mul_exp {
		$$ = createNode("sum_exp");
		$$->leaf1 = $1;
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf2 = $3;
	}
	| mul_exp {
		$$ = $1;
	}
;

mul_exp:
	mul_exp MUL_OP factor {
		$$ = createNode("mul_exp");

		$$->leaf1 = $1;
		$$->token = allocateToken($2.lexeme, $2.line, $2.column);
		$$->leaf2 = $3;
	}
	| factor {
		$$ = $1;
	}
	| SUM_OP factor {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf1 = $2;
	}
;

factor:
	immutable {
		$$ = $1;
	}
	| ID {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
	}
;

immutable:
	'(' simple_exp ')' {
		$$ = $2;
	}
	| call {
		$$ =  $1;
	}
	| constant {
		$$ = $1;
	}
;

call:
	ID '(' args ')' {
		$$ = createNode("call");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
		$$->leaf1 = $3;
	}
	| ID '(' ')' {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
	}
;

args: 
	args ',' simple_exp
	| simple_exp
;

constant:
	NIL {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
	}
	| INT {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
	}
	| FLOAT {
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
	}
	| STRING {		
		$$ = createNode("\0");
		$$->token = allocateToken($1.lexeme, $1.line, $1.column);
	}
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
	printf("\n\n--------------------------------------------------------------- TREE ---------------------------------------------------------------- \n\n");
	// printTree(tree, 1);
	printSymbolTable(symbolTable);
    yylex_destroy();
    return 0;
}