/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         expryyparse
#define yylex           expryylex
#define yyerror         expryyerror
#define yydebug         expryydebug
#define yynerrs         expryynerrs

#define yylval          expryylval
#define yychar          expryychar

/* Copy the first part of user declarations.  */
#line 47 "expr.y" /* yacc.c:339  */


#include <cstdio>
#include <cstdlib>
#include "common/commonutil.h"
#include "expryydefs.h"

#define YYDEBUG 1           /* allow debugging */
#define YYDEBUGGING_ON 0    /* turn on/off debugging */

#if YYDEBUG != 0
#define YYERROR_VERBOSE     /* more detailed error messages */
#include <cstring>         /* YYVERBOSE needs it */
#endif

#define yyin expryyin
#define yyout expryyout
#define yyrestart expryyrestart
#define yy_scan_string expryy_scan_string
#define yy_delete_buffer expryy_delete_buffer
extern FILE *yyin;
extern FILE *yyout;
struct yy_buffer_state;
struct yy_buffer_state *yy_scan_string(const char *str);
void yy_delete_buffer(struct yy_buffer_state *);
void yyrestart(FILE *);
int yylex();
void yyerror (const char *s);

LineColumn xpos, xprevpos;


#include "common/stringutil.h"
#include "common/unitconversion.h"
#include "omnetpp/cdynamicexpression.h"
#include "omnetpp/cpar.h"
#include "omnetpp/cxmlelement.h"
#include "omnetpp/cexception.h"
#include "omnetpp/globals.h"
#include "omnetpp/cnedmathfunction.h"
#include "omnetpp/cnedfunction.h"
#include "omnetpp/nedsupport.h"

using namespace omnetpp;
using namespace omnetpp::common;
using namespace omnetpp::nedsupport;

static cDynamicExpression::Elem *e;

static char *expryyconcat(char *s1, char *s2, char *s3=nullptr)
{
    char *d = new char[strlen(s1)+strlen(s2)+strlen(s3?s3:"")+4];
    strcpy(d, s1);
    strcat(d, " ");
    strcat(d, s2);
    if (s3) {strcat(d, " "); strcat(d, s3);}
    delete [] s1; delete [] s2; delete [] s3;
    return d;
}

static void addFunction(const char *funcname, int argc)
{
    cNedMathFunction *f = cNedMathFunction::find(funcname, argc);
    if (f) {
        *e++ = f;
        return;
    }
    cNedFunction *nf = cNedFunction::find(funcname);
    if (nf) {
        if (argc < nf->getMinArgs() || (argc > nf->getMaxArgs() && !nf->hasVarArgs()))
            yyerror(opp_stringf("function '%s' does not accept %d arguments", nf->getSignature(), argc).c_str());
        (e++)->set(nf,argc);
        return;
    }
    yyerror(opp_stringf("function '%s()' (with %d args) not found (Define_NED_Function() or Define_NED_Math_Function() missing from C++ code?)", funcname, argc).c_str());
}

static double parseQuantity(const char *text, std::string& unit)
{
    try {
        // evaluate quantities like "5s 230ms"
        return UnitConversion::parseQuantity(text, unit);
    }
    catch (std::exception& e) {
        yyerror(e.what());
        return 0;
    }
}


#line 165 "expr.tab.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "expr.tab.hh".  */
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

/* Copy the second part of user declarations.  */

#line 296 "expr.tab.cc" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   801

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    48,     2,     2,
      51,    52,    46,    44,    53,    45,    54,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,     2,
      43,     2,    42,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,    49,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   141,   141,   142,   144,   146,   151,   152,   153,   156,
     158,   160,   162,   164,   166,   168,   177,   179,   181,   183,
     185,   187,   190,   192,   194,   197,   201,   203,   205,   208,
     211,   213,   215,   218,   220,   222,   225,   227,   229,   231,
     233,   235,   237,   239,   241,   243,   245,   250,   251,   252,
     256,   257,   259,   264,   266,   268,   270,   275,   277,   279,
     281,   283,   285,   287,   289,   294,   295,   296,   300,   305,
     307,   312,   314,   316,   318,   320,   336,   338,   340,   342,
     344,   346,   348,   350
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOUBLETYPE", "INTTYPE", "STRINGTYPE",
  "BOOLTYPE", "XMLTYPE", "TRUE_", "FALSE_", "NAN_", "INF_", "THIS_",
  "ASK_", "DEFAULT_", "CONST_", "SIZEOF_", "INDEX_", "EXISTS", "TYPENAME",
  "XMLDOC_", "NAME", "INTCONSTANT", "REALCONSTANT", "STRINGCONSTANT",
  "EQ_", "NE_", "GE_", "LE_", "AND_", "OR_", "XOR_", "NOT_", "BINAND_",
  "BINOR_", "BINXOR_", "BINCOMPL_", "SHIFTLEFT_", "SHIFTRIGHT_",
  "INVALID_CHAR", "'?'", "':'", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMIN_", "'('", "')'", "','", "'.'", "'['", "']'",
  "$accept", "expression", "expr", "simple_expr", "funcname", "identifier",
  "special_expr", "literal", "stringliteral", "boolliteral", "numliteral",
  "quantity", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      63,    58,    62,    60,    43,    45,    42,    47,    37,    94,
     295,    40,    41,    44,    46,    91,    93
};
# endif

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -51

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     148,   -18,   -17,     6,   -46,   -46,   -46,     9,    40,    14,
     -46,    18,    29,    30,    31,    32,   -46,   -46,   -31,    63,
      64,   -46,   193,   193,   193,   193,    88,   702,   -46,    38,
     -46,   -46,   -46,   -46,   -46,   -46,    -4,   193,   193,   193,
     -46,   -46,    69,   193,   193,    -7,    41,    73,    74,   148,
     -46,   -46,   -46,   -46,   -46,   481,   -46,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,    55,    75,
      76,    77,    78,   509,   537,   565,   -46,   593,   621,    47,
     -23,   -46,    50,   -46,    36,   -46,   141,   141,   141,   141,
     752,   752,   752,    71,    71,    71,   -36,   -36,   677,   141,
     141,   -21,   -21,    54,    54,    54,    54,   -46,   220,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,    83,   -46,
      84,   148,   -46,    56,   193,   -46,   193,    59,    61,    65,
     101,   727,   249,   -46,   -46,    70,   -46,   -46,   193,   102,
     278,    80,   -46,   193,   -46,   307,   -46,   193,   336,   -46,
     193,   365,   -46,   193,   394,   -46,   193,   423,   -46,   193,
     452,   -46,   193,   649,   -46
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    52,    69,    70,    73,    74,     0,
       3,     4,     0,     0,    57,     0,    64,    51,    53,    71,
      72,    68,     0,     0,     0,     0,     0,     2,     6,     0,
      47,    48,    49,    65,    66,    67,    75,     0,     0,     0,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
      80,    81,    25,    29,    15,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,    58,     0,    55,     0,     7,    16,    17,    19,    21,
      22,    23,    24,    26,    27,    28,    30,    31,     0,    18,
      20,     9,    10,    11,    12,    13,    14,    36,     0,    78,
      79,    76,    77,    34,    33,    35,     5,     8,     0,    60,
       0,     0,    59,     0,     0,    37,     0,     0,     0,     0,
       0,    32,     0,    61,    62,     0,    56,    38,     0,     0,
       0,     0,    39,     0,    63,     0,    40,     0,     0,    41,
       0,     0,    42,     0,     0,    43,     0,     0,    44,     0,
       0,    45,     0,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -45,   -22,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    53,    54,    55,    94,    89,    79,    80,    72,    73,
      74,    75,    76,    77,    90,    83,    84,    85,    81,    82,
     -50,    87,    88,    48,    49,    74,    75,    76,    77,   129,
      40,   130,   131,    37,    38,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   118,    39,     1,     2,
       3,    41,     4,     5,     6,     7,     8,     9,    42,    43,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      44,    45,    46,    47,    50,    51,   139,    22,    56,    78,
      86,    23,   133,    91,    92,    93,   119,   120,   121,   122,
      24,   128,   132,    77,   137,   138,    25,   117,    67,    68,
     140,   143,   141,   144,   142,    72,    73,    74,    75,    76,
      77,   145,   146,   151,   149,     0,   150,     0,     0,     0,
       0,   155,   154,     0,     0,   158,     0,     0,   161,     0,
       0,   164,     0,     0,   167,     0,     0,   170,     0,     0,
     173,     1,     2,     3,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    64,    65,    66,     0,    67,    68,
      22,     0,     0,     0,    23,    72,    73,    74,    75,    76,
      77,     0,     0,    24,     0,     0,     1,     2,     3,    25,
       4,     5,     6,     7,     8,     9,     0,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,    25,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,     0,    67,    68,     0,
      69,     0,    70,    71,    72,    73,    74,    75,    76,    77,
       0,     0,   135,   136,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,     0,    67,    68,     0,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,   147,   148,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,     0,    67,    68,     0,    69,     0,
      70,    71,    72,    73,    74,    75,    76,    77,     0,     0,
     152,   153,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,     0,    67,    68,     0,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,     0,   156,
     157,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,     0,    67,    68,     0,    69,     0,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,   159,   160,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
      66,     0,    67,    68,     0,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,     0,   162,   163,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
       0,    67,    68,     0,    69,     0,    70,    71,    72,    73,
      74,    75,    76,    77,     0,     0,   165,   166,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,     0,
      67,    68,     0,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,   168,   169,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,     0,    67,
      68,     0,    69,     0,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,   171,   172,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,     0,    67,    68,
       0,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,    95,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,     0,    67,    68,     0,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,   123,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,     0,    67,    68,     0,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,     0,   124,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
      66,     0,    67,    68,     0,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,     0,   125,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,     0,
      67,    68,     0,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,   126,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,     0,    67,    68,
       0,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,   127,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,     0,    67,    68,     0,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,   174,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,     0,    67,    68,     0,    69,   134,    70,
      71,    72,    73,    74,    75,    76,    77,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,     0,    67,
      68,     0,    69,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,     0,    67,    68,     0,     0,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    57,    58,    59,
      60,     0,     0,     0,     0,    64,    65,    66,     0,    67,
      68,     0,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    77
};

static const yytype_int16 yycheck[] =
{
      22,    23,    24,    25,    49,    12,    10,    11,    44,    45,
      46,    47,    48,    49,    21,    37,    38,    39,    22,    23,
      51,    43,    44,    54,    55,    46,    47,    48,    49,    52,
      21,    54,    55,    51,    51,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    51,     3,     4,
       5,    21,     7,     8,     9,    10,    11,    12,    54,    51,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      51,    51,    51,    51,    21,    21,   131,    32,     0,    51,
      21,    36,    56,    52,    21,    21,    21,    21,    21,    21,
      45,    54,    52,    49,    21,    21,    51,    52,    37,    38,
      54,    52,   134,    52,   136,    44,    45,    46,    47,    48,
      49,    56,    21,    21,    54,    -1,   148,    -1,    -1,    -1,
      -1,   153,    52,    -1,    -1,   157,    -1,    -1,   160,    -1,
      -1,   163,    -1,    -1,   166,    -1,    -1,   169,    -1,    -1,
     172,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    33,    34,    35,    -1,    37,    38,
      32,    -1,    -1,    -1,    36,    44,    45,    46,    47,    48,
      49,    -1,    -1,    45,    -1,    -1,     3,     4,     5,    51,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    37,    38,    -1,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    52,    53,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    -1,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    53,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    -1,    37,    38,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      52,    53,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    -1,    37,    38,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    52,
      53,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    -1,    37,    38,    -1,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    52,    53,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    37,    38,    -1,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    52,    53,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      -1,    37,    38,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    52,    53,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    -1,
      37,    38,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    52,    53,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    -1,    37,
      38,    -1,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    52,    53,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    37,    38,
      -1,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    52,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    -1,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    -1,    37,    38,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    52,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    37,    38,    -1,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    52,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    -1,
      37,    38,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    52,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    37,    38,
      -1,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    52,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    -1,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    -1,    37,
      38,    -1,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    32,    36,    45,    51,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    51,    51,    51,
      21,    21,    54,    51,    51,    51,    51,    51,    54,    55,
      21,    21,    59,    59,    59,    59,     0,    25,    26,    27,
      28,    29,    30,    31,    33,    34,    35,    37,    38,    40,
      42,    43,    44,    45,    46,    47,    48,    49,    51,    10,
      11,    22,    23,    59,    59,    59,    21,    59,    59,    12,
      21,    52,    21,    21,    58,    52,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    52,    59,    21,
      21,    21,    21,    52,    52,    52,    52,    52,    54,    52,
      54,    55,    52,    56,    41,    52,    53,    21,    21,    58,
      54,    59,    59,    52,    52,    56,    21,    52,    53,    54,
      59,    21,    52,    53,    52,    59,    52,    53,    59,    52,
      53,    59,    52,    53,    59,    52,    53,    59,    52,    53,
      59,    52,    53,    59,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    60,
      61,    61,    61,    62,    62,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    64,    64,    65,    66,
      66,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     4,     1,     3,     4,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     2,
       3,     3,     5,     4,     4,     4,     3,     4,     6,     8,
      10,    12,    14,    16,    18,    20,    22,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     6,     1,     3,     4,
       4,     6,     6,     9,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       2,     2,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
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
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
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
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 143 "expr.y" /* yacc.c:1646  */
    { yyerror("\"ask\" is not supported here"); }
#line 1616 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 145 "expr.y" /* yacc.c:1646  */
    { yyerror("\"default\" is not supported here"); }
#line 1622 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 147 "expr.y" /* yacc.c:1646  */
    { yyerror("\"default()\" is not supported here"); }
#line 1628 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 154 "expr.y" /* yacc.c:1646  */
    { yyerror("const() is not supported here"); }
#line 1634 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 157 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::ADD; }
#line 1640 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 159 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::SUB; }
#line 1646 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 161 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::MUL; }
#line 1652 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 163 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::DIV; }
#line 1658 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 165 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::MOD; }
#line 1664 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 167 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::POW; }
#line 1670 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 170 "expr.y" /* yacc.c:1646  */
    {
                   cDynamicExpression::Elem& last = *(e-1);
                   if (last.isNumericConstant())
                       last.negate();
                   else
                       *e++ = cDynamicExpression::NEG;
                }
#line 1682 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 178 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::EQ; }
#line 1688 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 180 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::NE; }
#line 1694 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 182 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::GT; }
#line 1700 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 184 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::GE; }
#line 1706 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 186 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::LT; }
#line 1712 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 188 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::LE; }
#line 1718 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 191 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::AND; }
#line 1724 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 193 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::OR; }
#line 1730 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 195 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::XOR; }
#line 1736 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 199 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::NOT; }
#line 1742 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 202 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::BIN_AND; }
#line 1748 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 204 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::BIN_OR; }
#line 1754 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 206 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::BIN_XOR; }
#line 1760 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 210 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::BIN_NOT; }
#line 1766 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 212 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::LSHIFT; }
#line 1772 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 214 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::RSHIFT; }
#line 1778 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 216 "expr.y" /* yacc.c:1646  */
    { *e++ = cDynamicExpression::IIF; }
#line 1784 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 219 "expr.y" /* yacc.c:1646  */
    { addFunction("int",1); }
#line 1790 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 221 "expr.y" /* yacc.c:1646  */
    { addFunction("double",1); }
#line 1796 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 223 "expr.y" /* yacc.c:1646  */
    { addFunction("string",1); }
#line 1802 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 226 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-2]),0); delete [] (yyvsp[-2]); }
#line 1808 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 228 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-3]),1); delete [] (yyvsp[-3]); }
#line 1814 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 230 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-5]),2); delete [] (yyvsp[-5]); }
#line 1820 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 232 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-7]),3); delete [] (yyvsp[-7]); }
#line 1826 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 234 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-9]),4); delete [] (yyvsp[-9]); }
#line 1832 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 236 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-11]),5); delete [] (yyvsp[-11]); }
#line 1838 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 238 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-13]),6); delete [] (yyvsp[-13]); }
#line 1844 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 240 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-15]),7); delete [] (yyvsp[-15]); }
#line 1850 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 242 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-17]),8); delete [] (yyvsp[-17]); }
#line 1856 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 244 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-19]),9); delete [] (yyvsp[-19]); }
#line 1862 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 246 "expr.y" /* yacc.c:1646  */
    { addFunction((yyvsp[-21]),10); delete [] (yyvsp[-21]); }
#line 1868 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 258 "expr.y" /* yacc.c:1646  */
    { (yyval) = common::opp_strdup("xmldoc"); }
#line 1874 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 260 "expr.y" /* yacc.c:1646  */
    { (yyval) = common::opp_strdup("xml"); }
#line 1880 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 265 "expr.y" /* yacc.c:1646  */
    { *e++ = new ParameterRef((yyvsp[0]), true, false); delete [] (yyvsp[0]); }
#line 1886 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 267 "expr.y" /* yacc.c:1646  */
    { *e++ = new ParameterRef((yyvsp[0]), false, true); delete [] (yyvsp[0]); }
#line 1892 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 269 "expr.y" /* yacc.c:1646  */
    { *e++ = new SiblingModuleParameterRef((yyvsp[-2]), (yyvsp[0]), true, false); delete [] (yyvsp[-2]); delete [] (yyvsp[0]); }
#line 1898 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 271 "expr.y" /* yacc.c:1646  */
    { *e++ = new SiblingModuleParameterRef((yyvsp[-5]), (yyvsp[0]), true, true); delete [] (yyvsp[-5]); delete [] (yyvsp[0]); }
#line 1904 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 276 "expr.y" /* yacc.c:1646  */
    { *e++ = new ModuleIndex(); }
#line 1910 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 278 "expr.y" /* yacc.c:1646  */
    { *e++ = new ModuleIndex(); }
#line 1916 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 280 "expr.y" /* yacc.c:1646  */
    { *e++ = new Exists((yyvsp[-1]), true); delete [] (yyvsp[-1]); }
#line 1922 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 282 "expr.y" /* yacc.c:1646  */
    { *e++ = new Sizeof((yyvsp[-1]), true, false); delete [] (yyvsp[-1]); }
#line 1928 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 284 "expr.y" /* yacc.c:1646  */
    { *e++ = new Sizeof((yyvsp[-1]), false, false); delete [] (yyvsp[-1]); }
#line 1934 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 286 "expr.y" /* yacc.c:1646  */
    { delete [] (yyvsp[-3]); delete [] (yyvsp[-1]); yyerror("sizeof(submodule.gate) notation not supported here"); }
#line 1940 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 288 "expr.y" /* yacc.c:1646  */
    { delete [] (yyvsp[-6]); delete [] (yyvsp[-1]); yyerror("sizeof(submodule[index].gate) notation not supported here"); }
#line 1946 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 290 "expr.y" /* yacc.c:1646  */
    { *e++ = new Typename(); }
#line 1952 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 301 "expr.y" /* yacc.c:1646  */
    { *e++ = opp_parsequotedstr((yyvsp[0])).c_str(); delete [] (yyvsp[0]); }
#line 1958 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 306 "expr.y" /* yacc.c:1646  */
    { *e++ = true; }
#line 1964 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 308 "expr.y" /* yacc.c:1646  */
    { *e++ = false; }
#line 1970 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 313 "expr.y" /* yacc.c:1646  */
    { *e++ = (intpar_t)opp_atoll((yyvsp[0])); delete [] (yyvsp[0]); }
#line 1976 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 315 "expr.y" /* yacc.c:1646  */
    { *e++ = opp_atof((yyvsp[0])); delete [] (yyvsp[0]); }
#line 1982 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 317 "expr.y" /* yacc.c:1646  */
    { *e++ = std::nan(""); }
#line 1988 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 319 "expr.y" /* yacc.c:1646  */
    { *e++ = 1/0.0; }
#line 1994 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 321 "expr.y" /* yacc.c:1646  */
    {
                  std::string unit;
                  double d = parseQuantity((yyvsp[0]), unit);
                  bool isInteger = (d == floor(d)) && d >= std::numeric_limits<intpar_t>::min() && d <= std::numeric_limits<intpar_t>::max(); // note: it would be slightly better to try parsing it in integer in the first place
                  if (isInteger)
                      *e++ = (intpar_t)d;
                  else
                      *e++ = d;
                  if (!unit.empty())
                      (e-1)->setUnit(unit.c_str());
                  delete [] (yyvsp[0]);
                }
#line 2011 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 337 "expr.y" /* yacc.c:1646  */
    { (yyval) = expryyconcat((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2017 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 339 "expr.y" /* yacc.c:1646  */
    { (yyval) = expryyconcat((yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2023 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 341 "expr.y" /* yacc.c:1646  */
    { (yyval) = expryyconcat((yyvsp[-2]),omnetpp::opp_strdup("nan"),(yyvsp[0])); }
#line 2029 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 343 "expr.y" /* yacc.c:1646  */
    { (yyval) = expryyconcat((yyvsp[-2]),omnetpp::opp_strdup("inf"),(yyvsp[0])); }
#line 2035 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 345 "expr.y" /* yacc.c:1646  */
    { (yyval) = expryyconcat((yyvsp[-1]),(yyvsp[0])); }
#line 2041 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 347 "expr.y" /* yacc.c:1646  */
    { (yyval) = expryyconcat((yyvsp[-1]),(yyvsp[0])); }
#line 2047 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 349 "expr.y" /* yacc.c:1646  */
    { (yyval) = expryyconcat(omnetpp::opp_strdup("nan"),(yyvsp[0])); }
#line 2053 "expr.tab.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 351 "expr.y" /* yacc.c:1646  */
    { (yyval) = expryyconcat(omnetpp::opp_strdup("inf"),(yyvsp[0])); }
#line 2059 "expr.tab.cc" /* yacc.c:1646  */
    break;


#line 2063 "expr.tab.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 354 "expr.y" /* yacc.c:1906  */


//----------------------------------------------------------------------

void doParseExpression(const char *nedtext, cDynamicExpression::Elem *&elems, int& nelems)
{
    NONREENTRANT_PARSER();

    elems = nullptr;
    nelems = 0;

    // reset the lexer
    xpos.co = 0;
    xpos.li = 1;
    xprevpos = xpos;

    yyin = nullptr;
    yyout = stderr; // not used anyway

    // alloc buffer
    struct yy_buffer_state *handle = yy_scan_string(nedtext);
    if (!handle)
        throw std::runtime_error("Parser is unable to allocate work memory");

    cDynamicExpression::Elem *v = new cDynamicExpression::Elem[100]; // overestimate for now; XXX danger of overrun
    e = v;

    // parse
    try
    {
        yyparse();
    }
    catch (std::exception& e)
    {
        yy_delete_buffer(handle);
        delete [] v;
        throw;
    }
    yy_delete_buffer(handle);

    // copy v[] and return
    nelems = e - v;
    elems = new cDynamicExpression::Elem[nelems];
    for (int i=0; i<nelems; i++)
        elems[i] = v[i];
    delete [] v;
}

void yyerror(const char *s)
{
    // chop newline
    char buf[250];
    strcpy(buf, s);
    if (buf[strlen(buf)-1] == '\n')
        buf[strlen(buf)-1] = '\0';

    throw std::runtime_error(buf);
}

