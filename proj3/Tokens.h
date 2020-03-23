//
//

#ifndef MY_LEXER_TOKENS_H
#define MY_LEXER_TOKENS_H

#include <stdio.h>

#define _ID 1
#define _ICONST 2
#define _RCONST 3
#define _ECONST 4
#define _LITERAL 5
#define _LBRACK 10
#define _RBRACK 11
#define _LPAREN 12
#define _RPAREN 13
#define _SEMI 14
#define _COLON 15
#define _COMMA 16
#define _ASSIGN 17
#define _PLUS 20
#define _MINUS 21
#define _MULT 22
#define _DIVIDE 23
#define _EQL 40
#define _LESS 41
#define _GTR 42
#define _LEQ 43
#define _GEQ 44
#define _NEQ 45
#define _PROGRAM 51
#define _ENDVARS 52
#define _ENDPROCS 53
#define _VARS 54
#define _NOVARS 55
#define _INTEGER 56
#define _REAL 57
#define _STRING 58
#define _PROCS 59
#define _NOPROCS 60
#define _PROC 61
#define _BEGIN 62
#define _END 63
#define _FOR 64
#define _TO 65
#define _DO 66
#define _IF 67
#define _THEN 68
#define _ELSE 69
#define _READ 70
#define _WRITE 71
#define _COMMENT 72
#define _WHILE 73
#define _UNTIL 74
#endif //MY_LEXER_TOKENS_H
