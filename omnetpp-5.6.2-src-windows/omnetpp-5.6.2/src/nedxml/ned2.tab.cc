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
#define yyparse ned2yyparse
#define yylex   ned2yylex
#define yyerror ned2yyerror
#define yydebug ned2yydebug

#define yylval  ned2yylval
#define yychar  ned2yychar
#define yynerrs ned2yynerrs
#define yylloc  ned2yylloc

/* First part of user declarations.  */
#line 81 "ned2.y" /* glr.c:240  */


#include <cstdio>
#include <cstdlib>
#include <stack>
#include "common/commonutil.h"
#include "common/stringutil.h"
#include "yydefs.h"
#include "errorstore.h"
#include "sourcedocument.h"
#include "exception.h"
#include "nedelements.h"

#define YYDEBUG 1           /* allow debugging */
#define YYDEBUGGING_ON 0    /* turn on/off debugging */

#if YYDEBUG != 0
#define YYERROR_VERBOSE     /* more detailed error messages */
#include <cstring>         /* YYVERBOSE needs it */
#endif

/* increase GLR stack -- with the default 200 some NED files have reportedly caused a "memory exhausted" error */
#define YYINITDEPTH 500

#define yylloc ned2yylloc
#define yyin ned2yyin
#define yyout ned2yyout
#define yyrestart ned2yyrestart
#define yy_scan_string ned2yy_scan_string
#define yy_delete_buffer ned2yy_delete_buffer
extern FILE *yyin;
extern FILE *yyout;
struct yy_buffer_state;
struct yy_buffer_state *yy_scan_string(const char *str);
void yy_delete_buffer(struct yy_buffer_state *);
void yyrestart(FILE *);
int yylex();
void yyerror (omnetpp::nedxml::ParseContext *np, const char *s);

#include "nedutil.h"
#include "nedyyutil.h"

using namespace omnetpp;

using namespace omnetpp::common;
using namespace omnetpp::nedxml;
using namespace omnetpp::nedxml::nedyyutil;

static struct NedParserState
{
    bool inTypes;
    bool inConnGroup;
    std::stack<ASTNode *> propertyscope; // top(): where to insert properties as we parse them
    std::stack<ASTNode *> blockscope;    // top(): where to insert parameters, gates, etc
    std::stack<ASTNode *> typescope;     // top(): as blockscope, but ignore submodules and connection channels

    /* tmp flags, used with param, gate and conn */
    int paramType;
    int gateType;
    bool isVolatile;
    bool isDefault;
    YYLTYPE exprPos;
    int subgate;
    std::vector<ASTNode *> propvals; // temporarily collects property values

    /* tmp flags, used with msg fields */
    bool isAbstract;
    bool isReadonly;

    /* NED-II: modules, channels */
    NedFileElement *nedfile;
    CommentElement *comment;
    PackageElement *package;
    ImportElement *import;
    PropertyDeclElement *propertydecl;
    ExtendsElement *extends;
    InterfaceNameElement *interfacename;
    ASTNode *component;  // compound/simple module, module interface, channel or channel interface
    ParametersElement *parameters;
    ParamElement *param;
    PropertyElement *property;
    PropertyKeyElement *propkey;
    TypesElement *types;
    GatesElement *gates;
    GateElement *gate;
    SubmodulesElement *submods;
    SubmoduleElement *submod;
    ConnectionsElement *conns;
    ConnectionGroupElement *conngroup;
    ConnectionElement *conn;
    LoopElement *loop;
    ConditionElement *condition;
} ps;


static void resetParserState()
{
    static NedParserState cleanps;
    ps = cleanps;
}

static NedParserState globalps;  // for error recovery

static void restoreGlobalParserState()  // for error recovery
{
    ps = globalps;
}

static void assertNonEmpty(std::stack<ASTNode *>& somescope)
{
    // for error recovery: STL stack::top() crashes if stack is empty
    if (somescope.empty())
    {
        INTERNAL_ERROR0(nullptr, "error during parsing: scope stack empty");
        somescope.push(nullptr);
    }
}


#line 183 "ned2.tab.cc" /* glr.c:240  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "ned2.tab.hh"

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

#line 216 "ned2.tab.cc" /* glr.c:263  */

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
#define YYFINAL  91
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1368

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  346
/* YYNRULES -- Number of states.  */
#define YYNSTATES  595
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 22
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    95,    81,     2,     2,
      87,    88,    79,    77,    93,    78,    86,    80,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,    84,
      76,    94,    75,    73,    89,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,    91,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,     2,    85,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    83
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   207,   207,   209,   216,   217,   221,   222,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   254,   256,   258,
     260,   265,   275,   276,   283,   293,   294,   298,   299,   300,
     301,   302,   303,   310,   315,   323,   328,   337,   338,   342,
     343,   347,   359,   371,   370,   394,   393,   402,   404,   405,
     406,   410,   419,   420,   424,   437,   436,   460,   459,   469,
     470,   474,   475,   483,   482,   507,   506,   520,   519,   547,
     546,   560,   559,   587,   586,   603,   602,   627,   626,   639,
     648,   647,   657,   658,   662,   663,   667,   668,   672,   673,
     680,   686,   704,   711,   719,   741,   743,   745,   747,   749,
     754,   757,   761,   763,   765,   769,   777,   778,   782,   783,
     787,   788,   792,   793,   797,   798,   799,   800,   804,   805,
     806,   807,   808,   809,   810,   811,   815,   816,   817,   818,
     825,   833,   834,   838,   844,   854,   858,   859,   863,   872,
     884,   886,   891,   896,   904,   905,   906,   907,   914,   915,
     920,   919,   932,   933,   937,   941,   952,   951,   963,   968,
     974,   981,   985,   990,   999,  1001,  1003,  1011,  1012,  1017,
    1016,  1033,  1034,  1038,  1039,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1057,  1058,  1063,  1062,  1075,  1076,  1080,
    1081,  1085,  1091,  1090,  1110,  1115,  1125,  1130,  1139,  1141,
    1143,  1148,  1151,  1158,  1159,  1164,  1163,  1175,  1174,  1187,
    1188,  1192,  1193,  1197,  1198,  1211,  1210,  1232,  1235,  1239,
    1244,  1252,  1253,  1257,  1272,  1277,  1282,  1288,  1294,  1298,
    1305,  1306,  1310,  1316,  1324,  1329,  1335,  1344,  1351,  1359,
    1370,  1371,  1375,  1379,  1387,  1392,  1398,  1407,  1412,  1418,
    1427,  1438,  1442,  1444,  1443,  1458,  1459,  1463,  1471,  1473,
    1481,  1494,  1500,  1510,  1511,  1513,  1516,  1518,  1520,  1522,
    1524,  1526,  1528,  1539,  1541,  1543,  1545,  1547,  1549,  1552,
    1554,  1556,  1559,  1563,  1565,  1567,  1570,  1573,  1575,  1577,
    1580,  1582,  1584,  1587,  1589,  1591,  1593,  1595,  1597,  1599,
    1601,  1603,  1605,  1607,  1613,  1614,  1615,  1619,  1620,  1621,
    1625,  1627,  1629,  1631,  1636,  1638,  1640,  1642,  1644,  1649,
    1650,  1651,  1655,  1660,  1662,  1667,  1669,  1671,  1676,  1677,
    1678,  1679,  1683,  1684,  1685,  1689,  1690
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "PACKAGE", "PROPERTY",
  "MODULE", "SIMPLE", "NETWORK", "CHANNEL", "MODULEINTERFACE",
  "CHANNELINTERFACE", "EXTENDS", "LIKE", "TYPES", "PARAMETERS", "GATES",
  "SUBMODULES", "CONNECTIONS", "ALLOWUNCONNECTED", "DOUBLETYPE", "INTTYPE",
  "STRINGTYPE", "BOOLTYPE", "XMLTYPE", "VOLATILE", "INPUT_", "OUTPUT_",
  "INOUT_", "IF", "FOR", "RIGHTARROW", "LEFTARROW", "DBLARROW", "TO",
  "TRUE_", "FALSE_", "NAN_", "INF_", "THIS_", "DEFAULT", "ASK", "CONST_",
  "SIZEOF", "INDEX_", "EXISTS", "TYPENAME", "XMLDOC", "NAME", "PROPNAME",
  "INTCONSTANT", "REALCONSTANT", "STRINGCONSTANT", "CHARCONSTANT",
  "PLUSPLUS", "DOUBLEASTERISK", "EQ", "NE", "GE", "LE", "AND", "OR", "XOR",
  "NOT", "BIN_AND", "BIN_OR", "BIN_XOR", "BIN_COMPL", "SHIFT_LEFT",
  "SHIFT_RIGHT", "EXPRESSION_SELECTOR", "CHAR", "INVALID_CHAR", "'?'",
  "':'", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMIN",
  "';'", "'}'", "'.'", "'('", "')'", "'@'", "'['", "']'", "'{'", "','",
  "'='", "'$'", "$accept", "startsymbol", "nedfile", "definitions",
  "definition", "packagedeclaration", "dottedname", "import", "importspec",
  "importname", "propertydecl", "propertydecl_header",
  "opt_propertydecl_keys", "propertydecl_keys", "propertydecl_key",
  "fileproperty", "channeldefinition", "$@1", "channelheader", "$@2",
  "opt_inheritance", "extendsname", "likenames", "likename",
  "channelinterfacedefinition", "$@3", "channelinterfaceheader", "$@4",
  "opt_interfaceinheritance", "extendsnames", "simplemoduledefinition",
  "$@5", "simplemoduleheader", "$@6", "compoundmoduledefinition", "$@7",
  "compoundmoduleheader", "$@8", "networkdefinition", "$@9",
  "networkheader", "$@10", "moduleinterfacedefinition", "$@11",
  "moduleinterfaceheader", "$@12", "opt_paramblock", "$@13", "opt_params",
  "params", "paramsitem", "param", "param_typenamevalue", "param_typename",
  "pattern_value", "paramtype", "opt_volatile", "paramvalue",
  "opt_inline_properties", "inline_properties", "pattern", "pattern2",
  "pattern_elem", "pattern_name", "pattern_index", "property",
  "property_namevalue", "property_name", "opt_property_keys",
  "property_keys", "property_key", "property_values", "property_value",
  "property_literal", "opt_gateblock", "gateblock", "$@14", "opt_gates",
  "gates", "gate", "$@15", "gate_typenamesize", "gatetype",
  "opt_typeblock", "typeblock", "$@16", "opt_localtypes", "localtypes",
  "localtype", "opt_submodblock", "submodblock", "$@17", "opt_submodules",
  "submodules", "submodule", "$@18", "submoduleheader", "submodulename",
  "likeexpr", "opt_condition", "opt_connblock", "connblock", "$@19",
  "$@20", "opt_connections", "connections", "connectionsitem",
  "connectiongroup", "$@21", "opt_loops_and_conditions",
  "loops_and_conditions", "loop_or_condition", "loop", "connection",
  "leftgatespec", "leftmod", "leftgate", "parentleftgate", "rightgatespec",
  "rightmod", "rightgate", "parentrightgate", "opt_subgate", "channelspec",
  "$@22", "channelspec_header", "opt_channelname", "condition", "vector",
  "expression", "expr", "simple_expr", "funcname", "identifier",
  "operator", "literal", "stringliteral", "boolliteral", "numliteral",
  "quantity", "realconstant_ext", "opt_semicolon", YY_NULLPTR
};
#endif

#define YYPACT_NINF -464
#define YYTABLE_NINF -318

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
      28,   205,   -19,   -49,    40,    72,    76,   113,   180,   185,
     622,  -464,    25,    96,  -464,    43,  -464,  -464,  -464,  -464,
     243,  -464,  -464,     7,  -464,     9,  -464,    15,  -464,    17,
    -464,    18,  -464,    19,    24,    80,  -464,  -464,  -464,   298,
     221,  -464,   369,   149,    44,  -464,   166,  -464,   179,  -464,
     190,  -464,   204,  -464,   214,  -464,   167,   195,   246,  -464,
    -464,  -464,  -464,  -464,   252,   275,   303,   338,   341,  -464,
    -464,   290,   327,  -464,  -464,   622,   622,   622,   622,   460,
    -464,   345,  -464,  -464,  -464,  -464,  -464,  -464,   277,   398,
     366,  -464,  -464,    23,   383,   363,  -464,   391,  -464,   395,
    -464,   396,  -464,   397,  -464,   399,  -464,   400,  -464,  -464,
      23,  -464,   205,  -464,  -464,  -464,  -464,   435,   401,  -464,
     209,  -464,   209,  -464,   209,  -464,   209,  -464,   474,  -464,
     474,   622,   622,   622,   439,   622,   218,   404,   218,   440,
     622,  -464,  -464,  -464,  -464,  1007,   622,   622,   622,   622,
     622,   622,   622,   622,   622,   622,   622,   622,   622,   622,
     622,   622,   622,   622,   622,   622,   622,   427,   441,   445,
    -464,   446,  -464,  -464,   408,   414,  -464,   136,  -464,  -464,
    -464,   170,  -464,   170,  -464,   155,  -464,   169,  -464,   169,
    -464,   155,   411,   416,  -464,   409,  -464,   125,   221,  -464,
     410,   -19,   -19,  -464,  -464,  -464,  -464,   -19,  -464,  -464,
    1040,  1073,  1106,  -464,  1139,   295,   415,  -464,   418,  -464,
     979,  -464,   358,   358,   358,   358,  1286,   291,  1259,   224,
     512,   554,   315,   315,  1205,   358,   358,   362,   362,   422,
     422,   422,   422,  -464,   637,  -464,  -464,   417,   363,    23,
    -464,  -464,  -464,   433,  -464,   245,  -464,  -464,   192,   424,
    -464,   191,  -464,  -464,  -464,   363,  -464,   322,   429,   425,
    -464,    14,  -464,   426,   458,   496,   496,   496,   496,  -464,
      23,    23,    23,  -464,   473,   550,   473,   471,  -464,  -464,
     472,  -464,  -464,  -464,  -464,  -464,  -464,   481,   622,  -464,
     622,  -464,   484,  -464,  -464,   521,   520,   537,   489,  -464,
    -464,   197,  -464,  -464,  -464,  -464,  -464,   527,   510,   151,
    -464,  -464,    52,   192,  -464,  -464,   522,   501,  -464,   581,
     581,   519,  -464,  -464,   136,   409,   -19,   -19,   -19,   564,
     460,   675,  -464,   191,  -464,  -464,   566,  -464,  -464,   510,
    -464,   530,  -464,   535,  -464,  1232,  -464,   525,   538,   534,
     536,   543,  -464,  -464,   547,   612,  -464,   612,  -464,   471,
    -464,  -464,  -464,  -464,   622,  -464,  -464,   363,   622,  -464,
    -464,  -464,  -464,   259,  -464,   565,   619,  -464,   619,   713,
     556,   557,  -464,  -464,  -464,   558,  -464,   259,  -464,  -464,
     599,    50,  -464,    11,   567,  -464,   568,  -464,   622,  -464,
    -464,   274,  -464,  -464,   363,   559,   603,   606,   607,   608,
     614,   615,  -464,  -464,  -464,   579,  -464,   583,  -464,   584,
    -464,   585,  -464,   586,  -464,   587,  -464,    50,  -464,   632,
     609,  -464,  -464,  -464,   751,  -464,   590,   598,   367,  -464,
    -464,   594,  -464,   632,  -464,   239,   613,  -464,    41,  -464,
     622,  -464,  -464,  -464,   622,  -464,  -464,  -464,  -464,    42,
      41,   622,   638,   268,  -464,    41,  -464,  -464,   596,   597,
    -464,  -464,   378,   368,   605,  -464,  -464,   789,   155,   563,
      -3,   679,  -464,  -464,   610,   659,   -12,  -464,  -464,  -464,
     378,   624,   663,   672,   673,   674,  -464,   622,   496,   636,
    -464,   649,  -464,  -464,   -19,   622,  -464,  -464,  -464,   249,
    -464,  -464,     5,  -464,   640,  -464,   696,   646,    42,  -464,
     697,  -464,   695,   647,  -464,   827,   660,   622,  -464,    -3,
     712,    34,  -464,    38,  -464,   699,   701,  -464,   473,   745,
     701,   701,   112,  -464,   622,   676,   671,  -464,   622,   676,
    -464,  -464,   647,  -464,   288,  -464,   170,   -19,  -464,  -464,
    -464,  -464,   865,  -464,  -464,   686,  -464,  -464,   114,   677,
     473,  -464,   622,  -464,  -464,  -464,  -464,   903,  -464,   622,
     941,  -464,   622,  1172,  -464
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     3,     4,     7,     8,     9,    10,
     117,    11,    12,     0,    13,     0,    14,     0,    15,     0,
      16,     0,    17,     0,     0,   141,    40,    42,    41,     0,
      36,    33,     0,     0,     0,    79,     0,    75,     0,    83,
       0,    55,     0,    87,     0,    67,     0,     0,     0,   319,
     333,   334,   344,   343,     0,     0,     0,   324,     0,   328,
     318,   320,   335,   342,   332,     0,     0,     0,     0,     2,
     273,     0,   314,   315,   316,   329,   330,   331,   337,   336,
     143,     1,     6,    48,     0,   116,   119,     0,    53,     0,
      65,     0,    73,     0,    77,     0,    81,     0,    85,    52,
     153,    34,     0,    37,    39,    38,    31,     0,    45,    24,
      57,    22,    57,    26,    57,    30,    57,    28,    70,    20,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   292,   296,   282,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,   157,   156,     0,    47,    50,    51,    43,   118,
      29,   111,    19,   111,    21,   111,    23,    93,    25,    93,
      27,   111,     0,   145,   147,   149,   151,   152,    35,    32,
       0,     0,     0,    80,    76,    84,    56,     0,    88,    68,
       0,     0,     0,   321,     0,   320,     0,   325,     0,   322,
       0,   274,   283,   284,   286,   288,   289,   290,   291,   293,
     294,   295,   297,   298,     0,   285,   287,   276,   277,   278,
     279,   280,   281,   303,     0,   338,   339,     0,   117,     0,
     155,   154,   130,     0,   110,   128,   127,   132,     0,     0,
      89,    92,    95,    96,    98,   117,    99,     0,     0,     0,
     123,   124,    97,     0,     0,   159,   159,   159,   159,   142,
     153,   153,   153,    46,    61,    58,    64,    59,    63,    72,
      69,   301,   300,   302,   275,   327,   326,     0,     0,   304,
       0,   144,     0,    49,    90,     0,     0,   136,     0,    54,
      94,     0,   105,   106,   107,   108,   109,     0,     0,     0,
     133,   135,     0,     0,   140,    66,     0,     0,   158,   178,
     178,     0,   146,   150,   152,   148,     0,     0,     0,     0,
     299,     0,    44,    93,   129,   138,   139,   131,   100,     0,
     102,   114,   115,     0,   112,   272,   121,   128,   120,     0,
       0,     0,   160,    74,     0,   194,   177,   194,    86,    60,
      62,    71,   323,   305,     0,    91,   137,   117,     0,   104,
     126,   125,   134,   163,   179,     0,   214,   193,   214,     0,
       0,     0,   174,   175,   176,   171,   161,   162,   165,   166,
       0,   182,   195,     0,     0,   213,     0,   306,     0,   101,
     113,     0,   173,   164,   117,   168,     0,     0,     0,     0,
       0,     0,   192,   185,   186,     0,   187,     0,   188,     0,
     189,     0,   190,     0,   191,     0,   180,   181,   184,   198,
       0,   217,    78,    82,     0,   172,     0,     0,     0,   170,
     183,   206,   196,   197,   200,     0,     0,   215,   220,   307,
       0,   271,   167,   169,     0,   207,   199,   201,   202,     0,
     220,     0,     0,   261,   218,   219,   222,   223,     0,   227,
     230,   231,   228,     0,     0,   241,   232,     0,   111,     0,
     212,     0,   216,   270,     0,     0,   247,   242,   221,   225,
       0,     0,   268,   268,   268,     0,   308,     0,   159,     0,
     208,     0,   204,   211,     0,     0,   260,   249,   248,   228,
     229,   224,   261,   234,     0,   251,     0,   262,   265,   236,
       0,   238,     0,   261,   240,     0,     0,     0,   209,   212,
       0,   228,   269,   257,   253,     0,     0,   263,   266,     0,
       0,     0,   244,   309,     0,   346,     0,   205,     0,   346,
     259,   258,   261,   250,   261,   235,   111,     0,   237,   239,
     246,   245,     0,   345,   203,     0,   233,   226,   254,     0,
     267,   310,     0,   210,   256,   255,   264,     0,   311,     0,
       0,   312,     0,     0,   313
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -464,  -464,  -464,  -464,   749,  -464,    -1,  -464,  -464,   653,
    -357,  -464,  -464,  -464,   517,  -464,  -332,  -464,  -232,  -464,
     307,  -179,   431,   443,  -214,  -464,  -181,  -464,   654,  -464,
    -174,  -464,  -172,  -464,  -169,  -464,  -166,  -464,  -165,  -464,
    -164,  -464,  -163,  -464,  -160,  -464,  -180,  -464,   442,  -464,
     515,  -464,  -464,  -464,  -464,  -464,  -464,   434,  -242,  -464,
    -464,  -464,   468,  -464,    98,  -464,     2,  -464,  -464,  -464,
     516,   518,   523,  -106,  -263,  -464,  -464,  -464,  -464,   402,
    -464,  -464,  -464,   467,  -464,  -464,  -464,  -464,   361,   436,
    -464,  -464,  -464,  -464,   349,  -464,  -464,  -464,   286,   266,
     430,  -464,  -464,  -464,   351,   304,  -454,  -464,  -464,   340,
    -464,   325,  -464,  -464,  -464,  -464,  -464,  -464,  -388,  -464,
    -464,  -464,  -449,   -43,  -464,  -464,  -464,  -463,  -370,  -306,
     -10,  -464,  -464,   321,  -464,  -464,  -464,  -464,  -464,  -464,
     746,   276
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,   284,    18,    39,    40,
      19,    20,   174,   175,   176,    21,    22,   181,    23,   126,
     203,   285,   287,   288,    24,   183,    25,   130,   208,   290,
      26,   185,    27,   122,    28,   187,    29,   120,    30,   189,
      31,   124,    32,   191,    33,   128,   259,   343,   260,   261,
     262,   263,   264,   265,   266,   317,   267,   353,    94,    95,
     268,   269,   270,   271,   308,   272,   273,    35,   192,   193,
     194,   195,   196,   177,   327,   328,   383,   396,   397,   398,
     414,   399,   400,   365,   366,   401,   436,   437,   438,   386,
     387,   439,   452,   453,   454,   488,   455,   456,   491,   512,
     404,   405,   470,   458,   474,   475,   476,   477,   519,   478,
     479,   480,   481,   482,   483,   484,   534,   485,   523,   524,
     563,   525,   543,   526,   566,   527,   528,   486,   544,   446,
     355,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,   574
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      79,    42,    34,   274,   197,   275,   302,   276,    97,   277,
      99,   278,   354,   329,   330,   331,   101,    34,   103,   105,
     107,   498,    96,   311,   496,   412,   471,   513,   289,    41,
     440,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      43,    44,   517,   354,   423,   449,     1,     2,     3,     4,
       5,     6,     7,     8,     9,     3,   416,   417,   418,   419,
     420,   421,   320,   471,   472,   142,   143,   144,   145,   424,
     471,   472,   391,    46,    90,   172,   513,    48,   464,   542,
     423,   465,   473,   117,   552,   441,   306,   498,    45,   473,
      41,  -252,   560,   321,   173,   464,    91,   179,    10,    98,
     495,   100,   307,   497,   322,   424,   323,   102,   109,   104,
     106,   108,    11,   578,    50,   529,   531,    12,   489,   559,
      47,   210,   211,   212,    49,   214,   518,    11,   464,   119,
     220,   359,    12,  -228,   422,   390,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   244,   565,   371,
     252,    51,   568,   569,   252,   493,   570,   110,   584,   425,
     253,   -93,   447,   561,   197,   334,   334,   250,   252,   252,
     254,    52,   571,   511,   253,   253,    54,   426,   250,  -111,
    -111,  -111,  -111,  -111,   254,   254,   251,   356,   118,   357,
     252,   286,   464,   255,   464,   425,   256,   251,   585,   540,
     256,  -111,  -111,  -111,  -111,  -111,   254,   255,   255,   282,
     427,   201,   202,   426,   256,   256,   306,   428,    53,   429,
     257,   556,   430,    55,   257,   431,   432,   433,   434,   255,
     -93,   435,   307,   258,    12,   536,   256,   258,   257,   257,
      96,   121,   576,    36,   131,   -93,   427,    64,    12,    12,
      37,   258,   258,   428,   123,   429,   215,    96,   430,   113,
     257,   431,   432,   433,   434,   125,   114,   435,   471,   472,
      12,   348,   132,   258,    38,   392,   393,   394,   340,   127,
     341,   349,   156,   157,    56,    57,    58,   473,    59,   129,
     115,   161,   162,   163,   164,   165,   166,   395,   508,    60,
      61,    62,    63,    64,    62,    63,    65,    66,    67,    68,
      69,    70,    71,   467,    72,    73,    74,   168,    73,  -103,
      93,   468,    12,   133,  -103,   286,   286,    75,   134,  -103,
     305,    76,   312,   313,   314,   315,   316,   146,   147,   148,
     149,   150,    77,   152,  -243,   153,   154,   155,   464,   156,
     157,    78,   135,   495,   389,   445,   159,   160,   161,   162,
     163,   164,   165,   166,  -252,   141,   139,  -317,   464,    96,
     140,   139,   111,   495,   112,   140,   579,    56,    57,    58,
     136,    59,   161,   162,   163,   164,   165,   166,   444,   502,
     503,   504,    60,    61,    62,    63,    64,   471,   472,    65,
      66,    67,    68,    69,    70,    71,    96,    72,    73,    74,
     360,   361,   153,   154,   155,   137,   156,   157,   138,   204,
      75,   205,   167,   206,    76,   161,   162,   163,   164,   165,
     166,   163,   164,   165,   166,    77,   170,    56,    57,    58,
     487,    59,    12,   116,    78,   117,   171,   216,   463,   218,
     530,   532,    60,    61,    62,    63,    64,   178,   490,    65,
      66,    67,    68,    69,    70,    71,   180,    72,    73,    74,
     182,   184,   186,   199,   188,   190,   207,   213,   219,   245,
      75,   200,   217,   246,    76,   247,   248,   535,   249,   279,
     280,   283,   281,   295,   166,    77,   296,   304,   301,   309,
     324,   319,   326,   539,    78,   243,   146,   147,   148,   149,
     150,   151,   152,   318,   153,   154,   155,   548,   156,   157,
      56,    57,    58,   158,    59,   159,   160,   161,   162,   163,
     164,   165,   166,   325,   572,    60,    61,    62,    63,    64,
     351,   352,    65,    66,    67,    68,    69,    70,    71,   117,
      72,    73,    74,   336,   337,   338,   580,   339,   342,   344,
     345,   346,   587,    75,   347,   350,   153,    76,   155,   590,
     156,   157,   593,    56,    57,    58,   363,    59,    77,   161,
     162,   163,   164,   165,   166,   364,   362,    78,    60,    61,
      62,    63,    64,   509,   368,    65,    66,    67,    68,    69,
      70,    71,   372,    72,    73,    74,   376,   378,   153,   379,
     305,   384,   156,   157,  -122,   380,    75,   381,   382,   385,
      76,   161,   162,   163,   164,   165,   166,   403,   510,   402,
     409,    77,    56,    57,    58,   410,    59,   415,   411,   448,
      78,    45,   442,   443,    47,    49,    51,    60,    61,    62,
      63,    64,    53,    55,    65,    66,    67,    68,    69,    70,
      71,    98,    72,    73,    74,   100,   102,   104,   106,   108,
     451,   461,   462,   457,   464,    75,   494,   469,   499,    76,
     500,   505,   514,   146,   147,   148,   149,   150,   151,   152,
      77,   153,   154,   155,   515,   156,   157,   516,   521,    78,
     158,   522,   159,   160,   161,   162,   163,   164,   165,   166,
     522,   522,   533,   537,   538,   299,   545,   546,   551,   550,
     300,   146,   147,   148,   149,   150,   151,   152,   547,   153,
     154,   155,   495,   156,   157,   555,   558,   562,   158,   564,
     159,   160,   161,   162,   163,   164,   165,   166,   567,   575,
     573,   583,   586,   373,    92,   198,   303,   369,   374,   146,
     147,   148,   149,   150,   151,   152,   310,   153,   154,   155,
     370,   156,   157,   377,   209,   375,   158,   358,   159,   160,
     161,   162,   163,   164,   165,   166,   332,   367,   450,   413,
     335,   407,   466,   388,   333,   557,   408,   146,   147,   148,
     149,   150,   151,   152,   549,   153,   154,   155,   406,   156,
     157,   492,   501,   541,   158,   520,   159,   160,   161,   162,
     163,   164,   165,   166,   169,   577,     0,     0,     0,   459,
       0,     0,     0,     0,   460,   146,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,     0,   156,   157,     0,
       0,     0,   158,     0,   159,   160,   161,   162,   163,   164,
     165,   166,     0,     0,     0,     0,     0,   506,     0,     0,
       0,     0,   507,   146,   147,   148,   149,   150,   151,   152,
       0,   153,   154,   155,     0,   156,   157,     0,     0,     0,
     158,     0,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,     0,     0,     0,   553,     0,     0,     0,     0,
     554,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,     0,   156,   157,     0,     0,     0,   158,     0,
     159,   160,   161,   162,   163,   164,   165,   166,     0,     0,
       0,     0,     0,   581,     0,     0,     0,     0,   582,   146,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
       0,   156,   157,     0,     0,     0,   158,     0,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,     0,     0,
       0,   588,     0,     0,     0,     0,   589,   146,   147,   148,
     149,   150,   151,   152,     0,   153,   154,   155,     0,   156,
     157,     0,     0,     0,   158,     0,   159,   160,   161,   162,
     163,   164,   165,   166,     0,     0,     0,     0,     0,   591,
       0,     0,     0,     0,   592,   146,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,     0,   156,   157,     0,
       0,     0,   158,     0,   159,   160,   161,   162,   163,   164,
     165,   166,     0,   146,   147,   148,   149,   150,   151,   152,
     297,   153,   154,   155,     0,   156,   157,     0,     0,     0,
     158,     0,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,     0,     0,     0,   221,   146,   147,   148,   149,
     150,   151,   152,     0,   153,   154,   155,     0,   156,   157,
       0,     0,     0,   158,     0,   159,   160,   161,   162,   163,
     164,   165,   166,     0,     0,     0,     0,     0,   291,   146,
     147,   148,   149,   150,   151,   152,     0,   153,   154,   155,
       0,   156,   157,     0,     0,     0,   158,     0,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,     0,     0,
       0,   292,   146,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,     0,   156,   157,     0,     0,     0,   158,
       0,   159,   160,   161,   162,   163,   164,   165,   166,     0,
       0,     0,     0,     0,   293,   146,   147,   148,   149,   150,
     151,   152,     0,   153,   154,   155,     0,   156,   157,     0,
       0,     0,   158,     0,   159,   160,   161,   162,   163,   164,
     165,   166,     0,     0,     0,     0,     0,   294,   146,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,     0,
     156,   157,     0,     0,     0,   158,     0,   159,   160,   161,
     162,   163,   164,   165,   166,     0,     0,     0,     0,     0,
     594,   146,   147,   148,   149,   150,   151,   152,     0,   153,
     154,   155,     0,   156,   157,     0,     0,     0,   158,   298,
     159,   160,   161,   162,   163,   164,   165,   166,   146,   147,
     148,   149,   150,   151,   152,     0,   153,   154,   155,     0,
     156,   157,     0,     0,     0,   158,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   146,   147,   148,   149,   150,
       0,     0,     0,   153,   154,   155,     0,   156,   157,     0,
       0,     0,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   146,   147,   148,   149,     0,     0,     0,     0,
     153,   154,   155,     0,   156,   157,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,   165,   166
};

static const short int yycheck[] =
{
      10,     2,     0,   183,   110,   185,   248,   187,     1,   189,
       1,   191,   318,   276,   277,   278,     1,    15,     1,     1,
       1,   475,    20,   265,   473,   395,    29,   490,   207,    48,
      19,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      89,     1,    54,   349,   401,   415,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     5,     6,     7,     8,     9,
      10,    11,    48,    29,    30,    75,    76,    77,    78,   401,
      29,    30,   378,     1,    49,    52,   539,     1,    90,    74,
     437,   451,    48,    86,   533,    74,    34,   541,    48,    48,
      48,    86,    54,    79,    71,    90,     0,    95,    70,    92,
      95,    92,    50,   473,    90,   437,    92,    92,    84,    92,
      92,    92,    84,   562,     1,   503,   504,    89,    76,    85,
      48,   131,   132,   133,    48,   135,   496,    84,    90,    85,
     140,    79,    89,    92,    84,   377,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   546,   338,
       9,    48,   550,   551,     9,   471,    54,    87,    54,   401,
      15,    16,   414,   543,   280,   281,   282,    52,     9,     9,
      25,     1,   552,   489,    15,    15,     1,   401,    52,    20,
      21,    22,    23,    24,    25,    25,    71,    46,    49,    48,
       9,   202,    90,    48,    90,   437,    55,    71,   578,   515,
      55,    20,    21,    22,    23,    24,    25,    48,    48,    94,
     401,    12,    13,   437,    55,    55,    34,   401,    48,   401,
      79,   537,   401,    48,    79,   401,   401,   401,   401,    48,
      85,   401,    50,    92,    89,   508,    55,    92,    79,    79,
     248,    85,   558,    48,    87,    85,   437,    39,    89,    89,
      55,    92,    92,   437,    85,   437,    48,   265,   437,    48,
      79,   437,   437,   437,   437,    85,    55,   437,    29,    30,
      89,    84,    87,    92,    79,    26,    27,    28,   298,    85,
     300,    94,    68,    69,    20,    21,    22,    48,    24,    85,
      79,    77,    78,    79,    80,    81,    82,    48,   488,    35,
      36,    37,    38,    39,    37,    38,    42,    43,    44,    45,
      46,    47,    48,    84,    50,    51,    52,    50,    51,    84,
      87,    92,    89,    87,    89,   336,   337,    63,    86,    94,
      95,    67,    20,    21,    22,    23,    24,    56,    57,    58,
      59,    60,    78,    62,    86,    64,    65,    66,    90,    68,
      69,    87,    87,    95,   374,    91,    75,    76,    77,    78,
      79,    80,    81,    82,    86,    48,    86,    87,    90,   377,
      90,    86,    84,    95,    86,    90,   566,    20,    21,    22,
      87,    24,    77,    78,    79,    80,    81,    82,   408,    31,
      32,    33,    35,    36,    37,    38,    39,    29,    30,    42,
      43,    44,    45,    46,    47,    48,   414,    50,    51,    52,
     322,   323,    64,    65,    66,    87,    68,    69,    87,   122,
      63,   124,    87,   126,    67,    77,    78,    79,    80,    81,
      82,    79,    80,    81,    82,    78,    48,    20,    21,    22,
     460,    24,    89,    84,    87,    86,    90,   136,    91,   138,
     503,   504,    35,    36,    37,    38,    39,    84,   469,    42,
      43,    44,    45,    46,    47,    48,    85,    50,    51,    52,
      85,    85,    85,    48,    85,    85,    12,    48,    48,    48,
      63,    90,    88,    48,    67,    49,    88,   507,    84,    88,
      84,    91,    93,    88,    82,    78,    88,    74,    91,    85,
      84,    86,    16,   514,    87,    88,    56,    57,    58,    59,
      60,    61,    62,    94,    64,    65,    66,   528,    68,    69,
      20,    21,    22,    73,    24,    75,    76,    77,    78,    79,
      80,    81,    82,    85,   554,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    86,
      50,    51,    52,    13,    93,    93,   567,    86,    84,    48,
      50,    34,   582,    63,    85,    48,    64,    67,    66,   589,
      68,    69,   592,    20,    21,    22,    85,    24,    78,    77,
      78,    79,    80,    81,    82,    14,    74,    87,    35,    36,
      37,    38,    39,    40,    85,    42,    43,    44,    45,    46,
      47,    48,    48,    50,    51,    52,    50,    87,    64,    84,
      95,    74,    68,    69,    86,    91,    63,    91,    85,    17,
      67,    77,    78,    79,    80,    81,    82,    18,    75,    74,
      84,    78,    20,    21,    22,    88,    24,    48,    90,    90,
      87,    48,    85,    85,    48,    48,    48,    35,    36,    37,
      38,    39,    48,    48,    42,    43,    44,    45,    46,    47,
      48,    92,    50,    51,    52,    92,    92,    92,    92,    92,
      48,    91,    84,    74,    90,    63,    48,    74,    92,    67,
      93,    86,    13,    56,    57,    58,    59,    60,    61,    62,
      78,    64,    65,    66,    94,    68,    69,    48,    84,    87,
      73,    48,    75,    76,    77,    78,    79,    80,    81,    82,
      48,    48,    48,    87,    75,    88,    86,    31,    33,    32,
      93,    56,    57,    58,    59,    60,    61,    62,    92,    64,
      65,    66,    95,    68,    69,    85,    34,    48,    73,    48,
      75,    76,    77,    78,    79,    80,    81,    82,    13,    88,
      84,    75,    85,    88,    15,   112,   249,   336,    93,    56,
      57,    58,    59,    60,    61,    62,   261,    64,    65,    66,
     337,    68,    69,   349,   130,   343,    73,   319,    75,    76,
      77,    78,    79,    80,    81,    82,   280,   330,   437,   397,
     282,    88,   453,   367,   281,   539,    93,    56,    57,    58,
      59,    60,    61,    62,   528,    64,    65,    66,   388,    68,
      69,   470,   482,   519,    73,   500,    75,    76,    77,    78,
      79,    80,    81,    82,    88,   559,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    93,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    73,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    93,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      73,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      93,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    73,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    93,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    73,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    93,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    73,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    56,    57,    58,    59,    60,    61,    62,
      91,    64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      73,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    88,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    73,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    88,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    73,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    88,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    88,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    73,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    88,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    73,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      88,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    73,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      70,    84,    89,    97,    98,    99,   100,   101,   103,   106,
     107,   111,   112,   114,   120,   122,   126,   128,   130,   132,
     134,   136,   138,   140,   162,   163,    48,    55,    79,   104,
     105,    48,   102,    89,     1,    48,     1,    48,     1,    48,
       1,    48,     1,    48,     1,    48,    20,    21,    22,    24,
      35,    36,    37,    38,    39,    42,    43,    44,    45,    46,
      47,    48,    50,    51,    52,    63,    67,    78,    87,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
      49,     0,   100,    87,   154,   155,   162,     1,    92,     1,
      92,     1,    92,     1,    92,     1,    92,     1,    92,    84,
      87,    84,    86,    48,    55,    79,    84,    86,    49,    85,
     133,    85,   129,    85,   137,    85,   115,    85,   141,    85,
     123,    87,    87,    87,    86,    87,    87,    87,    87,    86,
      90,    48,   226,   226,   226,   226,    56,    57,    58,    59,
      60,    61,    62,    64,    65,    66,    68,    69,    73,    75,
      76,    77,    78,    79,    80,    81,    82,    87,    50,   236,
      48,    90,    52,    71,   108,   109,   110,   169,    84,   162,
      85,   113,    85,   121,    85,   127,    85,   131,    85,   135,
      85,   139,   164,   165,   166,   167,   168,   169,   105,    48,
      90,    12,    13,   116,   116,   116,   116,    12,   124,   124,
     226,   226,   226,    48,   226,    48,   229,    88,   229,    48,
     226,    88,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,    88,   226,    48,    48,    49,    88,    84,
      52,    71,     9,    15,    25,    48,    55,    79,    92,   142,
     144,   145,   146,   147,   148,   149,   150,   152,   156,   157,
     158,   159,   161,   162,   142,   142,   142,   142,   142,    88,
      84,    93,    94,    91,   102,   117,   102,   118,   119,   117,
     125,    88,    88,    88,    88,    88,    88,    91,    74,    88,
      93,    91,   154,   110,    74,    95,    34,    50,   160,    85,
     146,   154,    20,    21,    22,    23,    24,   151,    94,    86,
      48,    79,    90,    92,    84,    85,    16,   170,   171,   170,
     170,   170,   166,   168,   169,   167,    13,    93,    93,    86,
     226,   226,    84,   143,    48,    50,    34,    85,    84,    94,
      48,    40,    41,   153,   225,   226,    46,    48,   158,    79,
     160,   160,    74,    85,    14,   179,   180,   179,    85,   118,
     119,   117,    48,    88,    93,   144,    50,   153,    87,    84,
      91,    91,    85,   172,    74,    17,   185,   186,   185,   226,
     154,   225,    26,    27,    28,    48,   173,   174,   175,   177,
     178,   181,    74,    18,   196,   197,   196,    88,    93,    84,
      88,    90,   224,   175,   176,    48,     6,     7,     8,     9,
      10,    11,    84,   106,   112,   114,   120,   122,   126,   128,
     130,   132,   134,   136,   138,   140,   182,   183,   184,   187,
      19,    74,    85,    85,   226,    91,   225,   154,    90,   224,
     184,    48,   188,   189,   190,   192,   193,    74,   199,    88,
      93,    91,    84,    91,    90,   224,   190,    84,    92,    74,
     198,    29,    30,    48,   200,   201,   202,   203,   205,   206,
     207,   208,   209,   210,   211,   213,   223,   226,   191,    76,
     102,   194,   200,   225,    48,    95,   218,   224,   202,    92,
      93,   205,    31,    32,    33,    86,    88,    93,   142,    40,
      75,   225,   195,   223,    13,    94,    48,    54,   224,   204,
     207,    84,    48,   214,   215,   217,   219,   221,   222,   214,
     219,   214,   219,    48,   212,   226,   170,    87,    75,   102,
     225,   201,    74,   218,   224,    86,    31,    92,   102,   194,
      32,    33,   218,    88,    93,    85,   225,   195,    34,    85,
      54,   224,    48,   216,    48,   214,   220,    13,   214,   214,
      54,   224,   226,    84,   237,    88,   225,   237,   218,   142,
     102,    88,    93,    75,    54,   224,    85,   226,    88,    93,
     226,    88,    93,   226,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   101,   102,   102,   103,   104,   104,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   111,   113,   112,   115,   114,   116,   116,   116,
     116,   117,   118,   118,   119,   121,   120,   123,   122,   124,
     124,   125,   125,   127,   126,   129,   128,   131,   130,   133,
     132,   135,   134,   137,   136,   139,   138,   141,   140,   142,
     143,   142,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   151,   151,   151,   151,   151,
     152,   152,   153,   153,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   158,   158,   159,   159,
     159,   159,   159,   159,   159,   159,   160,   160,   160,   160,
     161,   162,   162,   163,   163,   164,   165,   165,   166,   166,
     167,   167,   168,   168,   169,   169,   169,   169,   170,   170,
     172,   171,   173,   173,   174,   174,   176,   175,   177,   177,
     177,   177,   177,   177,   178,   178,   178,   179,   179,   181,
     180,   182,   182,   183,   183,   184,   184,   184,   184,   184,
     184,   184,   184,   185,   185,   187,   186,   188,   188,   189,
     189,   190,   191,   190,   192,   192,   193,   193,   194,   194,
     194,   195,   195,   196,   196,   198,   197,   199,   197,   200,
     200,   201,   201,   202,   202,   204,   203,   205,   205,   206,
     206,   207,   207,   208,   209,   209,   209,   209,   209,   209,
     210,   210,   211,   211,   212,   212,   212,   213,   213,   213,
     214,   214,   215,   215,   216,   216,   216,   217,   217,   217,
     218,   218,   219,   220,   219,   221,   221,   221,   222,   222,
     223,   224,   225,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   227,   227,   227,   228,   228,   228,
     229,   229,   229,   229,   230,   230,   230,   230,   230,   231,
     231,   231,   232,   233,   233,   234,   234,   234,   235,   235,
     235,   235,   236,   236,   236,   237,   237
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       1,     1,     1,     3,     6,     3,     5,     1,     0,     3,
       1,     1,     2,     0,     5,     0,     4,     0,     2,     2,
       4,     1,     3,     1,     1,     0,     5,     0,     4,     2,
       0,     3,     1,     0,     6,     0,     4,     0,     9,     0,
       4,     0,     9,     0,     4,     0,     6,     0,     4,     1,
       0,     4,     1,     0,     2,     1,     1,     1,     1,     1,
       3,     6,     3,     1,     4,     1,     1,     1,     1,     1,
       1,     0,     1,     4,     1,     1,     1,     0,     2,     1,
       3,     3,     3,     1,     1,     4,     4,     1,     1,     3,
       1,     3,     1,     2,     4,     2,     1,     3,     2,     2,
       2,     1,     4,     2,     5,     1,     3,     1,     3,     1,
       3,     1,     1,     0,     2,     2,     1,     1,     1,     0,
       0,     4,     1,     0,     2,     1,     0,     4,     2,     4,
       3,     1,     3,     2,     1,     1,     1,     1,     0,     0,
       4,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     4,     1,     0,     2,
       1,     2,     0,     7,     4,     6,     1,     2,     2,     3,
       6,     1,     0,     1,     0,     0,     5,     0,     4,     1,
       0,     2,     1,     1,     3,     0,     6,     1,     0,     3,
       1,     1,     1,     6,     3,     5,     3,     5,     3,     5,
       3,     1,     2,     1,     2,     3,     3,     2,     3,     3,
       3,     1,     1,     2,     2,     3,     3,     2,     3,     3,
       2,     0,     1,     0,     5,     1,     2,     4,     0,     2,
       2,     3,     1,     1,     3,     4,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     2,     3,     3,     5,
       4,     4,     4,     3,     4,     6,     8,    10,    12,    14,
      16,    18,    20,    22,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     6,     1,     3,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2,     1,     1,     1,     1,     0
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
       0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     9,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
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
       0,   272,     0,   261,     0,   268,     0,   268,     0,   268,
       0,   261,     0,   261,     0
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
        case 2:
#line 208 "ned2.y" /* glr.c:816  */
    { ps.nedfile->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 1853 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 19:
#line 239 "ned2.y" /* glr.c:816  */
    { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 1859 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 20:
#line 241 "ned2.y" /* glr.c:816  */
    { restoreGlobalParserState(); }
#line 1865 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 21:
#line 243 "ned2.y" /* glr.c:816  */
    { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 1871 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 22:
#line 245 "ned2.y" /* glr.c:816  */
    { restoreGlobalParserState(); }
#line 1877 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 23:
#line 247 "ned2.y" /* glr.c:816  */
    { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 1883 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 24:
#line 249 "ned2.y" /* glr.c:816  */
    { restoreGlobalParserState(); }
#line 1889 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 25:
#line 251 "ned2.y" /* glr.c:816  */
    { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 1895 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 26:
#line 253 "ned2.y" /* glr.c:816  */
    { restoreGlobalParserState(); }
#line 1901 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 27:
#line 255 "ned2.y" /* glr.c:816  */
    { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 1907 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 28:
#line 257 "ned2.y" /* glr.c:816  */
    { restoreGlobalParserState(); }
#line 1913 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 29:
#line 259 "ned2.y" /* glr.c:816  */
    { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 1919 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 30:
#line 261 "ned2.y" /* glr.c:816  */
    { restoreGlobalParserState(); }
#line 1925 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 31:
#line 266 "ned2.y" /* glr.c:816  */
    {
                  ps.package = (PackageElement *)createNedElementWithTag(np, NED_PACKAGE, ps.nedfile);
                  ps.package->setName(removeSpaces(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  storePos(np,  ps.package,(*yylocp));
                  storeBannerAndRightComments(np, ps.package,(*yylocp));
                }
#line 1936 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 34:
#line 284 "ned2.y" /* glr.c:816  */
    {
                  ps.import = (ImportElement *)createNedElementWithTag(np, NED_IMPORT, ps.nedfile);
                  ps.import->setImportSpec(removeSpaces(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  storePos(np,  ps.import,(*yylocp));
                  storeBannerAndRightComments(np, ps.import,(*yylocp));
                }
#line 1947 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 43:
#line 311 "ned2.y" /* glr.c:816  */
    {
                    storePos(np,  ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(np, ps.propertydecl,(*yylocp));
                }
#line 1956 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 44:
#line 316 "ned2.y" /* glr.c:816  */
    {
                    storePos(np,  ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(np, ps.propertydecl,(*yylocp));
                }
#line 1965 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 45:
#line 324 "ned2.y" /* glr.c:816  */
    {
                  ps.propertydecl = (PropertyDeclElement *)createNedElementWithTag(np, NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 1974 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 46:
#line 329 "ned2.y" /* glr.c:816  */
    {
                  ps.propertydecl = (PropertyDeclElement *)createNedElementWithTag(np, NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  ps.propertydecl->setIsArray(true);
                }
#line 1984 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 51:
#line 348 "ned2.y" /* glr.c:816  */
    {
                  ps.propkey = (PropertyKeyElement *)createNedElementWithTag(np, NED_PROPERTY_KEY, ps.propertydecl);
                  ps.propkey->setName(opp_trim(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc))).c_str());
                  storePos(np,  ps.propkey, (*yylocp));
                }
#line 1994 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 52:
#line 360 "ned2.y" /* glr.c:816  */
    {
                  storePos(np,  ps.property, (*yylocp));
                  storeBannerAndRightComments(np, ps.property,(*yylocp));
                }
#line 2003 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 53:
#line 371 "ned2.y" /* glr.c:816  */
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2015 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 54:
#line 380 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np,  ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2030 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 55:
#line 394 "ned2.y" /* glr.c:816  */
    {
                  ps.component = (ChannelElement *)createNedElementWithTag(np, NED_CHANNEL, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile);
                  ((ChannelElement *)ps.component)->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2039 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 56:
#line 399 "ned2.y" /* glr.c:816  */
    { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2045 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 61:
#line 411 "ned2.y" /* glr.c:816  */
    {
                  ps.extends = (ExtendsElement *)createNedElementWithTag(np, NED_EXTENDS, ps.component);
                  ps.extends->setName(removeSpaces(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                  storePos(np,  ps.extends, (*yylocp));
                }
#line 2055 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 64:
#line 425 "ned2.y" /* glr.c:816  */
    {
                  ps.interfacename = (InterfaceNameElement *)createNedElementWithTag(np, NED_INTERFACE_NAME, ps.component);
                  ps.interfacename->setName(removeSpaces(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                  storePos(np, ps.interfacename, (*yylocp));
                }
#line 2065 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 65:
#line 437 "ned2.y" /* glr.c:816  */
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2077 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 66:
#line 446 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2092 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 67:
#line 460 "ned2.y" /* glr.c:816  */
    {
                  ps.component = (ChannelInterfaceElement *)createNedElementWithTag(np, NED_CHANNEL_INTERFACE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile);
                  ((ChannelInterfaceElement *)ps.component)->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2101 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 68:
#line 465 "ned2.y" /* glr.c:816  */
    { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2107 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 73:
#line 483 "ned2.y" /* glr.c:816  */
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2119 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 74:
#line 493 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2134 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 75:
#line 507 "ned2.y" /* glr.c:816  */
    {
                  ps.component = (SimpleModuleElement *)createNedElementWithTag(np, NED_SIMPLE_MODULE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile );
                  ((SimpleModuleElement *)ps.component)->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2143 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 76:
#line 512 "ned2.y" /* glr.c:816  */
    { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2149 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 77:
#line 520 "ned2.y" /* glr.c:816  */
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2161 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 78:
#line 533 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2176 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 79:
#line 547 "ned2.y" /* glr.c:816  */
    {
                  ps.component = (CompoundModuleElement *)createNedElementWithTag(np, NED_COMPOUND_MODULE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2185 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 80:
#line 552 "ned2.y" /* glr.c:816  */
    { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2191 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 81:
#line 560 "ned2.y" /* glr.c:816  */
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)ps.component->getFirstChildWithTag(NED_PARAMETERS); // networkheader already created it for @isNetwork
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2203 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 82:
#line 573 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2218 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 83:
#line 587 "ned2.y" /* glr.c:816  */
    {
                  ps.component = (CompoundModuleElement *)createNedElementWithTag(np, NED_COMPOUND_MODULE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2227 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 84:
#line 592 "ned2.y" /* glr.c:816  */
    {
                  setIsNetworkProperty(np, ps.component);
                  storeBannerAndRightComments(np, ps.component,(*yylocp));
                }
#line 2236 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 85:
#line 603 "ned2.y" /* glr.c:816  */
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2248 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 86:
#line 613 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2263 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 87:
#line 627 "ned2.y" /* glr.c:816  */
    {
                  ps.component = (ModuleInterfaceElement *)createNedElementWithTag(np, NED_MODULE_INTERFACE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile);
                  ((ModuleInterfaceElement *)ps.component)->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2272 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 88:
#line 632 "ned2.y" /* glr.c:816  */
    { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2278 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 89:
#line 640 "ned2.y" /* glr.c:816  */
    {
                  storePos(np, ps.parameters, (*yylocp));
                  if (!ps.parameters->getFirstChild()) { // delete "parameters" element if empty
                      ps.parameters->getParent()->removeChild(ps.parameters);
                      delete ps.parameters;
                  }
                }
#line 2290 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 90:
#line 648 "ned2.y" /* glr.c:816  */
    {
                  ps.parameters->setIsImplicit(false);
                  storeBannerAndRightComments(np, ps.parameters,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2299 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 91:
#line 653 "ned2.y" /* glr.c:816  */
    { storePos(np, ps.parameters, (*yylocp)); }
#line 2305 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 100:
#line 681 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                  storePos(np, ps.param, (*yylocp));
                  storeBannerAndRightComments(np, ps.param,(*yylocp));
                }
#line 2315 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 101:
#line 687 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                  if (!isEmpty(ps.exprPos))  // note: $4 cannot be checked, as it's always nullptr when expression parsing is off
                      addExpression(np, ps.param, "value",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
                  else {
                      // Note: "=default" is currently not accepted in NED files, because
                      // it would be complicated to support in the Inifile Editor.
                      if (ps.isDefault)
                          np->getErrors()->addError(ps.param,"applying the default value (\"=default\" syntax) is not supported in NED files");
                  }
                  ps.param->setIsDefault(ps.isDefault);
                  storePos(np, ps.param, (*yylocp));
                  storeBannerAndRightComments(np, ps.param,(*yylocp));
                }
#line 2334 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 102:
#line 705 "ned2.y" /* glr.c:816  */
    {
                  ps.param = addParameter(np, ps.parameters, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.param->setType(ps.paramType);
                  ps.param->setIsVolatile(ps.isVolatile);
                  ps.propertyscope.push(ps.param);
                }
#line 2345 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 103:
#line 712 "ned2.y" /* glr.c:816  */
    {
                  ps.param = addParameter(np, ps.parameters, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.propertyscope.push(ps.param);
                }
#line 2354 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 104:
#line 720 "ned2.y" /* glr.c:816  */
    {
                  ps.param = addParameter(np, ps.parameters, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc));
                  ps.param->setIsPattern(true);
                  const char *patt = ps.param->getName();
                  if (strchr(patt,' ') || strchr(patt,'\t') || strchr(patt,'\n'))
                      np->getErrors()->addError(ps.param,"parameter name patterns may not contain whitespace");
                  if (!isEmpty(ps.exprPos))  // note: $3 cannot be checked, as it's always nullptr when expression parsing is off
                      addExpression(np, ps.param, "value",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval));
                  else {
                      // Note: "=default" is currently not accepted in NED files, because
                      // it would be complicated to support in the Inifile Editor.
                      if (ps.isDefault)
                          np->getErrors()->addError(ps.param,"applying the default value (\"=default\" syntax) is not supported in NED files");
                  }
                  ps.param->setIsDefault(ps.isDefault);
                  storePos(np, ps.param, (*yylocp));
                  storeBannerAndRightComments(np, ps.param,(*yylocp));
                }
#line 2377 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 105:
#line 742 "ned2.y" /* glr.c:816  */
    { ps.paramType = PARTYPE_DOUBLE; }
#line 2383 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 106:
#line 744 "ned2.y" /* glr.c:816  */
    { ps.paramType = PARTYPE_INT; }
#line 2389 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 107:
#line 746 "ned2.y" /* glr.c:816  */
    { ps.paramType = PARTYPE_STRING; }
#line 2395 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 108:
#line 748 "ned2.y" /* glr.c:816  */
    { ps.paramType = PARTYPE_BOOL; }
#line 2401 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 109:
#line 750 "ned2.y" /* glr.c:816  */
    { ps.paramType = PARTYPE_XML; }
#line 2407 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 110:
#line 755 "ned2.y" /* glr.c:816  */
    { ps.isVolatile = true; }
#line 2413 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 111:
#line 757 "ned2.y" /* glr.c:816  */
    { ps.isVolatile = false; }
#line 2419 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 112:
#line 762 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc); ps.isDefault = false; }
#line 2425 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 113:
#line 764 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc); ps.isDefault = true; }
#line 2431 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 114:
#line 766 "ned2.y" /* glr.c:816  */
    {
                  ((*yyvalp)) = nullptr; ps.exprPos = makeEmptyYYLoc(); ps.isDefault = true;
                }
#line 2439 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 115:
#line 770 "ned2.y" /* glr.c:816  */
    {
                  np->getErrors()->addError(ps.parameters,"interactive prompting (\"=ask\" syntax) is not supported in NED files");
                  ((*yyvalp)) = nullptr; ps.exprPos = makeEmptyYYLoc(); ps.isDefault = false;
                }
#line 2448 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 140:
#line 826 "ned2.y" /* glr.c:816  */
    {
                  storePos(np, ps.property, (*yylocp));
                  storeBannerAndRightComments(np, ps.property,(*yylocp));
                }
#line 2457 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 143:
#line 839 "ned2.y" /* glr.c:816  */
    {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(np, ps.propertyscope.top(), toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
#line 2467 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 144:
#line 845 "ned2.y" /* glr.c:816  */
    {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(np, ps.propertyscope.top(), toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.property->setIndex(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
#line 2478 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 148:
#line 864 "ned2.y" /* glr.c:816  */
    {
                  ps.propkey = (PropertyKeyElement *)createNedElementWithTag(np, NED_PROPERTY_KEY, ps.property);
                  ps.propkey->setName(opp_trim(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc))).c_str());
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(np, ps.propkey, (*yylocp));
                }
#line 2491 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 149:
#line 873 "ned2.y" /* glr.c:816  */
    {
                  ps.propkey = (PropertyKeyElement *)createNedElementWithTag(np, NED_PROPERTY_KEY, ps.property);
                  ps.propkey->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(np, ps.propkey, (*yylocp));
                }
#line 2504 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 150:
#line 885 "ned2.y" /* glr.c:816  */
    { ps.propvals.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 2510 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 151:
#line 887 "ned2.y" /* glr.c:816  */
    { ps.propvals.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 2516 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 152:
#line 892 "ned2.y" /* glr.c:816  */
    {
                  ((*yyvalp)) = createPropertyValue(np, (*yylocp));
                }
#line 2524 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 153:
#line 896 "ned2.y" /* glr.c:816  */
    {
                  LiteralElement *node = (LiteralElement *)createNedElementWithTag(np, NED_LITERAL);
                  node->setType(LIT_SPEC); // and leave both value and text at ""
                  ((*yyvalp)) = node;
                }
#line 2534 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 160:
#line 920 "ned2.y" /* glr.c:816  */
    {
                  assertNonEmpty(ps.blockscope);
                  ps.gates = (GatesElement *)createNedElementWithTag(np, NED_GATES, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.gates,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2544 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 161:
#line 926 "ned2.y" /* glr.c:816  */
    {
                  storePos(np, ps.gates, (*yylocp));
                }
#line 2552 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 164:
#line 938 "ned2.y" /* glr.c:816  */
    {
                  storeBannerAndRightComments(np, ps.gate,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2560 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 165:
#line 942 "ned2.y" /* glr.c:816  */
    {
                  storeBannerAndRightComments(np, ps.gate,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2568 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 166:
#line 952 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.push(ps.gate);
                }
#line 2576 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 167:
#line 956 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                  storePos(np, ps.gate, (*yylocp));
                }
#line 2585 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 168:
#line 964 "ned2.y" /* glr.c:816  */
    {
                  ps.gate = addGate(np, ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                }
#line 2594 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 169:
#line 969 "ned2.y" /* glr.c:816  */
    {
                  ps.gate = addGate(np, ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                }
#line 2604 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 170:
#line 975 "ned2.y" /* glr.c:816  */
    {
                  ps.gate = addGate(np, ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                  addExpression(np, ps.gate, "vector-size",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 2615 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 171:
#line 982 "ned2.y" /* glr.c:816  */
    {
                  ps.gate = addGate(np, ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2623 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 172:
#line 986 "ned2.y" /* glr.c:816  */
    {
                  ps.gate = addGate(np, ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc));
                  ps.gate->setIsVector(true);
                }
#line 2632 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 173:
#line 991 "ned2.y" /* glr.c:816  */
    {
                  ps.gate = addGate(np, ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                  ps.gate->setIsVector(true);
                  addExpression(np, ps.gate, "vector-size",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 2642 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 174:
#line 1000 "ned2.y" /* glr.c:816  */
    { ps.gateType = GATETYPE_INPUT; }
#line 2648 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 175:
#line 1002 "ned2.y" /* glr.c:816  */
    { ps.gateType = GATETYPE_OUTPUT; }
#line 2654 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 176:
#line 1004 "ned2.y" /* glr.c:816  */
    { ps.gateType = GATETYPE_INOUT; }
#line 2660 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 179:
#line 1017 "ned2.y" /* glr.c:816  */
    {
                  assertNonEmpty(ps.blockscope);
                  ps.types = (TypesElement *)createNedElementWithTag(np, NED_TYPES, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.types,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                  if (ps.inTypes)
                     np->getErrors()->addError(ps.types,"more than one level of type nesting is not allowed");
                  ps.inTypes = true;
                }
#line 2673 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 180:
#line 1026 "ned2.y" /* glr.c:816  */
    {
                  ps.inTypes = false;
                  storePos(np, ps.types, (*yylocp));
                }
#line 2682 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 195:
#line 1063 "ned2.y" /* glr.c:816  */
    {
                  assertNonEmpty(ps.blockscope);
                  ps.submods = (SubmodulesElement *)createNedElementWithTag(np, NED_SUBMODULES, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.submods,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2692 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 196:
#line 1069 "ned2.y" /* glr.c:816  */
    {
                  storePos(np, ps.submods, (*yylocp));
                }
#line 2700 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 201:
#line 1086 "ned2.y" /* glr.c:816  */
    {
                  storeBannerAndRightComments(np, ps.submod,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                  storePos(np, ps.submod, (*yylocp));
                }
#line 2709 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 202:
#line 1091 "ned2.y" /* glr.c:816  */
    {
                  ps.blockscope.push(ps.submod);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.submod);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                  storeBannerAndRightComments(np, ps.submod,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2721 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 203:
#line 1101 "ned2.y" /* glr.c:816  */
    {
                  ps.blockscope.pop();
                  ps.propertyscope.pop();
                  storePos(np, ps.submod, (*yylocp));
                  storeTrailingComment(np, ps.submod,(*yylocp));
                }
#line 2732 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 204:
#line 1111 "ned2.y" /* glr.c:816  */
    {
                  ps.submod->setType(removeSpaces(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)) ps.submod->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 2741 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 205:
#line 1116 "ned2.y" /* glr.c:816  */
    {
                  addOptionalExpression(np, ps.submod, "like-expr", ps.exprPos, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval));
                  ps.submod->setLikeType(removeSpaces(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  ps.submod->setIsDefault(ps.isDefault);
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)) ps.submod->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 2752 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 206:
#line 1126 "ned2.y" /* glr.c:816  */
    {
                  ps.submod = (SubmoduleElement *)createNedElementWithTag(np, NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2761 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 207:
#line 1131 "ned2.y" /* glr.c:816  */
    {
                  ps.submod = (SubmoduleElement *)createNedElementWithTag(np, NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  addExpression(np, ps.submod, "vector-size",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 2771 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 208:
#line 1140 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = nullptr; ps.exprPos = makeEmptyYYLoc(); ps.isDefault = false; }
#line 2777 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 209:
#line 1142 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc); ps.isDefault = false; }
#line 2783 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 210:
#line 1144 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc); ps.isDefault = true; }
#line 2789 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 211:
#line 1149 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); }
#line 2795 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 212:
#line 1151 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = nullptr; }
#line 2801 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 215:
#line 1164 "ned2.y" /* glr.c:816  */
    {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createNedElementWithTag(np, NED_CONNECTIONS, ps.blockscope.top());
                  ps.conns->setAllowUnconnected(true);
                  storeBannerAndRightComments(np, ps.conns,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2812 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 216:
#line 1171 "ned2.y" /* glr.c:816  */
    {
                  storePos(np, ps.conns, (*yylocp));
                }
#line 2820 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 217:
#line 1175 "ned2.y" /* glr.c:816  */
    {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createNedElementWithTag(np, NED_CONNECTIONS, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.conns,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2830 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 218:
#line 1181 "ned2.y" /* glr.c:816  */
    {
                  storePos(np, ps.conns, (*yylocp));
                }
#line 2838 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 224:
#line 1199 "ned2.y" /* glr.c:816  */
    {
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)) {
                      transferChildren((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval), ps.conn);
                      delete (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
                  }
                  storePos(np, ps.conn, (*yylocp));
                  storeBannerAndRightComments(np, ps.conn,(*yylocp));
                }
#line 2851 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 225:
#line 1211 "ned2.y" /* glr.c:816  */
    {
                  if (ps.inConnGroup)
                      np->getErrors()->addError(ps.conngroup,"nested connection groups are not allowed");
                  ps.conngroup = (ConnectionGroupElement *)createNedElementWithTag(np, NED_CONNECTION_GROUP, ps.conns);
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)) {
                      // for's and if's were collected in a temporary UnknownElement, put them under conngroup now
                      transferChildren((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval), ps.conngroup);
                      delete (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval);
                  }
                  ps.inConnGroup = true;
                  storeBannerAndRightComments(np, ps.conngroup,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 2868 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 226:
#line 1224 "ned2.y" /* glr.c:816  */
    {
                  ps.inConnGroup = false;
                  storePos(np, ps.conngroup,(*yylocp));
                  storeTrailingComment(np, ps.conngroup,(*yylocp));
                }
#line 2878 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 227:
#line 1233 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval); }
#line 2884 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 228:
#line 1235 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = nullptr; }
#line 2890 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 229:
#line 1240 "ned2.y" /* glr.c:816  */
    {
                  (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval)->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                  ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval);
                }
#line 2899 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 230:
#line 1245 "ned2.y" /* glr.c:816  */
    {
                  ((*yyvalp)) = new UnknownElement();
                  ((*yyvalp))->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 2908 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 233:
#line 1258 "ned2.y" /* glr.c:816  */
    {
                  ps.loop = (LoopElement *)createNedElementWithTag(np, NED_LOOP);
                  ps.loop->setParamName( toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yyloc)) );
                  addExpression(np, ps.loop, "from-value",(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
                  addExpression(np, ps.loop, "to-value",(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                  storePos(np, ps.loop, (*yylocp));
                  ((*yyvalp)) = ps.loop;
                }
#line 2921 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 234:
#line 1273 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(true);
                }
#line 2930 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 235:
#line 1278 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(true);
                }
#line 2939 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 236:
#line 1283 "ned2.y" /* glr.c:816  */
    {
                  swapConnection(ps.conn);
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(false);
                }
#line 2949 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 237:
#line 1289 "ned2.y" /* glr.c:816  */
    {
                  swapConnection(ps.conn);
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(false);
                }
#line 2959 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 238:
#line 1295 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setIsBidirectional(true);
                }
#line 2967 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 239:
#line 1299 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setIsBidirectional(true);
                }
#line 2975 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 242:
#line 1311 "ned2.y" /* glr.c:816  */
    {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule( toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  addExpression(np, ps.conn, "src-module-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 2985 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 243:
#line 1317 "ned2.y" /* glr.c:816  */
    {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule( toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)) );
                }
#line 2994 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 244:
#line 1325 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setSrcGate( toString(np,  (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
#line 3003 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 245:
#line 1330 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setSrcGate( toString(np,  (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "src-gate-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 3013 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 246:
#line 1336 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setSrcGate( toString(np,  (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
#line 3023 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 247:
#line 1345 "ned2.y" /* glr.c:816  */
    {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
#line 3034 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 248:
#line 1352 "ned2.y" /* glr.c:816  */
    {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "src-gate-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 3046 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 249:
#line 1360 "ned2.y" /* glr.c:816  */
    {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
#line 3058 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 252:
#line 1376 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setDestModule( toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)) );
                }
#line 3066 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 253:
#line 1380 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setDestModule( toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  addExpression(np, ps.conn, "dest-module-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 3075 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 254:
#line 1388 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setDestGate( toString(np,  (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
#line 3084 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 255:
#line 1393 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setDestGate( toString(np,  (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "dest-gate-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 3094 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 256:
#line 1399 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setDestGate( toString(np,  (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
#line 3104 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 257:
#line 1408 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setDestGate( toString(np,  (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
#line 3113 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 258:
#line 1413 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setDestGate( toString(np,  (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "dest-gate-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 3123 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 259:
#line 1419 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setDestGate( toString(np,  (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
#line 3133 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 260:
#line 1428 "ned2.y" /* glr.c:816  */
    {
                  const char *s = toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc));
                  if (!strcmp(s,"i"))
                      ps.subgate = SUBGATE_I;
                  else if (!strcmp(s,"o"))
                      ps.subgate = SUBGATE_O;
                  else
                       np->getErrors()->addError(currentLocation(np), "invalid subgate spec '%s', must be 'i' or 'o'", toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 3147 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 261:
#line 1438 "ned2.y" /* glr.c:816  */
    { ps.subgate = SUBGATE_NONE; }
#line 3153 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 263:
#line 1444 "ned2.y" /* glr.c:816  */
    {
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.conn);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 3163 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 264:
#line 1451 "ned2.y" /* glr.c:816  */
    {
                  ps.propertyscope.pop();
                }
#line 3171 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 266:
#line 1460 "ned2.y" /* glr.c:816  */
    {
                  ps.conn->setType(removeSpaces(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                }
#line 3179 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 267:
#line 1464 "ned2.y" /* glr.c:816  */
    {
                  addOptionalExpression(np, ps.conn, "like-expr", ps.exprPos, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval));
                  ps.conn->setLikeType(removeSpaces(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                  ps.conn->setIsDefault(ps.isDefault);
                }
#line 3189 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 269:
#line 1474 "ned2.y" /* glr.c:816  */
    { ps.conn->setName(toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc))); }
#line 3195 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 270:
#line 1482 "ned2.y" /* glr.c:816  */
    {
                  ps.condition = (ConditionElement *)createNedElementWithTag(np, NED_CONDITION);
                  addExpression(np, ps.condition, "condition",(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                  storePos(np, ps.condition, (*yylocp));
                  ((*yyvalp)) = ps.condition;
                }
#line 3206 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 271:
#line 1495 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yyloc); }
#line 3212 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 272:
#line 1501 "ned2.y" /* glr.c:816  */
    {
                  if (np->getParseExpressionsFlag()) ((*yyvalp)) = createExpression(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                }
#line 3220 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 274:
#line 1512 "ned2.y" /* glr.c:816  */
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval); }
#line 3226 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 275:
#line 1514 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, "const", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3232 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 276:
#line 1517 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "+", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3238 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 277:
#line 1519 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "-", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3244 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 278:
#line 1521 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "*", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3250 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 279:
#line 1523 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "/", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3256 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 280:
#line 1525 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "%", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3262 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 281:
#line 1527 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "^", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3268 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 282:
#line 1530 "ned2.y" /* glr.c:816  */
    { 
                  if (np->getParseExpressionsFlag()) {
                      if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)->getTagCode() == NED_LITERAL)
                          ((*yyvalp)) = prependMinusSign(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); 
                      else
                          ((*yyvalp)) = createOperator(np, "-", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));
                  }
                }
#line 3281 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 283:
#line 1540 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "==", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3287 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 284:
#line 1542 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "!=", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3293 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 285:
#line 1544 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, ">", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3299 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 286:
#line 1546 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, ">=", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3305 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 287:
#line 1548 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "<", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3311 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 288:
#line 1550 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "<=", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3317 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 289:
#line 1553 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "&&", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3323 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 290:
#line 1555 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "||", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3329 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 291:
#line 1557 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "##", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3335 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 292:
#line 1561 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "!", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3341 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 293:
#line 1564 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "&", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3347 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 294:
#line 1566 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "|", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3353 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 295:
#line 1568 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "#", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3359 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 296:
#line 1572 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3365 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 297:
#line 1574 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "<<", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3371 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 298:
#line 1576 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, ">>", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3377 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 299:
#line 1578 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(np, "?:", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); }
#line 3383 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 300:
#line 1581 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3389 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 301:
#line 1583 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3395 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 302:
#line 1585 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3401 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 303:
#line 1588 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc))); }
#line 3407 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 304:
#line 1590 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3413 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 305:
#line 1592 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3419 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 306:
#line 1594 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3425 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 307:
#line 1596 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3431 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 308:
#line 1598 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-11)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3437 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 309:
#line 1600 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-13)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-11)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3443 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 310:
#line 1602 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-15)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-13)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-11)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3449 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 311:
#line 1604 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-17)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-15)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-13)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-11)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3455 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 312:
#line 1606 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-19)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-17)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-15)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-13)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-11)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3461 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 313:
#line 1608 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, toString(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (-21)].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL (-19)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-17)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-15)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-13)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-11)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3467 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 320:
#line 1626 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)); }
#line 3473 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 321:
#line 1628 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)); }
#line 3479 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 322:
#line 1630 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yyloc)); }
#line 3485 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 323:
#line 1632 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval)); }
#line 3491 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 324:
#line 1637 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, "index"); }
#line 3497 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 325:
#line 1639 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, "index"); }
#line 3503 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 326:
#line 1641 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, "exists", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3509 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 327:
#line 1643 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, "sizeof", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval)); }
#line 3515 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 328:
#line 1645 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(np, "typename"); }
#line 3521 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 332:
#line 1656 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createStringLiteral(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)); }
#line 3527 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 333:
#line 1661 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(np, LIT_BOOL, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)); }
#line 3533 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 334:
#line 1663 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(np, LIT_BOOL, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)); }
#line 3539 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 335:
#line 1668 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(np, LIT_INT, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)); }
#line 3545 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 336:
#line 1670 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(np, LIT_DOUBLE, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)); }
#line 3551 "ned2.tab.cc" /* glr.c:816  */
    break;

  case 337:
#line 1672 "ned2.y" /* glr.c:816  */
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createQuantityLiteral(np, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yyloc)); }
#line 3557 "ned2.tab.cc" /* glr.c:816  */
    break;


#line 3561 "ned2.tab.cc" /* glr.c:816  */
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
  (!!((Yystate) == (-464)))

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
#define yyparse ned2yyparse
#define yylex   ned2yylex
#define yyerror ned2yyerror
#define yylval  ned2yylval
#define yychar  ned2yychar
#define yydebug ned2yydebug
#define yynerrs ned2yynerrs
#define yylloc  ned2yylloc

#line 1693 "ned2.y" /* glr.c:2584  */


//----------------------------------------------------------------------
// general bison/flex stuff:
//
int ned2yylex_destroy();  // from lex.XXX.cc file

ASTNode *doParseNed(ParseContext *np, const char *nedtext)
{
#if YYDEBUG != 0      /* #if added --VA */
    yydebug = YYDEBUGGING_ON;
#endif

    ned2yylex_destroy();

    DETECT_PARSER_REENTRY();

    // reset the lexer
    pos.co = 0;
    pos.li = 1;
    prevpos = pos;

    yyin = nullptr;
    yyout = stderr; // not used anyway

    // alloc buffer
    struct yy_buffer_state *handle = yy_scan_string(nedtext);
    if (!handle)
        {np->getErrors()->addError("", "unable to allocate work memory"); return nullptr;}

    // create parser state and NedFileElement
    resetParserState();
    ps.nedfile = new NedFileElement();

    // store file name with slashes always, even on Windows -- neddoc relies on that
    ps.nedfile->setFilename(slashifyFilename(np->getFileName()).c_str());
    ps.nedfile->setVersion("2");

    // storing the start and end position of the whole file for the NedFileElement
    // NOTE: we cannot use storePos() because it strips off the leading spaces
    // and comments from the element.
    YYLTYPE pos = np->getSource()->getFullTextPos();
    SourceRegion region;
    region.startLine = pos.first_line;
    region.startColumn = pos.first_column;
    region.endLine = pos.last_line;
    region.endColumn = pos.last_column;
    ps.nedfile->setSourceRegion(region);

    // store file comment
    storeFileComment(np, ps.nedfile);

    ps.propertyscope.push(ps.nedfile);

    globalps = ps; // remember this for error recovery

    if (np->getStoreSourceFlag())
        storeSourceCode(np, ps.nedfile, np->getSource()->getFullTextPos());

    // parse
    try
    {
        yyparse(np);
    }
    catch (NedException& e)
    {
        yyerror(np, (std::string("error during parsing: ")+e.what()).c_str());
        yy_delete_buffer(handle);
        return nullptr;
    }

    if (np->getErrors()->empty())
    {
        // more sanity checks
        if (ps.propertyscope.size()!=1 || ps.propertyscope.top()!=ps.nedfile)
            INTERNAL_ERROR0(nullptr, "error during parsing: imbalanced propertyscope");
        if (!ps.blockscope.empty() || !ps.typescope.empty())
            INTERNAL_ERROR0(nullptr, "error during parsing: imbalanced blockscope or typescope");
    }
    yy_delete_buffer(handle);

    return ps.nedfile;
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
