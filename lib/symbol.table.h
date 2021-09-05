#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef struct{
    char token[20];
    char lexeme[50];
    char type[20];
    int scope;
    int line;
    int column;
    int filled; //0 if is not filled and 1 if is filled
    char isFunction[3];
} Symbol;

extern void initializeTable(Symbol *table);
extern int findNextPosition(Symbol *table);
extern void insertSymbol(Symbol* table, char* lexeme,  int line, int column, char* type, char* isFunction, int scope);
extern void printSymbolTable(Symbol *s);

#endif
