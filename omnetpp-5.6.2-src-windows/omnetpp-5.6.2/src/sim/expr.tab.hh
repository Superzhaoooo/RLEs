/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_EXPRYY_EXPR_TAB_HH_INCLUDED
# define YY_EXPRYY_EXPR_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int expryydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOUBLETYPE = 258,
    INTTYPE = 259,
    STRINGTYPE = 260,
    BOOLTYPE = 261,
    XMLTYPE = 262,
    TRUE_ = 263,
    FALSE_ = 264,
    NAN_ = 265,
    INF_ = 266,
    THIS_ = 267,
    ASK_ = 268,
    DEFAULT_ = 269,
    CONST_ = 270,
    SIZEOF_ = 271,
    INDEX_ = 272,
    EXISTS = 273,
    TYPENAME = 274,
    XMLDOC_ = 275,
    NAME = 276,
    INTCONSTANT = 277,
    REALCONSTANT = 278,
    STRINGCONSTANT = 279,
    EQ_ = 280,
    NE_ = 281,
    GE_ = 282,
    LE_ = 283,
    AND_ = 284,
    OR_ = 285,
    XOR_ = 286,
    NOT_ = 287,
    BINAND_ = 288,
    BINOR_ = 289,
    BINXOR_ = 290,
    BINCOMPL_ = 291,
    SHIFTLEFT_ = 292,
    SHIFTRIGHT_ = 293,
    INVALID_CHAR = 294,
    UMIN_ = 295
  };
#endif
/* Tokens.  */
#define DOUBLETYPE 258
#define INTTYPE 259
#define STRINGTYPE 260
#define BOOLTYPE 261
#define XMLTYPE 262
#define TRUE_ 263
#define FALSE_ 264
#define NAN_ 265
#define INF_ 266
#define THIS_ 267
#define ASK_ 268
#define DEFAULT_ 269
#define CONST_ 270
#define SIZEOF_ 271
#define INDEX_ 272
#define EXISTS 273
#define TYPENAME 274
#define XMLDOC_ 275
#define NAME 276
#define INTCONSTANT 277
#define REALCONSTANT 278
#define STRINGCONSTANT 279
#define EQ_ 280
#define NE_ 281
#define GE_ 282
#define LE_ 283
#define AND_ 284
#define OR_ 285
#define XOR_ 286
#define NOT_ 287
#define BINAND_ 288
#define BINOR_ 289
#define BINXOR_ 290
#define BINCOMPL_ 291
#define SHIFTLEFT_ 292
#define SHIFTRIGHT_ 293
#define INVALID_CHAR 294
#define UMIN_ 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE expryylval;

int expryyparse (void);

#endif /* !YY_EXPRYY_EXPR_TAB_HH_INCLUDED  */
