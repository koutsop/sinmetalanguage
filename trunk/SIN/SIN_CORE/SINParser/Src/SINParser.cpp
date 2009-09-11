
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


	#include <stdio.h>
	#include <utility>
	#include <assert.h>
	#include <iostream>
	#include <string.h>
	
	
	// Bison assumes alloca is the memory allocation
	// function.
	//
	#ifndef	alloca
	#define alloca malloc
	#endif



	//#include "SINString.h"
	//#include "SINASTNode.h"
	//#include "SINParserManage.h"
	//#include "LexAndBisonParseArguments.h"
	

	////////////////////////////////////////////////////////////////////////
	// defines
	


	////////////////////////////////////////////////////////////////////////
	// functions definitions
	
	int yyerror (char const* yaccProvidedMessage);
	//int yyerror (SIN::LexAndBisonParseArguments & fabpa, char const* yaccProvidedMessage);
	int PrepareForFile(const char * filePath);
	int PrepareForString(void);


	int yylex(SIN::LexAndBisonParseArguments & fabpa);
	//
	extern int yylineno;
	extern char* yytext;
	extern FILE* yyin;	



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
     NUMBER = 258,
     ID = 259,
     STRING = 260,
     DOT = 261,
     DOUBLEDOT = 262,
     IF = 263,
     ELSE = 264,
     WHILE = 265,
     FOR = 266,
     FUNCTION = 267,
     RETURN = 268,
     BREAK = 269,
     CONTINUE = 270,
     LOCAL = 271,
     GLOBAL = 272,
     STATIC = 273,
     TRUE_ = 274,
     FALSE_ = 275,
     NIL_ = 276,
     ASSIGN = 277,
     ADD = 278,
     MIN = 279,
     MUL = 280,
     DIV = 281,
     MOD = 282,
     EQ = 283,
     NOTEQ = 284,
     INCR = 285,
     DECR = 286,
     GT = 287,
     LT = 288,
     GE = 289,
     LE = 290,
     AND = 291,
     OR = 292,
     NOT = 293,
     DOT_LT = 294,
     GT_DOT = 295,
     DOT_TILDE = 296,
     DOT_EXCl_MARK = 297,
     DOT_AT = 298,
     DOT_HASH = 299,
     KEYS_MEMBER = 300,
     SIZE_MEMBER = 301,
     CONST = 302,
     METHOD = 303,
     SELF = 304,
     UMINUS = 305
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define ID 259
#define STRING 260
#define DOT 261
#define DOUBLEDOT 262
#define IF 263
#define ELSE 264
#define WHILE 265
#define FOR 266
#define FUNCTION 267
#define RETURN 268
#define BREAK 269
#define CONTINUE 270
#define LOCAL 271
#define GLOBAL 272
#define STATIC 273
#define TRUE_ 274
#define FALSE_ 275
#define NIL_ 276
#define ASSIGN 277
#define ADD 278
#define MIN 279
#define MUL 280
#define DIV 281
#define MOD 282
#define EQ 283
#define NOTEQ 284
#define INCR 285
#define DECR 286
#define GT 287
#define LT 288
#define GE 289
#define LE 290
#define AND 291
#define OR 292
#define NOT 293
#define DOT_LT 294
#define GT_DOT 295
#define DOT_TILDE 296
#define DOT_EXCl_MARK 297
#define DOT_AT 298
#define DOT_HASH 299
#define KEYS_MEMBER 300
#define SIZE_MEMBER 301
#define CONST 302
#define METHOD 303
#define SELF 304
#define UMINUS 305




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


    char *	stringV;
    double			realV;
    void *			AST;
    //SIN::ASTNode *	AST;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



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
#define YYFINAL  96
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   810

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    15,     2,     2,     2,
      10,    11,     2,     2,    14,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    13,    12,
       2,     2,     2,    16,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     6,     2,     7,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     8,     2,     9,     2,     2,     2,     2,
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
       5,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    23,    26,    28,    30,    32,    34,    38,    42,    46,
      50,    54,    58,    62,    66,    70,    74,    78,    82,    86,
      88,    90,    92,    96,   104,   106,   108,   111,   114,   117,
     121,   125,   128,   131,   135,   139,   142,   145,   148,   151,
     154,   157,   159,   161,   163,   165,   167,   169,   171,   173,
     175,   177,   179,   181,   184,   187,   190,   193,   195,   197,
     201,   206,   210,   214,   218,   223,   226,   229,   234,   237,
     241,   244,   245,   249,   250,   253,   257,   259,   261,   266,
     270,   276,   281,   284,   287,   290,   293,   294,   301,   307,
     308,   316,   317,   324,   328,   331,   332,   336,   337,   340,
     341,   345,   351,   359,   360,   367,   368,   379,   382
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    64,    -1,    65,    64,    -1,    -1,    66,
      12,    -1,    95,    -1,    96,    -1,    98,    -1,   100,    -1,
      25,    12,    -1,    26,    12,    -1,    94,    -1,    87,    -1,
      12,    -1,    67,    -1,    66,    34,    66,    -1,    66,    35,
      66,    -1,    66,    36,    66,    -1,    66,    37,    66,    -1,
      66,    38,    66,    -1,    66,    43,    66,    -1,    66,    45,
      66,    -1,    66,    44,    66,    -1,    66,    46,    66,    -1,
      66,    39,    66,    -1,    66,    40,    66,    -1,    66,    47,
      66,    -1,    66,    48,    66,    -1,    68,    -1,    69,    -1,
      72,    -1,    75,    33,    66,    -1,    10,    66,    16,    66,
      13,    66,    11,    -1,    70,    -1,    71,    -1,    53,    69,
      -1,    54,    75,    -1,    55,    69,    -1,    50,    63,    51,
      -1,    50,    66,    51,    -1,    52,    75,    -1,    52,    77,
      -1,    10,    66,    11,    -1,    15,    65,    15,    -1,    35,
      66,    -1,    49,    66,    -1,    41,    75,    -1,    75,    41,
      -1,    42,    75,    -1,    75,    42,    -1,    73,    -1,    75,
      -1,    77,    -1,    81,    -1,    90,    -1,    74,    -1,     3,
      -1,     5,    -1,    32,    -1,    30,    -1,    31,    -1,     4,
      -1,    58,     4,    -1,    27,     4,    -1,    28,     4,    -1,
      29,     4,    -1,    60,    -1,    76,    -1,    75,    17,     4,
      -1,    75,     6,    66,     7,    -1,    75,    17,    56,    -1,
      75,    17,    57,    -1,    77,    17,     4,    -1,    77,     6,
      66,     7,    -1,    77,    78,    -1,    75,    78,    -1,    10,
      66,    11,    78,    -1,    90,    78,    -1,    10,    79,    11,
      -1,    66,    80,    -1,    -1,    14,    66,    80,    -1,    -1,
       6,     7,    -1,     6,    82,     7,    -1,    84,    -1,    83,
      -1,    66,    13,    66,    85,    -1,    66,    13,    86,    -1,
      17,     4,    13,    66,    85,    -1,    17,     4,    13,    86,
      -1,    66,    85,    -1,    86,    85,    -1,    14,    83,    -1,
      14,    84,    -1,    -1,    59,     4,    10,    91,    11,    94,
      -1,    59,    10,    91,    11,    94,    -1,    -1,    23,    88,
       4,    10,    91,    11,    94,    -1,    -1,    23,    89,    10,
      91,    11,    94,    -1,    10,    87,    11,    -1,     4,    92,
      -1,    -1,    14,     4,    92,    -1,    -1,    65,    93,    -1,
      -1,     8,    93,     9,    -1,    19,    10,    66,    11,    65,
      -1,    19,    10,    66,    11,    65,    20,    65,    -1,    -1,
      21,    97,    10,    66,    11,    65,    -1,    -1,    22,    99,
      10,    79,    12,    66,    12,    79,    11,    65,    -1,    24,
      12,    -1,    24,    66,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   110,   111,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   149,   153,   159,   160,   161,   162,   163,   167,
     168,   172,   173,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   193,   194,   195,   196,   197,   201,   202,   203,
     204,   205,   209,   210,   211,   212,   213,   214,   215,   219,
     220,   221,   222,   223,   224,   231,   232,   233,   234,   238,
     243,   244,   248,   249,   256,   257,   260,   261,   264,   265,
     266,   267,   270,   271,   275,   276,   277,   281,   282,   291,
     291,   293,   293,   298,   302,   303,   307,   308,   316,   317,
     321,   326,   327,   330,   330,   334,   334,   338,   339
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "ID", "STRING", "'['", "']'",
  "'{'", "'}'", "'('", "')'", "';'", "':'", "','", "'$'", "'?'", "DOT",
  "DOUBLEDOT", "IF", "ELSE", "WHILE", "FOR", "FUNCTION", "RETURN", "BREAK",
  "CONTINUE", "LOCAL", "GLOBAL", "STATIC", "TRUE_", "FALSE_", "NIL_",
  "ASSIGN", "ADD", "MIN", "MUL", "DIV", "MOD", "EQ", "NOTEQ", "INCR",
  "DECR", "GT", "LT", "GE", "LE", "AND", "OR", "NOT", "DOT_LT", "GT_DOT",
  "DOT_TILDE", "DOT_EXCl_MARK", "DOT_AT", "DOT_HASH", "KEYS_MEMBER",
  "SIZE_MEMBER", "CONST", "METHOD", "SELF", "UMINUS", "$accept", "SinCode",
  "stmts", "stmt", "expr", "assignexpr", "ternaryexpr", "metaexpr",
  "metaparse", "metapreserve", "term", "primary", "const", "lvalue",
  "member", "call", "normalcall", "elist", "elists", "objectdef",
  "objectlist", "indexed", "unindexed", "objectlists", "methodef",
  "funcdef", "$@1", "$@2", "valuefuncdef", "idlist", "idlists", "stmtd",
  "block", "ifstmt", "whilestmt", "$@3", "forstmt", "$@4", "returnstmt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    91,    93,   123,   125,
      40,    41,    59,    58,    44,    36,    63,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    68,    69,    69,    69,    69,    69,    70,
      70,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      83,    83,    84,    84,    85,    85,    85,    86,    86,    88,
      87,    89,    87,    90,    91,    91,    92,    92,    93,    93,
      94,    95,    95,    97,    96,    99,    98,   100,   100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     3,     7,     1,     1,     2,     2,     2,     3,
       3,     2,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     3,
       4,     3,     3,     3,     4,     2,     2,     4,     2,     3,
       2,     0,     3,     0,     2,     3,     1,     1,     4,     3,
       5,     4,     2,     2,     2,     2,     0,     6,     5,     0,
       7,     0,     6,     3,     2,     0,     3,     0,     2,     0,
       3,     5,     7,     0,     6,     0,    10,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    57,    62,    58,     0,   109,     0,    14,     0,     0,
     113,   115,    99,     0,     0,     0,     0,     0,     0,    60,
      61,    59,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,    67,     0,     2,     4,     0,    15,    29,    30,
      34,    35,    31,    51,    56,    52,    68,    53,    54,    13,
      55,    12,     6,     7,     8,     9,    84,     0,     0,    96,
       0,    87,    86,    96,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,    10,    11,    64,    65,
      66,    45,     0,    47,     0,     0,    49,    46,     0,     0,
      41,    42,    36,    37,    38,    63,     1,     3,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,    48,    50,    76,     0,
       0,    75,    78,     0,     0,   105,     0,     0,    92,    85,
      93,   108,   110,    43,     0,   103,    44,     0,     0,    81,
       0,   105,   118,     0,    39,    40,    16,    17,    18,    19,
      20,    25,    26,    21,    23,    22,    24,    27,    28,     0,
      83,     0,    69,    71,    72,    32,     0,    73,     0,   105,
     107,     0,    96,    89,    94,    95,    77,     0,     0,     0,
       0,   105,     0,     0,    70,     0,    80,    79,    74,    96,
      91,     0,     0,   104,     0,    88,     0,   111,     0,     0,
       0,     0,    83,    90,     0,   107,    98,     0,     0,   114,
       0,     0,   102,    82,    97,   106,    33,   112,    81,   100,
       0,     0,   116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   118,   161,   186,    48,
      60,    61,    62,   128,    63,    49,    72,    73,    50,   171,
     193,    65,    51,    52,    53,    70,    54,    71,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -185
static const yytype_int16 yypact[] =
{
     202,  -185,  -185,  -185,   260,   202,   301,  -185,   202,     1,
    -185,  -185,     4,   359,     3,    17,    28,    29,    33,  -185,
    -185,  -185,   441,   118,   118,   441,   202,   118,   117,   118,
     117,    49,  -185,    73,  -185,   202,   598,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,   178,  -185,    18,  -185,  -185,
      64,  -185,  -185,  -185,  -185,  -185,  -185,    71,     8,   663,
      72,  -185,  -185,    67,   202,    74,   523,    75,    77,   441,
      86,    87,    94,   104,  -185,   619,  -185,  -185,  -185,  -185,
    -185,  -185,   301,    51,    18,    64,    51,  -185,    66,   485,
      51,    18,  -185,    51,  -185,  -185,  -185,  -185,  -185,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,    15,   441,  -185,  -185,  -185,   441,
     116,  -185,  -185,   105,   113,   120,   400,    35,  -185,  -185,
    -185,  -185,  -185,    64,   441,  -185,  -185,   506,   441,   441,
     115,   120,  -185,   544,  -185,  -185,    10,    10,  -185,  -185,
    -185,   650,   650,   204,   204,   204,   204,   764,   750,   114,
     705,   119,  -185,  -185,  -185,   735,   468,  -185,   400,   120,
     122,   129,   720,  -185,  -185,  -185,  -185,   678,   202,   561,
     130,   120,   132,    64,  -185,   441,  -185,  -185,  -185,   720,
    -185,   133,   125,  -185,   147,  -185,   441,   136,   202,   441,
     152,   147,   705,  -185,   147,   122,  -185,   582,   202,  -185,
     635,   147,  -185,  -185,  -185,  -185,  -185,  -185,   441,  -185,
     153,   202,  -185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,   139,   131,    -5,     0,  -185,  -185,    -7,  -185,  -185,
    -185,  -185,  -185,     7,  -185,    31,   -42,  -138,   -28,  -185,
    -185,    48,    50,   -56,  -117,    -4,  -185,  -185,   108,  -125,
     -26,   123,  -184,  -185,  -185,  -185,  -185,  -185,  -185
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -102
static const yytype_int16 yytable[] =
{
      64,   180,    67,    68,    59,   121,    66,   130,   122,   173,
     206,    69,   124,    75,  -101,    76,   182,   212,   125,   162,
     214,    92,    81,    94,   119,    87,    89,   219,   113,    77,
      83,    86,    78,    79,    90,   120,    93,    80,     1,     2,
       3,     4,   121,   122,   191,     6,   101,   102,   103,   121,
       8,   190,    57,    95,    84,    84,   200,   112,    91,    64,
      84,   113,    16,    17,    18,    19,    20,    21,   114,   137,
      22,   163,   164,    96,   113,   123,    23,    24,    67,   129,
     220,   127,   143,   132,    25,    26,   135,    27,    28,    29,
      30,   176,   136,    31,    58,    32,   138,   139,   140,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   141,   165,   195,   144,   168,   166,
     167,   184,     2,   169,   170,   181,   172,    59,    82,   205,
     187,    85,    85,   203,   177,    85,   192,    85,   179,   160,
     194,   176,   199,   201,   204,    16,    17,    18,    99,   100,
     101,   102,   103,   104,   105,     5,   208,   106,   107,   108,
     109,   110,   111,   211,   221,    88,    97,    26,   189,    27,
      28,    29,    30,   197,   213,   174,    31,   175,    32,   215,
       0,     0,     0,     0,   112,   202,     0,   131,   113,     0,
       0,     0,     0,   209,     0,   114,   207,     0,     0,   210,
       0,     0,     0,   217,     0,     1,     2,     3,     4,     0,
       5,   115,     6,     0,     7,     0,   222,     8,   160,   116,
     117,     9,     0,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,    22,    99,   100,
     101,   102,   103,    23,    24,     0,     0,  -102,  -102,  -102,
    -102,    25,    26,     0,    27,    28,    29,    30,     0,     0,
      31,     0,    32,     1,     2,     3,     4,    56,     0,     0,
       6,     0,     0,     0,     0,     8,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    17,    18,
      19,    20,    21,     0,     0,    22,     0,     0,     0,     0,
       0,    23,    24,     0,     1,     2,     3,     4,     0,    25,
      26,     6,    27,    28,    29,    30,     8,     0,    31,    58,
      32,     0,     0,     0,    12,     0,     0,     0,    16,    17,
      18,    19,    20,    21,     0,     0,    22,     0,     0,     0,
       0,     0,    23,    24,     0,     0,     0,     0,     0,     0,
      25,    26,     0,    27,    28,    29,    30,     0,     0,    31,
       0,    32,     1,     2,     3,     4,     0,     0,     0,     6,
       0,    74,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,    18,    19,
      20,    21,     0,     0,    22,     0,     0,     0,     0,     0,
      23,    24,     0,     1,     2,     3,     4,     0,    25,    26,
       6,    27,    28,    29,    30,     8,     0,    31,     0,    32,
       0,     0,     0,     0,     0,     0,     0,    16,    17,    18,
      19,    20,    21,     0,     0,    22,     0,     0,     0,     0,
       0,    23,    24,     0,     1,     2,     3,     4,     0,    25,
      26,     6,    27,    28,    29,    30,     8,     0,    31,    58,
      32,     0,     0,     0,     0,     0,     0,     0,    16,    17,
      18,    19,    20,    21,     0,   188,    22,     0,     0,     0,
       0,     0,    23,    24,     0,     0,     0,     0,     0,     0,
      25,    26,     0,    27,    28,    29,    30,    98,     0,    31,
       0,    32,    99,   100,   101,   102,   103,   104,   105,     0,
       0,   106,   107,   108,   109,   110,   111,   178,     0,    99,
     100,   101,   102,   103,   104,   105,     0,     0,   106,   107,
     108,   109,   110,   111,   133,     0,   145,     0,     0,   134,
      99,   100,   101,   102,   103,   104,   105,     0,     0,   106,
     107,   108,   109,   110,   111,   183,     0,    99,   100,   101,
     102,   103,   104,   105,     0,     0,   106,   107,   108,   109,
     110,   111,   198,     0,     0,     0,     0,     0,    99,   100,
     101,   102,   103,   104,   105,     0,     0,   106,   107,   108,
     109,   110,   111,   216,     0,    99,   100,   101,   102,   103,
     104,   105,     0,     0,   106,   107,   108,   109,   110,   111,
      98,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   105,     0,     0,   106,   107,   108,   109,   110,
     111,   142,    99,   100,   101,   102,   103,   104,   105,     0,
       0,   106,   107,   108,   109,   110,   111,   218,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   105,
       0,     0,   106,   107,   108,   109,   110,   111,     0,    99,
     100,   101,   102,   103,   104,   105,   126,   127,   106,   107,
     108,   109,   110,   111,    99,   100,   101,   102,   103,  -102,
    -102,   196,     0,   106,   107,   108,   109,    99,   100,   101,
     102,   103,   104,   105,     0,     0,   106,   107,   108,   109,
     110,   111,    99,   100,   101,   102,   103,   104,   105,   185,
       0,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,   127,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,     0,     0,   106,   107,
     108,   109,   110,   111,    99,   100,   101,   102,   103,   104,
     105,     0,     0,   106,   107,   108,   109,   110,   111,    99,
     100,   101,   102,   103,   104,   105,     0,     0,   106,   107,
     108,   109,   110,   111,    99,   100,   101,   102,   103,   104,
     105,     0,     0,   106,   107,   108,   109,   110,    99,   100,
     101,   102,   103,   104,   105,     0,     0,   106,   107,   108,
     109
};

static const yytype_int16 yycheck[] =
{
       5,   139,     6,     8,     4,    47,     6,    63,    50,   126,
     194,    10,     4,    13,    10,    12,   141,   201,    10,     4,
     204,    28,    22,    30,     6,    25,    26,   211,    10,    12,
      23,    24,     4,     4,    27,    17,    29,     4,     3,     4,
       5,     6,    84,    85,   169,    10,    36,    37,    38,    91,
      15,   168,    17,     4,    23,    24,   181,     6,    27,    64,
      29,    10,    27,    28,    29,    30,    31,    32,    17,    69,
      35,    56,    57,     0,    10,     4,    41,    42,    82,     7,
     218,    14,    82,     9,    49,    50,    11,    52,    53,    54,
      55,   133,    15,    58,    59,    60,    10,    10,     4,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    10,   115,   172,    51,    13,   119,
       4,     7,     4,    10,     4,    10,   126,   127,    10,     4,
      11,    23,    24,   189,   134,    27,    14,    29,   138,   139,
      11,   183,    12,    11,    11,    27,    28,    29,    34,    35,
      36,    37,    38,    39,    40,     8,    20,    43,    44,    45,
      46,    47,    48,    11,    11,    26,    35,    50,   168,    52,
      53,    54,    55,   178,   202,   127,    58,   127,    60,   205,
      -1,    -1,    -1,    -1,     6,   185,    -1,    64,    10,    -1,
      -1,    -1,    -1,   198,    -1,    17,   196,    -1,    -1,   199,
      -1,    -1,    -1,   208,    -1,     3,     4,     5,     6,    -1,
       8,    33,    10,    -1,    12,    -1,   221,    15,   218,    41,
      42,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    34,    35,
      36,    37,    38,    41,    42,    -1,    -1,    43,    44,    45,
      46,    49,    50,    -1,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,     3,     4,     5,     6,    -1,    49,
      50,    10,    52,    53,    54,    55,    15,    -1,    58,    59,
      60,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,     3,     4,     5,     6,    -1,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,     3,     4,     5,     6,    -1,    49,    50,
      10,    52,    53,    54,    55,    15,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,     3,     4,     5,     6,    -1,    49,
      50,    10,    52,    53,    54,    55,    15,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,     7,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    52,    53,    54,    55,    12,    -1,    58,
      -1,    60,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46,    47,    48,    11,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    47,    48,    11,    -1,    51,    -1,    -1,    16,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46,    47,    48,    11,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    43,    44,    45,    46,
      47,    48,    11,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    47,    48,    11,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    47,    48,
      12,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    44,    45,    46,    47,
      48,    12,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46,    47,    48,    12,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    47,    48,    -1,    34,
      35,    36,    37,    38,    39,    40,    13,    14,    43,    44,
      45,    46,    47,    48,    34,    35,    36,    37,    38,    39,
      40,    13,    -1,    43,    44,    45,    46,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    43,    44,    45,    46,
      47,    48,    34,    35,    36,    37,    38,    39,    40,    14,
      -1,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    47,    48,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    44,    45,    46,    47,    48,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    47,    48,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    44,    45,    46,    47,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    15,    19,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    35,    41,    42,    49,    50,    52,    53,    54,
      55,    58,    60,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    81,    87,
      90,    94,    95,    96,    98,   100,     7,    17,    59,    66,
      82,    83,    84,    86,    65,    93,    66,    87,    65,    10,
      97,    99,    88,    89,    12,    66,    12,    12,     4,     4,
       4,    66,    10,    75,    77,    90,    75,    66,    63,    66,
      75,    77,    69,    75,    69,     4,     0,    64,    12,    34,
      35,    36,    37,    38,    39,    40,    43,    44,    45,    46,
      47,    48,     6,    10,    17,    33,    41,    42,    78,     6,
      17,    78,    78,     4,     4,    10,    13,    14,    85,     7,
      85,    93,     9,    11,    16,    11,    15,    66,    10,    10,
       4,    10,    12,    66,    51,    51,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    79,     4,    56,    57,    66,    66,     4,    13,    10,
       4,    91,    66,    86,    83,    84,    78,    66,    11,    66,
      79,    10,    91,    11,     7,    14,    80,    11,     7,    66,
      86,    91,    14,    92,    11,    85,    13,    65,    11,    12,
      91,    11,    66,    85,    11,     4,    94,    66,    20,    65,
      66,    11,    94,    80,    94,    92,    11,    65,    12,    94,
      79,    11,    65
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

    {}
    break;

  case 3:

    {}
    break;

  case 4:

    {}
    break;

  case 5:

    {}
    break;

  case 6:

    {}
    break;

  case 7:

    {}
    break;

  case 8:

    {}
    break;

  case 9:

    {}
    break;

  case 10:

    {}
    break;

  case 11:

    {}
    break;

  case 12:

    {}
    break;

  case 13:

    {}
    break;

  case 14:

    {}
    break;

  case 15:

    {}
    break;

  case 16:

    {}
    break;

  case 17:

    {}
    break;

  case 18:

    {}
    break;

  case 19:

    {}
    break;

  case 20:

    {}
    break;

  case 21:

    {}
    break;

  case 22:

    {}
    break;

  case 23:

    {}
    break;

  case 24:

    {}
    break;

  case 25:

    {}
    break;

  case 26:

    {}
    break;

  case 27:

    {}
    break;

  case 28:

    {}
    break;

  case 29:

    {}
    break;

  case 30:

    {}
    break;

  case 31:

    {}
    break;

  case 32:

    {}
    break;

  case 33:

    {}
    break;

  case 34:

    {}
    break;

  case 35:

    {}
    break;

  case 36:

    {}
    break;

  case 37:

    {}
    break;

  case 38:

    {}
    break;

  case 39:

    {}
    break;

  case 40:

    {}
    break;

  case 41:

    {}
    break;

  case 42:

    {}
    break;

  case 43:

    {}
    break;

  case 44:

    {}
    break;

  case 45:

    {}
    break;

  case 46:

    {}
    break;

  case 47:

    {}
    break;

  case 48:

    {}
    break;

  case 49:

    {}
    break;

  case 50:

    {}
    break;

  case 51:

    {}
    break;

  case 52:

    {}
    break;

  case 53:

    {}
    break;

  case 54:

    {}
    break;

  case 55:

    {}
    break;

  case 56:

    {}
    break;

  case 57:

    {}
    break;

  case 58:

    {}
    break;

  case 59:

    {}
    break;

  case 60:

    {}
    break;

  case 61:

    {}
    break;

  case 62:

    {}
    break;

  case 63:

    {}
    break;

  case 64:

    {}
    break;

  case 65:

    {}
    break;

  case 66:

    {}
    break;

  case 67:

    {}
    break;

  case 68:

    {}
    break;

  case 69:

    {}
    break;

  case 70:

    {}
    break;

  case 71:

    {}
    break;

  case 72:

    {}
    break;

  case 73:

    {}
    break;

  case 74:

    {}
    break;

  case 75:

    {}
    break;

  case 76:

    {}
    break;

  case 77:

    {}
    break;

  case 78:

    {}
    break;

  case 79:

    {}
    break;

  case 80:

    {}
    break;

  case 81:

    {}
    break;

  case 82:

    {}
    break;

  case 83:

    {}
    break;

  case 84:

    {}
    break;

  case 85:

    {}
    break;

  case 86:

    {}
    break;

  case 87:

    {}
    break;

  case 88:

    {}
    break;

  case 89:

    {}
    break;

  case 90:

    {}
    break;

  case 91:

    {}
    break;

  case 92:

    {}
    break;

  case 93:

    {}
    break;

  case 94:

    {}
    break;

  case 95:

    {}
    break;

  case 96:

    {}
    break;

  case 97:

    {}
    break;

  case 98:

    {}
    break;

  case 99:

    {}
    break;

  case 100:

    {}
    break;

  case 101:

    {}
    break;

  case 102:

    {}
    break;

  case 103:

    {}
    break;

  case 104:

    {}
    break;

  case 105:

    {}
    break;

  case 106:

    {}
    break;

  case 107:

    {}
    break;

  case 108:

    {}
    break;

  case 109:

    {}
    break;

  case 110:

    {}
    break;

  case 111:

    {}
    break;

  case 112:

    {}
    break;

  case 113:

    {}
    break;

  case 114:

    {}
    break;

  case 115:

    {}
    break;

  case 116:

    {}
    break;

  case 117:

    {}
    break;

  case 118:

    {}
    break;



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





int yyerror (char const* yaccProvidedMessage){
	return 0;
}

/*
int yyerror (SIN::LexAndBisonParseArguments & fabpa, char const* yaccProvidedMessage)
{
	SIN::String error = SIN::String() << yaccProvidedMessage;
	
	if (*yytext == 0)
		error << " maybe missing ';'";
	else
		error << ", before token: " << yytext;
	fabpa.SetError(std::make_pair(error, yylineno));
	return 1;
}
*/


int PrepareForFile(const char * filePath) {
	assert (filePath);
	if (!(yyin = fopen(filePath, "r"))) {
			fprintf(stderr, "Cannot read file: %s\n", filePath);
			return 1;
	}
	return 0;
}

int PrepareForString(void) {
	return yylineno = 1;
}
