#ifndef TOKEN_H
#define TOKEN_H

typedef struct
{
    int line;
    int column;
    int scope;
    char lexeme[100];
}  Token;

#endif