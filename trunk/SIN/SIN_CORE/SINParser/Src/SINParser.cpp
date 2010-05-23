
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



	#include "SINString.h"
	#include "SINASTNode.h"
	#include "SINParserManage.h"
	#include "ParseArguments.h"
	

	////////////////////////////////////////////////////////////////////////
	// defines
	#define CREATE_NODE(NODE, NAME, RULE)	RULE = new NODE##ASTnode(NAME, parseArg.GetFileName, yylineno);	\
											parseArg.AppendToNodeList(RULE)
	


	////////////////////////////////////////////////////////////////////////
	// functions definitions
	
	int yyerror (SIN::ParseArguments & parseArg, char const* yaccProvidedMessage);
	int PrepareForFile(const char * filePath);
	int PrepareForString(void);


	int yylex(SIN::ParseArguments & parseArg);
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
     IF = 258,
     ELSE = 259,
     WHILE = 260,
     FOR = 261,
     DO = 262,
     IN = 263,
     FOREACH = 264,
     FUNCTION = 265,
     RETURN = 266,
     BREAK = 267,
     CONTINUE = 268,
     ASSIGN = 269,
     ADD = 270,
     MIN = 271,
     MUL = 272,
     DIV = 273,
     MOD = 274,
     EQ = 275,
     NOTEQ = 276,
     INCR = 277,
     DECR = 278,
     GT = 279,
     LT = 280,
     GE = 281,
     LE = 282,
     AND = 283,
     OR = 284,
     NOT = 285,
     DOT_LT = 286,
     GT_DOT = 287,
     DOT_TILDE = 288,
     DOT_EXCl_MARK = 289,
     DOT_AT = 290,
     DOT_HASH = 291,
     LOCAL = 292,
     GLOBAL = 293,
     STATIC = 294,
     TRUE_ = 295,
     FALSE_ = 296,
     NIL_ = 297,
     KEYS_MEMBER = 298,
     SIZE_MEMBER = 299,
     CONST = 300,
     METHOD = 301,
     SELF = 302,
     NUMBER = 303,
     ID = 304,
     STRING = 305,
     DOT = 306,
     UMINUS = 307
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define WHILE 260
#define FOR 261
#define DO 262
#define IN 263
#define FOREACH 264
#define FUNCTION 265
#define RETURN 266
#define BREAK 267
#define CONTINUE 268
#define ASSIGN 269
#define ADD 270
#define MIN 271
#define MUL 272
#define DIV 273
#define MOD 274
#define EQ 275
#define NOTEQ 276
#define INCR 277
#define DECR 278
#define GT 279
#define LT 280
#define GE 281
#define LE 282
#define AND 283
#define OR 284
#define NOT 285
#define DOT_LT 286
#define GT_DOT 287
#define DOT_TILDE 288
#define DOT_EXCl_MARK 289
#define DOT_AT 290
#define DOT_HASH 291
#define LOCAL 292
#define GLOBAL 293
#define STATIC 294
#define TRUE_ 295
#define FALSE_ 296
#define NIL_ 297
#define KEYS_MEMBER 298
#define SIZE_MEMBER 299
#define CONST 300
#define METHOD 301
#define SELF 302
#define NUMBER 303
#define ID 304
#define STRING 305
#define DOT 306
#define UMINUS 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


    char *			stringV;
    double			realV;
    SIN::ASTNode *	AST;



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
#define YYFINAL  102
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   779

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    60,     2,     2,     2,
      55,    56,     2,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    57,
       2,     2,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      21,    24,    26,    28,    30,    32,    36,    40,    44,    48,
      52,    56,    60,    64,    68,    72,    76,    80,    84,    86,
      88,    90,    94,   102,   104,   106,   109,   112,   115,   119,
     123,   126,   129,   133,   137,   140,   143,   146,   149,   152,
     155,   157,   159,   161,   163,   165,   167,   169,   171,   173,
     175,   177,   179,   182,   185,   188,   191,   193,   195,   199,
     204,   208,   212,   216,   221,   224,   227,   232,   235,   239,
     242,   243,   247,   248,   251,   255,   257,   259,   264,   268,
     274,   279,   282,   285,   288,   291,   292,   293,   301,   302,
     309,   313,   314,   322,   323,   330,   333,   334,   338,   339,
     342,   343,   347,   348,   355,   356,   357,   358,   369,   370,
     374,   375,   380,   382,   384,   386,   387,   388,   396,   397,
     398,   399,   400,   414,   421
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    66,    -1,    67,    66,    -1,    -1,    68,
      57,    -1,   107,    -1,    99,    -1,   104,    -1,    12,    57,
      -1,    13,    57,    -1,    98,    -1,    92,    -1,    57,    -1,
      69,    -1,    68,    15,    68,    -1,    68,    16,    68,    -1,
      68,    17,    68,    -1,    68,    18,    68,    -1,    68,    19,
      68,    -1,    68,    24,    68,    -1,    68,    26,    68,    -1,
      68,    25,    68,    -1,    68,    27,    68,    -1,    68,    20,
      68,    -1,    68,    21,    68,    -1,    68,    28,    68,    -1,
      68,    29,    68,    -1,    70,    -1,    71,    -1,    74,    -1,
      77,    14,    68,    -1,    55,    68,    61,    68,    58,    68,
      56,    -1,    72,    -1,    73,    -1,    34,    71,    -1,    35,
      77,    -1,    36,    71,    -1,    31,    65,    32,    -1,    31,
      68,    32,    -1,    33,    77,    -1,    33,    79,    -1,    55,
      68,    56,    -1,    60,    67,    60,    -1,    16,    68,    -1,
      30,    68,    -1,    22,    77,    -1,    77,    22,    -1,    23,
      77,    -1,    77,    23,    -1,    75,    -1,    77,    -1,    79,
      -1,    83,    -1,    91,    -1,    76,    -1,    48,    -1,    50,
      -1,    42,    -1,    40,    -1,    41,    -1,    49,    -1,    45,
      49,    -1,    37,    49,    -1,    38,    49,    -1,    39,    49,
      -1,    47,    -1,    78,    -1,    77,    62,    49,    -1,    77,
      51,    68,    52,    -1,    77,    62,    43,    -1,    77,    62,
      44,    -1,    79,    62,    49,    -1,    79,    51,    68,    52,
      -1,    79,    80,    -1,    77,    80,    -1,    55,    68,    56,
      80,    -1,    91,    80,    -1,    55,    81,    56,    -1,    68,
      82,    -1,    -1,    59,    68,    82,    -1,    -1,    51,    52,
      -1,    51,    84,    52,    -1,    86,    -1,    85,    -1,    68,
      58,    68,    87,    -1,    68,    58,    88,    -1,    62,    49,
      58,    68,    87,    -1,    62,    49,    58,    88,    -1,    68,
      87,    -1,    88,    87,    -1,    59,    85,    -1,    59,    86,
      -1,    -1,    -1,    46,    89,    49,    55,    95,    56,    98,
      -1,    -1,    46,    90,    55,    95,    56,    98,    -1,    55,
      92,    56,    -1,    -1,    10,    93,    49,    55,    95,    56,
      98,    -1,    -1,    10,    94,    55,    95,    56,    98,    -1,
      49,    96,    -1,    -1,    59,    49,    96,    -1,    -1,    67,
      97,    -1,    -1,    53,    97,    54,    -1,    -1,     3,    55,
      68,   100,    56,    67,    -1,    -1,    -1,    -1,     3,   101,
      55,    68,   102,    56,    67,   103,     4,    67,    -1,    -1,
      11,   105,    57,    -1,    -1,    11,   106,    68,    57,    -1,
     108,    -1,   111,    -1,   116,    -1,    -1,    -1,     5,   109,
      55,    68,   110,    56,    67,    -1,    -1,    -1,    -1,    -1,
       6,   112,    55,    81,   113,    57,    68,   114,    57,    81,
     115,    56,    67,    -1,     6,    77,     8,    68,    67,     7,
      -1,     9,    55,    77,    59,    68,    56,    67,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   111,   112,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   149,   153,   159,   160,   161,   162,   163,   167,   168,
     172,   173,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   193,   194,   195,   196,   197,   201,   202,   203,   204,
     205,   209,   210,   211,   212,   213,   214,   215,   219,   220,
     221,   222,   223,   224,   231,   232,   233,   234,   238,   243,
     244,   248,   249,   256,   257,   260,   261,   264,   265,   266,
     267,   270,   271,   275,   276,   277,   281,   281,   283,   283,
     293,   297,   297,   299,   299,   304,   305,   309,   310,   318,
     319,   323,   329,   328,   331,   332,   333,   331,   337,   337,
     339,   339,   345,   346,   347,   349,   350,   349,   354,   355,
     356,   357,   354,   361,   362
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "DO", "IN",
  "FOREACH", "FUNCTION", "RETURN", "BREAK", "CONTINUE", "ASSIGN", "ADD",
  "MIN", "MUL", "DIV", "MOD", "EQ", "NOTEQ", "INCR", "DECR", "GT", "LT",
  "GE", "LE", "AND", "OR", "NOT", "DOT_LT", "GT_DOT", "DOT_TILDE",
  "DOT_EXCl_MARK", "DOT_AT", "DOT_HASH", "LOCAL", "GLOBAL", "STATIC",
  "TRUE_", "FALSE_", "NIL_", "KEYS_MEMBER", "SIZE_MEMBER", "CONST",
  "METHOD", "SELF", "NUMBER", "ID", "STRING", "'['", "']'", "'{'", "'}'",
  "'('", "')'", "';'", "':'", "','", "'$'", "'?'", "DOT", "UMINUS",
  "$accept", "SinCode", "stmts", "stmt", "expr", "assignexpr",
  "ternaryexpr", "metaexpr", "metaparse", "metapreserve", "term",
  "primary", "const", "lvalue", "member", "call", "normalcall", "elist",
  "elists", "objectdef", "objectlist", "indexed", "unindexed",
  "objectlists", "methodef", "$@1", "$@2", "valuefuncdef", "funcdef",
  "$@3", "$@4", "idlist", "idlists", "stmtd", "block", "ifstmt", "$@5",
  "$@6", "$@7", "$@8", "returnstmt", "$@9", "$@10", "loopstmt",
  "whilestmt", "$@11", "$@12", "forstmt", "$@13", "$@14", "$@15", "$@16",
  "foreach", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    91,    93,   123,   125,    40,    41,    59,    58,    44,
      36,    63,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    70,    71,    71,    71,    71,    71,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    85,
      85,    86,    86,    87,    87,    87,    89,    88,    90,    88,
      91,    93,    92,    94,    92,    95,    95,    96,    96,    97,
      97,    98,   100,    99,   101,   102,   103,    99,   105,   104,
     106,   104,   107,   107,   107,   109,   110,   108,   112,   113,
     114,   115,   111,   116,   116
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     3,     7,     1,     1,     2,     2,     2,     3,     3,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     3,     4,
       3,     3,     3,     4,     2,     2,     4,     2,     3,     2,
       0,     3,     0,     2,     3,     1,     1,     4,     3,     5,
       4,     2,     2,     2,     2,     0,     0,     7,     0,     6,
       3,     0,     7,     0,     6,     2,     0,     3,     0,     2,
       0,     3,     0,     6,     0,     0,     0,    10,     0,     3,
       0,     4,     1,     1,     1,     0,     0,     7,     0,     0,
       0,     0,    13,     6,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,   125,     0,     0,   101,   120,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    58,     0,    66,    56,    61,    57,     0,
     110,     0,    13,     0,     0,     2,     4,     0,    14,    28,
      29,    33,    34,    30,    50,    55,    51,    67,    52,    53,
      54,    12,    11,     7,     8,     6,   122,   123,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    44,    46,    48,    45,     0,     0,
      40,    41,    35,    36,    37,    63,    64,    65,    62,    96,
      83,     0,    95,     0,    86,    85,    95,   110,     0,     0,
       0,     0,     1,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,    47,
      49,     0,    80,     0,    75,     0,     0,    74,    77,   112,
       0,     0,     0,     0,    80,     0,     0,   106,   119,     0,
      38,    39,     0,     0,     0,     0,     0,    91,    84,    92,
     109,   111,    42,     0,   100,    43,    15,    16,    17,    18,
      19,    24,    25,    20,    22,    21,    23,    26,    27,    31,
       0,    82,     0,    70,    71,    68,     0,    72,     0,   115,
     126,     0,     0,   129,     0,   106,   108,     0,   121,     0,
     106,     0,    95,    88,    93,    94,    76,     0,    69,     0,
      79,    78,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,   106,     0,    95,    90,    87,     0,
      82,   113,     0,     0,    16,   133,     0,     0,     0,   108,
     104,     0,     0,    89,     0,    81,   116,   127,   130,   134,
     102,   107,     0,    99,    32,     0,     0,    97,     0,    80,
     117,   131,     0,     0,   132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   124,   172,   200,    49,
      93,    94,    95,   147,    96,   142,   143,    50,    51,    68,
      69,   187,   212,    98,    52,    53,   178,    60,   204,   245,
      54,    70,    71,    55,    56,    61,   205,    57,    66,   208,
     246,   252,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -175
static const yytype_int16 yypact[] =
{
     285,   -48,  -175,    93,   -22,   -20,   -10,     0,     2,   470,
      93,    93,   470,   285,    93,   150,    93,   150,    12,    20,
      33,  -175,  -175,  -175,    43,  -175,  -175,  -175,  -175,   357,
     285,   321,  -175,   285,    94,  -175,   285,   587,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,     9,  -175,   -17,  -175,
      53,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,   470,
      56,    63,   321,    -7,   -17,    53,    64,    93,    74,    71,
      78,   470,  -175,  -175,  -175,     1,     1,  -175,    97,   567,
       1,   -17,  -175,     1,  -175,  -175,  -175,  -175,  -175,    86,
    -175,    90,   135,    95,  -175,  -175,    87,   285,    91,    59,
     101,    89,  -175,  -175,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,  -175,   470,  -175,
    -175,   470,   470,    84,  -175,   470,   117,  -175,  -175,   707,
     470,   470,   621,   470,   470,   114,   112,   119,  -175,   602,
    -175,  -175,   121,   116,   120,   434,   398,  -175,  -175,  -175,
    -175,  -175,  -175,   470,  -175,  -175,    48,    48,  -175,  -175,
    -175,   739,   739,   189,   189,   189,   189,   752,   725,   707,
     669,   516,   118,  -175,  -175,  -175,   687,  -175,   124,   707,
     707,    53,   232,  -175,   470,   119,   113,   131,  -175,   122,
     119,   434,   531,  -175,  -175,  -175,  -175,   552,  -175,   470,
    -175,  -175,  -175,   285,   132,   133,   470,   184,   138,   636,
     136,   147,  -175,   148,   119,   144,   531,  -175,  -175,   470,
     516,  -175,   285,   285,    72,  -175,   470,   285,   148,   113,
    -175,   146,   148,  -175,   654,  -175,  -175,  -175,   707,  -175,
    -175,  -175,   148,  -175,  -175,   205,   154,  -175,   285,   470,
    -175,  -175,   156,   285,  -175
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,   206,   182,   -24,    -9,  -175,  -175,    -4,  -175,  -175,
    -175,  -175,  -175,     5,  -175,    14,   -38,  -132,     3,  -175,
    -175,    75,    76,   -82,  -140,  -175,  -175,    26,   -13,  -175,
    -175,  -144,    -3,   123,  -174,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -119
static const yytype_int16 yytable[] =
{
      74,   133,   183,    77,    79,   193,    97,    59,    63,   101,
     127,    82,   128,    84,   149,    75,    76,    64,   100,    80,
      92,    83,    99,   118,    64,    64,   127,   128,    81,    65,
      64,   119,   120,    67,   125,  -103,    65,    65,   122,   230,
      65,   210,    65,   127,   121,   126,   215,  -118,   122,   100,
     129,   217,   121,   132,   240,   123,   122,    72,   243,    73,
     121,    85,   139,   123,   122,   106,   107,   108,   247,    86,
     231,   123,   135,    97,   104,   105,   106,   107,   108,   109,
     110,    64,    87,   111,   112,   113,   114,   115,   116,   -44,
     -44,   -44,    88,    65,   102,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   122,   169,
     218,   130,   170,   171,   196,   152,   176,   251,   131,   134,
     153,   179,   180,   136,   182,   171,   137,   173,   174,   140,
      18,    19,    20,   175,   233,   138,   192,    92,    24,   144,
      25,   -98,    27,   196,   197,   151,   146,   148,    62,   155,
     104,   105,   106,   107,   108,   109,   110,   154,   207,   111,
     112,   113,   114,   115,   116,   121,   177,   185,   186,   122,
     189,   190,   211,   184,   201,   209,   123,   214,   191,   221,
     203,    13,   216,    14,    15,    16,    17,   213,   222,   223,
     220,   225,   228,   145,   146,   226,   229,   224,   236,   237,
     232,    30,   242,   239,   104,   105,   106,   107,   108,   248,
     234,   249,   253,  -119,  -119,  -119,  -119,   238,   103,    78,
     150,   194,   195,   235,   250,     0,   241,     0,     0,   254,
       0,     0,     0,     0,     0,     1,     0,     2,     3,     0,
     171,     4,     5,     6,     7,     8,     0,   104,   206,   106,
     107,   108,   109,   110,    10,    11,   111,   112,   113,   114,
     115,   116,    12,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,    24,     0,    25,
      26,    27,    28,    29,     0,    30,     0,    31,     1,    32,
       2,     3,    33,     0,     4,     5,     6,     7,     8,     0,
       0,     9,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,     0,     0,    12,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
      24,     5,    25,    26,    27,    28,    29,     9,    30,     0,
      31,     0,    32,    10,    11,    33,     0,     0,     0,     0,
       0,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,    24,     0,    25,    26,
      27,    28,    29,     9,     0,     0,    31,     0,     0,    10,
      11,    33,     0,     0,     0,     0,     0,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,    24,    89,    25,    26,    27,    28,    29,    90,
       0,     0,    31,     0,     9,     0,     0,    33,     0,    91,
      10,    11,     0,     0,     0,     0,     0,     0,    12,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,     0,    24,    89,    25,    26,    27,    28,    29,
       9,     0,     0,    31,     0,     0,    10,    11,    33,     0,
      91,     0,     0,     0,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,    24,
      89,    25,    26,    27,    28,    29,     9,     0,     0,    31,
       0,     0,    10,    11,    33,     0,     0,     0,     0,     0,
      12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,    24,     0,    25,    26,    27,
      28,    29,     0,     0,     0,    31,     0,     0,     0,     0,
      33,   104,   105,   106,   107,   108,   109,   110,     0,     0,
     111,   112,   113,   114,   115,   116,   104,   105,   106,   107,
     108,   109,   110,     0,     0,   111,   112,   113,   114,   115,
     116,     0,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,   110,     0,   199,   111,   112,   113,   114,
     115,   116,   104,   105,   106,   107,   108,   109,   110,     0,
     146,   111,   112,   113,   114,   115,   116,     0,     0,   141,
       0,     0,   104,   105,   106,   107,   108,   109,   110,     0,
     219,   111,   112,   113,   114,   115,   116,   104,   105,   106,
     107,   108,   109,   110,   117,     0,   111,   112,   113,   114,
     115,   116,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   110,     0,   117,   111,   112,   113,   114,   115,
     116,   104,   105,   106,   107,   108,   109,   110,     0,   188,
     111,   112,   113,   114,   115,   116,     0,     0,     0,   104,
     105,   106,   107,   108,   109,   110,     0,   181,   111,   112,
     113,   114,   115,   116,   104,   105,   106,   107,   108,   109,
     110,     0,   227,   111,   112,   113,   114,   115,   116,     0,
       0,     0,   104,   105,   106,   107,   108,   109,   110,     0,
     244,   111,   112,   113,   114,   115,   116,     0,     0,     0,
       0,   198,   104,   105,   106,   107,   108,   109,   110,     0,
       0,   111,   112,   113,   114,   115,   116,     0,     0,   202,
     104,   105,   106,   107,   108,   109,   110,     0,     0,   111,
     112,   113,   114,   115,   104,   105,   106,   107,   108,  -119,
    -119,     0,     0,   111,   112,   113,   114,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   111,   112,   113,   114
};

static const yytype_int16 yycheck[] =
{
       9,     8,   134,    12,    13,   145,    30,    55,     3,    33,
      48,    15,    50,    17,    96,    10,    11,     3,    31,    14,
      29,    16,    31,    14,    10,    11,    64,    65,    14,     3,
      16,    22,    23,    55,    51,    55,    10,    11,    55,   213,
      14,   185,    16,    81,    51,    62,   190,    57,    55,    62,
      59,   191,    51,    62,   228,    62,    55,    57,   232,    57,
      51,    49,    71,    62,    55,    17,    18,    19,   242,    49,
     214,    62,    67,    97,    15,    16,    17,    18,    19,    20,
      21,    67,    49,    24,    25,    26,    27,    28,    29,    17,
      18,    19,    49,    67,     0,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    55,   118,
     192,    55,   121,   122,   152,    56,   125,   249,    55,    55,
      61,   130,   131,    49,   133,   134,    55,    43,    44,    32,
      37,    38,    39,    49,   216,    57,   145,   146,    45,    49,
      47,    55,    49,   181,   153,    54,    59,    52,    55,    60,
      15,    16,    17,    18,    19,    20,    21,    56,   182,    24,
      25,    26,    27,    28,    29,    51,    49,    55,    49,    55,
      49,    55,    59,    59,    56,   184,    62,    55,    58,   203,
      56,    31,   191,    33,    34,    35,    36,    56,    56,    56,
     199,     7,    56,    58,    59,    57,    49,   206,   222,   223,
      56,    53,    56,   227,    15,    16,    17,    18,    19,     4,
     219,    57,    56,    24,    25,    26,    27,   226,    36,    13,
      97,   146,   146,   220,   248,    -1,   229,    -1,    -1,   253,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,    -1,
     249,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    -1,    47,
      48,    49,    50,    51,    -1,    53,    -1,    55,     3,    57,
       5,     6,    60,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    10,    47,    48,    49,    50,    51,    16,    53,    -1,
      55,    -1,    57,    22,    23,    60,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    45,    -1,    47,    48,
      49,    50,    51,    16,    -1,    -1,    55,    -1,    -1,    22,
      23,    60,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    16,    -1,    -1,    60,    -1,    62,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      16,    -1,    -1,    55,    -1,    -1,    22,    23,    60,    -1,
      62,    -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    16,    -1,    -1,    55,
      -1,    -1,    22,    23,    60,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    45,    -1,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    27,    28,    29,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    59,    24,    25,    26,    27,
      28,    29,    15,    16,    17,    18,    19,    20,    21,    -1,
      59,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      58,    24,    25,    26,    27,    28,    29,    15,    16,    17,
      18,    19,    20,    21,    57,    -1,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    57,    24,    25,    26,    27,    28,
      29,    15,    16,    17,    18,    19,    20,    21,    -1,    57,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    56,    24,    25,
      26,    27,    28,    29,    15,    16,    17,    18,    19,    20,
      21,    -1,    56,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      56,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    52,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    28,    29,    -1,    -1,    52,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    28,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     9,    10,    11,    12,    13,    16,
      22,    23,    30,    31,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    45,    47,    48,    49,    50,    51,
      53,    55,    57,    60,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    83,
      91,    92,    98,    99,   104,   107,   108,   111,   116,    55,
     101,   109,    55,    77,    79,    91,   112,    55,    93,    94,
     105,   106,    57,    57,    68,    77,    77,    68,    65,    68,
      77,    79,    71,    77,    71,    49,    49,    49,    49,    46,
      52,    62,    68,    84,    85,    86,    88,    67,    97,    68,
      92,    67,     0,    66,    15,    16,    17,    18,    19,    20,
      21,    24,    25,    26,    27,    28,    29,    57,    14,    22,
      23,    51,    55,    62,    80,    51,    62,    80,    80,    68,
      55,    55,    68,     8,    55,    77,    49,    55,    57,    68,
      32,    32,    89,    90,    49,    58,    59,    87,    52,    87,
      97,    54,    56,    61,    56,    60,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    81,    43,    44,    49,    68,    49,   100,    68,
      68,    56,    68,    81,    59,    55,    49,    95,    57,    49,
      55,    58,    68,    88,    85,    86,    80,    68,    52,    59,
      82,    56,    52,    56,   102,   110,    16,    67,   113,    68,
      95,    59,    96,    56,    55,    95,    68,    88,    87,    58,
      68,    67,    56,    56,    68,     7,    57,    56,    56,    49,
      98,    95,    56,    87,    68,    82,    67,    67,    68,    67,
      98,    96,    56,    98,    56,   103,   114,    98,     4,    57,
      67,    81,   115,    56,    67
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
      yyerror (parseArg, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (parseArg)
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
		  Type, Value, parseArg); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, SIN::ParseArguments & parseArg)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parseArg)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    SIN::ParseArguments & parseArg;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parseArg);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, SIN::ParseArguments & parseArg)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parseArg)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    SIN::ParseArguments & parseArg;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parseArg);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, SIN::ParseArguments & parseArg)
#else
static void
yy_reduce_print (yyvsp, yyrule, parseArg)
    YYSTYPE *yyvsp;
    int yyrule;
    SIN::ParseArguments & parseArg;
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
		       		       , parseArg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parseArg); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, SIN::ParseArguments & parseArg)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parseArg)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    SIN::ParseArguments & parseArg;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parseArg);

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
int yyparse (SIN::ParseArguments & parseArg);
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
yyparse (SIN::ParseArguments & parseArg)
#else
int
yyparse (parseArg)
    SIN::ParseArguments & parseArg;
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

    { CREATE_NODE(Method, "Method", (yyvsp[(1) - (1)].AST)); }
    break;

  case 97:

    {}
    break;

  case 98:

    { CREATE_NODE(LamdaMethod, "LamdaMethod", (yyvsp[(1) - (1)].AST));}
    break;

  case 99:

    {}
    break;

  case 100:

    {}
    break;

  case 101:

    { CREATE_NODE(Function, "function", (yyvsp[(1) - (1)].AST)); }
    break;

  case 102:

    {}
    break;

  case 103:

    { CREATE_NODE(LamdaFunction, "LamdaFunction", (yyvsp[(1) - (1)].AST));}
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

    { CREATE_NODE(If, "if", (yyvsp[(1) - (3)].AST)); }
    break;

  case 113:

    {}
    break;

  case 114:

    { CREATE_NODE(IfElse, "ifelse", (yyvsp[(1) - (1)].AST));}
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

    { CREATE_NODE(ReturnEmpty, "Return", (yyvsp[(1) - (1)].AST));}
    break;

  case 119:

    { }
    break;

  case 120:

    { CREATE_NODE(ReturnExpr, "ReturnExpr", (yyvsp[(1) - (1)].AST)); }
    break;

  case 121:

    { }
    break;

  case 122:

    {}
    break;

  case 123:

    {}
    break;

  case 124:

    {}
    break;

  case 125:

    { CREATE_NODE(While, "for", (yyvsp[(1) - (1)].AST));					}
    break;

  case 126:

    { /*CREATE_NODE(WhileCodition, "WhileCodition", $3);*/	}
    break;

  case 127:

    {}
    break;

  case 128:

    { CREATE_NODE(For, "for", (yyvsp[(1) - (1)].AST));						}
    break;

  case 129:

    { /*CREATE_NODE(ForInitList, "ForInitList", $3);*/	}
    break;

  case 130:

    { /*CREATE_NODE(ForCodition, "ForCodition", $5);*/		}
    break;

  case 131:

    { CREATE_NODE(ForRepeatList, "ForRepeatList", (yyvsp[(7) - (10)].AST));	}
    break;

  case 132:

    {}
    break;

  case 133:

    {}
    break;

  case 134:

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
      yyerror (parseArg, YY_("syntax error"));
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
	    yyerror (parseArg, yymsg);
	  }
	else
	  {
	    yyerror (parseArg, YY_("syntax error"));
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
		      yytoken, &yylval, parseArg);
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
		  yystos[yystate], yyvsp, parseArg);
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
  yyerror (parseArg, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parseArg);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parseArg);
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


int yyerror (SIN::ParseArguments & parseArg, char const* yaccProvidedMessage)
{
	SIN::String error = SIN::String() << yaccProvidedMessage;
	
	if (*yytext == 0)
		error << " maybe missing ';'";
	else
		error << ", before token: " << yytext;
	parseArg.SetError(std::make_pair(error, yylineno));
	return 1;
}



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
