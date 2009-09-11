
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

extern YYSTYPE yylval;


