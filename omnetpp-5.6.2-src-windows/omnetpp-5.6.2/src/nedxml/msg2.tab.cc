/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton implementation for Bison GLR parsers in C

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0




/* Substitute the variable and function names.  */
#define yyparse msg2yyparse
#define yylex   msg2yylex
#define yyerror msg2yyerror
#define yydebug msg2yydebug

#define yylval  msg2yylval
#define yychar  msg2yychar
#define yynerrs msg2yynerrs
#define yylloc  msg2yylloc

/* First part of user declarations.  */
#line 56 "msg2.y" /* glr.c:240  */


#include <cstdio>
#include <cstdlib>
#include "yydefs.h"
#include "common/commonutil.h"
#include "common/stringutil.h"
#include "errorstore.h"
#include "sourcedocument.h"
#include "exception.h"
#include "msgelements.h"

#define YYDEBUG 1           /* allow debugging */
#define YYDEBUGGING_ON 0    /* turn on/off debugging */

#if YYDEBUG != 0
#define YYERROR_VERBOSE     /* more detailed error messages */
#include <cstring>         /* YYVERBOSE needs it */
#endif

#define yylloc msg2yylloc
#define yyin msg2yyin
#define yyout msg2yyout
#define yyrestart msg2yyrestart
#define yy_scan_string msg2yy_scan_string
#define yy_delete_buffer msg2yy_delete_buffer
extern FILE *yyin;
extern FILE *yyout;
struct yy_buffer_state;
struct yy_buffer_state *yy_scan_string(const char *str);
void yy_delete_buffer(struct yy_buffer_state *);
void yyrestart(FILE *);
int yylex();
void yyerror (omnetpp::nedxml::ParseContext *np, const char *s);

#include "msgyyutil.h"

using namespace omnetpp;

using namespace omnetpp::common;
using namespace omnetpp::nedxml;
using namespace omnetpp::nedxml::msgyyutil;

static struct MSG2ParserState
{
    /* tmp flags, used with msg fields */
    bool isAbstract;
    bool isConst;
    bool isPointer;
    std::string dataType;

    std::vector<ASTNode *> propvals; // temporarily collects property values

    /* MSG-II: message subclassing */
    MsgFileElement *msgfile;
    NamespaceElement *namespacedecl;
    CplusplusElement *cplusplus;
    ImportElement *import;
    StructDeclElement *structdecl;
    ClassDeclElement *classdecl;
    MessageDeclElement *messagedecl;
    PacketDeclElement *packetdecl;
    EnumDeclElement *enumdecl;
    EnumElement *enump;
    MessageElement *messagep;
    PacketElement *packetp;
    ClassElement *classp;
    StructElement *structp;
    ASTNode *msgclassorstruct;
    EnumFieldElement *enumfield;
    FieldElement *field;
    PropertyElement *property;
    PropertyKeyElement *propkey;
} ps;

static void resetParserState()
{
    static MSG2ParserState cleanps;
    ps = cleanps;
}


#line 146 "msg2.tab.cc" /* glr.c:240  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "msg2.tab.hh"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;

/* Copy the second part of user declarations.  */

#line 179 "msg2.tab.cc" /* glr.c:263  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   268

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNRULES -- Number of states.  */
#define YYNSTATES  241
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 7
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    58,    71,     2,
      62,    63,    56,    54,    65,    55,    64,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    61,
      53,    68,    52,    50,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,    67,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    60
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   145,   145,   149,   150,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   164,   166,   168,   170,   172,   180,
     188,   189,   193,   194,   201,   212,   218,   229,   230,   234,
     234,   234,   234,   234,   234,   241,   251,   252,   256,   257,
     257,   257,   257,   257,   257,   264,   273,   280,   287,   298,
     307,   316,   329,   328,   339,   340,   344,   345,   349,   355,
     368,   373,   378,   383,   388,   394,   404,   410,   420,   426,
     436,   442,   452,   458,   459,   463,   464,   465,   466,   473,
     478,   487,   496,   505,   508,   512,   514,   516,   518,   523,
     525,   526,   527,   528,   530,   531,   532,   533,   535,   536,
     537,   542,   547,   552,   556,   560,   561,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   574,   574,   574,   574,
     574,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   576,   576,   576,   576,   576,   576,   580,   581,   582,
     586,   587,   591,   592,   599,   607,   608,   609,   620,   626,
     636,   640,   641,   645,   654,   666,   668,   673,   678,   686,
     687,   688,   689,   692,   692
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAMESPACE", "CPLUSPLUS",
  "CPLUSPLUSBODY", "MESSAGE", "PACKET", "CLASS", "STRUCT", "ENUM",
  "NONCOBJECT", "EXTENDS", "ABSTRACT", "IMPORT", "USING", "NAME",
  "PROPNAME", "DOUBLECOLON", "INTCONSTANT", "REALCONSTANT",
  "STRINGCONSTANT", "CHARCONSTANT", "TRUE_", "FALSE_", "BOOLTYPE",
  "CHARTYPE", "SHORTTYPE", "INTTYPE", "LONGTYPE", "DOUBLETYPE",
  "UNSIGNED_", "CONST_", "STRINGTYPE", "EQ", "NE", "GE", "LE", "AND", "OR",
  "XOR", "NOT", "BIN_AND", "BIN_OR", "BIN_XOR", "BIN_COMPL", "SHIFT_LEFT",
  "SHIFT_RIGHT", "CHAR", "INVALID_CHAR", "'?'", "':'", "'>'", "'<'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UMIN", "';'", "'('", "')'", "'.'",
  "','", "'{'", "'}'", "'='", "'['", "']'", "'&'", "'@'", "$accept",
  "msgfile", "definitions", "definition", "namespace_decl", "qname0",
  "qname", "fileproperty", "cplusplus", "targetspec", "targetitem",
  "import", "importspec", "importname", "struct_decl", "class_decl",
  "message_decl", "packet_decl", "enum_decl", "enum", "$@1",
  "opt_enumfields", "enumfields", "enumfield", "message", "packet",
  "class", "struct", "message_header", "packet_header", "class_header",
  "struct_header", "body", "opt_fields_and_properties",
  "fields_and_properties", "field", "fieldtypename", "fieldmodifiers",
  "fielddatatype", "fieldsimpledatatype", "opt_fieldvector", "fieldvalue",
  "fieldvalueitem", "enumvalue", "opt_inline_properties",
  "inline_properties", "property", "property_namevalue", "property_name",
  "opt_property_keys", "property_keys", "property_key", "property_values",
  "property_value", "property_literal", "opt_semicolon", YY_NULLPTR
};
#endif

#define YYPACT_NINF -99
#define YYTABLE_NINF -75

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     -99,    51,     4,   -99,    41,    10,    94,    94,    15,    94,
      22,   250,    75,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,     6,     6,
       6,     6,    43,    60,   -99,     9,    62,    44,    41,    87,
      16,    20,    94,    27,    30,   108,   -31,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,    -6,   -99,    56,    64,   -99,   -99,
      78,     7,   -99,    58,   204,   -99,    68,   -99,   -99,   -99,
     -99,    80,   142,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,    34,   -99,    87,    94,   -99,   -99,    94,   -99,
     -99,   102,    94,   -99,   -99,    94,   -99,   -99,   101,   -99,
     -99,   -99,   250,   148,    62,   -99,   -99,     5,    -1,    38,
     -99,   -99,   -99,   -99,   -99,   -99,    18,   222,   -99,   -99,
     155,   123,   -99,   -99,   -99,   117,   120,   -99,   118,   -99,
       1,   -99,   177,   -99,   119,   121,   -99,   -18,   136,   -99,
     168,   -99,   116,   -99,   133,   -99,   145,   -32,    -1,   -99,
     -99,   -99,   -99,   -99,   165,   -99,   -99,   -99,    80,    80,
     -99,   -99,    80,    62,   -99,   -99,   -99,   -99,   -99,   -27,
     159,   168,   -99,   -99,   -99,   -99,   -99,   154,   -99,   -99,
     -99,   -99,    82,   118,   -99,   -99,    45,    62,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,    97,
     -99,   -99,   -99,   209,   178,   -99,   -99,   180,   -99,   -99,
     -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned char yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    84,    84,
      84,    84,     0,   155,    21,     0,   174,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    38,     0,    37,   158,     0,    83,    60,
       0,    84,    77,   104,     0,    78,     0,    61,    62,    63,
      24,   168,     0,    19,   173,    25,    29,    30,    31,    32,
      33,    34,     0,    28,    22,     0,    49,    64,     0,    50,
      66,     0,     0,    46,    68,     0,    45,    70,     0,    51,
      52,    35,     0,     0,   174,    75,    76,     0,   151,    82,
     100,    90,    91,    92,    93,    98,     0,     0,    99,    89,
       0,    85,   154,   172,   171,     0,   160,   162,   164,   166,
     167,    20,     0,    27,     0,     0,    47,     0,     0,   157,
      55,    36,     0,    72,     0,   103,     0,     0,   150,   153,
      94,    95,    96,    97,    87,    81,    86,   156,   168,   168,
     170,   169,   168,   174,    65,    67,    48,    69,    71,     0,
       0,    54,    57,   159,   101,   102,    79,     0,   152,    88,
     161,   165,   167,   163,    26,    58,     0,   174,    56,   113,
     114,   109,   110,   107,   108,   111,   112,   120,   121,   123,
     125,   117,   118,   119,   139,   126,   127,   128,   140,   129,
     130,   115,   116,   122,   124,   131,   132,   133,   134,   135,
     136,   138,   143,   144,   141,   142,   145,   146,   137,   151,
     106,   149,   147,     0,     0,    53,   105,     0,   148,    59,
      80
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
     -99,   -99,   -99,   -99,   -99,    21,    -5,   -99,   -99,   -99,
     160,   -99,   -99,   141,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,    73,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,    37,   -99,   -99,   184,   -99,   -99,   -99,   129,
     -99,   -99,    25,   -99,    32,   -99,   201,    -2,   -99,   -99,
     -99,   106,   103,   109,   -48,   -98
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,    13,    14,    39,   119,    15,    16,    82,
      83,    17,    54,    55,    18,    19,    20,    21,    22,    23,
     140,   170,   171,   172,    24,    25,    26,    27,    28,    29,
      30,    31,    59,    60,    61,    62,    63,    64,   120,   121,
     108,   229,   230,   234,   147,   148,    65,    66,    33,   125,
     126,   127,   128,   129,   130,    75
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      32,    40,    41,    43,    44,    46,   143,     4,     5,    57,
       6,     7,     8,     9,    10,    36,    57,    57,    11,    58,
      58,    34,   160,    38,   144,    35,    42,    72,    85,   176,
      99,    34,    88,    38,   185,   100,   177,    91,    34,    92,
      38,   186,    95,   166,   150,   151,   152,   153,   167,   161,
      76,     3,    77,    78,   -21,   101,   -21,    34,   102,    84,
      76,   231,    77,    78,   232,   184,    67,    68,    69,   162,
      73,    12,    37,   -74,   -73,   145,    12,    86,    12,    12,
     134,    89,    87,   135,    45,    79,    90,   137,    93,   235,
     138,    96,    56,    94,   -21,    79,    97,   132,    80,    81,
     233,   123,   146,   160,    70,    72,   149,    57,    80,    81,
      34,   182,    38,   189,   182,   190,   191,   192,   193,   194,
     195,   196,    71,    74,    98,   103,    45,   107,   124,   122,
     161,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   104,   178,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   131,   222,
     223,   224,   225,   136,   139,   142,   226,   227,   228,    12,
     189,   155,   190,   191,   192,   193,   194,   195,   196,   156,
     157,   158,   163,   159,   169,   164,   173,   165,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   168,   174,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   175,   222,   223,   224,   225,
     109,   179,    38,   226,   227,   228,   187,   149,   238,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    34,   239,
      38,   240,   133,   141,   188,   105,   154,   110,   111,   112,
     113,   114,   115,   116,   236,   118,    47,    48,    49,    50,
      51,   237,   106,    52,   180,   183,    53,     0,   181
};

static const short int yycheck[] =
{
       2,     6,     7,     8,     9,    10,   104,     3,     4,    10,
       6,     7,     8,     9,    10,     5,    10,    10,    14,    13,
      13,    16,    21,    18,    19,     4,    11,    18,    12,    61,
      61,    16,    12,    18,    61,    66,    68,    42,    16,    12,
      18,    68,    12,    61,    26,    27,    28,    29,    66,    48,
      16,     0,    18,    19,    16,    61,    18,    16,    64,    38,
      16,    16,    18,    19,    19,   163,    29,    30,    31,    68,
      61,    72,    62,    67,    67,    70,    72,    61,    72,    72,
      85,    61,    66,    88,    62,    51,    66,    92,    61,   187,
      95,    61,    17,    66,    56,    51,    66,    63,    64,    65,
      55,    21,   107,    21,    61,    18,   108,    10,    64,    65,
      16,   159,    18,    16,   162,    18,    19,    20,    21,    22,
      23,    24,    62,    61,    16,    69,    62,    69,    48,    61,
      48,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    67,   148,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    16,    62,
      63,    64,    65,    61,    63,    17,    69,    70,    71,    72,
      16,    16,    18,    19,    20,    21,    22,    23,    24,    56,
      63,    61,     5,    65,    16,    66,    70,    66,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    66,    70,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    70,    62,    63,    64,    65,
      16,    56,    18,    69,    70,    71,    67,   229,    19,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    16,    61,
      18,    61,    82,   102,   171,    61,   117,    25,    26,    27,
      28,    29,    30,    31,   229,    33,     6,     7,     8,     9,
      10,   229,    61,    13,   158,   162,    16,    -1,   159
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    74,    75,     0,     3,     4,     6,     7,     8,     9,
      10,    14,    72,    76,    77,    80,    81,    84,    87,    88,
      89,    90,    91,    92,    97,    98,    99,   100,   101,   102,
     103,   104,   120,   121,    16,    78,     5,    62,    18,    78,
      79,    79,    11,    79,    79,    62,    79,     6,     7,     8,
       9,    10,    13,    16,    85,    86,    17,    10,    13,   105,
     106,   107,   108,   109,   110,   119,   120,   105,   105,   105,
      61,    62,    18,    61,    61,   128,    16,    18,    19,    51,
      64,    65,    82,    83,    78,    12,    61,    66,    12,    61,
      66,    79,    12,    61,    66,    12,    61,    66,    16,    61,
      66,    61,    64,    69,    67,   108,   119,    69,   113,    16,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    79,
     111,   112,    61,    21,    48,   122,   123,   124,   125,   126,
     127,    16,    63,    83,    79,    79,    61,    79,    79,    63,
      93,    86,    17,   128,    19,    70,    79,   117,   118,   120,
      26,    27,    28,    29,   112,    16,    56,    63,    61,    65,
      21,    48,    68,     5,    66,    66,    61,    66,    66,    16,
      94,    95,    96,    70,    70,    70,    61,    68,   120,    56,
     124,   126,   127,   125,   128,    61,    68,    67,    96,    16,
      18,    19,    20,    21,    22,    23,    24,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    62,    63,    64,    65,    69,    70,    71,   114,
     115,    16,    19,    55,   116,   128,   115,   117,    19,    61,
      61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    73,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      78,    78,    79,    79,    80,    81,    81,    82,    82,    83,
      83,    83,    83,    83,    83,    84,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    87,    88,    88,    88,    89,
      90,    91,    93,    92,    94,    94,    95,    95,    96,    96,
      97,    98,    99,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   106,   106,   107,   107,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   113,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     117,   117,   118,   118,   119,   120,   120,   120,   121,   121,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   127,   128,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     2,     1,     2,     3,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     4,     5,     3,
       3,     3,     0,     7,     1,     0,     2,     1,     2,     4,
       2,     2,     2,     2,     3,     5,     3,     5,     3,     5,
       3,     5,     3,     1,     0,     2,     2,     1,     1,     4,
       7,     3,     2,     1,     0,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       1,     3,     3,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     0,     2,     1,     2,     1,     4,     4,     2,     5,
       1,     3,     1,     3,     1,     3,     1,     1,     0,     2,
       2,     1,     1,     1,     0
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

/* Error token number */
#define YYTERROR 1


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

# define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)


YYSTYPE yylval;
YYLTYPE yylloc;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
  } while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, omnetpp::nedxml::ParseContext *np)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (np);
  if (!yyvaluep)
    return;
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, omnetpp::nedxml::ParseContext *np)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, np);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value, Location, np);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static _Noreturn void
yyFail (yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (np, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static _Noreturn void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp, YYLTYPE *yylocp, omnetpp::nedxml::ParseContext *np)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = (yystackp->yysplitPoint == YY_NULLPTR);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYUSE (np);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (np, YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

  switch (yyn)
    {
        case 14:
#line 165 "msg2.y" /* glr.c:816  */
    { if (np->getStoreSourceFlag()) ps.enump->setSourceCode(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc))); }
#line 1235 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 15:
#line 167 "msg2.y" /* glr.c:816  */
    { if (np->getStoreSourceFlag()) ps.messagep->setSourceCode(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc))); }
#line 1241 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 16:
#line 169 "msg2.y" /* glr.c:816  */
    { if (np->getStoreSourceFlag()) ps.packetp->setSourceCode(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc))); }
#line 1247 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 17:
#line 171 "msg2.y" /* glr.c:816  */
    { if (np->getStoreSourceFlag()) ps.classp->setSourceCode(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc))); }
#line 1253 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 18:
#line 173 "msg2.y" /* glr.c:816  */
    { if (np->getStoreSourceFlag()) ps.structp->setSourceCode(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc))); }
#line 1259 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 19:
#line 181 "msg2.y" /* glr.c:816  */
    {
                  ps.namespacedecl = (NamespaceElement *)createMsgElementWithTag(np, MSG_NAMESPACE, ps.msgfile );
                  ps.namespacedecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.namespacedecl,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1269 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 24:
#line 202 "msg2.y" /* glr.c:816  */
    {
                  storePos(np,  ps.property, (*yylocp));
                  storeBannerAndRightComments(np, ps.property,(*yylocp));
                }
#line 1278 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 25:
#line 213 "msg2.y" /* glr.c:816  */
    {
                  ps.cplusplus = (CplusplusElement *)createMsgElementWithTag(np, MSG_CPLUSPLUS, ps.msgfile );
                  ps.cplusplus->setBody(toString(np, trimDoubleBraces((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc))));
                  storeBannerAndRightComments(np, ps.cplusplus,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1288 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 26:
#line 219 "msg2.y" /* glr.c:816  */
    {
                  ps.cplusplus = (CplusplusElement *)createMsgElementWithTag(np, MSG_CPLUSPLUS, ps.msgfile );
                  ps.cplusplus->setTarget(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.cplusplus->setBody(toString(np, trimDoubleBraces((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc))));
                  storeBannerAndRightComments(np, ps.cplusplus,(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1299 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 35:
#line 242 "msg2.y" /* glr.c:816  */
    {
                  ps.import = (ImportElement *)createMsgElementWithTag(np, MSG_IMPORT, ps.msgfile);
                  ps.import->setImportSpec(removeSpaces(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  storePos(np,  ps.import,(*yylocp));
                  storeBannerAndRightComments(np, ps.import,(*yylocp));
                }
#line 1310 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 45:
#line 265 "msg2.y" /* glr.c:816  */
    {
                  ps.structdecl = (StructDeclElement *)createMsgElementWithTag(np, MSG_STRUCT_DECL, ps.msgfile );
                  ps.structdecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.structdecl,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1320 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 46:
#line 274 "msg2.y" /* glr.c:816  */
    {
                  ps.classdecl = (ClassDeclElement *)createMsgElementWithTag(np, MSG_CLASS_DECL, ps.msgfile );
                  ps.classdecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  ps.classdecl->setIsCobject(true);
                  storeBannerAndRightComments(np, ps.classdecl,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1331 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 47:
#line 281 "msg2.y" /* glr.c:816  */
    {
                  ps.classdecl = (ClassDeclElement *)createMsgElementWithTag(np, MSG_CLASS_DECL, ps.msgfile );
                  ps.classdecl->setIsCobject(false);
                  ps.classdecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.classdecl,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1342 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 48:
#line 288 "msg2.y" /* glr.c:816  */
    {
                  ps.classdecl = (ClassDeclElement *)createMsgElementWithTag(np, MSG_CLASS_DECL, ps.msgfile );
                  ps.classdecl->setIsCobject(true);
                  ps.classdecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.classdecl->setExtendsName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.classdecl,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1354 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 49:
#line 299 "msg2.y" /* glr.c:816  */
    {
                  ps.messagedecl = (MessageDeclElement *)createMsgElementWithTag(np, MSG_MESSAGE_DECL, ps.msgfile );
                  ps.messagedecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.messagedecl,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1364 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 50:
#line 308 "msg2.y" /* glr.c:816  */
    {
                  ps.packetdecl = (PacketDeclElement *)createMsgElementWithTag(np, MSG_PACKET_DECL, ps.msgfile );
                  ps.packetdecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.packetdecl,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1374 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 51:
#line 317 "msg2.y" /* glr.c:816  */
    {
                  ps.enumdecl = (EnumDeclElement *)createMsgElementWithTag(np, MSG_ENUM_DECL, ps.msgfile );
                  ps.enumdecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.enumdecl,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1384 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 52:
#line 329 "msg2.y" /* glr.c:816  */
    {
                  ps.enump = (EnumElement *)createMsgElementWithTag(np, MSG_ENUM, ps.msgfile );
                  ps.enump->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.enump,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1394 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 53:
#line 335 "msg2.y" /* glr.c:816  */
    { storeTrailingComment(np, ps.enump,(*yylocp)); }
#line 1400 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 58:
#line 350 "msg2.y" /* glr.c:816  */
    {
                  ps.enumfield = (EnumFieldElement *)createMsgElementWithTag(np, MSG_ENUM_FIELD, ps.enump);
                  ps.enumfield->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.enumfield,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1410 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 59:
#line 356 "msg2.y" /* glr.c:816  */
    {
                  ps.enumfield = (EnumFieldElement *)createMsgElementWithTag(np, MSG_ENUM_FIELD, ps.enump);
                  ps.enumfield->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.enumfield->setValue(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.enumfield,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1421 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 60:
#line 369 "msg2.y" /* glr.c:816  */
    { storeTrailingComment(np, ps.messagep,(*yylocp)); }
#line 1427 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 61:
#line 374 "msg2.y" /* glr.c:816  */
    { storeTrailingComment(np, ps.packetp,(*yylocp)); }
#line 1433 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 62:
#line 379 "msg2.y" /* glr.c:816  */
    { storeTrailingComment(np, ps.classp,(*yylocp)); }
#line 1439 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 63:
#line 384 "msg2.y" /* glr.c:816  */
    { storeTrailingComment(np, ps.structp,(*yylocp)); }
#line 1445 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 64:
#line 389 "msg2.y" /* glr.c:816  */
    {
                  ps.msgclassorstruct = ps.messagep = (MessageElement *)createMsgElementWithTag(np, MSG_MESSAGE, ps.msgfile );
                  ps.messagep->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.messagep,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1455 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 65:
#line 395 "msg2.y" /* glr.c:816  */
    {
                  ps.msgclassorstruct = ps.messagep = (MessageElement *)createMsgElementWithTag(np, MSG_MESSAGE, ps.msgfile );
                  ps.messagep->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.messagep->setExtendsName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.messagep,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1466 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 66:
#line 405 "msg2.y" /* glr.c:816  */
    {
                  ps.msgclassorstruct = ps.packetp = (PacketElement *)createMsgElementWithTag(np, MSG_PACKET, ps.msgfile );
                  ps.packetp->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.packetp,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1476 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 67:
#line 411 "msg2.y" /* glr.c:816  */
    {
                  ps.msgclassorstruct = ps.packetp = (PacketElement *)createMsgElementWithTag(np, MSG_PACKET, ps.msgfile );
                  ps.packetp->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.packetp->setExtendsName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.packetp,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1487 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 68:
#line 421 "msg2.y" /* glr.c:816  */
    {
                  ps.msgclassorstruct = ps.classp = (ClassElement *)createMsgElementWithTag(np, MSG_CLASS, ps.msgfile );
                  ps.classp->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.classp,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1497 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 69:
#line 427 "msg2.y" /* glr.c:816  */
    {
                  ps.msgclassorstruct = ps.classp = (ClassElement *)createMsgElementWithTag(np, MSG_CLASS, ps.msgfile );
                  ps.classp->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.classp->setExtendsName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.classp,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1508 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 70:
#line 437 "msg2.y" /* glr.c:816  */
    {
                  ps.msgclassorstruct = ps.structp = (StructElement *)createMsgElementWithTag(np, MSG_STRUCT, ps.msgfile );
                  ps.structp->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.structp,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1518 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 71:
#line 443 "msg2.y" /* glr.c:816  */
    {
                  ps.msgclassorstruct = ps.structp = (StructElement *)createMsgElementWithTag(np, MSG_STRUCT, ps.msgfile );
                  ps.structp->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.structp->setExtendsName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.structp,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1529 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 72:
#line 454 "msg2.y" /* glr.c:816  */
    { ps.msgclassorstruct = nullptr; }
#line 1535 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 79:
#line 474 "msg2.y" /* glr.c:816  */
    {
                  storeBannerAndRightComments(np, ps.field,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.field = nullptr; // important! see addProperty() calls
                }
#line 1544 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 80:
#line 479 "msg2.y" /* glr.c:816  */
    {
                  ps.field->setDefaultValue(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  storeBannerAndRightComments(np, ps.field,(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.field = nullptr; // important! see addProperty() calls
                }
#line 1554 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 81:
#line 488 "msg2.y" /* glr.c:816  */
    {
                  ps.field = (FieldElement *)createMsgElementWithTag(np, MSG_FIELD, ps.msgclassorstruct);
                  ps.field->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                  ps.field->setDataType(ps.dataType.c_str());
                  ps.field->setIsAbstract(ps.isAbstract);
                  ps.field->setIsConst(ps.isConst);
                  ps.field->setIsPointer(ps.isPointer);
                }
#line 1567 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 82:
#line 497 "msg2.y" /* glr.c:816  */
    {
                  ps.field = (FieldElement *)createMsgElementWithTag(np, MSG_FIELD, ps.msgclassorstruct);
                  ps.field->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                  ps.field->setIsAbstract(ps.isAbstract);
                }
#line 1577 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 83:
#line 506 "msg2.y" /* glr.c:816  */
    { ps.isAbstract = true; }
#line 1583 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 84:
#line 508 "msg2.y" /* glr.c:816  */
    { ps.isAbstract = false; }
#line 1589 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 85:
#line 513 "msg2.y" /* glr.c:816  */
    { ps.isConst = false; ps.isPointer = false; ps.dataType = toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)); }
#line 1595 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 86:
#line 515 "msg2.y" /* glr.c:816  */
    { ps.isConst = false; ps.isPointer = true; ps.dataType = toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)); }
#line 1601 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 87:
#line 517 "msg2.y" /* glr.c:816  */
    { ps.isConst = true; ps.isPointer = false; ps.dataType = toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));}
#line 1607 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 88:
#line 519 "msg2.y" /* glr.c:816  */
    { ps.isConst = true; ps.isPointer = true; ps.dataType = toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));}
#line 1613 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 101:
#line 543 "msg2.y" /* glr.c:816  */
    {
                  ps.field->setIsVector(true);
                  ps.field->setVectorSize(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                }
#line 1622 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 102:
#line 548 "msg2.y" /* glr.c:816  */
    {
                  ps.field->setIsVector(true);
                  ps.field->setVectorSize(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                }
#line 1631 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 103:
#line 553 "msg2.y" /* glr.c:816  */
    {
                  ps.field->setIsVector(true);
                }
#line 1639 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 154:
#line 600 "msg2.y" /* glr.c:816  */
    {
                  storePos(np,  ps.property, (*yylocp));
                  storeBannerAndRightComments(np, ps.property,(*yylocp));
                }
#line 1648 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 157:
#line 610 "msg2.y" /* glr.c:816  */
    {
                  ASTNode *propertyscope = ps.field ? ps.field : ps.msgclassorstruct ? ps.msgclassorstruct : ps.msgfile;
                  ps.property = addProperty(np, propertyscope, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.propkey = (PropertyKeyElement *)createMsgElementWithTag(np, MSG_PROPERTY_KEY, ps.property);
                  ps.propkey->appendChild(createPropertyValue(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  storePos(np,  ps.propkey, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 1660 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 158:
#line 621 "msg2.y" /* glr.c:816  */
    {
                  ASTNode *propertyscope = ps.field ? ps.field : ps.msgclassorstruct ? ps.msgclassorstruct : ps.msgfile;
                  ps.property = addProperty(np, propertyscope, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
#line 1670 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 159:
#line 627 "msg2.y" /* glr.c:816  */
    {
                  ASTNode *propertyscope = ps.field ? ps.field : ps.msgclassorstruct ? ps.msgclassorstruct : ps.msgfile;
                  ps.property = addProperty(np, propertyscope, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.property->setIndex(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
#line 1681 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 163:
#line 646 "msg2.y" /* glr.c:816  */
    {
                  ps.propkey = (PropertyKeyElement *)createMsgElementWithTag(np, MSG_PROPERTY_KEY, ps.property);
                  ps.propkey->setName(opp_trim(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc))).c_str());
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(np,  ps.propkey, (*yylocp));
                }
#line 1694 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 164:
#line 655 "msg2.y" /* glr.c:816  */
    {
                  ps.propkey = (PropertyKeyElement *)createMsgElementWithTag(np, MSG_PROPERTY_KEY, ps.property);
                  ps.propkey->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(np,  ps.propkey, (*yylocp));
                }
#line 1707 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 165:
#line 667 "msg2.y" /* glr.c:816  */
    { ps.propvals.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 1713 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 166:
#line 669 "msg2.y" /* glr.c:816  */
    { ps.propvals.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 1719 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 167:
#line 674 "msg2.y" /* glr.c:816  */
    {
                  ((*yyvalp)) = createPropertyValue(np, (*yylocp));
                }
#line 1727 "msg2.tab.cc" /* glr.c:816  */
    break;

  case 168:
#line 678 "msg2.y" /* glr.c:816  */
    {
                  LiteralElement *node = (LiteralElement *)createMsgElementWithTag(np, MSG_LITERAL);
                  node->setType(LIT_SPEC); // and leave both value and text at ""
                  ((*yyvalp)) = node;
                }
#line 1737 "msg2.tab.cc" /* glr.c:816  */
    break;


#line 1741 "msg2.tab.cc" /* glr.c:816  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, omnetpp::nedxml::ParseContext *np)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (np);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, omnetpp::nedxml::ParseContext *np)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval, &yys->yyloc, np);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete", yymsg);
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh, np);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-99)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YYASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YYASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule, omnetpp::nedxml::ParseContext *np)
{
  int yynrhs = yyrhsLength (yyrule);
  int yylow = 1;
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                       , &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)                       , np);
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE *yylocp, omnetpp::nedxml::ParseContext *np)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule, np));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp, yylocp, np);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      if (yynrhs == 0)
        /* Set default location.  */
        yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule, np));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, np);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval, omnetpp::nedxml::ParseContext *np)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval, &yyloc, np);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULLPTR;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, np));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp, np));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE *yylocp, omnetpp::nedxml::ParseContext *np)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp, np);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys, np);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    YYLTYPE yylloc_current = yylloc;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yylloc = yyopt->yyloc;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, np);
    yychar = yychar_current;
    yylval = yylval_current;
    yylloc = yylloc_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1, omnetpp::nedxml::ParseContext *np)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (np, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the locations for each of the YYN1 states in *YYSTACKP,
 *  ending at YYS1.  Has no effect on previously resolved states.
 *  The first semantic option of a state is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
                    yyGLRStack *yystackp, omnetpp::nedxml::ParseContext *np)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, np);
      if (!yys1->yyresolved)
        {
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          yySemanticOption *yyoption = yys1->yysemantics.yyfirstVal;
          YYASSERT (yyoption != YY_NULLPTR);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (yynrhs > 0)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp, np);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          {
            int yychar_current = yychar;
            YYSTYPE yylval_current = yylval;
            YYLTYPE yylloc_current = yylloc;
            yychar = yyoption->yyrawchar;
            yylval = yyoption->yyval;
            yylloc = yyoption->yyloc;
            YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
            yychar = yychar_current;
            yylval = yylval_current;
            yylloc = yylloc_current;
          }
        }
    }
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp, np);
              return yyreportAmbiguity (yybest, yyp, np);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, np);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other, &yydummy, np);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval, yylocp, np);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, np);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             , np));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn, omnetpp::nedxml::ParseContext *np)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule], np);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = yylex ();
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

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts], np);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn, np));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction], np);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (np, YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (np, yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (np, YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, np, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            /* We throw away the lookahead, but the error range
               of the shifted error token must take it into account.  */
            yyGLRState *yys = yystackp->yytops.yystates[0];
            yyGLRStackItem yyerror_range[3];
            yyerror_range[1].yystate.yyloc = yys->yyloc;
            yyerror_range[2].yystate.yyloc = yylloc;
            YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, &yylloc, np);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex ();
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
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, np, YY_NULLPTR);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              /* First adjust its location.*/
              YYLTYPE yyerrloc;
              yystackp->yyerror_range[2].yystate.yyloc = yylloc;
              YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys, np);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, np, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (omnetpp::nedxml::ParseContext *np)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;
  yylloc = yyloc_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
               yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, np);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, np));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = yylex ();
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

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
               yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, np);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, np));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, np));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, np, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack, np));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
           yystack.yyerror_range[1].yystate.yyloc = yylloc;
              yyreportSyntaxError (&yystack, np);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack, np));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, np);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (np, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, &yylloc, np);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                 yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
                  if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys, np);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULLPTR ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYASSERT (yyp->yystate.yyisState);
          YYASSERT (yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYASSERT (!yyp->yystate.yyisState);
          YYASSERT (!yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs
#undef yylloc

/* Substitute the variable and function names.  */
#define yyparse msg2yyparse
#define yylex   msg2yylex
#define yyerror msg2yyerror
#define yylval  msg2yylval
#define yychar  msg2yychar
#define yydebug msg2yydebug
#define yynerrs msg2yynerrs
#define yylloc  msg2yylloc

#line 694 "msg2.y" /* glr.c:2584  */


//----------------------------------------------------------------------
// general bison/flex stuff:
//
int msg2yylex_destroy();  // from lex.XXX.cc file

ASTNode *doParseMsg(ParseContext *np, const char *msgtext)
{
#if YYDEBUG != 0      /* #if added --VA */
    yydebug = YYDEBUGGING_ON;
#endif

    msg2yylex_destroy();

    DETECT_PARSER_REENTRY();

    // reset the lexer
    pos.co = 0;
    pos.li = 1;
    prevpos = pos;

    yyin = nullptr;
    yyout = stderr; // not used anyway

    // alloc buffer
    struct yy_buffer_state *handle = yy_scan_string(msgtext);
    if (!handle)
        {np->getErrors()->addError("", "unable to allocate work memory"); return nullptr;}

    // create parser state and NedFileElement
    resetParserState();
    ps.msgfile = new MsgFileElement();

    // store file name with slashes always, even on Windows -- neddoc relies on that
    ps.msgfile->setFilename(slashifyFilename(np->getFileName()).c_str());

    // store file comment
    storeFileComment(np, ps.msgfile);

    if (np->getStoreSourceFlag())
        storeSourceCode(np, ps.msgfile, np->getSource()->getFullTextPos());

    // parse
    try
    {
        yyparse(np);
    }
    catch (NedException& e)
    {
        yyerror(np, (std::string("error during parsing: ")+e.what()).c_str());
        yy_delete_buffer(handle);
        return 0;
    }

    yy_delete_buffer(handle);

    //FIXME TODO: fill in @documentation properties from comments
    return ps.msgfile;
}

void yyerror(ParseContext *np, const char *s)
{
    // chop newline
    char buf[250];
    strcpy(buf, s);
    if (buf[strlen(buf)-1] == '\n')
        buf[strlen(buf)-1] = '\0';

    np->error(buf, pos.li);
}
