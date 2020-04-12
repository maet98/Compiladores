
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
#line 1 "parser.y"

#include "codeGen.h"

#define YYSTYPE identifier



/* Line 189 of yacc.c  */
#line 81 "parser.tab.c"

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
     _WHILE = 302,
     _UNTIL = 303
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 171 "parser.tab.c"

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
#define YYLAST   141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    18,    22,    24,    28,
      30,    34,    38,    43,    47,    51,    55,    57,    60,    62,
      66,    68,    72,    75,    80,    84,    88,    90,    94,    96,
      98,   100,   102,   104,   106,   108,   112,   116,   120,   122,
     126,   130,   132,   134,   138,   140,   145,   147,   149,   151,
     156,   160,   162,   164,   166,   171,   176,   179,   181,   183,
     185,   187,   189,   191,   198,   204,   211,   216,   221,   226
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    52,    28,    53,    -1,    42,    -1,     3,
      51,    -1,    54,     4,    59,     5,    64,    -1,     6,    55,
      28,    -1,     7,    -1,    55,    28,    56,    -1,    56,    -1,
      51,    29,     8,    -1,    51,    29,     9,    -1,    51,    29,
       8,    57,    -1,    51,    29,    10,    -1,    24,    58,    25,
      -1,    58,    30,    43,    -1,    43,    -1,    11,    60,    -1,
      12,    -1,    60,    28,    61,    -1,    61,    -1,    63,    28,
      53,    -1,    13,    51,    -1,    62,    26,    55,    27,    -1,
      62,    26,    27,    -1,    14,    65,    15,    -1,    28,    -1,
      65,    28,    66,    -1,    66,    -1,    67,    -1,    75,    -1,
      79,    -1,    80,    -1,    81,    -1,    64,    -1,    72,    31,
      68,    -1,    68,    32,    69,    -1,    68,    33,    69,    -1,
      69,    -1,    69,    34,    70,    -1,    69,    35,    70,    -1,
      70,    -1,    71,    -1,    26,    68,    27,    -1,    72,    -1,
      51,    26,    73,    27,    -1,    43,    -1,    44,    -1,    51,
      -1,    51,    24,    73,    25,    -1,    73,    30,    74,    -1,
      74,    -1,    51,    -1,    43,    -1,    76,    77,    21,    66,
      -1,    19,    68,    78,    68,    -1,    20,    66,    -1,    36,
      -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,    41,
      -1,    16,    67,    17,    68,    18,    66,    -1,    47,    68,
      78,    68,    64,    -1,    18,    64,    48,    68,    78,    68,
      -1,    22,    26,    51,    27,    -1,    23,    26,    51,    27,
      -1,    23,    26,    82,    27,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    64,    70,    76,    83,    85,    89,    91,
      95,   100,   105,   110,   117,   121,   123,   127,   129,   133,
     135,   139,   143,   151,   153,   157,   159,   163,   165,   169,
     171,   173,   175,   177,   179,   183,   190,   196,   203,   210,
     216,   222,   229,   234,   241,   246,   254,   259,   266,   271,
     283,   288,   293,   301,   310,   316,   324,   331,   335,   339,
     343,   347,   351,   357,   359,   361,   367,   376,   383,   388
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_PROGRAM", "_ENDVARS", "_ENDPROCS",
  "_VARS", "_NOVARS", "_INTEGER", "_REAL", "_STRING", "_PROCS", "_NOPROCS",
  "_PROC", "_BEGIN", "_END", "_FOR", "_TO", "_DO", "_IF", "_THEN", "_ELSE",
  "_READ", "_WRITE", "_LBRACK", "_RBRACK", "_LPAREN", "_RPAREN", "_SEMI",
  "_COLON", "_COMMA", "_ASSIGN", "_PLUS", "_MINUS", "_MULT", "_DIVIDE",
  "_EQL", "_LESS", "_GTR", "_LEQ", "_GEQ", "_NEQ", "_ID", "_ICONST",
  "_RCONST", "_ECONST", "_LITERAL", "_WHILE", "_UNTIL", "$accept",
  "program", "id", "title", "block", "vars", "varlist", "vardef", "bn1",
  "nlist", "procs", "proclist", "procdef", "procedureDeclaration",
  "ptitle", "code", "para", "stmt", "assign", "expr", "term", "fac", "val",
  "ids", "vallist", "it", "cond", "ifHeader", "ifContent", "bop", "loop",
  "input", "output", "literal", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   304,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    52,    53,    54,    54,    55,    55,
      56,    56,    56,    56,    57,    58,    58,    59,    59,    60,
      60,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    67,    68,    68,    68,    69,
      69,    69,    70,    70,    71,    71,    71,    71,    72,    72,
      73,    73,    74,    74,    75,    76,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    79,    80,    81,    81,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     5,     3,     1,     3,     1,
       3,     3,     4,     3,     3,     3,     1,     2,     1,     3,
       1,     3,     2,     4,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     1,     3,     1,     4,     1,     1,     1,     4,
       3,     1,     1,     1,     4,     4,     2,     1,     1,     1,
       1,     1,     1,     6,     5,     6,     4,     4,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     4,     1,     0,     0,     7,
       2,     0,     0,     0,     9,     0,     0,     6,     0,    18,
       0,    10,    11,    13,     8,     0,    17,    20,     0,     0,
       0,     0,    12,    22,     0,     0,     0,     0,    26,     5,
      16,     0,    19,    24,     0,    21,     0,     0,     0,     0,
       0,     0,    48,    34,     0,    28,    29,     0,    30,     0,
      31,    32,    33,    14,     0,    23,     0,     0,     0,     0,
      46,    47,    48,     0,    38,    41,    42,    44,     0,     0,
       0,     0,    25,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,     0,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,    69,     0,     0,     0,    53,    52,
       0,    51,    27,    35,    56,     0,     0,     0,    43,     0,
      36,    37,    55,    39,    40,    66,    67,    68,     0,    49,
       0,    54,     0,     0,    45,    64,    50,    63,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    72,     3,    10,    11,    13,    14,    32,    41,
      20,    26,    27,    28,    29,    53,    54,    55,    56,    73,
      74,    75,    76,    77,   110,   111,    58,    59,    86,   100,
      60,    61,    62,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -79
static const yytype_int8 yypact[] =
{
      44,   -28,    50,    28,   -79,   -79,   -79,    14,   -28,   -79,
     -79,    58,    40,    51,   -79,    77,    66,   -28,    70,   -79,
      80,    69,   -79,   -79,   -79,   -28,    63,   -79,    91,    90,
       5,    78,   -79,   -79,    70,   -10,    14,    45,   -79,   -79,
     -79,   -15,   -79,   -79,    67,   -79,   -28,     5,   -13,    93,
      94,   -13,    98,   -79,    20,   -79,   -79,    92,   -79,   104,
     -79,   -79,   -79,   -79,    82,   -79,   -28,   109,    79,   -13,
     -79,   -79,    46,    64,    72,   -79,   -79,   -79,   -28,    -2,
      64,    68,   -79,    45,   -13,    45,   107,   -79,   -13,   -13,
      25,    68,   -13,   -13,   -79,   -79,   -79,   -79,   -79,   -79,
     -13,   -13,   -13,   103,   -79,   105,   106,   -13,   -79,   -79,
      41,   -79,   -79,    76,   -79,    45,    -7,    64,   -79,    16,
      72,    72,    76,   -79,   -79,   -79,   -79,   -79,    -5,   -79,
      68,   -79,    45,   -13,   -79,   -79,   -79,   -79,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -79,   -79,    -1,   -79,    99,   -79,   101,   -12,   -79,   -79,
     -79,   -79,   100,   -79,   -79,   -29,   -79,   -77,    95,   -47,
      23,    11,   -79,   -34,    47,     7,   -79,   -79,   -79,   -78,
     -79,   -79,   -79,   -79
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       5,    39,   107,    57,    80,    24,   112,    12,   114,    37,
      63,   132,    57,    69,     4,    64,    12,    43,    68,    37,
       8,     9,    90,    38,    33,    92,    93,    92,    93,     4,
      70,    71,     4,    38,    12,    82,    52,   113,   131,   133,
       4,   116,   117,   134,   104,    52,   130,     1,    83,    57,
       6,    57,   118,   122,    24,   137,     7,    92,    93,    37,
     128,    46,    15,    47,    48,    12,   129,    49,    50,    16,
      81,   130,    91,    38,    21,    22,    23,   103,   105,    17,
     109,    57,    52,    25,    52,    30,   138,     4,    18,    19,
     109,    34,    51,    31,    65,    66,    92,    93,    57,   135,
      94,    95,    96,    97,    98,    99,   101,   102,    92,    93,
       4,   108,   123,   124,    52,   120,   121,    35,    36,    78,
      79,    40,    81,    84,    85,    87,    88,    89,   115,   109,
     125,    52,   126,   127,    42,    45,    44,   136,   119,     0,
       0,    67
};

static const yytype_int16 yycheck[] =
{
       1,    30,    80,    37,    51,    17,    83,     8,    85,    14,
      25,    18,    46,    26,    42,    30,    17,    27,    47,    14,
       6,     7,    69,    28,    25,    32,    33,    32,    33,    42,
      43,    44,    42,    28,    35,    15,    37,    84,   115,   117,
      42,    88,    89,    27,    46,    46,    30,     3,    28,    83,
       0,    85,    27,   100,    66,   132,    28,    32,    33,    14,
     107,    16,     4,    18,    19,    66,    25,    22,    23,    29,
      24,    30,    26,    28,     8,     9,    10,    78,    79,    28,
      81,   115,    83,    13,    85,     5,   133,    42,    11,    12,
      91,    28,    47,    24,    27,    28,    32,    33,   132,   128,
      36,    37,    38,    39,    40,    41,    34,    35,    32,    33,
      42,    43,   101,   102,   115,    92,    93,    26,    28,    26,
      26,    43,    24,    31,    20,    43,    17,    48,    21,   130,
      27,   132,    27,    27,    34,    36,    35,   130,    91,    -1,
      -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    50,    52,    42,    51,     0,    28,     6,     7,
      53,    54,    51,    55,    56,     4,    29,    28,    11,    12,
      59,     8,     9,    10,    56,    13,    60,    61,    62,    63,
       5,    24,    57,    51,    28,    26,    28,    14,    28,    64,
      43,    58,    61,    27,    55,    53,    16,    18,    19,    22,
      23,    47,    51,    64,    65,    66,    67,    72,    75,    76,
      79,    80,    81,    25,    30,    27,    28,    67,    64,    26,
      43,    44,    51,    68,    69,    70,    71,    72,    26,    26,
      68,    24,    15,    28,    31,    20,    77,    43,    17,    48,
      68,    26,    32,    33,    36,    37,    38,    39,    40,    41,
      78,    34,    35,    51,    46,    51,    82,    78,    43,    51,
      73,    74,    66,    68,    66,    21,    68,    68,    27,    73,
      69,    69,    68,    70,    70,    27,    27,    27,    68,    25,
      30,    66,    18,    78,    27,    64,    74,    66,    68
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
#line 61 "parser.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {
			(yyval).name = yytext;
		;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {
			pushScope();
		;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {
			currentScope --;
			popScope();
		;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {
			installOnTable((yyvsp[(1) - (3)]).name, currentScope, type::integer);
			addTemp((yyvsp[(1) - (3)]).name,tempType::id);
		;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {
			installOnTable((yyvsp[(1) - (3)]).name, currentScope, type::real);
			addTemp((yyvsp[(1) - (3)]).name,tempType::id);
		;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {
			installOnTable((yyvsp[(1) - (4)]).name, currentScope, type::integerArray);
			addTemp((yyvsp[(1) - (4)]).name,tempType::id);
		;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {
			installOnTable((yyvsp[(1) - (3)]).name, currentScope, type::stringType);
			addTemp((yyvsp[(1) - (3)]).name,tempType::id);
		;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {
			installOnTable((yyvsp[(2) - (2)]).name, currentScope, type::procedure);
			currentScope++;
			pushScope();
		;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 174 "parser.y"
    {;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {
			checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
			addStatement("ASSGN",(yyvsp[(3) - (3)]).tempNumber,0,(yyvsp[(1) - (3)]).tempNumber);
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {
			(yyval).dataType = checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
			(yyval).tempNumber = createTemp();
			addStatement("PLUS",(yyvsp[(1) - (3)]).tempNumber,(yyvsp[(3) - (3)]).tempNumber,(yyval).tempNumber);
		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {
			(yyval).dataType = checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
			(yyval).tempNumber = createTemp();
			addStatement("SUB",(yyvsp[(1) - (3)]).tempNumber,(yyvsp[(3) - (3)]).tempNumber,(yyval).tempNumber);

		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
			(yyval).tempNumber = (yyvsp[(1) - (1)]).tempNumber;
		;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {
			(yyval).dataType = checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
			(yyval).tempNumber = createTemp();
			addStatement("MULT",(yyvsp[(1) - (3)]).tempNumber,(yyvsp[(3) - (3)]).tempNumber,(yyval).tempNumber);
		;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {
			(yyval).dataType = checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
			(yyval).tempNumber = createTemp();
			addStatement("DIV",(yyvsp[(1) - (3)]).tempNumber,(yyvsp[(3) - (3)]).tempNumber,(yyval).tempNumber);
		;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
			(yyval).tempNumber = (yyvsp[(1) - (1)]).tempNumber;
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
			(yyval).tempNumber = (yyvsp[(1) - (1)]).tempNumber;
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {
			(yyval).dataType = (yyvsp[(2) - (3)]).dataType;
			(yyval).tempNumber = (yyvsp[(2) - (3)]).tempNumber;
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
			(yyval).tempNumber = (yyvsp[(1) - (1)]).tempNumber;
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    {
			// check if is a procedure
			// check if is declared
			(yyvsp[(1) - (4)]) = getDeclaration((yyvsp[(1) - (4)]).name, currentScope);
			reportNonProcedureError((yyvsp[(1) - (4)]));
			(yyval).dataType = (yyvsp[(1) - (4)]).dataType; // type procedure = type void
		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    {
			(yyval).dataType = type::integer;
			(yyval).tempNumber = addTemp(yytext, tempType::intConst);
		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {
			(yyval).dataType = type::real;
			(yyval).tempNumber = addTemp(yytext, tempType::realConst);
		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    {
			(yyval) = getDeclaration((yyvsp[(1) - (1)]).name, currentScope);
			(yyval).tempNumber = (constTable[tempType::idConst][(yyvsp[(1) - (1)]).name]);
		;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {
			// type must be array integer
			(yyvsp[(1) - (4)]) = getDeclaration((yyvsp[(1) - (4)]).name, currentScope);
			reportIndexingInANonArrayVariableError((yyvsp[(1) - (4)]), currentScope);
			// vallist data type must be integer
			reportIndexationError((yyvsp[(3) - (4)]).dataType);

			(yyval).dataType = (yyvsp[(1) - (4)]).dataType;
		;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {
			// for integer[] array case: indexes must be integers
			(yyval).dataType = checkArrayIndexesType((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
		;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
		;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 294 "parser.y"
    {
			// avalaible: name
			// must be declared
			// get type
			(yyvsp[(1) - (1)]) = getDeclaration((yyvsp[(1) - (1)]).name, currentScope);
			(yyval) = (yyvsp[(1) - (1)]);
		;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    {
			// get type
			// report use of constant...
			addConstant(yytext, currentScope, type::integer);
			(yyval).dataType = type::integer;
		;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    {
			updateInstructionJumpLine(statements.size() + 1);
		;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    {
			// check type between expr1 and expr2
			checkTypeCompatibility((yyvsp[(2) - (4)]).dataType, (yyvsp[(4) - (4)]).dataType);

			Labels.push(addStatement(negateBooleanOperator((yyvsp[(3) - (4)]).tempNumber),(yyvsp[(2) - (4)]).tempNumber,(yyvsp[(4) - (4)]).tempNumber,0) - 1);
		;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 325 "parser.y"
    {
					updateInstructionJumpLine(statements.size() + 1);
					Labels.push(addStatement("BUNC",0,0,0) - 1);
				;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    {
			(yyval).tempNumber = booleanOperation::EQL;
		;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    {
			(yyval).tempNumber = booleanOperation::LESS;
		;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 340 "parser.y"
    {
			(yyval).tempNumber = booleanOperation::GTR;
		;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    {
			(yyval).tempNumber = booleanOperation::LEQ;
		;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {
			(yyval).tempNumber = booleanOperation::GEQ;
		;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    {
			(yyval).tempNumber = booleanOperation::NEQ;
		;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    {
			// id must be declared
			// report use
			getDeclaration((yyvsp[(3) - (4)]).name, currentScope);
			addStatement("READ",0,0, constTable[tempType::idConst][(yyvsp[(3) - (4)]).name]);
		;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 377 "parser.y"
    {
			// id must be declared
			// report use
			getDeclaration((yyvsp[(3) - (4)]).name, currentScope);
			addStatement("WRITE", constTable[tempType::idConst][(yyvsp[(3) - (4)]).name],0,0);
		;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 384 "parser.y"
    {
			addStatement("WRITE", constTable[tempType::literalConst][(yyvsp[(3) - (4)]).name],0,0);
		;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 389 "parser.y"
    {
			(yyval).name = yytext;
			addTemp((yyval).name,tempType::literalConst);
		;}
    break;



/* Line 1455 of yacc.c  */
#line 2096 "parser.tab.c"
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
#line 395 "parser.y"

int yyerror(char* errorMessage)
{
	fprintf(stderr, "%s\n", errorMessage);
	return 1;
}

