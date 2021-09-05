#include "symbol.table.h"
#include <string.h>
#include <stdio.h>

extern void initializeTable(Symbol *table){
    for(int i = 0; i < 1000; i++){
        table[i].filled = 0;
    }
}

extern int findNextPosition(Symbol *table){
    for(int i =0; i < 1000; i++){
        if(table[i].filled == 0){
            return i;
        }
    }
    return -1;
}

extern void insertSymbol(Symbol* table, char* lexeme,  int line, int column, char* type, char* isFunction, int scope){
                            
    int i = findNextPosition(table);
   
    strcpy(table[i].lexeme, lexeme);
    strcpy(table[i].type, type);
    strcpy(table[i].isFunction, isFunction);
    table[i].line = line;
    table[i].column = column;
    table[i].filled = 1;
    table[i].scope = scope;
   
    // printf("POSITION %d\n", i);
    // printf("SIMBOLO INSERIDO %s FILLED %d\n", table[i].id, table[i].filled);
}

extern void printSymbolTable(Symbol *table){
    printf("\n\n--------------------------------------------------------------- SYMBOL TABLE ---------------------------------------------------------------- \n\n");
printf("%-8s \t %-8s \t %-8s \t %-8s \t %-8s \t %-8s\n","ID", "LINE", "COLUMN", "TYPE", "DECL", "SCOPE");
    for(int i = 0; i< 1000; i++){
        if(table[i].filled == 1){
            printf("%-8s \t %-8d \t %-8d \t %-8s \t %-8s \t %-8d\n", table[i].lexeme, table[i].line, table[i].column, table[i].type, table[i].isFunction, table[i].scope);
        }
    }
}