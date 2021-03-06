
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

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

long count[61]={0};


/* Line 189 of yacc.c  */
#line 82 "parser.tab.c"

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
     _COMENTARIO = 302,
     _ERRORLITERAL = 303,
     _ERRORCOMENTARIO = 304,
     _ERROR = 305,
     _NEWLINE = 306,
     _EOF = 307
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
#line 176 "parser.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  124

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,    11,    17,    21,    23,    27,    29,
      33,    37,    42,    46,    50,    54,    56,    59,    61,    65,
      67,    71,    77,    82,    86,    88,    92,    94,    96,    98,
     100,   102,   104,   106,   110,   114,   118,   120,   124,   128,
     130,   132,   136,   138,   143,   145,   147,   149,   154,   158,
     160,   162,   164,   173,   175,   177,   179,   181,   183,   185,
     192,   197,   202
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    28,    56,    52,    -1,     3,    42,
      -1,    57,     4,    62,     5,    66,    -1,     6,    58,    28,
      -1,     7,    -1,    58,    28,    59,    -1,    59,    -1,    42,
      29,     8,    -1,    42,    29,     9,    -1,    42,    29,     8,
      60,    -1,    42,    29,    10,    -1,    24,    61,    25,    -1,
      61,    30,    43,    -1,    43,    -1,    11,    63,    -1,    12,
      -1,    63,    28,    64,    -1,    64,    -1,    65,    28,    56,
      -1,    13,    42,    26,    58,    27,    -1,    13,    42,    26,
      27,    -1,    14,    67,    15,    -1,    28,    -1,    67,    28,
      68,    -1,    68,    -1,    69,    -1,    77,    -1,    79,    -1,
      80,    -1,    81,    -1,    66,    -1,    74,    31,    70,    -1,
      70,    32,    71,    -1,    70,    33,    71,    -1,    71,    -1,
      71,    34,    72,    -1,    71,    35,    72,    -1,    72,    -1,
      73,    -1,    26,    70,    27,    -1,    74,    -1,    42,    26,
      75,    27,    -1,    43,    -1,    44,    -1,    42,    -1,    42,
      24,    75,    25,    -1,    75,    30,    76,    -1,    76,    -1,
      42,    -1,    43,    -1,    19,    70,    78,    70,    20,    68,
      21,    68,    -1,    36,    -1,    37,    -1,    38,    -1,    39,
      -1,    40,    -1,    41,    -1,    16,    69,    17,    70,    18,
      68,    -1,    22,    26,    42,    27,    -1,    23,    26,    42,
      27,    -1,    23,    26,    46,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    70,    74,    78,    80,    84,    86,    90,
      92,    94,    96,   100,   104,   106,   110,   112,   116,   118,
     122,   126,   128,   132,   134,   138,   140,   144,   146,   148,
     150,   152,   154,   158,   162,   164,   166,   170,   172,   174,
     178,   180,   184,   186,   188,   190,   194,   196,   200,   202,
     205,   207,   211,   215,   217,   219,   221,   223,   225,   229,
     233,   237,   239
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
  "_RCONST", "_ECONST", "_LITERAL", "_COMENTARIO", "_ERRORLITERAL",
  "_ERRORCOMENTARIO", "_ERROR", "_NEWLINE", "_EOF", "$accept", "program",
  "title", "block", "vars", "varlist", "vardef", "bn1", "nlist", "procs",
  "proclist", "procdef", "ptitle", "code", "para", "stmt", "assign",
  "expr", "term", "fac", "val", "ids", "vallist", "it", "cond", "bop",
  "loop", "input", "output", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   308,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    56,    57,    57,    58,    58,    59,
      59,    59,    59,    60,    61,    61,    62,    62,    63,    63,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    68,
      68,    68,    68,    69,    70,    70,    70,    71,    71,    71,
      72,    72,    73,    73,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    78,    78,    78,    78,    78,    78,    79,
      80,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     5,     3,     1,     3,     1,     3,
       3,     4,     3,     3,     3,     1,     2,     1,     3,     1,
       3,     5,     4,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       1,     3,     1,     4,     1,     1,     1,     4,     3,     1,
       1,     1,     8,     1,     1,     1,     1,     1,     1,     6,
       4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     0,     0,     6,     0,
       0,     0,     0,     8,     2,     0,     0,     5,     0,    17,
       0,     9,    10,    12,     7,     0,    16,    19,     0,     0,
       0,    11,     0,     0,     0,     0,    24,     4,    15,     0,
       0,    18,    20,     0,     0,     0,     0,    46,    32,     0,
      26,    27,     0,    28,    29,    30,    31,    13,     0,    22,
       0,     0,     0,    46,    44,    45,     0,    36,    39,    40,
      42,     0,     0,     0,    23,     0,     0,    14,    21,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,    50,    51,     0,
      49,    25,    33,     0,    41,     0,    34,    35,     0,    37,
      38,    60,    61,    62,    47,     0,     0,    43,     0,    48,
      59,     0,     0,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     9,    10,    12,    13,    31,    39,    20,
      26,    27,    28,    48,    49,    50,    51,    66,    67,    68,
      69,    70,    99,   100,    53,    91,    54,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int8 yypact[] =
{
       6,   -27,    20,    28,   -74,   -74,    59,    40,   -74,    32,
      44,    57,    60,   -74,   -74,    56,    50,    40,    72,   -74,
      84,    66,   -74,   -74,   -74,    49,    64,   -74,    65,   -10,
      51,   -74,    69,    72,    59,    -9,   -74,   -74,   -74,     9,
     -15,   -74,   -74,    54,   -20,    71,    73,    74,   -74,    16,
     -74,   -74,    70,   -74,   -74,   -74,   -74,   -74,    61,   -74,
      42,    83,   -20,    38,   -74,   -74,    14,    37,   -74,   -74,
     -74,    63,    15,    31,   -74,    -9,   -20,   -74,   -74,    40,
     -20,     3,    31,   -20,   -20,   -74,   -74,   -74,   -74,   -74,
     -74,   -20,   -20,   -20,    75,    76,    79,   -74,   -74,    12,
     -74,   -74,    43,    -7,   -74,    11,    37,    37,    -4,   -74,
     -74,   -74,   -74,   -74,   -74,    31,    -9,   -74,    -9,   -74,
     -74,    86,    -9,   -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,   -74,    77,   -74,    68,   -16,   -74,   -74,   -74,
     -74,    80,   -74,    81,   -74,   -73,    78,   -59,    -6,   -13,
     -74,   -35,    27,    -3,   -74,   -74,   -74,   -74,   -74
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      52,    24,   101,    81,    35,    35,    62,    43,    52,     1,
      44,   116,    59,    45,    46,     4,   118,   102,    36,    36,
       5,   103,    63,    64,    65,    83,    84,    11,    83,    84,
     104,    74,   108,    47,    57,    83,    84,   114,   117,    58,
      52,   115,   115,   120,    75,   121,    83,    84,    15,   123,
      85,    86,    87,    88,    89,    90,     6,    95,    21,    22,
      23,    96,    73,    24,    82,     7,     8,    18,    19,    78,
      79,    92,    93,    97,    98,    83,    84,   106,   107,   109,
     110,    52,    11,    52,    14,    25,    16,    52,    17,    29,
      30,    32,    33,    34,    38,    40,    47,    71,    73,    72,
      80,    76,   111,   112,    77,    94,   113,   122,    60,   105,
      37,    42,   119,    41,     0,     0,     0,     0,     0,     0,
       0,    61
};

static const yytype_int8 yycheck[] =
{
      35,    17,    75,    62,    14,    14,    26,    16,    43,     3,
      19,    18,    27,    22,    23,    42,    20,    76,    28,    28,
       0,    80,    42,    43,    44,    32,    33,    42,    32,    33,
      27,    15,    91,    42,    25,    32,    33,    25,    27,    30,
      75,    30,    30,   116,    28,   118,    32,    33,     4,   122,
      36,    37,    38,    39,    40,    41,    28,    42,     8,     9,
      10,    46,    24,    79,    26,     6,     7,    11,    12,    27,
      28,    34,    35,    42,    43,    32,    33,    83,    84,    92,
      93,   116,    42,   118,    52,    13,    29,   122,    28,     5,
      24,    42,    28,    28,    43,    26,    42,    26,    24,    26,
      17,    31,    27,    27,    43,    42,    27,    21,    40,    82,
      29,    34,   115,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,    55,    42,     0,    28,     6,     7,    56,
      57,    42,    58,    59,    52,     4,    29,    28,    11,    12,
      62,     8,     9,    10,    59,    13,    63,    64,    65,     5,
      24,    60,    42,    28,    28,    14,    28,    66,    43,    61,
      26,    64,    56,    16,    19,    22,    23,    42,    66,    67,
      68,    69,    74,    77,    79,    80,    81,    25,    30,    27,
      58,    69,    26,    42,    43,    44,    70,    71,    72,    73,
      74,    26,    26,    24,    15,    28,    31,    43,    27,    28,
      17,    70,    26,    32,    33,    36,    37,    38,    39,    40,
      41,    78,    34,    35,    42,    42,    46,    42,    43,    75,
      76,    68,    70,    70,    27,    75,    71,    71,    70,    72,
      72,    27,    27,    27,    25,    30,    18,    27,    20,    76,
      68,    68,    21,    68
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
#line 65 "parser.y"
    {printf("program --> title _SEMI block _EOF \n");
		count[0]++;
		;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {printf("title --> _PROGRAM _ID \n"); count[1]++;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {printf("block --> vars _ENDVARS procs _ENDPROCS code \n");count[2]++;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    {printf("vars --> _VARS varlist _SEMI \n");count[3]++;;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {printf("vars --> _NOVARS \n");count[4]++;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {printf("varlist --> varlist _SEMI vardef \n");count[4]++;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {printf("varlist --> vardef \n");count[5]++;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {printf("vardef --> _ID _COLON _INTEGER \n");count[5]++;;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {printf("vardef --> _ID _COLON _REAL \n");count[6]++;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {printf("vardef --> _ID _COLON _INTEGER bn1 \n");count[7]++;;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {printf("vardef --> _ID _COLON _STRING \n");count[8]++;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {printf("bn1 --> _LBRACK nlist _RBRACK \n");count[9]++;;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    {printf("nlist --> nlist _COMMA _ICONST \n");count[10]++;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {printf("nlist --> _ICONST \n");count[11]++;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {printf("procs --> _PROCS proclist \n");count[12]++;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {printf("procs --> _NOPROCS \n");count[13]++;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {printf("proclist --> proclist _SEMI procdef \n");count[14]++;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {printf("proclist --> procdef \n"); count[15]++;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {printf("procdef --> ptitle _SEMI block \n");count[16]++;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {printf("ptitle --> _PROC _ID _LPAREN varlist _RPAREN \n");count[18]++;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {printf("ptitle --> _PROC _ID _LPAREN _RPAREN \n");count[19]++;;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    { printf("code --> _BEGIN para _END \n"); count[18]++;;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {printf("code --> _SEMI \n");count[19]++;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 139 "parser.y"
    {printf("para --> para _SEMI stmt \n");count[20]++;;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {printf("para --> stmt \n");count[21]++;;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {printf("stmt --> assign \n");count[22]++;;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    {printf("stmt --> cond \n");count[23]++;;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    {printf("stmt --> loop \n");count[24]++;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    {printf("stmt --> input \n");count[25]++;;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {printf("stmt --> output \n");count[26]++;;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {printf("stmt --> code \n");count[27]++;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    {printf("assign --> ids _ASSIGN expr \n");count[28]++;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {printf("expr --> expr _PLUS term \n");count[29]++;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {printf("expr --> expr _MINUS term \n");count[30]++;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {printf("expr --> term \n");count[31]++;;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {printf("term --> term _MULT fac \n");count[32]++;;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {printf("term --> term _DIVIDE fac \n");count[33]++;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {printf("term --> fac \n");count[34]++;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {printf("fac --> val \n");count[35]++;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {printf("fac --> _LPAREN expr _RPAREN \n");count[36]++;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {printf("val --> ids \n");count[37]++;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {printf("val --> _ID _LPAREN vallist _RPAREN \n");count[38]++;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {printf("val --> _ID _LPAREN vallist _RPAREN \n");count[39]++;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {printf("val --> _ID _LPAREN vallist _RPAREN \n");count[40]++;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {printf("ids --> _ID \n");count[41]++;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {printf("ids --> _ID _LBRACK vallist _RBRACK \n");count[42]++;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 201 "parser.y"
    {printf("vallist --> vallist _COMMA it \n");count[43]++;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {printf("vallist --> it \n");count[44]++;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {printf("it --> _ID \n");count[45]++;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {printf("it --> _ICONST \n");count[46]++;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {printf("cond --> _IF expr bop expr _THEN stmt _ELSE stmt \n");count[47]++;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    {printf("bop --> _EQL \n");count[48]++;;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    {printf("bop --> _LESS \n");count[49]++;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {printf("bop --> _GTR \n");count[50]++;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    {printf("bop --> _LEQ \n");count[51]++;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    {printf("bop --> _GEQ \n");count[52]++;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    {printf("bop --> _NEQ \n");count[53]++;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {printf("loop --> _FOR assign _TO expr _DO stmt \n");count[54]++;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    {printf("input --> _READ _LPAREN _ID _RPAREN \n");count[55]++;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    {printf("output --> _WRITE _LPAREN _ID _RPAREN \n");count[56]++;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    {printf("output --> _WRITE _LPAREN _LITERAL _RPAREN \n");count[57]++;;}
    break;



/* Line 1455 of yacc.c  */
#line 1910 "parser.tab.c"
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
#line 243 "parser.y"

void yyerror(char * message){
	if (feof(stdin) && count[0] > 0){ // Program rule was replaced 
		// END OF FILE HAPPENED
		return 0;
	}else{
		printf("Error occurred: %s\n", message);
	}
	return 0;
}

