#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef struct symbol{
    char token[20];
    char lexeme[50];
    char type[20];
    int scope;
    int line;
    int column;
    char decl[5];
} Symbol;

typedef struct symbolList{
    Symbol *symbol;
    struct symbolList* next;
} SymbolList;

extern void initializeTable();
extern void insertSymbol(char* lexeme,  int line, int column, char* type, char* isFunction, int scope);
extern Symbol* allocateToken(char* lexeme, int line, int column);
extern void printSymbolTable();
extern void freeTable();
extern void freeTableRecursive(SymbolList *list);

#endif
