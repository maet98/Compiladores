
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     _LITERAL = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


