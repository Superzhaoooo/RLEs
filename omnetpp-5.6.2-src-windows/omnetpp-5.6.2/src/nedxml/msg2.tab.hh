/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

#ifndef YY_MSG2YY_MSG2_TAB_HH_INCLUDED
# define YY_MSG2YY_MSG2_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int msg2yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAMESPACE = 258,
    CPLUSPLUS = 259,
    CPLUSPLUSBODY = 260,
    MESSAGE = 261,
    PACKET = 262,
    CLASS = 263,
    STRUCT = 264,
    ENUM = 265,
    NONCOBJECT = 266,
    EXTENDS = 267,
    ABSTRACT = 268,
    IMPORT = 269,
    USING = 270,
    NAME = 271,
    PROPNAME = 272,
    DOUBLECOLON = 273,
    INTCONSTANT = 274,
    REALCONSTANT = 275,
    STRINGCONSTANT = 276,
    CHARCONSTANT = 277,
    TRUE_ = 278,
    FALSE_ = 279,
    BOOLTYPE = 280,
    CHARTYPE = 281,
    SHORTTYPE = 282,
    INTTYPE = 283,
    LONGTYPE = 284,
    DOUBLETYPE = 285,
    UNSIGNED_ = 286,
    CONST_ = 287,
    STRINGTYPE = 288,
    EQ = 289,
    NE = 290,
    GE = 291,
    LE = 292,
    AND = 293,
    OR = 294,
    XOR = 295,
    NOT = 296,
    BIN_AND = 297,
    BIN_OR = 298,
    BIN_XOR = 299,
    BIN_COMPL = 300,
    SHIFT_LEFT = 301,
    SHIFT_RIGHT = 302,
    CHAR = 303,
    INVALID_CHAR = 304,
    UMIN = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE msg2yylval;
extern YYLTYPE msg2yylloc;
int msg2yyparse (omnetpp::nedxml::ParseContext *np);

#endif /* !YY_MSG2YY_MSG2_TAB_HH_INCLUDED  */
