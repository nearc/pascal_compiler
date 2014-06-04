/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "pascal.y"

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */


/* Line 371 of yacc.c  */
#line 83 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     INTEGER = 259,
     REAL = 260,
     CHAR = 261,
     STRING = 262,
     PROGRAM = 263,
     DOT = 264,
     SEMI = 265,
     COMMA = 266,
     EQUAL = 267,
     CONST = 268,
     ARRAY = 269,
     TYPE = 270,
     LB = 271,
     RB = 272,
     OF = 273,
     RECORD = 274,
     END = 275,
     COLON = 276,
     LP = 277,
     RP = 278,
     DOTDOT = 279,
     MINUS = 280,
     VAR = 281,
     FUNCTION = 282,
     NOT = 283,
     GE = 284,
     GT = 285,
     LE = 286,
     LT = 287,
     PLUS = 288,
     MUL = 289,
     DIV = 290,
     AND = 291,
     MOD = 292,
     UNEQUAL = 293,
     OR = 294,
     ASSIGN = 295,
     BEGIN = 296,
     IF = 297,
     ELSE = 298,
     THEN = 299,
     REPEAT = 300,
     UNTIL = 301,
     WHILE = 302,
     DO = 303,
     FOR = 304,
     GOTO = 305,
     CASE = 306,
     TO = 307,
     DOWNTO = 308,
     READ = 309,
     TYPEINTEGER = 310,
     TYPEREAL = 311,
     TYPECHAR = 312,
     TYPESTRING = 313,
     TYPEBOOL = 314,
     FALSE = 315,
     TRUE = 316,
     PROCEDURE = 317
   };
#endif
/* Tokens.  */
#define ID 258
#define INTEGER 259
#define REAL 260
#define CHAR 261
#define STRING 262
#define PROGRAM 263
#define DOT 264
#define SEMI 265
#define COMMA 266
#define EQUAL 267
#define CONST 268
#define ARRAY 269
#define TYPE 270
#define LB 271
#define RB 272
#define OF 273
#define RECORD 274
#define END 275
#define COLON 276
#define LP 277
#define RP 278
#define DOTDOT 279
#define MINUS 280
#define VAR 281
#define FUNCTION 282
#define NOT 283
#define GE 284
#define GT 285
#define LE 286
#define LT 287
#define PLUS 288
#define MUL 289
#define DIV 290
#define AND 291
#define MOD 292
#define UNEQUAL 293
#define OR 294
#define ASSIGN 295
#define BEGIN 296
#define IF 297
#define ELSE 298
#define THEN 299
#define REPEAT 300
#define UNTIL 301
#define WHILE 302
#define DO 303
#define FOR 304
#define GOTO 305
#define CASE 306
#define TO 307
#define DOWNTO 308
#define READ 309
#define TYPEINTEGER 310
#define TYPEREAL 311
#define TYPECHAR 312
#define TYPESTRING 313
#define TYPEBOOL 314
#define FALSE 315
#define TRUE 316
#define PROCEDURE 317



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 273 "y.tab.c"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   319

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNRULES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    13,    16,    17,    22,    25,
      26,    27,    34,    35,    41,    43,    45,    47,    49,    52,
      53,    56,    58,    59,    65,    67,    69,    71,    78,    82,
      85,    87,    92,    94,    96,    98,   100,   102,   104,   108,
     112,   117,   123,   127,   131,   133,   136,   137,   140,   142,
     147,   150,   153,   155,   157,   158,   165,   166,   174,   175,
     177,   181,   185,   186,   190,   192,   194,   196,   198,   200,
     202,   204,   206,   208,   210,   211,   216,   217,   225,   226,
     227,   235,   237,   238,   244,   249,   255,   258,   259,   264,
     269,   270,   280,   282,   284,   290,   293,   295,   300,   301,
     307,   310,   314,   318,   322,   326,   330,   334,   336,   340,
     344,   348,   350,   354,   358,   362,   366,   368,   370,   372,
     376,   379,   382,   383,   389,   390,   395,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    65,    67,     9,    -1,    -1,     8,     3,
      66,    10,    -1,    68,    94,    -1,    -1,    69,    74,    85,
      88,    -1,    13,    70,    -1,    -1,    -1,    70,     3,    71,
      12,    73,    10,    -1,    -1,     3,    72,    12,    73,    10,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,    15,
      75,    -1,    -1,    75,    76,    -1,    76,    -1,    -1,     3,
      77,    12,    78,    10,    -1,    83,    -1,    79,    -1,    80,
      -1,    14,    16,    83,    17,    18,    78,    -1,    19,    81,
      20,    -1,    81,    82,    -1,    82,    -1,    84,    21,    78,
      10,    -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,
      59,    -1,     3,    -1,    22,    84,    23,    -1,    73,    24,
      73,    -1,    25,    73,    24,    73,    -1,    25,    73,    24,
      25,    73,    -1,     3,    24,     3,    -1,    84,    11,     3,
      -1,     3,    -1,    26,    86,    -1,    -1,    86,    87,    -1,
      87,    -1,    84,    21,    78,    10,    -1,    88,    89,    -1,
      88,    91,    -1,    89,    -1,    91,    -1,    -1,    27,     3,
      90,    93,    21,    83,    -1,    -1,    62,     3,    92,    93,
      10,    67,    10,    -1,    -1,    95,    -1,    41,    96,    20,
      -1,    96,    97,    10,    -1,    -1,     4,    21,    98,    -1,
      98,    -1,    99,    -1,   104,    -1,    95,    -1,   106,    -1,
     108,    -1,   109,    -1,   110,    -1,   113,    -1,   117,    -1,
      -1,     3,   100,    40,   118,    -1,    -1,     3,   101,    16,
     118,    17,    40,   118,    -1,    -1,    -1,     3,   102,     9,
       3,   103,    40,   118,    -1,     3,    -1,    -1,     3,   105,
      22,   124,    23,    -1,    54,    22,   121,    23,    -1,    42,
     118,    44,    97,   107,    -1,    43,    97,    -1,    -1,    45,
      96,    46,   118,    -1,    47,   118,    48,    97,    -1,    -1,
      49,     3,   111,    40,   118,   112,   118,    48,    97,    -1,
      52,    -1,    53,    -1,    51,   118,    18,   114,    20,    -1,
     114,   115,    -1,   115,    -1,    73,    21,    97,    10,    -1,
      -1,     3,   116,    21,    97,    10,    -1,    50,     4,    -1,
     118,    29,   119,    -1,   118,    30,   119,    -1,   118,    31,
     119,    -1,   118,    32,   119,    -1,   118,    12,   119,    -1,
     118,    38,   119,    -1,   119,    -1,   119,    33,   120,    -1,
     119,    25,   120,    -1,   119,    39,   120,    -1,   120,    -1,
     120,    34,   121,    -1,   120,    35,   121,    -1,   120,    37,
     121,    -1,   120,    36,   121,    -1,   121,    -1,     3,    -1,
      73,    -1,    22,   118,    23,    -1,    28,   121,    -1,    25,
     121,    -1,    -1,     3,   122,    16,   118,    17,    -1,    -1,
       3,   123,     9,     3,    -1,   124,    11,   118,    -1,   118,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    36,    35,    41,    47,    49,    58,    59,
      62,    61,    81,    81,    89,    93,    97,   101,   107,   108,
     109,   118,   120,   120,   128,   129,   130,   131,   137,   138,
     148,   149,   155,   156,   157,   158,   159,   160,   164,   165,
     172,   179,   186,   194,   206,   211,   212,   213,   223,   224,
     230,   240,   250,   251,   253,   252,   264,   263,   275,   300,
     301,   302,   311,   312,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   329,   329,   337,   337,   346,   349,
     346,   359,   360,   360,   368,   370,   377,   377,   378,   385,
     392,   392,   404,   405,   406,   413,   422,   423,   429,   429,
     437,   452,   459,   466,   473,   480,   487,   494,   496,   503,
     510,   517,   519,   526,   533,   540,   547,   549,   553,   555,
     557,   559,   561,   561,   567,   567,   577,   587
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INTEGER", "REAL", "CHAR",
  "STRING", "PROGRAM", "DOT", "SEMI", "COMMA", "EQUAL", "CONST", "ARRAY",
  "TYPE", "LB", "RB", "OF", "RECORD", "END", "COLON", "LP", "RP", "DOTDOT",
  "MINUS", "VAR", "FUNCTION", "NOT", "GE", "GT", "LE", "LT", "PLUS", "MUL",
  "DIV", "AND", "MOD", "UNEQUAL", "OR", "ASSIGN", "BEGIN", "IF", "ELSE",
  "THEN", "REPEAT", "UNTIL", "WHILE", "DO", "FOR", "GOTO", "CASE", "TO",
  "DOWNTO", "READ", "TYPEINTEGER", "TYPEREAL", "TYPECHAR", "TYPESTRING",
  "TYPEBOOL", "FALSE", "TRUE", "PROCEDURE", "$accept", "program",
  "program_head", "@1", "routine", "routine_head", "const_part",
  "const_expr_list", "$@2", "$@3", "const_value", "type_part",
  "type_decl_list", "type_definition", "$@4", "type_decl",
  "array_type_decl", "record_type_decl", "field_decl_list", "field_decl",
  "simple_type_decl", "name_list", "var_part", "var_decl_list", "var_decl",
  "routine_part", "function_decl", "$@5", "procedure_decl", "$@6",
  "parameters", "routine_body", "compound_stmt", "stmt_list", "stmt",
  "non_label_stmt", "assign_stmt", "$@7", "$@8", "$@9", "@10", "proc_stmt",
  "$@11", "if_stmt", "else_clause", "repeat_stmt", "while_stmt",
  "for_stmt", "$@12", "direction", "case_stmt", "case_expr_list",
  "case_expr", "$@13", "goto_stmt", "expression", "expr", "term", "factor",
  "$@14", "$@15", "args_list", YY_NULL
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    66,    65,    67,    67,    68,    69,    69,
      71,    70,    72,    70,    73,    73,    73,    73,    74,    74,
      75,    75,    77,    76,    78,    78,    78,    79,    80,    81,
      81,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    87,
      88,    88,    88,    88,    90,    89,    92,    91,    93,    94,
      95,    96,    96,    97,    97,    98,    98,    98,    98,    98,
      98,    98,    98,    98,   100,    99,   101,    99,   102,   103,
      99,   104,   105,   104,   104,   106,   107,   107,   108,   109,
     111,   110,   112,   112,   113,   114,   114,   115,   116,   115,
     117,   118,   118,   118,   118,   118,   118,   118,   119,   119,
     119,   119,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   122,   121,   123,   121,   124,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     4,     2,     0,     4,     2,     0,
       0,     6,     0,     5,     1,     1,     1,     1,     2,     0,
       2,     1,     0,     5,     1,     1,     1,     6,     3,     2,
       1,     4,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     5,     3,     3,     1,     2,     0,     2,     1,     4,
       2,     2,     1,     1,     0,     6,     0,     7,     0,     1,
       3,     3,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     7,     0,     0,
       7,     1,     0,     5,     4,     5,     2,     0,     4,     4,
       0,     9,     1,     1,     5,     2,     1,     4,     0,     5,
       2,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     1,     1,     1,     3,
       2,     2,     0,     5,     0,     4,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     9,     3,     1,     0,     0,     0,    19,
       0,    12,     8,     2,    62,     5,    59,     0,    46,     4,
       0,    10,     0,    22,    18,    21,     0,     0,     0,     0,
      81,     0,    60,     0,    62,     0,     0,     0,     0,     0,
      67,     0,    64,    65,    66,    68,    69,    70,    71,    72,
      73,     0,    20,    44,     0,    45,    48,     0,     0,     7,
      52,    53,    14,    15,    16,    17,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,     0,   118,     0,   107,
     111,   116,     0,     0,    90,   100,     0,     0,    61,     0,
       0,     0,    47,    54,    56,    50,    51,    13,     0,     0,
       0,     0,     0,    63,     0,     0,     0,   121,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    32,    33,    34,    35,    36,     0,     0,
      25,    26,    24,    43,     0,    58,    58,    11,    75,     0,
      79,   127,     0,     0,     0,   119,   105,   101,   102,   103,
     104,   106,    87,   109,   108,   110,   112,   113,   115,   114,
      88,    89,     0,    98,     0,     0,    96,    84,     0,     0,
       0,    30,     0,     0,     0,     0,    23,    49,     0,     0,
       0,     0,     0,    83,     0,   125,     0,    85,     0,     0,
       0,    94,    95,    42,     0,    28,    29,     0,    38,     0,
      39,     0,     9,     0,     0,   126,   123,    86,    92,    93,
       0,     0,     0,     0,     0,     0,    40,    55,     0,    77,
      80,     0,     0,    97,     0,    31,    41,    57,     0,    99,
      27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,     7,     8,     9,    12,    29,    20,
      77,    18,    24,    25,    51,   139,   140,   141,   180,   181,
     142,    54,    27,    55,    56,    59,    60,   145,    61,   146,
     188,    15,    40,    22,    41,    42,    43,    68,    69,    70,
     191,    44,    71,    45,   197,    46,    47,    48,   125,   220,
      49,   175,   176,   199,    50,    78,    79,    80,    81,   104,
     105,   152
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -163
static const yytype_int16 yypact[] =
{
      25,    16,    22,    11,  -163,  -163,    55,    53,    28,    57,
      76,  -163,    82,  -163,  -163,  -163,  -163,    85,    63,  -163,
      78,  -163,     1,  -163,    85,  -163,    92,   -24,   257,   101,
      75,    93,  -163,   273,  -163,   273,   100,   112,   273,    99,
    -163,   121,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,   122,  -163,  -163,    19,    92,  -163,   132,   137,   -24,
    -163,  -163,  -163,  -163,  -163,  -163,   131,   257,   102,   130,
     141,   134,   168,    44,   273,   273,   273,  -163,   200,    -7,
     274,  -163,   119,   107,  -163,  -163,   216,   273,  -163,     9,
     149,     9,  -163,  -163,  -163,  -163,  -163,  -163,   143,   273,
     273,   151,   273,  -163,   142,   150,   227,  -163,  -163,   273,
     273,   273,   273,   273,   273,   145,   273,   273,   273,   273,
     273,   273,   273,   273,   145,   127,   171,   139,   148,   164,
      92,    92,   257,  -163,  -163,  -163,  -163,  -163,   158,   178,
    -163,  -163,  -163,  -163,   179,  -163,  -163,  -163,   258,   243,
    -163,   258,    14,   273,   190,  -163,    -7,    -7,    -7,    -7,
      -7,    -7,   155,   274,   274,   274,  -163,  -163,  -163,  -163,
     258,  -163,   273,  -163,   187,   299,  -163,  -163,   208,    71,
       7,  -163,    33,    18,   192,   257,  -163,  -163,   193,   210,
     181,   183,   273,  -163,   254,  -163,   145,  -163,    80,   214,
     145,  -163,  -163,  -163,   219,  -163,  -163,     9,  -163,    95,
    -163,    71,    46,   273,   273,   258,  -163,  -163,  -163,  -163,
     273,   145,   230,   223,   232,   257,  -163,  -163,   239,   258,
     258,   195,   241,  -163,     9,  -163,  -163,  -163,   145,  -163,
    -163,  -163
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,  -163,    40,  -163,  -163,  -163,  -163,  -163,
     -28,  -163,  -163,   213,  -163,   -90,  -163,  -163,  -163,    73,
    -162,  -123,  -163,  -163,   212,  -163,   209,  -163,   234,  -163,
     123,  -163,   283,   248,  -113,   222,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,   124,  -163,  -163,   -29,    91,   -11,   -40,  -163,
    -163,  -163
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -125
static const yytype_int16 yytable[] =
{
      66,   144,   162,    57,    30,    31,    83,   182,   183,    86,
      53,   171,   128,    62,    63,    64,    65,   204,   116,     4,
      -6,    32,     5,   129,     6,   192,   117,   205,   130,    90,
      90,   131,   118,     1,   132,   107,   108,   193,    58,    98,
      91,   208,    14,    33,    90,   106,    34,   127,    35,   227,
      36,    37,    38,  -124,   207,    39,    -6,   182,    11,     6,
    -122,   138,    13,   138,   133,   134,   135,   136,   137,    14,
     148,   149,    17,   151,   128,    62,    63,    64,    65,   166,
     167,   168,   169,   217,   -78,    21,    19,   222,    23,    26,
      28,   -76,   109,   131,   170,    53,   132,   -82,   174,    62,
      63,    64,    65,    84,   184,   163,   164,   165,   232,   110,
     111,   112,   113,    67,    72,   -74,    85,   224,   114,   109,
     225,    87,    30,    31,   194,   241,   133,   134,   135,   136,
     137,    88,   218,   219,    89,    93,   110,   111,   112,   113,
      94,    97,    99,   198,   240,   114,   100,   174,    30,    31,
     101,   138,   143,   147,   150,   124,   102,   210,   153,   154,
      14,    33,   177,   215,    34,   123,    35,   172,    36,    37,
      38,    30,   178,    39,   173,    62,    63,    64,    65,   138,
     179,   226,   185,   138,   229,   230,    14,    33,   186,   187,
      34,   231,    35,   195,    36,    37,    38,   236,   196,    39,
     156,   157,   158,   159,   160,   161,   138,   109,   200,    14,
      33,   203,   109,    34,   211,    35,   209,    36,    37,    38,
     212,   213,    39,   214,   110,   111,   112,   113,   109,   110,
     111,   112,   113,   114,   126,   221,   223,    52,   114,   109,
     233,   234,   235,   238,   115,   110,   111,   112,   113,   237,
     155,   239,   228,   206,   114,   109,   110,   111,   112,   113,
     190,    62,    63,    64,    65,   114,   109,    92,    95,   189,
     109,   216,   110,   111,   112,   113,    73,    62,    63,    64,
      65,   114,    82,   110,   111,   112,   113,   110,   111,   112,
     113,    16,   114,    96,   103,    74,   114,     0,    75,   202,
       0,    76,   173,    62,    63,    64,    65,     0,   119,   120,
     121,   122,     0,     0,     0,     0,     0,     0,     0,   201
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-163)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      28,    91,   115,    27,     3,     4,    35,   130,   131,    38,
       3,   124,     3,     4,     5,     6,     7,   179,    25,     3,
       9,    20,     0,    14,    13,    11,    33,    20,    19,    11,
      11,    22,    39,     8,    25,    75,    76,    23,    62,    67,
      21,    23,    41,    42,    11,    74,    45,    87,    47,   211,
      49,    50,    51,     9,    21,    54,    10,   180,     3,    13,
      16,    89,     9,    91,    55,    56,    57,    58,    59,    41,
      99,   100,    15,   102,     3,     4,     5,     6,     7,   119,
     120,   121,   122,   196,     9,     3,    10,   200,     3,    26,
      12,    16,    12,    22,   123,     3,    25,    22,   126,     4,
       5,     6,     7,     3,   132,   116,   117,   118,   221,    29,
      30,    31,    32,    12,    21,    40,     4,   207,    38,    12,
      25,    22,     3,     4,   153,   238,    55,    56,    57,    58,
      59,    10,    52,    53,    12,     3,    29,    30,    31,    32,
       3,    10,    40,   172,   234,    38,    16,   175,     3,     4,
       9,   179,     3,    10,     3,    48,    22,   185,    16,     9,
      41,    42,    23,   192,    45,    46,    47,    40,    49,    50,
      51,     3,    24,    54,     3,     4,     5,     6,     7,   207,
      16,   209,    24,   211,   213,   214,    41,    42,    10,    10,
      45,   220,    47,     3,    49,    50,    51,   225,    43,    54,
     109,   110,   111,   112,   113,   114,   234,    12,    21,    41,
      42,     3,    12,    45,    21,    47,    24,    49,    50,    51,
      10,    40,    54,    40,    29,    30,    31,    32,    12,    29,
      30,    31,    32,    38,    18,    21,    17,    24,    38,    12,
      10,    18,    10,    48,    44,    29,    30,    31,    32,    10,
      23,    10,   212,   180,    38,    12,    29,    30,    31,    32,
      17,     4,     5,     6,     7,    38,    12,    55,    59,   146,
      12,    17,    29,    30,    31,    32,     3,     4,     5,     6,
       7,    38,    34,    29,    30,    31,    32,    29,    30,    31,
      32,     8,    38,    59,    72,    22,    38,    -1,    25,   175,
      -1,    28,     3,     4,     5,     6,     7,    -1,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    64,    65,     3,     0,    13,    67,    68,    69,
      66,     3,    70,     9,    41,    94,    95,    15,    74,    10,
      72,     3,    96,     3,    75,    76,    26,    85,    12,    71,
       3,     4,    20,    42,    45,    47,    49,    50,    51,    54,
      95,    97,    98,    99,   104,   106,   108,   109,   110,   113,
     117,    77,    76,     3,    84,    86,    87,    27,    62,    88,
      89,    91,     4,     5,     6,     7,    73,    12,   100,   101,
     102,   105,    21,     3,    22,    25,    28,    73,   118,   119,
     120,   121,    96,   118,     3,     4,   118,    22,    10,    12,
      11,    21,    87,     3,     3,    89,    91,    10,    73,    40,
      16,     9,    22,    98,   122,   123,   118,   121,   121,    12,
      29,    30,    31,    32,    38,    44,    25,    33,    39,    34,
      35,    36,    37,    46,    48,   111,    18,   121,     3,    14,
      19,    22,    25,    55,    56,    57,    58,    59,    73,    78,
      79,    80,    83,     3,    78,    90,    92,    10,   118,   118,
       3,   118,   124,    16,     9,    23,   119,   119,   119,   119,
     119,   119,    97,   120,   120,   120,   121,   121,   121,   121,
     118,    97,    40,     3,    73,   114,   115,    23,    24,    16,
      81,    82,    84,    84,    73,    24,    10,    10,    93,    93,
      17,   103,    11,    23,   118,     3,    43,   107,   118,   116,
      21,    20,   115,     3,    83,    20,    82,    21,    23,    24,
      73,    21,    10,    40,    40,   118,    17,    97,    52,    53,
     112,    21,    97,    17,    78,    25,    73,    83,    67,   118,
     118,   118,    97,    10,    18,    10,    73,    10,    48,    10,
      78,    97
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
/* Line 1787 of yacc.c  */
#line 29 "pascal.y"
    { (yyval) = newModuleNode(ProgramK);
                 (yyval)->child[0] = (yyvsp[(1) - (3)]);
                 (yyval)->child[1] = (yyvsp[(2) - (3)]);
                 (yyval)->lineno=lineno;
               }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 36 "pascal.y"
    { (yyval)->attr.name = copyString(tokenString);
                }
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 42 "pascal.y"
    { (yyval) = newModuleNode(RoutineK);
                (yyval)->child[0] = (yyvsp[(1) - (2)]);
                (yyval)->child[1] = (yyvsp[(2) - (2)]);
                (yyval)->lineno=lineno;
              }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 47 "pascal.y"
    {(yyval)=NULL;}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 50 "pascal.y"
    {
                (yyval) = newModuleNode(Routine_headK);
                (yyval)->child[0]=(yyvsp[(1) - (4)]);
                (yyval)->child[1]=(yyvsp[(2) - (4)]);
                (yyval)->child[2]=(yyvsp[(3) - (4)]);
                (yyval)->child[3]=(yyvsp[(4) - (4)]);
                (yyval)->lineno=lineno;
              }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 58 "pascal.y"
    { (yyval) = (yyvsp[(2) - (2)]);}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 59 "pascal.y"
    {(yyval)=NULL;}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 62 "pascal.y"
    { savedName = copyString(tokenString);
                        savedLineNo = lineno; 
                      }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 66 "pascal.y"
    {TreeNode * t=(yyvsp[(1) - (6)]);
                           if(t!=NULL)
                           {    while(t->sibling!=NULL)
                                   t=t->sibling;
                                t->sibling=newStmtNode(EqualK);
                                t->sibling->child[0]=(yyvsp[(5) - (6)]);
                                t->sibling->attr.name = savedName;
                                t->sibling->lineno =savedLineNo;
                                (yyval) =(yyvsp[(1) - (6)]);
                           }
                           else
                           {
                                (yyval) =(yyvsp[(1) - (6)]);
                           }
                      }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 81 "pascal.y"
    { savedName = copyString(tokenString);savedLineNo = lineno;}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 83 "pascal.y"
    { (yyval) =newStmtNode(EqualK);
                        (yyval)->child[0]=(yyvsp[(4) - (5)]);
                        (yyval)->attr.name = savedName;
                        (yyval)->lineno =savedLineNo;
                      }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 90 "pascal.y"
    { (yyval) =newExpNode(ConstK);
                      (yyval)->int_val=atoi(tokenString);
                    }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 94 "pascal.y"
    { (yyval) =newExpNode(ConstK);
                      (yyval)->double_val=atof(tokenString);
                    }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 98 "pascal.y"
    { (yyval) =newExpNode(ConstK);
                      (yyval)->char_val=tokenString;
                    }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 102 "pascal.y"
    { (yyval) =newExpNode(ConstK);
                      (yyval)->string_val=malloc((strlen(tokenString)+1)*sizeof(char));
                      strcpy((yyval)->string_val,tokenString);
                    }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 107 "pascal.y"
    { (yyval) = (yyvsp[(2) - (2)]);}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 108 "pascal.y"
    {(yyval)=NULL}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 110 "pascal.y"
    { TreeNode * t = (yyvsp[(1) - (2)]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = (yyvsp[(2) - (2)]);
                     (yyval) = (yyvsp[(1) - (2)]); }
                     else (yyval) = (yyvsp[(2) - (2)]);
                 }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 118 "pascal.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 120 "pascal.y"
    { savedName = copyString(tokenString);
                         savedLineNo = lineno; }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 123 "pascal.y"
    { (yyval) =newStmtNode(EqualK);
                     (yyval)->child[0]=(yyvsp[(4) - (5)]);
                     (yyval)->attr.name = savedName;
                     (yyval)->lineno =savedLineNo;  
                   }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 128 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 129 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 130 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 132 "pascal.y"
    { (yyval) =newDeclNode(ArrayK);
                     (yyval)->child[0]=(yyvsp[(3) - (6)]);
                     (yyval)->child[1]=(yyvsp[(6) - (6)]);
                     (yyval)->lineno =lineno;
                   }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 137 "pascal.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 139 "pascal.y"
    {TreeNode* t = (yyvsp[(1) - (2)]);
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = (yyvsp[(2) - (2)]);
                              (yyval) = (yyvsp[(1) - (2)]); 
                        }
                        else (yyval) = (yyvsp[(2) - (2)]);
                   }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 148 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 150 "pascal.y"
    { (yyval) =newDeclNode(FieldK);
                (yyval)->child[0]=(yyvsp[(1) - (4)]);
                (yyval)->child[1]=(yyvsp[(3) - (4)]);
                (yyval)->lineno =lineno;
              }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 155 "pascal.y"
    {}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 156 "pascal.y"
    {}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 157 "pascal.y"
    {}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 158 "pascal.y"
    {}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 159 "pascal.y"
    {}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 160 "pascal.y"
    { (yyval) = newExpNode(IdK);
                         (yyval)->attr.name =copyString(tokenString);
                         (yyval)->lineno = lineno;
                       }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 164 "pascal.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 166 "pascal.y"
    {
                     (yyval) =newDeclNode(SimpleK);
                     (yyval)->child[0]=(yyvsp[(1) - (3)]);
                     (yyval)->child[1]=(yyvsp[(3) - (3)]);
                     (yyval)->lineno =lineno;
                   }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 173 "pascal.y"
    {
                     (yyval) =newDeclNode(SimpleK);
                     (yyval)->child[2]=(yyvsp[(1) - (4)]);
                     (yyval)->child[3]=(yyvsp[(3) - (4)]);
                     (yyval)->lineno =lineno;
                   }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 180 "pascal.y"
    {
                     (yyval) =newDeclNode(SimpleK);
                     (yyval)->child[4]=(yyvsp[(1) - (5)]);
                     (yyval)->child[5]=(yyvsp[(3) - (5)]);
                     (yyval)->lineno =lineno;
                   }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 187 "pascal.y"
    {
                     (yyval) =newDeclNode(SimpleK);
                     (yyval)->child[6]=(yyvsp[(1) - (3)]);
                     (yyval)->child[7]=(yyvsp[(3) - (3)]);
                     (yyval)->lineno =lineno;
                   }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 195 "pascal.y"
    { TreeNode* t = (yyvsp[(1) - (3)]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling->attr.name=copyString(tokenString);
                     (yyval) = (yyvsp[(1) - (3)]); 
                   }
                   else 
		     (yyval)->attr.name=copyString(tokenString);
                   
             }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 206 "pascal.y"
    { (yyval) = newExpNode(IdK);
                  (yyval)->attr.name =copyString(tokenString);
                  (yyval)->lineno = lineno;
                }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 211 "pascal.y"
    {(yyval)=(yyvsp[(2) - (2)]);}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 212 "pascal.y"
    {(yyval)=NULL}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 214 "pascal.y"
    {TreeNode* t = (yyvsp[(1) - (2)]);
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = (yyvsp[(2) - (2)]);
                              (yyval) = (yyvsp[(1) - (2)]); 
                        }
                        else (yyval) = (yyvsp[(2) - (2)]);
                   }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 223 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 225 "pascal.y"
    { (yyval) =newDeclNode(FieldK);
               (yyval)->child[0]=(yyvsp[(1) - (4)]);
               (yyval)->child[1]=(yyvsp[(3) - (4)]);
               (yyval)->lineno =lineno;
             }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 231 "pascal.y"
    {TreeNode* t = (yyvsp[(1) - (2)]);
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = (yyvsp[(2) - (2)]);
                              (yyval) = (yyvsp[(1) - (2)]); 
                        }
                        else (yyval) = (yyvsp[(2) - (2)]);
                   }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 241 "pascal.y"
    {TreeNode* t = (yyvsp[(1) - (2)]);
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = (yyvsp[(2) - (2)]);
                              (yyval) = (yyvsp[(1) - (2)]); 
                        }
                        else (yyval) = (yyvsp[(2) - (2)]);
                   }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 250 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 251 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 253 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; 
                 }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 257 "pascal.y"
    { (yyval) = newModuleNode(FunctionK);
                   (yyval)->child[0] = (yyvsp[(4) - (6)]);
                   (yyval)->child[1] = (yyvsp[(6) - (6)]);
                   (yyval)->attr.name=savedName;
                   (yyval)->lineno=savedLineNo;
                 }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 264 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; 
                 }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 268 "pascal.y"
    { (yyval) = newModuleNode(ProcedureK);
                   (yyval)->child[0] = (yyvsp[(4) - (7)]);
                   (yyval)->child[1] = (yyvsp[(6) - (7)]);
                   (yyval)->attr.name=savedName;
                   (yyval)->lineno=savedLineNo;
                 }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 275 "pascal.y"
    {(yyval)=NULL}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 300 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 301 "pascal.y"
    {(yyval)=(yyvsp[(2) - (3)]);}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 303 "pascal.y"
    { TreeNode* t = (yyvsp[(1) - (3)]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = (yyvsp[(2) - (3)]);
                     (yyval) = (yyvsp[(1) - (3)]); }
                     else (yyval) = (yyvsp[(2) - (3)]);
                 }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 311 "pascal.y"
    {(yyval)=NULL}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 313 "pascal.y"
    { (yyval) = newStmtNode(LabelK);
           (yyval)->child[0] = (yyvsp[(3) - (3)]);
           (yyval)->attr.goto_label=(yyvsp[(1) - (3)])->attr.int_val;
           (yyval)->lineno = savedLineNo;
         }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 318 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 319 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 320 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 321 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 322 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 323 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 324 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 325 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 326 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 327 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 329 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 332 "pascal.y"
    { (yyval) = newStmtNode(AssignK);
                   (yyval)->child[0] = (yyvsp[(4) - (4)]);
                   (yyval)->attr.name = savedName;
                   (yyval)->lineno = savedLineNo;
                 }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 337 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 340 "pascal.y"
    { (yyval) = newStmtNode(AssignK);
                  (yyval)->attr.name = savedName;
                  (yyval)->child[1] = (yyvsp[(4) - (7)]);
                  (yyval)->child[2] = (yyvsp[(7) - (7)]);
                  (yyval)->lineno = savedLineNo;
                }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 346 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 349 "pascal.y"
    { (yyval) = newStmtNode(AssignK);
                  (yyval)->attr.name = savedName;
                  (yyval)->child[3]=newExpNode(IdK);
                  (yyval)->child[3]->attr.name = copyString(tokenString);
                  }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 355 "pascal.y"
    { 
                  (yyval)->child[4] = (yyvsp[(7) - (7)]);
                  (yyval)->lineno = savedLineNo;
                }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 359 "pascal.y"
    {(yyval)=newExpNode(IdK);(yyval)->attr.name = copyString(tokenString);(yyval)->lineno=lineno;}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 360 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 363 "pascal.y"
    {(yyval) = newStmtNode(ProcK);
              (yyval)->attr.name = savedName;
              (yyval)->child[1]=(yyvsp[(3) - (5)]);
              (yyval)->lineno = savedLineNo;
             }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 371 "pascal.y"
    { (yyval) = newStmtNode(IfK);
                   (yyval)->child[0] = (yyvsp[(2) - (5)]);
                   (yyval)->child[1] = (yyvsp[(4) - (5)]);
                   (yyval)->child[2] = (yyvsp[(5) - (5)]);
                   (yyval)->lineno=lineno;
                }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 377 "pascal.y"
    {(yyval) = (yyvsp[(2) - (2)])}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 379 "pascal.y"
    { (yyval) = newStmtNode(RepeatK);
                  (yyval)->child[0] = (yyvsp[(2) - (4)]);
                  (yyval)->child[1] = (yyvsp[(4) - (4)]);
                  (yyval)->lineno=lineno;
                }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 386 "pascal.y"
    { (yyval) = newStmtNode(WhileK);
                  (yyval)->child[0] = (yyvsp[(2) - (4)]);
                  (yyval)->child[1] = (yyvsp[(4) - (4)]);
                  (yyval)->lineno=lineno;
                }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 392 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 395 "pascal.y"
    { (yyval) = newStmtNode(ForK);
                  (yyval)->attr.name = savedName;
                  (yyval)->child[0] = (yyvsp[(5) - (9)]);
                  (yyval)->child[1] = (yyvsp[(6) - (9)]);
                  (yyval)->child[2] = (yyvsp[(7) - (9)]);
                  (yyval)->child[3] = (yyvsp[(9) - (9)]); 
                  (yyval)->lineno=savedLineno;
                }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 404 "pascal.y"
    {(yyval)->attr.direction=1}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 405 "pascal.y"
    {(yyval)->attr.direction=0}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 407 "pascal.y"
    { (yyval) = newStmtNode(CaseK);
                  (yyval)->child[0] = (yyvsp[(2) - (5)]);
                  (yyval)->child[1] = (yyvsp[(4) - (5)]);
                  (yyval)->lineno=lineno;
                }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 414 "pascal.y"
    { TreeNode* t = (yyvsp[(1) - (2)]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = (yyvsp[(2) - (2)]);
                     (yyval) = (yyvsp[(1) - (2)]); }
                     else (yyval) = (yyvsp[(2) - (2)]);
                  }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 422 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 424 "pascal.y"
    { (yyval) = newExpNode(Case_expK);
                  (yyval)->child[0] = (yyvsp[(1) - (4)]);
                  (yyval)->child[1] = (yyvsp[(3) - (4)]);
                  (yyval)->lineno=lineno;
                }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 429 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 432 "pascal.y"
    { (yyval) = newExpNode(Case_expK);
                  (yyval)->attr.name = savedName;
                  (yyval)->child[2] = (yyvsp[(4) - (5)]);
                  (yyval)->lineno = savedLineNo;
                }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 438 "pascal.y"
    { (yyval) = newStmtNode(GotoK);
                  (yyval)->attr.goto_label = (yyvsp[(2) - (2)])->attr.int_val;
                  (yyval)->lineno = lineno;
                }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 453 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = GE;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 460 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = GT;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 467 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = LE;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 474 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = LT;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 481 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = EQUAL;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 488 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = UNEQUAL;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 494 "pascal.y"
    {(yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 497 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = PLUS;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 504 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = MINUS;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 511 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = OR;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 517 "pascal.y"
    { (yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 520 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = MUL;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 527 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = DIV;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 534 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = MOD;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 541 "pascal.y"
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                   (yyval)->attr.op = AND;
                   (yyval)->lineno = lineno;
                 }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 547 "pascal.y"
    { (yyval) = (yyvsp[(1) - (1)]);}
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 549 "pascal.y"
    { (yyval) = newExpNode(IdK);
                  (yyval)->attr.name =copyString(tokenString);
                  (yyval)->lineno = lineno;
                }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 554 "pascal.y"
    {(yyval) = (yyvsp[(1) - (1)])}
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 556 "pascal.y"
    {(yyval) = (yyvsp[(1) - (3)])}
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 558 "pascal.y"
    {(yyval) = ~(yyvsp[(2) - (2)])}
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 560 "pascal.y"
    {(yyval) = -(yyvsp[(2) - (2)])}
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 561 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno;}
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 564 "pascal.y"
    {(yyval)= newExpNode(factorK);
                 (yyval)->attr.name =savedName;
                 (yyval)->child[0]=(yyvsp[(4) - (5)]);}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 567 "pascal.y"
    { savedName = copyString(tokenString);
                   savedLineNo = lineno;}
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 570 "pascal.y"
    {(yyval)=newExpNode(factorK);
                 (yyval)->attr.name =savedName;
                 (yyval)->child[1]=newExpNode(Idk);
                 (yyval)->child[1]->attr.name=copyString(tokenString);
                 (yyval)->lineno =savedLineNo;
                }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 578 "pascal.y"
    {  TreeNode* t = (yyvsp[(1) - (3)]);
                    if (t != NULL)
                    {  while (t->sibling != NULL)
                         t = t->sibling;
                       t->sibling = (yyvsp[(3) - (3)]);
                        (yyval) = (yyvsp[(1) - (3)]); 
                    }
                    else (yyval) = (yyvsp[(3) - (3)]);
              }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 587 "pascal.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;


/* Line 1787 of yacc.c  */
#line 2765 "y.tab.c"
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


/* Line 2050 of yacc.c  */
#line 589 "pascal.y"


int yyerror(char * message)
{ fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ yyparse();
  return savedTree;
}
