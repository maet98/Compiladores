/* A Bison parser, made by GNU Bison 3.5.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _PROGRAM = 258,
    _ENDVARS = 259,
    _ENDPROCS = 260,
    _VARS = 261,
    _NOVARS = 262,
    _INTEGER = 263,
    _REAL = 264,
    _STRING = 265,
    _PROCS = 266,
    _NOPROCS = 267,
    _PROC = 268,
    _BEGIN = 269,
    _END = 270,
    _FOR = 271,
    _TO = 272,
    _DO = 273,
    _IF = 274,
    _THEN = 275,
    _ELSE = 276,
    _READ = 277,
    _WRITE = 278,
    _LBRACK = 279,
    _RBRACK = 280,
    _LPAREN = 281,
    _RPAREN = 282,
    _SEMI = 283,
    _COLON = 284,
    _COMMA = 285,
    _ASSIGN = 286,
    _PLUS = 287,
    _MINUS = 288,
    _MULT = 289,
    _DIVIDE = 290,
    _EQL = 291,
    _LESS = 292,
    _GTR = 293,
    _LEQ = 294,
    _GEQ = 295,
    _NEQ = 296,
    _ID = 297,
    _ICONST = 298,
    _RCONST = 299,
    _ECONST = 300,
    _LITERAL = 301,
    _COMENTARIO = 302,
    _ERRORLITERAL = 303,
    _ERRORCOMENTARIO = 304,
    _ERROR = 305,
    _NEWLINE = 306,
    _EOF = 307
  };
#endif
/* Tokens.  */
#define _PROGRAM 258
#define _ENDVARS 259
#define _ENDPROCS 260
#define _VARS 261
#define _NOVARS 262
#define _INTEGER 263
#define _REAL 264
#define _STRING 265
#define _PROCS 266
#define _NOPROCS 267
#define _PROC 268
#define _BEGIN 269
#define _END 270
#define _FOR 271
#define _TO 272
#define _DO 273
#define _IF 274
#define _THEN 275
#define _ELSE 276
#define _READ 277
#define _WRITE 278
#define _LBRACK 279
#define _RBRACK 280
#define _LPAREN 281
#define _RPAREN 282
#define _SEMI 283
#define _COLON 284
#define _COMMA 285
#define _ASSIGN 286
#define _PLUS 287
#define _MINUS 288
#define _MULT 289
#define _DIVIDE 290
#define _EQL 291
#define _LESS 292
#define _GTR 293
#define _LEQ 294
#define _GEQ 295
#define _NEQ 296
#define _ID 297
#define _ICONST 298
#define _RCONST 299
#define _ECONST 300
#define _LITERAL 301
#define _COMENTARIO 302
#define _ERRORLITERAL 303
#define _ERRORCOMENTARIO 304
#define _ERROR 305
#define _NEWLINE 306
#define _EOF 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
