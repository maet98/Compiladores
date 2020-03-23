
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "gramatica.txt"

	#include "parserHeader.h"
	#define YYSTYPE id
	tableVal ok;



/* Line 189 of yacc.c  */
#line 81 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _ASSIGN = 17,
     _LESS = 41,
     _GTR = 42,
     _LEQ = 43,
     _GEQ = 44,
     _EQL = 40,
     _NEQ = 45,
     _PLUS = 20,
     _MINUS = 21,
     _MULT = 22,
     _DIVIDE = 23,
     _ID = 1,
     _ICONST = 2,
     _RCONST = 3,
     _ECONST = 4,
     _LITERAL = 5,
     _LBRACK = 10,
     _RBRACK = 11,
     _LPAREN = 12,
     _RPAREN = 13,
     _SEMI = 14,
     _COLON = 15,
     _COMMA = 16,
     _PROGRAM = 51,
     _ENDVARS = 52,
     _ENDPROCS = 53,
     _VARS = 54,
     _NOVARS = 55,
     _INTEGER = 56,
     _REAL = 57,
     _STRING = 58,
     _PROCS = 59,
     _NOPROCS = 60,
     _PROC = 61,
     _BEGIN = 62,
     _END = 63,
     _FOR = 64,
     _TO = 65,
     _DO = 66,
     _IF = 67,
     _THEN = 68,
     _ELSE = 69,
     _READ = 70,
     _WRITE = 71,
     _COMMENT = 72,
     _WHILE = 73,
     _UNTIL = 74,
     UNKW = 258
   };
#endif
/* Tokens.  */
#define _ASSIGN 17
#define _LESS 41
#define _GTR 42
#define _LEQ 43
#define _GEQ 44
#define _EQL 40
#define _NEQ 45
#define _PLUS 20
#define _MINUS 21
#define _MULT 22
#define _DIVIDE 23
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
#define UNKW 258




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 223 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   138

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   258

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,    14,    15,    16,    17,    18,     2,     2,     2,     2,
      19,    20,    21,    22,    23,    24,    25,     3,     2,     2,
      10,    11,    12,    13,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       8,     4,     5,     6,     7,     9,     2,     2,     2,     2,
       2,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    10,    16,    20,    22,    26,    28,
      32,    36,    41,    45,    47,    51,    55,    57,    60,    62,
      66,    68,    72,    77,    81,    84,    88,    90,    94,    96,
      98,   100,   102,   104,   106,   108,   112,   114,   119,   123,
     127,   129,   133,   137,   139,   141,   145,   147,   152,   154,
     156,   158,   160,   164,   166,   168,   170,   174,   179,   183,
     185,   187,   189,   191,   193,   195,   199,   203,   210,   212,
     217,   222,   227,   232,   237
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    23,    54,    -1,    26,    58,    -1,
      55,    27,    61,    28,    66,    -1,    29,    56,    23,    -1,
      30,    -1,    56,    23,    57,    -1,    57,    -1,    58,    24,
      31,    -1,    58,    24,    32,    -1,    58,    24,    31,    59,
      -1,    58,    24,    33,    -1,    14,    -1,    19,    60,    20,
      -1,    60,    25,    15,    -1,    15,    -1,    34,    62,    -1,
      35,    -1,    62,    23,    63,    -1,    63,    -1,    64,    23,
      54,    -1,    65,    21,    56,    22,    -1,    65,    21,    22,
      -1,    36,    58,    -1,    37,    67,    38,    -1,    23,    -1,
      67,    23,    68,    -1,    68,    -1,    69,    -1,    77,    -1,
      81,    -1,    85,    -1,    86,    -1,    66,    -1,    70,     3,
      71,    -1,    58,    -1,    58,    19,    75,    20,    -1,    71,
      10,    72,    -1,    71,    11,    72,    -1,    72,    -1,    72,
      12,    73,    -1,    72,    13,    73,    -1,    73,    -1,    74,
      -1,    21,    71,    22,    -1,    70,    -1,    58,    21,    75,
      22,    -1,    15,    -1,    16,    -1,    18,    -1,    17,    -1,
      75,    25,    76,    -1,    76,    -1,    58,    -1,    15,    -1,
      79,    44,    66,    -1,    42,    71,    80,    71,    -1,    78,
      43,    66,    -1,     8,    -1,     4,    -1,     5,    -1,     6,
      -1,     7,    -1,     9,    -1,    84,    41,    66,    -1,    83,
      41,    66,    -1,    82,    66,    49,    71,    80,    71,    -1,
      41,    -1,    48,    71,    80,    71,    -1,    39,    69,    40,
      71,    -1,    45,    21,    58,    22,    -1,    46,    21,    58,
      22,    -1,    46,    21,    87,    22,    -1,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    68,    72,    76,    77,    81,    82,    86,
      87,    88,    89,    91,    94,    98,    99,   103,   104,   108,
     109,   113,   117,   118,   122,   125,   126,   130,   131,   135,
     136,   137,   138,   139,   140,   144,   148,   149,   153,   154,
     155,   159,   160,   161,   165,   166,   170,   171,   172,   173,
     174,   175,   179,   180,   184,   185,   189,   193,   197,   201,
     202,   203,   204,   205,   206,   210,   211,   212,   216,   219,
     223,   227,   231,   232,   235
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ASSIGN", "_LESS", "_GTR", "_LEQ",
  "_GEQ", "_EQL", "_NEQ", "_PLUS", "_MINUS", "_MULT", "_DIVIDE", "_ID",
  "_ICONST", "_RCONST", "_ECONST", "_LITERAL", "_LBRACK", "_RBRACK",
  "_LPAREN", "_RPAREN", "_SEMI", "_COLON", "_COMMA", "_PROGRAM",
  "_ENDVARS", "_ENDPROCS", "_VARS", "_NOVARS", "_INTEGER", "_REAL",
  "_STRING", "_PROCS", "_NOPROCS", "_PROC", "_BEGIN", "_END", "_FOR",
  "_TO", "_DO", "_IF", "_THEN", "_ELSE", "_READ", "_WRITE", "_COMMENT",
  "_WHILE", "_UNTIL", "UNKW", "$accept", "program", "title", "block",
  "vars", "varlist", "vardef", "id", "bnl", "nlist", "procs", "proclist",
  "procdef", "ptitle", "procentry", "code", "para", "stmt", "assign",
  "ids", "expr", "term", "fac", "val", "vallist", "it", "cond", "if",
  "then", "bop", "loop", "do", "while", "for", "input", "output",
  "literal", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    17,    41,    42,    43,    44,    40,    45,
      20,    21,    22,    23,     1,     2,     3,     4,     5,    10,
      11,    12,    13,    14,    15,    16,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
     258
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    55,    55,    56,    56,    57,
      57,    57,    57,    58,    59,    60,    60,    61,    61,    62,
      62,    63,    64,    64,    65,    66,    66,    67,    67,    68,
      68,    68,    68,    68,    68,    69,    70,    70,    71,    71,
      71,    72,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    74,    75,    75,    76,    76,    77,    78,    79,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    82,    83,
      84,    85,    86,    86,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     5,     3,     1,     3,     1,     3,
       3,     4,     3,     1,     3,     3,     1,     2,     1,     3,
       1,     3,     4,     3,     2,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     4,     3,     3,
       1,     3,     3,     1,     1,     3,     1,     4,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     4,     3,     1,
       1,     1,     1,     1,     1,     3,     3,     6,     1,     4,
       4,     4,     4,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    13,     3,     1,     0,     0,     6,
       2,     0,     0,     8,     0,     0,     5,     0,     0,    18,
       0,     7,     9,    10,    12,     0,    17,    20,     0,     0,
       0,     0,    11,    24,     0,     0,     0,    26,     0,     4,
      16,     0,    19,    21,    23,     0,     0,    68,     0,     0,
       0,     0,    36,    34,     0,    28,    29,     0,    30,     0,
       0,    31,     0,     0,     0,    32,    33,    14,     0,    22,
       0,     0,    48,    49,    51,    50,     0,    36,    46,     0,
      40,    43,    44,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,    60,
      61,    62,    63,    59,    64,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,    55,    54,     0,    53,    27,
      35,    58,    56,     0,    66,    65,    70,    45,     0,    38,
      39,    57,    41,    42,    71,    72,    73,    69,    37,     0,
       0,    47,    52,     0,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    10,    11,    12,    13,    77,    32,    41,
      20,    26,    27,    28,    29,    53,    54,    55,    56,    78,
      79,    80,    81,    82,   117,   118,    58,    59,    60,   107,
      61,    62,    63,    64,    65,    66,   113
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -83
static const yytype_int8 yypact[] =
{
     -16,    27,    44,    48,   -83,   -83,   -83,   -10,    27,   -83,
     -83,    53,    61,   -83,    64,    -7,    27,    17,    56,   -83,
      66,   -83,    76,   -83,   -83,    27,    73,   -83,    83,    86,
     -15,    93,   -83,   -83,    56,   -10,    -5,   -83,    33,   -83,
     -83,    -9,   -83,   -83,   -83,    29,    27,   -83,    15,    88,
      89,    15,    92,   -83,   -17,   -83,   -83,   109,   -83,    70,
      71,   -83,   -15,    75,    77,   -83,   -83,   -83,    99,   -83,
      27,    79,   -83,   -83,   -83,   -83,    15,    68,   -83,    94,
      42,   -83,   -83,    27,    24,    94,    46,    33,   -83,    15,
     -15,   -15,    72,   -15,   -15,   -83,    15,     3,    46,   -83,
     -83,   -83,   -83,   -83,   -83,    15,    15,    15,    15,    15,
      95,   -83,    98,   100,    15,   -83,   -83,    -2,   -83,   -83,
      57,   -83,   -83,    15,   -83,   -83,    57,   -83,    18,    42,
      42,    57,   -83,   -83,   -83,   -83,   -83,    57,   -83,    46,
      94,   -83,   -83,    15,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -83,    90,   -83,    87,   -11,    -1,   -83,   -83,
     -83,   -83,    96,   -83,   -83,   -28,   -83,    37,    80,   -34,
     -50,   -29,   -18,   -83,    30,   -12,   -83,   -83,   -83,   -82,
     -83,   -83,   -83,   -83,   -83,   -83,   -83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       5,    85,    39,   114,    57,    21,    87,    14,    37,     4,
       1,    67,    57,   105,   106,    14,    68,    44,   138,     8,
       9,    88,    38,   139,    33,   127,    97,    18,    19,     4,
      72,    73,    74,    75,    92,    14,    76,    52,     4,   120,
     141,     4,   111,   139,     6,    52,   126,     4,    22,    23,
      24,    69,    70,    57,   108,   109,    37,   131,   143,    21,
       4,   115,   121,   122,   137,   124,   125,   105,   106,    14,
      38,     7,    46,   140,    47,    48,   129,   130,    49,    50,
      15,    51,   110,   112,    16,   116,    52,    86,    17,    98,
     132,   133,    25,   144,    30,    31,    34,   116,    99,   100,
     101,   102,   103,   104,   105,   106,    35,    36,    40,    83,
      84,    86,    89,    90,    95,    91,    93,   134,    94,    96,
     135,   123,   136,    45,   119,    43,    71,   142,   128,     0,
      42,     0,     0,     0,     0,     0,     0,     0,   116
};

static const yytype_int16 yycheck[] =
{
       1,    51,    30,    85,    38,    16,    23,     8,    23,    14,
      26,    20,    46,    10,    11,    16,    25,    22,    20,    29,
      30,    38,    37,    25,    25,    22,    76,    34,    35,    14,
      15,    16,    17,    18,    62,    36,    21,    38,    14,    89,
      22,    14,    18,    25,     0,    46,    96,    14,    31,    32,
      33,    22,    23,    87,    12,    13,    23,   107,   140,    70,
      14,    15,    90,    91,   114,    93,    94,    10,    11,    70,
      37,    23,    39,   123,    41,    42,   105,   106,    45,    46,
      27,    48,    83,    84,    23,    86,    87,    19,    24,    21,
     108,   109,    36,   143,    28,    19,    23,    98,     4,     5,
       6,     7,     8,     9,    10,    11,    23,    21,    15,    21,
      21,    19,     3,    43,    15,    44,    41,    22,    41,    40,
      22,    49,    22,    36,    87,    35,    46,   139,    98,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    52,    53,    14,    58,     0,    23,    29,    30,
      54,    55,    56,    57,    58,    27,    23,    24,    34,    35,
      61,    57,    31,    32,    33,    36,    62,    63,    64,    65,
      28,    19,    59,    58,    23,    23,    21,    23,    37,    66,
      15,    60,    63,    54,    22,    56,    39,    41,    42,    45,
      46,    48,    58,    66,    67,    68,    69,    70,    77,    78,
      79,    81,    82,    83,    84,    85,    86,    20,    25,    22,
      23,    69,    15,    16,    17,    18,    21,    58,    70,    71,
      72,    73,    74,    21,    21,    71,    19,    23,    38,     3,
      43,    44,    66,    41,    41,    15,    40,    71,    21,     4,
       5,     6,     7,     8,     9,    10,    11,    80,    12,    13,
      58,    18,    58,    87,    80,    15,    58,    75,    76,    68,
      71,    66,    66,    49,    66,    66,    71,    22,    75,    72,
      72,    71,    73,    73,    22,    22,    22,    71,    20,    25,
      71,    22,    76,    80,    71
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 64 "gramatica.txt"
    {}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 68 "gramatica.txt"
    {scopeLoader();}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 72 "gramatica.txt"
    {currentScope--;removeScope();}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 76 "gramatica.txt"
    {}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 77 "gramatica.txt"
    {}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 81 "gramatica.txt"
    {}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 82 "gramatica.txt"
    {}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 86 "gramatica.txt"
    {insertTable((yyvsp[(1) - (3)]).name, currentScope, type::integer);}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 87 "gramatica.txt"
    {insertTable((yyvsp[(1) - (3)]).name, currentScope, type::real);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 88 "gramatica.txt"
    {insertTable((yyvsp[(1) - (4)]).name, currentScope, type::integer);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 89 "gramatica.txt"
    {insertTable((yyvsp[(1) - (3)]).name, currentScope, type::stringType);}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 91 "gramatica.txt"
    {lex.assign(yytext); (yyval).name = lex;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 94 "gramatica.txt"
    {}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 98 "gramatica.txt"
    {}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 99 "gramatica.txt"
    {}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 103 "gramatica.txt"
    {}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 104 "gramatica.txt"
    {}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 108 "gramatica.txt"
    {}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 109 "gramatica.txt"
    {}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 113 "gramatica.txt"
    {}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 117 "gramatica.txt"
    {}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 118 "gramatica.txt"
    {}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 122 "gramatica.txt"
    {insertTable((yyvsp[(2) - (2)]).name, currentScope, type::procedure);currentScope++;scopeLoader();}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 125 "gramatica.txt"
    {}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 126 "gramatica.txt"
    {}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 130 "gramatica.txt"
    {}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 131 "gramatica.txt"
    {}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 135 "gramatica.txt"
    {}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 136 "gramatica.txt"
    {}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 137 "gramatica.txt"
    {}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 138 "gramatica.txt"
    {}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 139 "gramatica.txt"
    {}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 140 "gramatica.txt"
    {}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 144 "gramatica.txt"
    {checkType((yyvsp[(1) - (3)]).def, (yyvsp[(3) - (3)]).def); assgn((yyvsp[(3) - (3)]).def, (yyvsp[(1) - (3)]).def); (yyval).def = (yyvsp[(1) - (3)]).def;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 148 "gramatica.txt"
    {(yyval).def = isdeclared((yyvsp[(1) - (1)]).name, currentScope); (yyval).name = (yyvsp[(1) - (1)]).name;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 149 "gramatica.txt"
    {(yyval).def = isdeclared((yyvsp[(1) - (4)]).name, currentScope); (yyval).name = (yyvsp[(1) - (4)]).name;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 153 "gramatica.txt"
    {(yyval).def = sum((yyvsp[(1) - (3)]).def, (yyvsp[(3) - (3)]).def, checkType((yyvsp[(1) - (3)]).def, (yyvsp[(3) - (3)]).def));}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 154 "gramatica.txt"
    {(yyval).def = sub((yyvsp[(1) - (3)]).def, (yyvsp[(3) - (3)]).def, checkType((yyvsp[(1) - (3)]).def, (yyvsp[(3) - (3)]).def));}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 155 "gramatica.txt"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 159 "gramatica.txt"
    {(yyval).def = mult((yyvsp[(1) - (3)]).def, (yyvsp[(3) - (3)]).def, checkType((yyvsp[(1) - (3)]).def, (yyvsp[(3) - (3)]).def));}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 160 "gramatica.txt"
    {(yyval).def = div((yyvsp[(1) - (3)]).def, (yyvsp[(3) - (3)]).def, checkType((yyvsp[(1) - (3)]).def, (yyvsp[(3) - (3)]).def));}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 161 "gramatica.txt"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 165 "gramatica.txt"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 166 "gramatica.txt"
    {(yyval) = (yyvsp[(2) - (3)]);}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 170 "gramatica.txt"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 171 "gramatica.txt"
    {(yyval).def = isdeclared((yyvsp[(1) - (4)]).name, currentScope); (yyval).name = (yyvsp[(1) - (4)]).name;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 172 "gramatica.txt"
    {lex.assign(yytext); (yyval).def = addconst(lex, type::integer); (yyval).name = lex;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 173 "gramatica.txt"
    {lex.assign(yytext); (yyval).def = addconst(lex, type::real); (yyval).name = lex;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 174 "gramatica.txt"
    {lex.assign(yytext); (yyval).def = addconst(lex, type::stringType); (yyval).name = lex;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 175 "gramatica.txt"
    {lex.assign(yytext); (yyval).def = addconst(lex, type::real); (yyval).name = lex;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 179 "gramatica.txt"
    {}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 180 "gramatica.txt"
    {}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 184 "gramatica.txt"
    {(yyval).def = isdeclared((yyvsp[(1) - (1)]).name, currentScope); (yyval).name = (yyvsp[(1) - (1)]).name;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 185 "gramatica.txt"
    {lex.assign(yytext); (yyval).def = addconst(lex, type::integer);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 189 "gramatica.txt"
    {completeJump((yyvsp[(1) - (3)]).line);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 193 "gramatica.txt"
    {(yyval).line = jumpSelector((yyvsp[(3) - (4)]).op, (yyvsp[(2) - (4)]).def, (yyvsp[(4) - (4)]).def);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 197 "gramatica.txt"
    {(yyval).line = bunc(); completeJump((yyvsp[(1) - (3)]).line);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 201 "gramatica.txt"
    {(yyval).op = boolean_op::neq;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 202 "gramatica.txt"
    {(yyval).op = boolean_op::geq;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 203 "gramatica.txt"
    {(yyval).op = boolean_op::leq;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 204 "gramatica.txt"
    {(yyval).op = boolean_op::gtr;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 205 "gramatica.txt"
    {(yyval).op = boolean_op::les;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 206 "gramatica.txt"
    {(yyval).op = boolean_op::eql;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 210 "gramatica.txt"
    {increment((yyvsp[(1) - (3)]).def); completeCicle((yyvsp[(1) - (3)]).line); completeJump((yyvsp[(1) - (3)]).line);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 211 "gramatica.txt"
    {completeCicle((yyvsp[(1) - (3)]).line); completeJump((yyvsp[(1) - (3)]).line);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 212 "gramatica.txt"
    {completeUntil((yyvsp[(1) - (6)]).line, jumpSelector((yyvsp[(5) - (6)]).op, (yyvsp[(4) - (6)]).def, (yyvsp[(6) - (6)]).def));}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 216 "gramatica.txt"
    {(yyval).line = instr.size();}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 219 "gramatica.txt"
    {(yyval).line = jumpSelector((yyvsp[(3) - (4)]).op, (yyvsp[(2) - (4)]).def, (yyvsp[(4) - (4)]).def); (yyval).def = (yyvsp[(2) - (4)]).def;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 223 "gramatica.txt"
    {(yyval).line = bgt((yyvsp[(2) - (4)]).def, (yyvsp[(4) - (4)]).def); (yyval).def = (yyvsp[(2) - (4)]).def;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 227 "gramatica.txt"
    {ok = isdeclared((yyvsp[(3) - (4)]).name, currentScope); read(ok);}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 231 "gramatica.txt"
    {ok = isdeclared((yyvsp[(3) - (4)]).name, currentScope); write(ok);}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 232 "gramatica.txt"
    {ok = addconst((yyvsp[(3) - (4)]).name, type::stringType); write(ok);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 235 "gramatica.txt"
    {lex.assign(yytext); (yyval).name = lex;}
    break;



/* Line 1455 of yacc.c  */
#line 2052 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 237 "gramatica.txt"

int yyerror(char* errormsg)
{
	fprintf(stderr, "%s\n", errormsg);
	return 1;
}

