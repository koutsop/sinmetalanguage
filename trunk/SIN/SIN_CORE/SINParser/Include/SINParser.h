
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

extern YYSTYPE yylval;


