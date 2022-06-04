
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

/* Line 189 of yacc.c  */
#line 1 "p.y"

    #include <stdio.h> /*es una libreria*/
    int yylex();       /*yylex() es la funcion que llama al analizador lexico*/
    int yyerror();    /*yyerror es una funcion que devuelte un char si detecta un error*/
    int yylineno;     /*una variable entera que contiene el numero de lineas*/
    extern FILE *yyin;    /*es un puntero al archivo por defecto del analizador lexico*/


/* Line 189 of yacc.c  */
#line 82 "y.tab.c"

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
     DOCTYPE = 258,
     HTMLA = 259,
     HTMLC = 260,
     HEADA = 261,
     HEADC = 262,
     META = 263,
     TITLEA = 264,
     TITLEC = 265,
     BODYA = 266,
     BODYC = 267,
     SECTIONA = 268,
     SECTIONC = 269,
     DIVA = 270,
     DIVC = 271,
     PA = 272,
     PC = 273,
     H1A = 274,
     H1C = 275,
     H2A = 276,
     H2C = 277,
     H3A = 278,
     H3C = 279,
     H4A = 280,
     H4C = 281,
     H5A = 282,
     H5C = 283,
     H6A = 284,
     H6C = 285,
     HR = 286,
     BR = 287,
     STRONGA = 288,
     STRONGC = 289,
     MARKA = 290,
     MARKC = 291,
     EMA = 292,
     EMC = 293,
     TABLEA = 294,
     TABLEC = 295,
     CAPTIONA = 296,
     CAPTIONC = 297,
     THEADA = 298,
     THEADC = 299,
     TBODYA = 300,
     TBODYC = 301,
     TFOOTA = 302,
     TFOOTC = 303,
     TRA = 304,
     TRC = 305,
     THA = 306,
     THC = 307,
     TDA = 308,
     TDC = 309,
     AA = 310,
     AC = 311,
     IMG = 312,
     BRAKC = 313,
     TEXTO = 314,
     COMILLAS = 315,
     LANG = 316,
     NAME = 317,
     CONTENT = 318,
     CHARSET = 319,
     CLASS = 320,
     ID = 321,
     HREF = 322,
     SRC = 323,
     ALT = 324,
     WIDTH = 325,
     HEIGHT = 326,
     TARGET = 327,
     BORDER = 328,
     RULES = 329,
     OLA = 330,
     OLC = 331,
     ULC = 332,
     ULA = 333,
     LIC = 334,
     LIA = 335,
     TYPE = 336,
     VALUE = 337,
     IGUAL = 338
   };
#endif
/* Tokens.  */
#define DOCTYPE 258
#define HTMLA 259
#define HTMLC 260
#define HEADA 261
#define HEADC 262
#define META 263
#define TITLEA 264
#define TITLEC 265
#define BODYA 266
#define BODYC 267
#define SECTIONA 268
#define SECTIONC 269
#define DIVA 270
#define DIVC 271
#define PA 272
#define PC 273
#define H1A 274
#define H1C 275
#define H2A 276
#define H2C 277
#define H3A 278
#define H3C 279
#define H4A 280
#define H4C 281
#define H5A 282
#define H5C 283
#define H6A 284
#define H6C 285
#define HR 286
#define BR 287
#define STRONGA 288
#define STRONGC 289
#define MARKA 290
#define MARKC 291
#define EMA 292
#define EMC 293
#define TABLEA 294
#define TABLEC 295
#define CAPTIONA 296
#define CAPTIONC 297
#define THEADA 298
#define THEADC 299
#define TBODYA 300
#define TBODYC 301
#define TFOOTA 302
#define TFOOTC 303
#define TRA 304
#define TRC 305
#define THA 306
#define THC 307
#define TDA 308
#define TDC 309
#define AA 310
#define AC 311
#define IMG 312
#define BRAKC 313
#define TEXTO 314
#define COMILLAS 315
#define LANG 316
#define NAME 317
#define CONTENT 318
#define CHARSET 319
#define CLASS 320
#define ID 321
#define HREF 322
#define SRC 323
#define ALT 324
#define WIDTH 325
#define HEIGHT 326
#define TARGET 327
#define BORDER 328
#define RULES 329
#define OLA 330
#define OLC 331
#define ULC 332
#define ULA 333
#define LIC 334
#define LIA 335
#define TYPE 336
#define VALUE 337
#define IGUAL 338




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 290 "y.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  281
/* YYNRULES -- Number of states.  */
#define YYNSTATES  621

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    14,    22,    31,    39,    44,    49,
      56,    62,    68,    72,    77,    81,    86,    90,    92,    94,
      96,    98,   100,   102,   104,   106,   108,   112,   116,   121,
     127,   132,   138,   141,   146,   152,   157,   161,   166,   172,
     177,   181,   186,   192,   197,   203,   208,   214,   219,   225,
     230,   236,   241,   247,   252,   258,   263,   269,   274,   280,
     285,   291,   296,   302,   307,   313,   318,   324,   329,   335,
     338,   341,   345,   349,   354,   360,   366,   372,   378,   383,
     389,   395,   401,   406,   412,   418,   424,   430,   437,   443,
     448,   454,   459,   464,   470,   477,   483,   489,   494,   503,
     512,   520,   528,   536,   544,   551,   558,   564,   571,   577,
     584,   597,   606,   612,   617,   623,   628,   634,   639,   645,
     650,   654,   660,   665,   670,   674,   679,   685,   687,   691,
     696,   700,   703,   706,   709,   712,   715,   718,   722,   725,
     727,   729,   731,   734,   737,   741,   745,   749,   753,   757,
     761,   765,   769,   773,   776,   779,   782,   785,   788,   791,
     794,   797,   800,   803,   806,   809,   812,   815,   818,   821,
     824,   827,   830,   833,   836,   839,   842,   845,   848,   851,
     854,   857,   859,   861,   863,   865,   867,   869,   871,   874,
     877,   881,   885,   888,   892,   894,   897,   899,   902,   904,
     907,   909,   911,   913,   916,   919,   922,   925,   927,   929,
     931,   933,   936,   938,   940,   945,   951,   956,   962,   967,
     973,   978,   984,   989,   995,  1000,  1006,  1010,  1014,  1019,
    1025,  1030,  1036,  1041,  1047,  1052,  1058,  1061,  1063,  1068,
    1074,  1079,  1085,  1090,  1096,  1101,  1107,  1110,  1112,  1117,
    1123,  1128,  1134,  1139,  1145,  1150,  1156,  1159,  1161,  1166,
    1171,  1176,  1181,  1186,  1191,  1196,  1201,  1206,  1211,  1216,
    1221,  1226,  1231,  1236,  1241,  1246,  1251,  1256,  1261,  1266,
    1271,  1276
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      85,     0,    -1,     3,    58,    86,    -1,     4,    61,    58,
      87,    89,     5,    -1,     4,    65,    61,    58,    87,    89,
       5,    -1,     4,    65,    66,    61,    58,    87,    89,     5,
      -1,     4,    66,    61,    58,    87,    89,     5,    -1,     6,
      58,    88,     7,    -1,     8,   104,    58,    88,    -1,     9,
     107,    58,   111,    10,    88,    -1,     9,   107,    58,   111,
      10,    -1,     9,    58,   111,    10,    88,    -1,     8,   104,
      58,    -1,     9,    58,   111,    10,    -1,     9,   107,    58,
      -1,    11,    58,    90,    12,    -1,    11,    58,    12,    -1,
      91,    -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,
      96,    -1,    98,    -1,   112,    -1,    97,    -1,    57,   105,
      58,    -1,    57,   116,    58,    -1,    33,    58,   111,    34,
      -1,    33,   107,    58,   111,    34,    -1,    33,    58,   113,
      34,    -1,    33,   107,    58,   113,    34,    -1,    90,    90,
      -1,    13,    58,    90,    14,    -1,    13,   107,    58,    90,
      14,    -1,    13,   107,    58,    14,    -1,    13,    58,    14,
      -1,    15,    58,    90,    16,    -1,    15,   107,    58,    90,
      16,    -1,    15,   107,    58,    16,    -1,    15,    58,    16,
      -1,    17,    58,   111,    18,    -1,    17,   107,    58,   111,
      18,    -1,    17,    58,   112,    18,    -1,    17,   107,    58,
     112,    18,    -1,    19,    58,   111,    20,    -1,    19,   107,
      58,   111,    20,    -1,    21,    58,   111,    22,    -1,    21,
     107,    58,   111,    22,    -1,    23,    58,   111,    24,    -1,
      23,   107,    58,   111,    24,    -1,    25,    58,   111,    26,
      -1,    25,   107,    58,   111,    26,    -1,    27,    58,   111,
      28,    -1,    27,   107,    58,   111,    28,    -1,    29,    58,
     111,    30,    -1,    29,   107,    58,   111,    30,    -1,    19,
      58,   112,    20,    -1,    19,   107,    58,   112,    20,    -1,
      21,    58,   112,    22,    -1,    21,   107,    58,   112,    22,
      -1,    23,    58,   112,    24,    -1,    23,   107,    58,   112,
      24,    -1,    25,    58,   112,    26,    -1,    25,   107,    58,
     112,    26,    -1,    27,    58,   112,    28,    -1,    27,   107,
      58,   112,    28,    -1,    29,    58,   112,    30,    -1,    29,
     107,    58,   112,    30,    -1,    31,    58,    -1,    32,    58,
      -1,    31,   107,    58,    -1,    32,   107,    58,    -1,    39,
      58,    99,    40,    -1,    39,    58,    99,    40,    96,    -1,
      39,   107,    58,    99,    40,    -1,    39,   107,   108,    99,
      40,    -1,    39,   108,    58,    99,    40,    -1,    39,    58,
     100,    40,    -1,    39,   107,    58,   100,    40,    -1,    39,
     107,   108,   100,    40,    -1,    39,   108,    58,   100,    40,
      -1,    39,    58,   101,    40,    -1,    39,   107,    58,   101,
      40,    -1,    39,   107,   108,   101,    40,    -1,    39,   108,
      58,   101,    40,    -1,    75,   107,    58,    90,    76,    -1,
      75,   107,   109,    58,    90,    76,    -1,    75,   109,    58,
      90,    76,    -1,    75,    58,    90,    76,    -1,    78,   107,
      58,    90,    77,    -1,    78,    58,    90,    77,    -1,    80,
      58,    90,    79,    -1,    80,   107,    58,    90,    79,    -1,
      80,   107,   110,    58,    90,    79,    -1,    80,   110,    58,
      90,    80,    -1,    55,   106,    58,   111,    56,    -1,    55,
      58,   111,    56,    -1,    55,   106,    58,    57,   105,    58,
     111,    56,    -1,    55,   106,    58,    57,   116,    58,   111,
      56,    -1,    55,    58,    57,   105,    58,   111,    56,    -1,
      55,    58,    57,   116,    58,   111,    56,    -1,    55,   106,
      58,    57,   105,    58,    56,    -1,    55,   106,    58,    57,
     116,    58,    56,    -1,    55,    58,    57,   105,    58,    56,
      -1,    55,    58,    57,   116,    58,    56,    -1,    41,    58,
     111,    42,   100,    -1,    41,   107,    58,   111,    42,   100,
      -1,    41,    58,   111,    42,   101,    -1,    41,   107,    58,
     111,    42,   101,    -1,    43,    58,   101,    44,    45,    58,
     101,    46,    47,    58,   101,    48,    -1,    43,    58,   101,
      44,    45,    58,   101,    46,    -1,    49,    58,   102,    50,
     101,    -1,    49,    58,   102,    50,    -1,    49,    58,   103,
      50,   101,    -1,    49,    58,   103,    50,    -1,    51,    58,
     111,    52,   102,    -1,    51,    58,   111,    52,    -1,    51,
      58,   111,    52,   103,    -1,    51,    58,    52,   102,    -1,
      51,    58,    52,    -1,    53,    58,   111,    54,   103,    -1,
      53,    58,   111,    54,    -1,    53,    58,    54,   103,    -1,
      53,    58,    54,    -1,    53,    58,    54,   102,    -1,    53,
      58,   111,    54,   102,    -1,   107,    -1,    65,    62,    63,
      -1,    65,    66,    62,    63,    -1,    66,    62,    63,    -1,
      62,    63,    -1,    65,    62,    -1,    65,    63,    -1,    66,
      62,    -1,    66,    63,    -1,    65,    64,    -1,    65,    66,
      64,    -1,    66,    64,    -1,    64,    -1,    62,    -1,    63,
      -1,    65,   116,    -1,    66,   116,    -1,    65,    66,   116,
      -1,    66,    65,   116,    -1,    68,    69,    71,    -1,    68,
      71,    69,    -1,    68,    69,    70,    -1,    68,    70,    69,
      -1,    68,    70,    71,    -1,    68,    71,    70,    -1,    69,
      68,    71,    -1,    69,    68,    -1,    69,    70,    -1,    69,
      71,    -1,    69,    65,    -1,    69,    66,    -1,    68,    69,
      -1,    70,    69,    -1,    71,    69,    -1,    65,    69,    -1,
      65,    66,    -1,    68,    70,    -1,    68,    71,    -1,    68,
      65,    -1,    68,    66,    -1,    70,    68,    -1,    71,    68,
      -1,    65,    68,    -1,    66,    68,    -1,    70,    71,    -1,
      70,    65,    -1,    70,    66,    -1,    65,    70,    -1,    66,
      70,    -1,    71,    70,    -1,    71,    65,    -1,    71,    66,
      -1,    65,    71,    -1,    66,    71,    -1,    65,    -1,    66,
      -1,    69,    -1,    68,    -1,    70,    -1,    71,    -1,    67,
      -1,    67,    72,    -1,    65,    67,    -1,    65,    66,    67,
      -1,    65,    67,    72,    -1,    66,    67,    -1,    66,    67,
      72,    -1,    65,    -1,    65,    66,    -1,    66,    -1,    66,
      65,    -1,    73,    -1,    73,    74,    -1,    74,    -1,    81,
      -1,    82,    -1,    59,   111,    -1,    60,   111,    -1,    83,
     111,    -1,    95,   111,    -1,    59,    -1,    60,    -1,    83,
      -1,    95,    -1,   112,   112,    -1,   111,    -1,    98,    -1,
      33,    58,   111,    34,    -1,    33,   107,    58,   111,    34,
      -1,    33,    58,   113,    34,    -1,    33,   107,    58,   113,
      34,    -1,    35,    58,   111,    36,    -1,    35,   107,    58,
     111,    36,    -1,    35,    58,   114,    36,    -1,    35,   107,
      58,   114,    36,    -1,    37,    58,   111,    38,    -1,    37,
     107,    58,   111,    38,    -1,    37,    58,   115,    38,    -1,
      37,   107,    58,   115,    38,    -1,    57,   105,    58,    -1,
      57,   116,    58,    -1,    35,    58,   111,    36,    -1,    35,
     107,    58,   111,    36,    -1,    35,    58,   114,    36,    -1,
      35,   107,    58,   114,    36,    -1,    37,    58,   111,    38,
      -1,    37,   107,    58,   111,    38,    -1,    37,    58,   115,
      38,    -1,    37,   107,    58,   115,    38,    -1,   113,   113,
      -1,   111,    -1,    33,    58,   111,    34,    -1,    33,   107,
      58,   111,    34,    -1,    33,    58,   113,    34,    -1,    33,
     107,    58,   113,    34,    -1,    37,    58,   111,    38,    -1,
      37,   107,    58,   111,    38,    -1,    37,    58,   115,    38,
      -1,    37,   107,    58,   115,    38,    -1,   114,   114,    -1,
     111,    -1,    33,    58,   111,    34,    -1,    33,   107,    58,
     111,    34,    -1,    33,    58,   113,    34,    -1,    33,   107,
      58,   113,    34,    -1,    35,    58,   111,    36,    -1,    35,
     107,    58,   111,    36,    -1,    35,    58,   114,    36,    -1,
      35,   107,    58,   114,    36,    -1,   115,   115,    -1,   111,
      -1,    68,    69,    70,    71,    -1,    68,    69,    71,    70,
      -1,    68,    71,    69,    70,    -1,    68,    71,    70,    69,
      -1,    68,    70,    71,    69,    -1,    68,    70,    69,    71,
      -1,    69,    68,    70,    71,    -1,    69,    68,    71,    70,
      -1,    69,    70,    68,    71,    -1,    69,    70,    71,    68,
      -1,    69,    71,    68,    70,    -1,    69,    71,    70,    68,
      -1,    70,    68,    69,    71,    -1,    70,    68,    71,    69,
      -1,    70,    69,    68,    71,    -1,    70,    69,    71,    68,
      -1,    70,    71,    69,    68,    -1,    70,    71,    68,    69,
      -1,    71,    68,    70,    69,    -1,    71,    68,    69,    70,
      -1,    71,    69,    68,    70,    -1,    71,    69,    70,    68,
      -1,    71,    70,    69,    68,    -1,    71,    70,    68,    69,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    99,   100,   101,   102,   104,   106,   107,
     108,   109,   110,   111,   112,   114,   115,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   134,   135,   136,   137,   139,   140,   141,
     142,   144,   145,   146,   147,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   174,
     175,   176,   177,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   216,   217,   218,   219,
     221,   222,   224,   225,   226,   227,   229,   230,   231,   232,
     233,   235,   236,   237,   238,   239,   240,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   297,   297,   297,   297,   297,   299,   300,   301,
     302,   303,   304,   305,   307,   308,   309,   310,   312,   313,
     314,   316,   318,   320,   321,   322,   323,   324,   325,   326,
     327,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCTYPE", "HTMLA", "HTMLC", "HEADA",
  "HEADC", "META", "TITLEA", "TITLEC", "BODYA", "BODYC", "SECTIONA",
  "SECTIONC", "DIVA", "DIVC", "PA", "PC", "H1A", "H1C", "H2A", "H2C",
  "H3A", "H3C", "H4A", "H4C", "H5A", "H5C", "H6A", "H6C", "HR", "BR",
  "STRONGA", "STRONGC", "MARKA", "MARKC", "EMA", "EMC", "TABLEA", "TABLEC",
  "CAPTIONA", "CAPTIONC", "THEADA", "THEADC", "TBODYA", "TBODYC", "TFOOTA",
  "TFOOTC", "TRA", "TRC", "THA", "THC", "TDA", "TDC", "AA", "AC", "IMG",
  "BRAKC", "TEXTO", "COMILLAS", "LANG", "NAME", "CONTENT", "CHARSET",
  "CLASS", "ID", "HREF", "SRC", "ALT", "WIDTH", "HEIGHT", "TARGET",
  "BORDER", "RULES", "OLA", "OLC", "ULC", "ULA", "LIC", "LIA", "TYPE",
  "VALUE", "IGUAL", "$accept", "inicio", "pagina", "cabeza",
  "contenido_de_cabeza", "cuerpo", "etiquetas", "tag_section", "tag_div",
  "tag_p", "tag_hn", "tag_saltos", "tag_table", "tag_lista", "tag_a",
  "cap", "relleno", "contenido", "celdash", "celdasd", "atributo_meta",
  "atributo_img", "atributo_a", "atributo_class_id", "atributo_bor_rul",
  "atributo_type", "atributo_value", "texto", "texto_modif",
  "dentro_de_strong", "dentro_de_mark", "dentro_de_em", "combinacion_sawh", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    86,    86,    86,    87,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    92,    92,    92,
      92,    93,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
     100,   100,   101,   101,   101,   101,   102,   102,   102,   102,
     102,   103,   103,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   108,   108,
     108,   109,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     6,     7,     8,     7,     4,     4,     6,
       5,     5,     3,     4,     3,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     5,
       4,     5,     2,     4,     5,     4,     3,     4,     5,     4,
       3,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       5,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       5,     4,     5,     4,     5,     4,     5,     4,     5,     2,
       2,     3,     3,     4,     5,     5,     5,     5,     4,     5,
       5,     5,     4,     5,     5,     5,     5,     6,     5,     4,
       5,     4,     4,     5,     6,     5,     5,     4,     8,     8,
       7,     7,     7,     7,     6,     6,     5,     6,     5,     6,
      12,     8,     5,     4,     5,     4,     5,     4,     5,     4,
       3,     5,     4,     4,     3,     4,     5,     1,     3,     4,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     1,
       1,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     2,     1,     1,     4,     5,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     5,     3,     3,     4,     5,
       4,     5,     4,     5,     4,     5,     2,     1,     4,     5,
       4,     5,     4,     5,     4,     5,     2,     1,     4,     5,
       4,     5,     4,     5,     4,     5,     2,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,   140,   141,   139,   194,   196,     0,   127,
       0,   194,   196,     0,     7,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   207,   208,     0,     0,     0,   209,     0,
      17,    18,    19,    20,    21,    22,    25,    23,   212,    24,
       4,     0,     6,   131,   132,   133,   136,   195,   134,   135,
     138,   197,    12,   210,     0,   195,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,   198,   200,     0,     0,
       0,     0,     0,   187,     0,   181,   182,   184,   183,   185,
     186,     0,     0,   203,   204,     0,   201,     0,     0,     0,
       0,     0,   202,     0,     0,   205,    15,    32,   206,     0,
       0,   213,   211,     5,   128,     0,   137,   130,     8,    13,
       0,    36,     0,     0,    40,     0,     0,   212,     0,     0,
     212,     0,     0,   212,     0,     0,   212,     0,     0,   212,
       0,     0,   212,     0,     0,   212,     0,     0,    71,    72,
       0,     0,   237,     0,     0,     0,     0,   247,     0,     0,
       0,     0,   257,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,     0,   189,   192,
     188,     0,   162,   169,   161,   174,   179,   142,     0,   170,
       0,   175,   180,   143,   165,   166,   158,   163,   164,   156,
     157,   153,   154,   155,   172,   173,   167,   159,   171,   177,
     178,   168,   160,   176,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,    11,    10,    33,    35,     0,    37,    39,     0,    41,
      43,   212,     0,    45,    57,   212,     0,    47,    59,   212,
       0,    49,    61,   212,     0,    51,    63,   212,     0,    53,
      65,   212,     0,    55,    67,   212,     0,     0,     0,     0,
       0,    28,    30,   237,   236,   237,     0,     0,     0,     0,
       0,   218,   220,   247,   246,   247,     0,     0,     0,     0,
       0,   222,   224,   257,   256,   257,     0,     0,     0,     0,
       0,    73,    78,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,   190,   191,   193,     0,
       0,     0,     0,     0,   144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   145,   148,   146,
     149,   150,   147,   151,     0,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,    91,     0,    92,     0,
       0,     0,   237,     0,     0,   226,   227,     9,    34,    38,
      42,    44,    46,    58,    48,    60,    50,    62,    52,    64,
      54,    66,    56,    68,   247,     0,     0,   257,     0,     0,
      29,    31,   237,     0,     0,   257,     0,     0,   219,   221,
     237,     0,     0,   247,     0,     0,   223,   225,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    79,    83,    76,
      80,    84,    77,    81,    85,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,   258,   259,   263,
     262,   260,   261,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   275,   274,   277,   276,   278,   279,   281,
     280,    86,     0,    88,    90,    93,     0,    95,   214,   216,
     237,     0,   228,   230,   247,     0,   232,   234,   257,     0,
     238,   240,   237,     0,   242,   244,   257,     0,   248,   250,
     237,     0,   252,   254,   247,     0,     0,     0,     0,     0,
       0,   113,   115,   104,     0,   105,     0,     0,     0,    87,
      94,   215,   217,   229,   231,   233,   235,   239,   241,   243,
     245,   249,   251,   253,   255,   106,   108,     0,     0,   120,
       0,   124,     0,   112,   114,   100,   101,   102,     0,   103,
       0,   107,   109,     0,   119,   117,   125,   123,   122,    98,
      99,     0,   116,   118,   126,   121,   111,     0,     0,     0,
     110
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    15,    27,    21,   157,    70,    71,    72,
      73,    93,    75,    76,    77,   218,   219,   220,   473,   474,
      38,   141,   134,   153,   129,   148,   154,    78,    79,   324,
     334,   344,   142
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -559
static const yytype_int16 yypact[] =
{
      32,    37,   106,   108,  -559,   227,  -559,    58,    -4,    75,
     125,    89,    91,   142,   166,   172,   125,   189,   125,    40,
     206,   255,   172,   125,   172,   872,   127,   263,   658,  -559,
     290,   172,   296,   259,  -559,  -559,   438,   246,   266,  -559,
      70,   262,   277,   289,  -559,  -559,   129,   145,   160,   207,
     225,   247,   280,   285,   308,   323,   368,   384,   422,   428,
     155,   112,   729,    70,    70,    -7,   452,   -22,    70,   746,
    -559,  -559,  -559,  -559,    70,  -559,  -559,  -559,  -559,  1243,
    -559,   353,  -559,  -559,   297,  -559,  -559,   -42,   315,  -559,
    -559,  -559,    40,    70,   376,  -559,    70,   302,   336,   815,
     343,  1243,   349,  1243,   360,  1243,   369,  1243,   382,  1243,
     395,  1243,   397,  1243,   401,  -559,   414,  -559,   416,  2065,
     418,  2072,   420,  2102,   424,    76,   316,  -559,   102,   426,
     -19,    10,   356,   327,   432,   795,   641,   579,   669,   567,
     588,   434,   448,  -559,  -559,  1925,  -559,   -50,   450,  1925,
     454,  1925,  -559,   -37,   458,  -559,  -559,  1925,  -559,   456,
     729,  -559,  1243,  -559,  -559,   394,  -559,  -559,  -559,    40,
     486,  -559,   886,   957,  -559,  1026,  1095,   506,    78,  1243,
     511,   202,  1243,   515,   406,  1243,   516,   582,  1243,   517,
     825,  1243,   518,   967,  1243,   522,  1105,  1243,  -559,  -559,
     509,   519,   521,    -5,  2065,   524,   558,   525,    67,  2072,
     560,   562,   520,   548,  2102,   564,   514,   529,   533,   536,
     538,  -559,    76,    76,    76,   729,   508,   542,   540,   549,
    -559,   466,   399,   119,   128,   198,   146,  -559,   399,   119,
     128,   198,   146,  -559,  -559,  -559,    73,    -3,   161,  -559,
    -559,   101,    94,    18,  -559,  -559,    52,   170,   213,  -559,
    -559,   286,   137,   307,  -559,  -559,  1164,  1925,   530,  1925,
    1233,  1925,  1302,  1925,   576,  1925,  2065,   594,   602,   603,
    -559,  -559,    40,  -559,  -559,  1373,  -559,  -559,  1442,  -559,
    -559,   622,   149,  -559,  -559,   626,   243,  -559,  -559,   640,
     670,  -559,  -559,   642,   756,  -559,  -559,   643,   896,  -559,
    -559,   646,  1036,  -559,  -559,   648,  1174,  2072,   624,  2102,
     628,  -559,  -559,  -559,  2065,   660,   689,  2065,   638,  2102,
     650,  -559,  -559,  -559,  2072,   662,   332,  2065,   656,  2072,
     661,  -559,  -559,  -559,  2102,   678,  1312,    70,   664,   651,
     192,   692,  -559,  -559,   659,   688,   702,   703,   704,   707,
     712,   714,   717,   674,   706,  -559,  -559,  -559,  -559,   729,
     710,   119,   198,   146,  -559,   341,   249,   362,   365,    94,
      18,    52,   170,   213,   286,   137,   307,  -559,   691,   698,
     699,   705,   716,   713,   719,   722,   725,   708,   732,   736,
     737,   715,   738,   739,   741,   744,   747,   745,   748,   751,
     753,   752,  -559,  1511,  1925,  1580,  -559,  1649,  -559,  1718,
    1925,  1994,   789,  1383,  2065,  -559,  -559,  -559,  -559,  -559,
    -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,
    -559,  -559,  -559,  -559,   791,  1452,  2072,   787,  1521,  2102,
    -559,  -559,   799,  1590,  2065,   797,  1659,  2102,  -559,  -559,
     803,  1728,  2065,   805,  1797,  2072,  -559,  -559,   801,    70,
     809,   813,   818,   817,   823,  -559,  -559,  -559,  -559,  -559,
    -559,  -559,  -559,  -559,  -559,   388,  2067,   819,   820,  -559,
     691,   698,   699,   705,   716,   713,   722,  -559,  -559,  -559,
    -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,
    -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,
    -559,  -559,  1787,  -559,  -559,  -559,  1856,   -22,  -559,  -559,
     811,  1866,  -559,  -559,   843,  1935,  -559,  -559,   821,  2003,
    -559,  -559,   847,  2008,  -559,  -559,   845,  2047,  -559,  -559,
     852,  2058,  -559,  -559,   851,  2028,   -24,   807,   810,   837,
     908,   651,   651,  -559,   832,  -559,   835,  2083,  2097,  -559,
    -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,  -559,
    -559,  -559,  -559,  -559,  -559,  -559,  -559,   -24,   834,   853,
     842,   192,   848,  -559,  -559,  -559,  -559,  -559,   850,  -559,
     854,  -559,  -559,   651,  -559,   192,  -559,  -559,   192,  -559,
    -559,   866,  -559,  -559,  -559,  -559,   867,   858,   651,   876,
    -559
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -559,  -559,  -559,    69,   -85,    15,   -27,  -559,  -559,  -559,
    -559,   -17,   575,  -559,   351,   148,  -220,  -208,  -500,  -558,
    -559,  -150,  -559,   545,   802,   785,   794,   -40,   372,  -110,
    -116,  -117,  -118
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      94,    69,   355,   358,   361,   208,   213,   168,   267,   203,
     278,    74,    55,    56,   356,   359,   362,   237,   243,   216,
     165,   273,   166,   143,   144,   217,    55,    56,   155,   322,
     200,   146,   201,   607,   158,     1,   151,    30,   225,    32,
      63,    64,   279,    41,    42,   152,    81,   613,    25,    26,
     615,   145,    74,   158,    63,    64,   170,    11,    41,    42,
     152,   177,    12,   180,    68,   183,   390,   186,   391,   189,
     172,   192,   175,   195,   146,   363,   227,   228,    68,   202,
      74,   207,    74,   212,   281,    22,   398,    24,   399,   604,
     226,   606,    31,   336,   326,     3,   290,   346,    55,    56,
     205,    55,    56,   332,   206,   612,     4,   364,   614,    55,
      56,   159,     5,    58,   374,    59,    10,   215,   266,   216,
     387,   400,   270,   401,   272,   217,    63,    64,    74,    63,
      64,    14,    74,    61,    74,   160,    13,    63,    64,   291,
      74,   470,   295,   388,   389,   299,   285,    16,   303,   288,
      68,   307,    17,    68,   311,    74,    74,   315,    74,    74,
     222,    68,   396,   323,   325,   397,   423,   431,   333,   335,
     130,   394,   395,   343,   345,   126,   127,   131,   132,   133,
      55,    56,   159,    20,    58,    40,    59,    97,   375,   376,
     377,   370,    41,    42,    41,    42,   378,   427,   379,   380,
      18,   445,   448,    99,    61,   408,   160,   409,    63,    64,
      41,    42,   456,   125,   384,   385,   386,   453,   101,   487,
      41,    42,   294,   464,    19,    41,    42,   461,   126,   127,
     392,   393,    68,    55,    56,   159,   422,    58,   402,    59,
     413,   403,   415,   471,   417,   472,   419,    23,   421,    74,
      74,   488,    74,    74,    74,    74,    74,    61,    74,   160,
      29,    63,    64,   433,    28,   103,   381,   382,    74,   383,
      44,    74,    41,    42,    55,    56,   159,   444,    58,   447,
      59,   404,   405,   105,   323,    68,   323,   452,     7,   455,
      41,    42,     8,     9,   333,    80,   333,   460,    61,   463,
     160,    82,    63,    64,   343,   107,   343,   468,    88,    89,
      90,    91,    41,    42,   531,    46,   171,    47,   492,    48,
     493,    49,    83,    50,    92,    51,    68,    52,    95,    53,
     535,    54,   539,    55,    56,    57,   585,    58,   109,    59,
     547,    60,    91,   111,   543,    41,    42,    96,   586,   555,
      41,    42,   551,   593,   594,   406,   407,    61,   163,    62,
     164,    63,    64,    55,    56,   205,   113,   601,   459,   206,
     354,   357,   360,    41,    42,   410,   411,    65,   167,   602,
      66,   115,    67,   323,   530,    68,   169,   522,    41,    42,
     221,    63,    64,   526,   173,   611,    74,    74,    74,   230,
      74,   176,    74,    74,    74,   333,   534,   179,   343,   538,
     619,   490,   491,   323,   542,    68,   343,   546,   182,    55,
      56,   323,   550,   229,   333,   554,   117,   185,   298,   557,
     161,   494,   495,    41,    42,   394,   496,    55,    56,   159,
     188,    58,   119,    59,   563,   564,   566,    63,    64,    41,
      42,   162,   161,   191,   161,   194,   161,   280,   161,   197,
     161,    61,   161,   160,   161,    63,    64,   371,   240,   372,
     373,    68,   198,   178,   199,   181,   204,   184,   209,   187,
     121,   190,   214,   193,   224,   196,   123,    41,    42,    68,
     231,   323,   264,    41,    42,   333,   282,    55,    56,   343,
      84,    85,    86,   323,    87,    74,   265,   343,   269,    74,
     149,   323,   271,   161,   276,   333,   275,    41,    42,   590,
     592,    41,    42,   369,   289,    63,    64,   598,   600,   161,
     161,   293,   161,   161,   162,   161,   161,   297,   161,   161,
     301,   161,   161,   305,   161,   161,   309,   161,   161,    68,
     162,   292,   313,   162,   296,   321,   162,   300,   341,   162,
     304,   331,   162,   308,   365,   162,   312,   317,   162,   316,
      39,    43,   349,   351,    41,    42,   352,   319,   353,    55,
      56,   210,   327,   211,    41,    42,   342,   350,   414,    41,
      42,    98,   100,   102,   104,   106,   108,   110,   112,   114,
     116,   118,   120,   122,   124,   128,   302,    63,    64,   366,
     147,   150,   367,    55,    56,   159,   329,    58,   337,    59,
     339,   368,   347,    41,    42,    41,    42,    41,    42,    41,
      42,    68,   254,   255,   420,   256,   257,    61,   258,   160,
     430,    63,    64,   161,   244,   245,   432,   161,   246,   247,
     248,   161,   424,   259,   260,   161,   261,   262,   263,   161,
     425,   426,   434,   161,   162,    68,   436,   161,   162,   438,
      45,    46,   162,    47,   440,    48,   162,    49,   442,    50,
     162,    51,   446,    52,   162,    53,   449,    54,   162,    55,
      56,    57,   435,    58,   450,    59,   454,    60,   458,   476,
     217,    55,    56,   159,   277,    58,   238,    59,   457,   239,
     240,   241,   242,    61,   462,    62,   466,    63,    64,   465,
      55,    56,   469,   451,   200,    61,   201,   160,   477,    63,
      64,    60,   485,    65,   249,   250,    66,   251,    67,   252,
     253,    68,   478,   479,   480,   318,   320,   481,    63,    64,
     328,   330,   482,    68,   483,   338,   340,   484,   156,    46,
     348,    47,   497,    48,   486,    49,   489,    50,   498,    51,
     499,    52,    68,    53,   500,    54,   506,    55,    56,    57,
     437,    58,   502,    59,   510,    60,   501,    55,    56,   159,
     503,    58,   504,    59,   135,   136,   505,   137,   138,   139,
     140,    61,   507,    62,   508,    63,    64,   512,   509,   511,
     513,    61,   514,   160,   516,    63,    64,   515,   517,   518,
     520,    65,   519,   528,    66,   536,    67,   532,    46,    68,
      47,   174,    48,   540,    49,   544,    50,   548,    51,    68,
      52,   552,    53,   556,    54,   571,    55,    56,    57,   587,
      58,   306,    59,   558,    60,   588,    55,    56,   159,   575,
      58,   232,    59,   233,   234,   235,   236,   561,    55,    56,
      61,   559,    62,   562,    63,    64,   560,   567,   568,   573,
      61,   577,   160,   579,    63,    64,   581,   583,   595,   589,
      65,   596,   603,    66,   605,    67,    63,    64,    68,    46,
     283,    47,   608,    48,   471,    49,   609,    50,    68,    51,
     610,    52,   616,    53,   617,    54,   618,    55,    56,    57,
      68,    58,   439,    59,   620,    60,   475,    55,    56,   159,
     223,    58,   268,    59,    33,    34,    35,    36,    37,    55,
      56,    61,     0,    62,     0,    63,    64,   274,     0,     0,
       0,    61,     0,   160,     0,    63,    64,     0,     0,     0,
       0,    65,   591,     0,    66,     0,    67,    63,    64,    68,
      46,   284,    47,     0,    48,     0,    49,     0,    50,    68,
      51,     0,    52,     0,    53,     0,    54,     0,    55,    56,
      57,    68,    58,     0,    59,   310,    60,     0,    55,    56,
     159,     0,    58,     0,    59,     0,     0,     0,     0,     0,
       0,     0,    61,     0,    62,     0,    63,    64,     0,     0,
       0,     0,    61,     0,   160,     0,    63,    64,     0,     0,
       0,     0,    65,     0,     0,    66,     0,    67,     0,    46,
      68,    47,   286,    48,     0,    49,     0,    50,     0,    51,
      68,    52,     0,    53,     0,    54,     0,    55,    56,    57,
       0,    58,     0,    59,   441,    60,     0,    55,    56,   159,
       0,    58,     0,    59,     0,     0,     0,     0,     0,     0,
       0,    61,     0,    62,     0,    63,    64,     0,     0,     0,
       0,    61,     0,   160,     0,    63,    64,     0,     0,     0,
       0,    65,     0,     0,    66,     0,    67,     0,    46,    68,
      47,   287,    48,     0,    49,     0,    50,     0,    51,    68,
      52,     0,    53,     0,    54,     0,    55,    56,    57,     0,
      58,     0,    59,     0,    60,   314,    55,    56,   159,     0,
      58,     0,    59,     0,     0,     0,     0,     0,     0,     0,
      61,     0,    62,     0,    63,    64,     0,     0,     0,     0,
      61,     0,   160,     0,    63,    64,     0,     0,     0,     0,
      65,     0,     0,    66,     0,    67,     0,    46,    68,    47,
       0,    48,     0,    49,     0,    50,     0,    51,    68,    52,
       0,    53,     0,    54,     0,    55,    56,    57,     0,    58,
       0,    59,     0,    60,   443,    55,    56,   159,     0,    58,
       0,    59,     0,     0,     0,     0,     0,     0,     0,    61,
       0,    62,     0,    63,    64,     0,     0,     0,     0,    61,
       0,   160,     0,    63,    64,     0,     0,     0,     0,    65,
     412,     0,    66,     0,    67,     0,    46,    68,    47,     0,
      48,     0,    49,     0,    50,     0,    51,    68,    52,     0,
      53,     0,    54,     0,    55,    56,    57,     0,    58,     0,
      59,     0,    60,     0,    55,    56,   159,     0,    58,     0,
      59,     0,     0,     0,     0,     0,     0,     0,    61,     0,
      62,     0,    63,    64,     0,     0,     0,     0,    61,     0,
     160,     0,    63,    64,     0,     0,     0,     0,    65,     0,
     416,    66,     0,    67,     0,    46,    68,    47,     0,    48,
       0,    49,     0,    50,     0,    51,    68,    52,     0,    53,
       0,    54,     0,    55,    56,    57,     0,    58,     0,    59,
       0,    60,     0,    55,    56,   210,     0,   211,     0,     0,
     467,     0,     0,     0,     0,     0,     0,    61,     0,    62,
       0,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,     0,     0,     0,     0,    65,     0,     0,
      66,   418,    67,     0,     0,    68,    46,   428,    47,     0,
      48,     0,    49,     0,    50,    68,    51,     0,    52,     0,
      53,     0,    54,     0,    55,    56,    57,     0,    58,     0,
      59,     0,    60,     0,    55,    56,     0,   529,   200,     0,
     201,     0,     0,     0,     0,     0,     0,     0,    61,     0,
      62,     0,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,     0,     0,     0,     0,    65,     0,
       0,    66,     0,    67,     0,    46,    68,    47,   429,    48,
       0,    49,     0,    50,     0,    51,    68,    52,     0,    53,
       0,    54,     0,    55,    56,    57,     0,    58,     0,    59,
       0,    60,     0,    55,    56,   205,     0,     0,   533,   206,
       0,     0,     0,     0,     0,     0,     0,    61,     0,    62,
       0,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,     0,     0,     0,     0,    65,     0,     0,
      66,     0,    67,     0,    46,    68,    47,     0,    48,     0,
      49,     0,    50,     0,    51,    68,    52,     0,    53,     0,
      54,     0,    55,    56,    57,     0,    58,     0,    59,     0,
      60,     0,    55,    56,   210,     0,   211,     0,     0,   537,
       0,     0,     0,     0,     0,     0,    61,     0,    62,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    64,     0,     0,     0,     0,    65,   521,     0,    66,
       0,    67,     0,    46,    68,    47,     0,    48,     0,    49,
       0,    50,     0,    51,    68,    52,     0,    53,     0,    54,
       0,    55,    56,    57,     0,    58,     0,    59,     0,    60,
       0,    55,    56,     0,   541,   200,     0,   201,     0,     0,
       0,     0,     0,     0,     0,    61,     0,    62,     0,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,     0,     0,     0,     0,    65,   523,     0,    66,     0,
      67,     0,    46,    68,    47,     0,    48,     0,    49,     0,
      50,     0,    51,    68,    52,     0,    53,     0,    54,     0,
      55,    56,    57,     0,    58,     0,    59,     0,    60,     0,
      55,    56,   210,     0,   211,     0,     0,   545,     0,     0,
       0,     0,     0,     0,    61,     0,    62,     0,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64,
       0,     0,     0,     0,    65,     0,   524,    66,     0,    67,
       0,    46,    68,    47,     0,    48,     0,    49,     0,    50,
       0,    51,    68,    52,     0,    53,     0,    54,     0,    55,
      56,    57,     0,    58,     0,    59,     0,    60,     0,    55,
      56,     0,   549,   200,     0,   201,     0,     0,     0,     0,
       0,     0,     0,    61,     0,    62,     0,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,     0,
       0,     0,     0,    65,     0,     0,    66,   525,    67,     0,
      46,    68,    47,     0,    48,     0,    49,     0,    50,     0,
      51,    68,    52,     0,    53,     0,    54,     0,    55,    56,
      57,     0,    58,     0,    59,     0,    60,     0,    55,    56,
     205,     0,     0,   553,   206,     0,     0,     0,     0,     0,
       0,     0,    61,     0,    62,     0,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,     0,     0,
       0,     0,    65,   569,     0,    66,     0,    67,     0,    46,
      68,    47,     0,    48,     0,    49,     0,    50,     0,    51,
      68,    52,     0,    53,     0,    54,     0,    55,    56,    57,
       0,    58,     0,    59,     0,    60,     0,    55,    56,     0,
     572,   200,     0,   201,     0,     0,     0,     0,     0,     0,
       0,    61,     0,    62,     0,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,     0,     0,     0,
       0,    65,     0,     0,    66,   570,    67,     0,    46,    68,
      47,     0,    48,     0,    49,     0,    50,     0,    51,    68,
      52,     0,    53,     0,    54,     0,    55,    56,    57,     0,
      58,     0,    59,     0,    60,     0,    55,    56,   205,     0,
       0,   574,   206,     0,     0,     0,     0,     0,     0,     0,
      61,     0,    62,     0,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64,     0,     0,     0,     0,
      65,     0,     0,    66,     0,    67,     0,    46,    68,    47,
       0,    48,     0,    49,     0,    50,     0,    51,    68,    52,
       0,    53,     0,    54,     0,    55,    56,    57,     0,    58,
       0,    59,     0,    60,    55,    56,   210,     0,   211,    55,
      56,   576,   578,   200,     0,   201,     0,     0,     0,    61,
       0,    62,     0,    63,    64,     0,     0,     0,     0,    55,
      56,   205,    63,    64,   584,   206,     0,    63,    64,    65,
       0,     0,    66,     0,   527,     0,     0,    68,    55,    56,
     210,     0,   211,     0,     0,   580,    68,    63,    64,    55,
      56,    68,   582,   200,     0,   201,    55,    56,    55,    56,
     200,     0,   201,    55,    56,   205,    63,    64,     0,   206,
       0,    68,     0,     0,    55,    56,     0,    63,    64,     0,
       0,     0,     0,   565,    63,    64,    63,    64,    55,    56,
      68,    63,    64,    55,    56,   210,     0,   211,     0,   597,
       0,    68,    63,    64,     0,     0,     0,     0,    68,     0,
      68,     0,     0,   599,     0,    68,    63,    64,     0,     0,
       0,    63,    64,     0,     0,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      40,    28,   222,   223,   224,   121,   123,    92,    58,   119,
     160,    28,    31,    32,   222,   223,   224,   135,   136,    43,
      62,    58,    64,    63,    64,    49,    31,    32,    68,    34,
      35,    81,    37,   591,    74,     3,    58,    22,    57,    24,
      59,    60,   160,    65,    66,    82,    31,   605,     8,     9,
     608,    58,    69,    93,    59,    60,    96,    61,    65,    66,
      82,   101,    66,   103,    83,   105,    69,   107,    71,   109,
      97,   111,    99,   113,    81,   225,    66,    67,    83,   119,
      97,   121,    99,   123,   169,    16,    68,    18,    70,   589,
     130,   591,    23,   209,   204,    58,    18,   214,    31,    32,
      33,    31,    32,    36,    37,   605,     0,   225,   608,    31,
      32,    33,     4,    35,   232,    37,    58,    41,   145,    43,
     238,    69,   149,    71,   151,    49,    59,    60,   145,    59,
      60,     6,   149,    55,   151,    57,    61,    59,    60,   179,
     157,   349,   182,    70,    71,   185,   173,    58,   188,   176,
      83,   191,    61,    83,   194,   172,   173,   197,   175,   176,
      58,    83,    68,   203,   204,    71,   276,    18,   208,   209,
      58,    70,    71,   213,   214,    73,    74,    65,    66,    67,
      31,    32,    33,    11,    35,    58,    37,    58,    69,    70,
      71,   231,    65,    66,    65,    66,    68,   282,    70,    71,
      58,   317,   319,    58,    55,    68,    57,    70,    59,    60,
      65,    66,   329,    58,    68,    69,    70,   327,    58,   369,
      65,    66,    20,   339,    58,    65,    66,   337,    73,    74,
      69,    70,    83,    31,    32,    33,   276,    35,    68,    37,
     267,    71,   269,    51,   271,    53,   273,    58,   275,   266,
     267,   369,   269,   270,   271,   272,   273,    55,   275,    57,
       5,    59,    60,    20,    58,    58,    68,    69,   285,    71,
       7,   288,    65,    66,    31,    32,    33,   317,    35,   319,
      37,    68,    69,    58,   324,    83,   326,   327,    61,   329,
      65,    66,    65,    66,   334,     5,   336,   337,    55,   339,
      57,     5,    59,    60,   344,    58,   346,   347,    62,    63,
      64,    65,    65,    66,   424,    13,    14,    15,    69,    17,
      71,    19,    63,    21,    58,    23,    83,    25,    66,    27,
     446,    29,   449,    31,    32,    33,   556,    35,    58,    37,
     457,    39,    65,    58,   454,    65,    66,    58,   556,   465,
      65,    66,   462,   561,   562,    69,    70,    55,     5,    57,
      63,    59,    60,    31,    32,    33,    58,   587,    36,    37,
     222,   223,   224,    65,    66,    68,    69,    75,    63,   587,
      78,    58,    80,   423,   424,    83,    10,   414,    65,    66,
      74,    59,    60,   420,    58,   603,   413,   414,   415,    72,
     417,    58,   419,   420,   421,   445,   446,    58,   448,   449,
     618,    70,    71,   453,   454,    83,   456,   457,    58,    31,
      32,   461,   462,    67,   464,   465,    58,    58,    22,   469,
      79,    69,    70,    65,    66,    70,    71,    31,    32,    33,
      58,    35,    58,    37,    56,   485,   486,    59,    60,    65,
      66,    79,   101,    58,   103,    58,   105,    63,   107,    58,
     109,    55,   111,    57,   113,    59,    60,    68,    69,    70,
      71,    83,    58,   101,    58,   103,    58,   105,    58,   107,
      58,   109,    58,   111,    58,   113,    58,    65,    66,    83,
      58,   531,    58,    65,    66,   535,    10,    31,    32,   539,
      62,    63,    64,   543,    66,   522,    58,   547,    58,   526,
      58,   551,    58,   162,    58,   555,    58,    65,    66,   559,
     560,    65,    66,    57,    18,    59,    60,   567,   568,   178,
     179,    20,   181,   182,   162,   184,   185,    22,   187,   188,
      24,   190,   191,    26,   193,   194,    28,   196,   197,    83,
     178,   179,    30,   181,   182,    34,   184,   185,    38,   187,
     188,    36,   190,   191,    56,   193,   194,    58,   196,   197,
      25,    26,    58,    40,    65,    66,    40,    58,    40,    31,
      32,    33,    58,    35,    65,    66,    38,    58,    58,    65,
      66,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    24,    59,    60,    67,
      65,    66,    72,    31,    32,    33,    58,    35,    58,    37,
      58,    72,    58,    65,    66,    65,    66,    65,    66,    65,
      66,    83,    65,    66,    58,    68,    69,    55,    71,    57,
      18,    59,    60,   292,    65,    66,    20,   296,    69,    70,
      71,   300,    58,    65,    66,   304,    68,    69,    70,   308,
      58,    58,    22,   312,   292,    83,    24,   316,   296,    26,
      12,    13,   300,    15,    28,    17,   304,    19,    30,    21,
     308,    23,    58,    25,   312,    27,    58,    29,   316,    31,
      32,    33,    22,    35,    34,    37,    58,    39,    36,    40,
      49,    31,    32,    33,   159,    35,    65,    37,    58,    68,
      69,    70,    71,    55,    58,    57,    38,    59,    60,    58,
      31,    32,    58,    34,    35,    55,    37,    57,    40,    59,
      60,    39,    58,    75,    65,    66,    78,    68,    80,    70,
      71,    83,    40,    40,    40,   200,   201,    40,    59,    60,
     205,   206,    40,    83,    40,   210,   211,    40,    12,    13,
     215,    15,    71,    17,    58,    19,    56,    21,    70,    23,
      71,    25,    83,    27,    69,    29,    68,    31,    32,    33,
      24,    35,    69,    37,    69,    39,    70,    31,    32,    33,
      71,    35,    70,    37,    65,    66,    71,    68,    69,    70,
      71,    55,    70,    57,    68,    59,    60,    68,    71,    71,
      69,    55,    68,    57,    69,    59,    60,    70,    70,    68,
      68,    75,    69,    34,    78,    38,    80,    36,    13,    83,
      15,    16,    17,    34,    19,    38,    21,    34,    23,    83,
      25,    36,    27,    42,    29,    34,    31,    32,    33,    42,
      35,    26,    37,    44,    39,    45,    31,    32,    33,    38,
      35,    66,    37,    68,    69,    70,    71,    50,    31,    32,
      55,    58,    57,    50,    59,    60,    58,    58,    58,    36,
      55,    34,    57,    38,    59,    60,    34,    36,    56,    52,
      75,    56,    58,    78,    52,    80,    59,    60,    83,    13,
      14,    15,    54,    17,    51,    19,    56,    21,    83,    23,
      56,    25,    46,    27,    47,    29,    58,    31,    32,    33,
      83,    35,    26,    37,    48,    39,   351,    31,    32,    33,
     128,    35,   147,    37,    62,    63,    64,    65,    66,    31,
      32,    55,    -1,    57,    -1,    59,    60,   153,    -1,    -1,
      -1,    55,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    75,    54,    -1,    78,    -1,    80,    59,    60,    83,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    21,    83,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    32,
      33,    83,    35,    -1,    37,    28,    39,    -1,    31,    32,
      33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    -1,    80,    -1,    13,
      83,    15,    16,    17,    -1,    19,    -1,    21,    -1,    23,
      83,    25,    -1,    27,    -1,    29,    -1,    31,    32,    33,
      -1,    35,    -1,    37,    28,    39,    -1,    31,    32,    33,
      -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    80,    -1,    13,    83,
      15,    16,    17,    -1,    19,    -1,    21,    -1,    23,    83,
      25,    -1,    27,    -1,    29,    -1,    31,    32,    33,    -1,
      35,    -1,    37,    -1,    39,    30,    31,    32,    33,    -1,
      35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    78,    -1,    80,    -1,    13,    83,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    23,    83,    25,
      -1,    27,    -1,    29,    -1,    31,    32,    33,    -1,    35,
      -1,    37,    -1,    39,    30,    31,    32,    33,    -1,    35,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    55,
      -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    75,
      76,    -1,    78,    -1,    80,    -1,    13,    83,    15,    -1,
      17,    -1,    19,    -1,    21,    -1,    23,    83,    25,    -1,
      27,    -1,    29,    -1,    31,    32,    33,    -1,    35,    -1,
      37,    -1,    39,    -1,    31,    32,    33,    -1,    35,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    59,    60,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    59,    60,    -1,    -1,    -1,    -1,    75,    -1,
      77,    78,    -1,    80,    -1,    13,    83,    15,    -1,    17,
      -1,    19,    -1,    21,    -1,    23,    83,    25,    -1,    27,
      -1,    29,    -1,    31,    32,    33,    -1,    35,    -1,    37,
      -1,    39,    -1,    31,    32,    33,    -1,    35,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    79,    80,    -1,    -1,    83,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    21,    83,    23,    -1,    25,    -1,
      27,    -1,    29,    -1,    31,    32,    33,    -1,    35,    -1,
      37,    -1,    39,    -1,    31,    32,    -1,    34,    35,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    -1,    80,    -1,    13,    83,    15,    16,    17,
      -1,    19,    -1,    21,    -1,    23,    83,    25,    -1,    27,
      -1,    29,    -1,    31,    32,    33,    -1,    35,    -1,    37,
      -1,    39,    -1,    31,    32,    33,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    80,    -1,    13,    83,    15,    -1,    17,    -1,
      19,    -1,    21,    -1,    23,    83,    25,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    31,    32,    33,    -1,    35,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    75,    76,    -1,    78,
      -1,    80,    -1,    13,    83,    15,    -1,    17,    -1,    19,
      -1,    21,    -1,    23,    83,    25,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    -1,    35,    -1,    37,    -1,    39,
      -1,    31,    32,    -1,    34,    35,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    75,    76,    -1,    78,    -1,
      80,    -1,    13,    83,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    23,    83,    25,    -1,    27,    -1,    29,    -1,
      31,    32,    33,    -1,    35,    -1,    37,    -1,    39,    -1,
      31,    32,    33,    -1,    35,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    75,    -1,    77,    78,    -1,    80,
      -1,    13,    83,    15,    -1,    17,    -1,    19,    -1,    21,
      -1,    23,    83,    25,    -1,    27,    -1,    29,    -1,    31,
      32,    33,    -1,    35,    -1,    37,    -1,    39,    -1,    31,
      32,    -1,    34,    35,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    79,    80,    -1,
      13,    83,    15,    -1,    17,    -1,    19,    -1,    21,    -1,
      23,    83,    25,    -1,    27,    -1,    29,    -1,    31,    32,
      33,    -1,    35,    -1,    37,    -1,    39,    -1,    31,    32,
      33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    75,    76,    -1,    78,    -1,    80,    -1,    13,
      83,    15,    -1,    17,    -1,    19,    -1,    21,    -1,    23,
      83,    25,    -1,    27,    -1,    29,    -1,    31,    32,    33,
      -1,    35,    -1,    37,    -1,    39,    -1,    31,    32,    -1,
      34,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    79,    80,    -1,    13,    83,
      15,    -1,    17,    -1,    19,    -1,    21,    -1,    23,    83,
      25,    -1,    27,    -1,    29,    -1,    31,    32,    33,    -1,
      35,    -1,    37,    -1,    39,    -1,    31,    32,    33,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    78,    -1,    80,    -1,    13,    83,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    23,    83,    25,
      -1,    27,    -1,    29,    -1,    31,    32,    33,    -1,    35,
      -1,    37,    -1,    39,    31,    32,    33,    -1,    35,    31,
      32,    38,    34,    35,    -1,    37,    -1,    -1,    -1,    55,
      -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    31,
      32,    33,    59,    60,    36,    37,    -1,    59,    60,    75,
      -1,    -1,    78,    -1,    80,    -1,    -1,    83,    31,    32,
      33,    -1,    35,    -1,    -1,    38,    83,    59,    60,    31,
      32,    83,    34,    35,    -1,    37,    31,    32,    31,    32,
      35,    -1,    37,    31,    32,    33,    59,    60,    -1,    37,
      -1,    83,    -1,    -1,    31,    32,    -1,    59,    60,    -1,
      -1,    -1,    -1,    56,    59,    60,    59,    60,    31,    32,
      83,    59,    60,    31,    32,    33,    -1,    35,    -1,    56,
      -1,    83,    59,    60,    -1,    -1,    -1,    -1,    83,    -1,
      83,    -1,    -1,    56,    -1,    83,    59,    60,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    85,    58,     0,     4,    86,    61,    65,    66,
      58,    61,    66,    61,     6,    87,    58,    61,    58,    58,
      11,    89,    87,    58,    87,     8,     9,    88,    58,     5,
      89,    87,    89,    62,    63,    64,    65,    66,   104,   107,
      58,    65,    66,   107,     7,    12,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    32,    33,    35,    37,
      39,    55,    57,    59,    60,    75,    78,    80,    83,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   111,   112,
       5,    89,     5,    63,    62,    63,    64,    66,    62,    63,
      64,    65,    58,    95,   111,    66,    58,    58,   107,    58,
     107,    58,   107,    58,   107,    58,   107,    58,   107,    58,
     107,    58,   107,    58,   107,    58,   107,    58,   107,    58,
     107,    58,   107,    58,   107,    58,    73,    74,   107,   108,
      58,    65,    66,    67,   106,    65,    66,    68,    69,    70,
      71,   105,   116,   111,   111,    58,    81,   107,   109,    58,
     107,    58,    82,   107,   110,   111,    12,    90,   111,    33,
      57,    98,   112,     5,    63,    62,    64,    63,    88,    10,
     111,    14,    90,    58,    16,    90,    58,   111,   112,    58,
     111,   112,    58,   111,   112,    58,   111,   112,    58,   111,
     112,    58,   111,   112,    58,   111,   112,    58,    58,    58,
      35,    37,   111,   113,    58,    33,    37,   111,   114,    58,
      33,    35,   111,   115,    58,    41,    43,    49,    99,   100,
     101,    74,    58,   108,    58,    57,   111,    66,    67,    67,
      72,    58,    66,    68,    69,    70,    71,   116,    65,    68,
      69,    70,    71,   116,    65,    66,    69,    70,    71,    65,
      66,    68,    70,    71,    65,    66,    68,    69,    71,    65,
      66,    68,    69,    70,    58,    58,    90,    58,   109,    58,
      90,    58,    90,    58,   110,    58,    58,   107,   105,   116,
      63,    88,    10,    14,    14,    90,    16,    16,    90,    18,
      18,   111,   112,    20,    20,   111,   112,    22,    22,   111,
     112,    24,    24,   111,   112,    26,    26,   111,   112,    28,
      28,   111,   112,    30,    30,   111,   112,    58,   107,    58,
     107,    34,    34,   111,   113,   111,   113,    58,   107,    58,
     107,    36,    36,   111,   114,   111,   114,    58,   107,    58,
     107,    38,    38,   111,   115,   111,   115,    58,   107,    58,
      58,    40,    40,    40,    99,   100,   101,    99,   100,   101,
      99,   100,   101,   105,   116,    56,    67,    72,    72,    57,
     111,    68,    70,    71,   116,    69,    70,    71,    68,    70,
      71,    68,    69,    71,    68,    69,    70,   116,    70,    71,
      69,    71,    69,    70,    70,    71,    68,    71,    68,    70,
      69,    71,    68,    71,    68,    69,    69,    70,    68,    70,
      68,    69,    76,    90,    58,    90,    77,    90,    79,    90,
      58,    90,   111,   113,    58,    58,    58,    88,    14,    16,
      18,    18,    20,    20,    22,    22,    24,    24,    26,    26,
      28,    28,    30,    30,   111,   114,    58,   111,   115,    58,
      34,    34,   111,   113,    58,   111,   115,    58,    36,    36,
     111,   113,    58,   111,   114,    58,    38,    38,   111,    58,
     101,    51,    53,   102,   103,    96,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    58,    58,   105,   116,    56,
      70,    71,    69,    71,    69,    70,    71,    71,    70,    71,
      69,    70,    69,    71,    70,    71,    68,    70,    68,    71,
      69,    71,    68,    69,    68,    70,    69,    70,    68,    69,
      68,    76,    90,    76,    77,    79,    90,    80,    34,    34,
     111,   113,    36,    36,   111,   114,    38,    38,   111,   115,
      34,    34,   111,   113,    38,    38,   111,   115,    34,    34,
     111,   113,    36,    36,   111,   114,    42,   111,    44,    58,
      58,    50,    50,    56,   111,    56,   111,    58,    58,    76,
      79,    34,    34,    36,    36,    38,    38,    34,    34,    38,
      38,    34,    34,    36,    36,   100,   101,    42,    45,    52,
     111,    54,   111,   101,   101,    56,    56,    56,   111,    56,
     111,   100,   101,    58,   102,    52,   102,   103,    54,    56,
      56,   101,   102,   103,   102,   103,    46,    47,    58,   101,
      48
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
      

/* Line 1455 of yacc.c  */
#line 2366 "y.tab.c"
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



/* Line 1675 of yacc.c  */
#line 405 "p.y"


int yyerror(char *s){ /*definicion de la funcion*/
    printf ("Alice: %s en la linea %d \n", s, yylineno);
};

int main(int argc, char *argv[]){ /*funcion principal del analizador sintactico*/
    int cont;
    printf("\nCommon Expressions Interpreter Logic Assistant  ALICEv0.0\n\n");
    if (argc > 1){
        printf("Alice: Se ha abierto el archivo %s\n", argv[1]);
        yyin = fopen(argv[1], "rt");
        cont = yyparse();
    }else{
        printf("Alice: Este es el modo interactivo.\n");
        printf("Alice: Ingrese desde el teclado el codigo y lo analizare.\n");
        yyin = stdin;
        yyparse();
    }
    
    if (cont == 0){
		printf("Alice: La copilacion ha sido satisfactoria.\n");
	}
    return 0;
}
/*la funcion principal recibe como argumento dos parametros, uno del tipo entero que correspondo
a la cantidad de argumentos y el otro es un arreglo de caracteres donde se almacenan los 
argumentos. Por defecto, siempre la posiscion cero del arreglo contiene el nombre el programa.
El primer if evalua si la cantidad de argumentos pasados como parametros es mayor a 1. Si es verdad
significa que se a escrito el nombre del programa mas un archivo, por tanto se asigna yyin al archivo de entrada
caso contrario se inicia el modo interactivo.*/
