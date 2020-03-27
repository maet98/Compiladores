
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

#include "symbTable.h"

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
     _LITERAL = 301
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
#line 169 "parser.tab.c"

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
#define YYLAST   129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNRULES -- Number of states.  */
#define YYNSTATES  125

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      45,    46,     2
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
     156,   160,   162,   164,   166,   175,   177,   179,   181,   183,
     185,   187,   194,   199,   204
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    50,    28,    51,    -1,    42,    -1,     3,
      49,    -1,    52,     4,    57,     5,    62,    -1,     6,    53,
      28,    -1,     7,    -1,    53,    28,    54,    -1,    54,    -1,
      49,    29,     8,    -1,    49,    29,     9,    -1,    49,    29,
       8,    55,    -1,    49,    29,    10,    -1,    24,    56,    25,
      -1,    56,    30,    43,    -1,    43,    -1,    11,    58,    -1,
      12,    -1,    58,    28,    59,    -1,    59,    -1,    61,    28,
      51,    -1,    13,    49,    -1,    60,    26,    53,    27,    -1,
      60,    26,    27,    -1,    14,    63,    15,    -1,    28,    -1,
      63,    28,    64,    -1,    64,    -1,    65,    -1,    73,    -1,
      75,    -1,    76,    -1,    77,    -1,    62,    -1,    70,    31,
      66,    -1,    66,    32,    67,    -1,    66,    33,    67,    -1,
      67,    -1,    67,    34,    68,    -1,    67,    35,    68,    -1,
      68,    -1,    69,    -1,    26,    66,    27,    -1,    70,    -1,
      49,    26,    71,    27,    -1,    43,    -1,    44,    -1,    49,
      -1,    49,    24,    71,    25,    -1,    71,    30,    72,    -1,
      72,    -1,    49,    -1,    43,    -1,    19,    66,    74,    66,
      20,    64,    21,    64,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    16,    65,    17,
      66,    18,    64,    -1,    22,    26,    49,    27,    -1,    23,
      26,    49,    27,    -1,    23,    26,    46,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    63,    69,    75,    82,    84,    88,    90,
      94,    98,   102,   106,   112,   116,   118,   122,   124,   128,
     130,   134,   138,   146,   148,   152,   154,   158,   160,   164,
     166,   168,   170,   172,   174,   178,   184,   188,   192,   198,
     202,   206,   212,   216,   222,   226,   234,   239,   246,   250,
     262,   267,   272,   280,   289,   296,   298,   300,   302,   304,
     306,   310,   314,   322,   328
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
  "_RCONST", "_ECONST", "_LITERAL", "$accept", "program", "id", "title",
  "block", "vars", "varlist", "vardef", "bn1", "nlist", "procs",
  "proclist", "procdef", "procedureDeclaration", "ptitle", "code", "para",
  "stmt", "assign", "expr", "term", "fac", "val", "ids", "vallist", "it",
  "cond", "bop", "loop", "input", "output", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   302,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    50,    51,    52,    52,    53,    53,
      54,    54,    54,    54,    55,    56,    56,    57,    57,    58,
      58,    59,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    65,    66,    66,    66,    67,
      67,    67,    68,    68,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    74,    74,    74,    74,    74,
      74,    75,    76,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     5,     3,     1,     3,     1,
       3,     3,     4,     3,     3,     3,     1,     2,     1,     3,
       1,     3,     2,     4,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     1,     3,     1,     4,     1,     1,     1,     4,
       3,     1,     1,     1,     8,     1,     1,     1,     1,     1,
       1,     6,     4,     4,     4
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
      48,    34,     0,    28,    29,     0,    30,    31,    32,    33,
      14,     0,    23,     0,     0,     0,    46,    47,    48,     0,
      38,    41,    42,    44,     0,     0,     0,    25,     0,     0,
      15,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,    53,    52,
       0,    51,    27,    35,     0,    43,     0,    36,    37,     0,
      39,    40,    62,    64,    63,    49,     0,     0,    45,     0,
      50,    61,     0,     0,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    68,     3,    10,    11,    13,    14,    32,    41,
      20,    26,    27,    28,    29,    51,    52,    53,    54,    69,
      70,    71,    72,    73,   100,   101,    56,    92,    57,    58,
      59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int8 yypact[] =
{
      12,   -13,    47,    29,   -74,   -74,   -74,    72,   -13,   -74,
     -74,    68,    59,    48,   -74,    73,    61,   -13,    67,   -74,
      81,    77,   -74,   -74,   -74,   -13,    74,   -74,    78,    75,
       0,    64,   -74,   -74,    67,   -19,    72,   -10,   -74,   -74,
     -74,    -3,   -74,   -74,    62,   -74,   -13,    -5,    79,    80,
      84,   -74,     5,   -74,   -74,    82,   -74,   -74,   -74,   -74,
     -74,    66,   -74,   -13,    93,    -5,   -74,   -74,    17,    27,
      57,   -74,   -74,   -74,   -13,   -11,    51,   -74,   -10,    -5,
     -74,    -5,    22,    51,    -5,    -5,   -74,   -74,   -74,   -74,
     -74,   -74,    -5,    -5,    -5,    85,    87,    90,   -74,   -74,
      26,   -74,   -74,    63,    -7,   -74,    31,    57,    57,    20,
     -74,   -74,   -74,   -74,   -74,   -74,    51,   -10,   -74,   -10,
     -74,   -74,    98,   -10,   -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,    -1,   -74,    88,   -74,    76,   -15,   -74,   -74,
     -74,   -74,    86,   -74,   -74,    91,   -74,   -73,    83,   -62,
      13,     6,   -74,   -36,    40,     9,   -74,   -74,   -74,   -74,
     -74
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       5,    55,    24,    82,    37,   102,    46,    12,    43,    47,
      55,   117,    48,    49,    37,     1,    12,   103,    38,   104,
      77,    65,    60,     4,    33,    84,    85,    61,    38,     4,
     109,     4,     4,    78,    12,    96,    50,     4,    66,    67,
     119,    76,    55,    83,   121,    50,   122,     6,    24,   105,
     124,   115,    84,    85,    84,    85,   116,     7,   118,    84,
      85,   116,    12,    86,    87,    88,    89,    90,    91,    21,
      22,    23,    15,    95,    97,    99,    17,    50,     8,     9,
      25,    55,    99,    55,    18,    19,    30,    55,    16,    62,
      63,    93,    94,     4,    98,    84,    85,   107,   108,   110,
     111,    31,    34,    36,    35,    74,    75,    40,    76,    80,
      81,    44,   112,    79,   113,    99,    50,   114,    50,   123,
      42,    39,    50,   106,    45,   120,     0,     0,     0,    64
};

static const yytype_int8 yycheck[] =
{
       1,    37,    17,    65,    14,    78,    16,     8,    27,    19,
      46,    18,    22,    23,    14,     3,    17,    79,    28,    81,
      15,    26,    25,    42,    25,    32,    33,    30,    28,    42,
      92,    42,    42,    28,    35,    46,    37,    42,    43,    44,
      20,    24,    78,    26,   117,    46,   119,     0,    63,    27,
     123,    25,    32,    33,    32,    33,    30,    28,    27,    32,
      33,    30,    63,    36,    37,    38,    39,    40,    41,     8,
       9,    10,     4,    74,    75,    76,    28,    78,     6,     7,
      13,   117,    83,   119,    11,    12,     5,   123,    29,    27,
      28,    34,    35,    42,    43,    32,    33,    84,    85,    93,
      94,    24,    28,    28,    26,    26,    26,    43,    24,    43,
      17,    35,    27,    31,    27,   116,   117,    27,   119,    21,
      34,    30,   123,    83,    36,   116,    -1,    -1,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    48,    50,    42,    49,     0,    28,     6,     7,
      51,    52,    49,    53,    54,     4,    29,    28,    11,    12,
      57,     8,     9,    10,    54,    13,    58,    59,    60,    61,
       5,    24,    55,    49,    28,    26,    28,    14,    28,    62,
      43,    56,    59,    27,    53,    51,    16,    19,    22,    23,
      49,    62,    63,    64,    65,    70,    73,    75,    76,    77,
      25,    30,    27,    28,    65,    26,    43,    44,    49,    66,
      67,    68,    69,    70,    26,    26,    24,    15,    28,    31,
      43,    17,    66,    26,    32,    33,    36,    37,    38,    39,
      40,    41,    74,    34,    35,    49,    46,    49,    43,    49,
      71,    72,    64,    66,    66,    27,    71,    67,    67,    66,
      68,    68,    27,    27,    27,    25,    30,    18,    27,    20,
      72,    64,    64,    21,    64
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
#line 60 "parser.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    {
			(yyval).name = yytext;
		;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    {
			pushScope();
		;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {
			currentScope --;
			popScope();
		;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {
			installOnTable((yyvsp[(1) - (3)]).name, currentScope, type::integer);
		;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {
			installOnTable((yyvsp[(1) - (3)]).name, currentScope, type::real);
		;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {
			installOnTable((yyvsp[(1) - (4)]).name, currentScope, type::integerArray);
		;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {
			installOnTable((yyvsp[(1) - (3)]).name, currentScope, type::stringType);
		;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 139 "parser.y"
    {
			installOnTable((yyvsp[(2) - (2)]).name, currentScope, type::procedure);
			currentScope++;
			pushScope();
		;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 169 "parser.y"
    {;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {
			checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {
			(yyval).dataType = checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {
			(yyval).dataType = checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
		;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {
			(yyval).dataType = checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
		;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {
			(yyval).dataType = checkTypeCompatibility((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
		;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {
			(yyval).dataType = (yyvsp[(2) - (3)]).dataType;
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
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
#line 235 "parser.y"
    {
			(yyval).dataType = type::integer;
			addConstant(yytext, currentScope, type::integer);
		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    {
			(yyval).dataType = type::real;
			addConstant(yytext, currentScope, type::real);
		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    {
			(yyval) = getDeclaration((yyvsp[(1) - (1)]).name, currentScope);;
		;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
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
#line 263 "parser.y"
    {
			// for integer[] array case: indexes must be integers
			(yyval).dataType = checkArrayIndexesType((yyvsp[(1) - (3)]).dataType, (yyvsp[(3) - (3)]).dataType);
		;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    {
			(yyval).dataType = (yyvsp[(1) - (1)]).dataType;
		;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
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
#line 281 "parser.y"
    {
			// get type
			// report use of constant...
			addConstant(yytext, currentScope, type::integer);
			(yyval).dataType = type::integer;
		;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    {
			// check type between expr1 and expr2
			checkTypeCompatibility((yyvsp[(2) - (8)]).dataType, (yyvsp[(4) - (8)]).dataType);
		;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    {
			// id must be declared
			// report use
			getDeclaration((yyvsp[(3) - (4)]).name, currentScope);
		;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    {
			// id must be declared
			// report use
			getDeclaration((yyvsp[(3) - (4)]).name, currentScope);
		;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    {
			// report use of constant...
			addConstant((yyvsp[(3) - (4)]).name, currentScope, type::stringType);
		;}
    break;



/* Line 1455 of yacc.c  */
#line 2006 "parser.tab.c"
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
#line 340 "parser.y"

int yyerror(char* errorMessage)
{
	fprintf(stderr, "%s\n", errorMessage);
	return 1;
}

