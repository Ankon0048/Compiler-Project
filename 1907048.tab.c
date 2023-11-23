
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
#line 2 "1907048.y"

#include<stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h>

   char var_name[1000][1000];

   int store_value[1000];

	//variable counter
	int var_cnt = 1;

	//variable checking
    int chkVariable(char *s){
        int i;
        for(i=1; i<var_cnt; i++){
            if(strcmp(var_name[i],s) == 0)
					return 1;
        }
		  return 0;
    }
	int initial_assign(char *s)
    {
      if(chkVariable(s)==1)
		{
			return 0;
		}
      strcpy(var_name[var_cnt],s);
		store_value[var_cnt]=0;
		var_cnt++;
		return 1;
    }

	//switch counting
	int sw_var_val=0,case_ex=0;

	//if counting
	int ifcnt = 0;
	int ifcomplete[1000];

	//getting value
    int getValue(char *s)
    {
        int pos=-1;
        int i;
        for( i=1; i<var_cnt; i++)
        {
            if(strcmp(var_name[i],s) == 0)
            {
                pos=i;
                break;
            }
        }
        return pos;
    }

	//assigning values
    int setValue(char *s,int val)
    {
        if(chkVariable(s) == 0)
            return 0;
        int ok=0, i;
        for( i=1; i<var_cnt; i++)
        {
            if(strcmp(var_name[i],s) == 0)
            {
                ok=i;
                break;
            }
        }
        store_value[ok]=val;
        return 1;
    }
    



/* Line 189 of yacc.c  */
#line 152 "1907048.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     NUMBER = 258,
     VARIABLE = 259,
     main_function = 260,
     define = 261,
     INT = 262,
     FLOAT = 263,
     CHAR = 264,
     DOUBLE = 265,
     STRING = 266,
     INC = 267,
     DEC = 268,
     POS_STEP = 269,
     NEG_STEP = 270,
     READ = 271,
     END = 272,
     BREAK = 273,
     CONT = 274,
     CASE = 275,
     SWITCH = 276,
     DEFAULT = 277,
     WHILE = 278,
     FOR = 279,
     IF = 280,
     ELIF = 281,
     ELSE = 282,
     SIN = 283,
     COS = 284,
     LOG10 = 285,
     ODDEVEN = 286,
     FACTORIAL = 287,
     MAX = 288,
     MIN = 289,
     GCD = 290,
     LCM = 291,
     PRIME = 292,
     SQRT = 293,
     LT = 294,
     GT = 295,
     EQ = 296,
     GEQ = 297,
     LEQ = 298,
     NEQ = 299,
     WRITE = 300,
     IMPORT = 301,
     NOT = 302,
     MOD = 303,
     HEADER = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 81 "1907048.y"

   char *string;
   int num;
   double flt;



/* Line 214 of yacc.c  */
#line 245 "1907048.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 257 "1907048.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,     2,
      57,    58,    54,    52,    61,    53,     2,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,     2,
       2,    62,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,    51,    60,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    12,    13,    16,    17,    18,    21,    30,
      35,    38,    39,    41,    42,    45,    47,    51,    53,    55,
      57,    61,    63,    67,    70,    72,    74,    76,    79,    85,
      93,    98,   106,   114,   119,   137,   155,   173,   191,   201,
     207,   209,   210,   218,   223,   225,   227,   231,   234,   237,
     240,   244,   248,   252,   256,   260,   264,   268,   272,   276,
     280,   284,   288,   292,   296,   300,   305,   310,   315,   320,
     325,   330,   337,   344,   351,   358
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    66,    67,     5,    57,    58,    59,    71,
      60,    -1,    -1,    46,    49,    -1,    -1,    -1,    67,    68,
      -1,     6,     4,    57,    69,    58,    59,    71,    60,    -1,
      69,    61,    73,    70,    -1,    73,    70,    -1,    -1,     4,
      -1,    -1,    71,    75,    -1,    72,    -1,    73,    74,    17,
      -1,     7,    -1,     8,    -1,    11,    -1,    74,    61,     4,
      -1,     4,    -1,     4,    62,    79,    -1,    75,    76,    -1,
      76,    -1,    17,    -1,    72,    -1,    79,    17,    -1,    45,
      57,     4,    58,    17,    -1,    16,    57,     4,    61,    79,
      58,    17,    -1,     4,    62,    79,    17,    -1,    25,    57,
      79,    58,    59,    75,    60,    -1,    26,    57,    79,    58,
      59,    75,    60,    -1,    27,    59,    75,    60,    -1,    24,
      57,     4,    62,     3,    61,     4,    43,     3,    61,     4,
      14,     3,    58,    59,    75,    60,    -1,    24,    57,     4,
      62,     3,    61,     4,    39,     3,    61,     4,    14,     3,
      58,    59,    75,    60,    -1,    24,    57,     4,    62,     3,
      61,     4,    42,     3,    61,     4,    15,     3,    58,    59,
      75,    60,    -1,    24,    57,     4,    62,     3,    61,     4,
      40,     3,    61,     4,    15,     3,    58,    59,    75,    60,
      -1,    23,    57,     4,    39,     3,    58,    59,    75,    60,
      -1,    21,    77,    59,    78,    60,    -1,    79,    -1,    -1,
      78,    20,    79,    63,    75,    18,    17,    -1,    78,    22,
      63,    75,    -1,     3,    -1,     4,    -1,     4,    62,    79,
      -1,     4,    12,    -1,     4,    13,    -1,     4,    47,    -1,
      79,    52,    79,    -1,    79,    53,    79,    -1,    79,    54,
      79,    -1,    79,    55,    79,    -1,    79,    56,    79,    -1,
      79,    48,    79,    -1,    57,    79,    58,    -1,    79,    39,
      79,    -1,    79,    40,    79,    -1,    79,    43,    79,    -1,
      79,    42,    79,    -1,    79,    41,    79,    -1,    79,    44,
      79,    -1,    79,    50,    79,    -1,    79,    51,    79,    -1,
      28,    57,    79,    58,    -1,    29,    57,    79,    58,    -1,
      30,    57,    79,    58,    -1,    31,    57,    79,    58,    -1,
      32,    57,    79,    58,    -1,    38,    57,    79,    58,    -1,
      33,    57,    79,    61,    79,    58,    -1,    35,    57,    79,
      61,    79,    58,    -1,    34,    57,    79,    61,    79,    58,
      -1,    36,    57,    79,    61,    79,    58,    -1,    37,    57,
      79,    58,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   118,   118,   119,   122,   123,   127,   129,   133,   141,
     142,   144,   149,   163,   164,   165,   170,   175,   177,   179,
     184,   194,   204,   222,   224,   228,   229,   230,   234,   245,
     253,   266,   275,   283,   292,   309,   326,   343,   360,   368,
     372,   379,   381,   390,   401,   406,   416,   429,   445,   460,
     477,   483,   489,   495,   509,   515,   521,   523,   537,   548,
     555,   562,   569,   576,   582,   588,   593,   598,   603,   618,
     630,   637,   650,   665,   679,   697
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "main_function",
  "define", "INT", "FLOAT", "CHAR", "DOUBLE", "STRING", "INC", "DEC",
  "POS_STEP", "NEG_STEP", "READ", "END", "BREAK", "CONT", "CASE", "SWITCH",
  "DEFAULT", "WHILE", "FOR", "IF", "ELIF", "ELSE", "SIN", "COS", "LOG10",
  "ODDEVEN", "FACTORIAL", "MAX", "MIN", "GCD", "LCM", "PRIME", "SQRT",
  "LT", "GT", "EQ", "GEQ", "LEQ", "NEQ", "WRITE", "IMPORT", "NOT", "MOD",
  "HEADER", "'&'", "'|'", "'+'", "'-'", "'*'", "'/'", "'^'", "'('", "')'",
  "'{'", "'}'", "','", "'='", "':'", "$accept", "program", "import",
  "functions", "func", "param", "pid", "statements", "declare", "type",
  "id", "morestat", "more", "SwitchValue", "SwitchStatement", "expression", 0
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
      38,   124,    43,    45,    42,    47,    94,    40,    41,   123,
     125,    44,    61,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    66,    66,    67,    67,    68,    69,
      69,    69,    70,    71,    71,    71,    72,    73,    73,    73,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     0,     2,     0,     0,     2,     8,     4,
       2,     0,     1,     0,     2,     1,     3,     1,     1,     1,
       3,     1,     3,     2,     1,     1,     1,     2,     5,     7,
       4,     7,     7,     4,    17,    17,    17,    17,     9,     5,
       1,     0,     7,     4,     1,     1,     3,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     6,     6,     6,     6,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     6,     4,     1,     0,     0,     0,     7,
       0,     0,     0,    11,    13,    17,    18,    19,     0,     0,
       0,    15,     0,     0,     0,    12,    10,    44,    45,     0,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    26,    14,    24,     0,    21,     0,    13,     0,    47,
      48,    49,     0,     0,    45,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     9,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
      61,    60,    59,    62,    55,    63,    64,    50,    51,    52,
      53,    54,    22,    20,     8,    30,     0,    46,     0,     0,
       0,     0,     0,    33,    65,    66,    67,    68,    69,     0,
       0,     0,     0,    75,    70,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,    71,    73,    72,    74,
      29,     0,    43,     0,     0,    31,    32,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    37,
      36,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     9,    18,    26,    20,    51,    22,
      56,    52,    53,    65,   148,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -71
static const yytype_int16 yypact[] =
{
      34,   -25,    28,   -71,   -71,   -71,    31,   -17,    29,   -71,
     -15,   -16,    22,    24,    24,   -71,   -71,   -71,   -50,    79,
     170,   -71,    92,    38,    24,   -71,   -71,   -71,    -3,    41,
     -71,    57,    42,    44,    53,    55,    50,    58,    59,    60,
      61,    62,    63,    67,    68,    69,    70,    72,    73,    57,
     -71,   -71,   659,   -71,   681,    77,   -14,    24,    79,   -71,
     -71,   -71,    57,   127,    66,    75,  1128,   137,   138,    57,
      57,   659,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,   140,   828,   -71,   -71,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,   -71,   143,   215,   -71,   700,    87,    57,   -71,
     110,    88,   848,   868,   260,   888,   908,   928,   948,   968,
     736,   759,   782,   805,   988,  1008,    93,   -71,   -33,   -33,
     -33,   -33,   -33,   -33,    96,    52,    52,   -42,   -42,    96,
      96,   -71,  1128,   -71,   -71,   -71,    57,  1128,   -18,   150,
     151,    97,    98,   -71,   -71,   -71,   -71,   -71,   -71,    57,
      57,    57,    57,   -71,   -71,   141,  1028,    57,   101,   -71,
     107,    94,   659,   659,  1048,  1068,  1088,  1108,   -71,   142,
     718,   659,   108,   162,   305,   350,   -71,   -71,   -71,   -71,
     -71,   659,   659,   659,   -13,   -71,   -71,   620,   395,   165,
     166,   167,   168,   155,   -71,   114,   115,   118,   119,   -71,
     184,   185,   186,   188,   195,   196,   197,   199,   207,   211,
     213,   214,   163,   171,   175,   176,   161,   169,   178,   198,
     659,   659,   659,   659,   440,   485,   530,   575,   -71,   -71,
     -71,   -71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,   -71,   -71,   -71,   -71,   177,   201,    25,    -8,
     -71,   -70,   -52,   -71,   -71,   -24
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
      85,   114,   167,   102,   168,    19,    93,    66,    23,    59,
      60,    24,    98,    99,   100,    93,    58,    94,    95,    96,
      97,    98,    99,   100,     4,    84,   199,   200,     5,   201,
     202,    15,    16,    11,    -3,    17,     7,     8,   106,    21,
      10,    13,   169,    12,    61,   112,   113,   103,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    62,
      27,    64,    85,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,    59,    60,
       1,    14,    21,    25,   147,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    55,    57,    63,    67,
      93,    68,   184,   185,    96,    97,    98,    99,   100,    71,
      69,   192,    70,    61,    49,    72,    73,    74,    75,    76,
      77,   197,   166,   198,    78,    79,    80,    81,   108,    82,
      83,   107,    85,    85,   109,   174,   175,   176,   177,   101,
      85,   110,   111,   180,   126,    85,    85,   143,   146,   149,
     150,   165,   100,   170,   171,   183,   172,   173,   178,   190,
     234,   235,   236,   237,   181,   182,   194,   193,   205,   206,
     207,   208,   209,    27,    28,   210,   211,    15,    16,   212,
     213,    17,    85,    85,    85,    85,    29,    30,   214,   215,
     216,    31,   217,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   218,
     222,   219,   220,   221,   223,    48,   224,   225,    27,    28,
     230,   226,    15,    16,     0,     0,    17,    49,   231,   227,
      50,    29,    30,   228,   229,   105,    31,   232,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,   233,   104,     0,
      48,     0,     0,    27,    28,     0,     0,    15,    16,     0,
       0,    17,    49,     0,     0,   144,    29,    30,     0,     0,
       0,    31,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,    48,     0,     0,    27,    28,
       0,     0,    15,    16,     0,     0,    17,    49,     0,     0,
     153,    29,    30,     0,     0,     0,    31,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
      48,     0,     0,    27,    28,     0,     0,    15,    16,     0,
       0,    17,    49,     0,     0,   195,    29,    30,     0,     0,
       0,    31,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,    48,     0,     0,    27,    28,
       0,     0,    15,    16,     0,     0,    17,    49,     0,     0,
     196,    29,    30,     0,     0,     0,    31,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
      48,     0,     0,    27,    28,     0,     0,    15,    16,     0,
       0,    17,    49,     0,     0,   204,    29,    30,     0,     0,
       0,    31,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,    48,     0,     0,    27,    28,
       0,     0,    15,    16,     0,     0,    17,    49,     0,     0,
     238,    29,    30,     0,     0,     0,    31,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
      48,     0,     0,    27,    28,     0,     0,    15,    16,     0,
       0,    17,    49,     0,     0,   239,    29,    30,     0,     0,
       0,    31,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,    48,     0,     0,    27,    28,
       0,     0,    15,    16,     0,     0,    17,    49,     0,     0,
     240,    29,    30,     0,     0,     0,    31,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
      48,     0,     0,    27,    28,     0,     0,    15,    16,     0,
       0,    17,    49,     0,     0,   241,    29,    30,   203,     0,
       0,    31,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,    27,    28,     0,    48,    15,    16,     0,     0,
      17,     0,     0,     0,     0,    29,    30,    49,     0,     0,
      31,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    86,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,   145,     0,     0,
      87,    88,    89,    90,    91,    92,     0,     0,     0,    93,
       0,    94,    95,    96,    97,    98,    99,   100,     0,    87,
      88,    89,    90,    91,    92,     0,     0,     0,    93,     0,
      94,    95,    96,    97,    98,    99,   100,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,    87,    88,    89,    90,    91,
      92,   191,     0,     0,    93,     0,    94,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,   159,    87,    88,
      89,    90,    91,    92,     0,     0,     0,    93,     0,    94,
      95,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     160,    87,    88,    89,    90,    91,    92,     0,     0,     0,
      93,     0,    94,    95,    96,    97,    98,    99,   100,     0,
       0,     0,     0,   161,    87,    88,    89,    90,    91,    92,
       0,     0,     0,    93,     0,    94,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   162,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   127,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   151,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   152,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   154,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   155,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   156,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   157,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   158,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   163,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   164,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   179,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   186,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   187,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   188,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100,     0,   189,    87,    88,    89,
      90,    91,    92,     0,     0,     0,    93,     0,    94,    95,
      96,    97,    98,    99,   100
};

static const yytype_int16 yycheck[] =
{
      52,    71,    20,    17,    22,    13,    48,    31,    58,    12,
      13,    61,    54,    55,    56,    48,    24,    50,    51,    52,
      53,    54,    55,    56,    49,    49,    39,    40,     0,    42,
      43,     7,     8,     4,     0,    11,     5,     6,    62,    14,
      57,    57,    60,    58,    47,    69,    70,    61,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    62,
       3,     4,   114,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    12,    13,
      46,    59,    57,     4,   108,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     4,    59,    57,    57,
      48,    57,   172,   173,    52,    53,    54,    55,    56,    59,
      57,   181,    57,    47,    57,    57,    57,    57,    57,    57,
      57,   191,   146,   193,    57,    57,    57,    57,    62,    57,
      57,     4,   184,   185,    59,   159,   160,   161,   162,    62,
     192,     4,     4,   167,     4,   197,   198,     4,    61,    39,
      62,    58,    56,     3,     3,    61,    59,    59,    17,    17,
     230,   231,   232,   233,    63,    58,     4,    59,     3,     3,
       3,     3,    17,     3,     4,    61,    61,     7,     8,    61,
      61,    11,   234,   235,   236,   237,    16,    17,     4,     4,
       4,    21,     4,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    14,
       3,    15,    15,    14,     3,    45,     3,     3,     3,     4,
      59,    58,     7,     8,    -1,    -1,    11,    57,    59,    58,
      60,    16,    17,    58,    58,    58,    21,    59,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    59,    57,    -1,
      45,    -1,    -1,     3,     4,    -1,    -1,     7,     8,    -1,
      -1,    11,    57,    -1,    -1,    60,    16,    17,    -1,    -1,
      -1,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,     3,     4,
      -1,    -1,     7,     8,    -1,    -1,    11,    57,    -1,    -1,
      60,    16,    17,    -1,    -1,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,     3,     4,    -1,    -1,     7,     8,    -1,
      -1,    11,    57,    -1,    -1,    60,    16,    17,    -1,    -1,
      -1,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,     3,     4,
      -1,    -1,     7,     8,    -1,    -1,    11,    57,    -1,    -1,
      60,    16,    17,    -1,    -1,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,     3,     4,    -1,    -1,     7,     8,    -1,
      -1,    11,    57,    -1,    -1,    60,    16,    17,    -1,    -1,
      -1,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,     3,     4,
      -1,    -1,     7,     8,    -1,    -1,    11,    57,    -1,    -1,
      60,    16,    17,    -1,    -1,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,     3,     4,    -1,    -1,     7,     8,    -1,
      -1,    11,    57,    -1,    -1,    60,    16,    17,    -1,    -1,
      -1,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,     3,     4,
      -1,    -1,     7,     8,    -1,    -1,    11,    57,    -1,    -1,
      60,    16,    17,    -1,    -1,    -1,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,     3,     4,    -1,    -1,     7,     8,    -1,
      -1,    11,    57,    -1,    -1,    60,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,     3,     4,    -1,    45,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    16,    17,    57,    -1,    -1,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    17,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    17,    -1,    -1,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    39,    40,    41,    42,    43,
      44,    63,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    61,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      61,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    61,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    61,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    65,    66,    49,     0,    67,     5,     6,    68,
      57,     4,    58,    57,    59,     7,     8,    11,    69,    73,
      71,    72,    73,    58,    61,     4,    70,     3,     4,    16,
      17,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    45,    57,
      60,    72,    75,    76,    79,     4,    74,    59,    73,    12,
      13,    47,    62,    57,     4,    77,    79,    57,    57,    57,
      57,    59,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    79,    76,    17,    39,    40,    41,
      42,    43,    44,    48,    50,    51,    52,    53,    54,    55,
      56,    62,    17,    61,    71,    70,    79,     4,    62,    59,
       4,     4,    79,    79,    75,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,     4,    58,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,     4,    60,    17,    61,    79,    78,    39,
      62,    58,    58,    60,    58,    58,    58,    58,    58,    61,
      61,    61,    61,    58,    58,    58,    79,    20,    22,    60,
       3,     3,    59,    59,    79,    79,    79,    79,    17,    58,
      79,    63,    58,    61,    75,    75,    58,    58,    58,    58,
      17,    63,    75,    59,     4,    60,    60,    75,    75,    39,
      40,    42,    43,    18,    60,     3,     3,     3,     3,    17,
      61,    61,    61,    61,     4,     4,     4,     4,    14,    15,
      15,    14,     3,     3,     3,     3,    58,    58,    58,    58,
      59,    59,    59,    59,    75,    75,    75,    75,    60,    60,
      60,    60
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
        case 2:

/* Line 1455 of yacc.c  */
#line 118 "1907048.y"
    {printf("Compilation DONE\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 122 "1907048.y"
    { printf("Header Library Detected\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 134 "1907048.y"
    {
		printf("Function Detected\n");		
	;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 141 "1907048.y"
    { printf("With Parameter\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 142 "1907048.y"
    { printf("With Parameter\n"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 144 "1907048.y"
    { printf("Without Parameter\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 150 "1907048.y"
    {
		   if(chkVariable((yyvsp[(1) - (1)].string))==1)
      		printf("Duplicate Declaration\n");
   		else
      	  initial_assign((yyvsp[(1) - (1)].string));
		;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 185 "1907048.y"
    {
   		 if(chkVariable((yyvsp[(3) - (3)].string))==1)
      			printf("Duplicate Declaration!\n");
   		 else{
				initial_assign((yyvsp[(3) - (3)].string));
				{ printf("(%s) Variable declaration\n", (yyvsp[(3) - (3)].string)); }
		 	}
		;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 195 "1907048.y"
    {
		   if(chkVariable((yyvsp[(1) - (1)].string))==1)
      			printf("Duplicate Declaration!\n");
   		 else{
				initial_assign((yyvsp[(1) - (1)].string));
				{ printf("(%s) Variable declaration\n", (yyvsp[(1) - (1)].string)); }
		 	}
		;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 205 "1907048.y"
    {
		   if(chkVariable((yyvsp[(1) - (3)].string))==1)
      			printf("Duplicate Declaration!\n");
   		 else
      			initial_assign((yyvsp[(1) - (3)].string));
			
			if( setValue((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].num)) == 0 )
			{
				printf("(%s) Variable not declared\n", (yyvsp[(1) - (3)].string));
			}
			else{
				printf("(%s) Variable assigned with value %d\n", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].num));
			}
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 231 "1907048.y"
    {
			(yyval.num)=(yyvsp[(1) - (2)].num);
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 235 "1907048.y"
    {
		if(chkVariable((yyvsp[(3) - (5)].string))==0)
			{
				printf("Can't print, (%s) Variable is not declared.\n", (yyvsp[(3) - (5)].string));
			}
			else 
			{
				printf("Displaying on console (Value of the variable %s:  %d)\n",(yyvsp[(3) - (5)].string), store_value[getValue((yyvsp[(3) - (5)].string))]);
			}
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 246 "1907048.y"
    {
      if(chkVariable((yyvsp[(3) - (7)].string))==1)
            {
            printf("READ from console.\n");
			printf("(%s) Variable now has value %d.\n", (yyvsp[(3) - (7)].string), (yyvsp[(5) - (7)].num));
        }
		  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 254 "1907048.y"
    {
		if( setValue((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].num)) == 0 )
		{
			(yyval.num) = 0;
			printf("Variable not declared\n");
		}
		else
		{
			(yyval.num)=(yyvsp[(3) - (4)].num);
			printf("(%s) Variable has value : %d\n", (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].num));
		}
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 267 "1907048.y"
    {
		ifcnt++;
		if( (yyvsp[(3) - (7)].num) == 1 )
		{
			ifcomplete[ifcnt] = 1;
			printf("if condition executed \n");
		}
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 276 "1907048.y"
    {
		if( (yyvsp[(3) - (7)].num) == 1 && ifcomplete[ifcnt] == 0)
		{
			ifcomplete[ifcnt] = 1;
			printf("elseif condition executed \n");
		}
	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 284 "1907048.y"
    {
		if( ifcomplete[ifcnt] == 0)
		{
			ifcomplete[ifcnt] = 1;
			printf("else condition executed \n");
		}
	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 293 "1907048.y"
    {			
			if( setValue((yyvsp[(3) - (17)].string),(yyvsp[(5) - (17)].num)) == 0 )
			{
				printf("Variable not declared loop cant be execute \n");
			}
			else
			{
			   int i;
				for(i= (yyvsp[(5) - (17)].num) ; i <= (yyvsp[(9) - (17)].num) ; i+=(yyvsp[(13) - (17)].num))
				{
					setValue((yyvsp[(3) - (17)].string),i);
					printf("for loop increasing %d\n",i);
				} 
				printf("\n");	
			} 			    
		;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 310 "1907048.y"
    {			
			if( setValue((yyvsp[(3) - (17)].string),(yyvsp[(5) - (17)].num)) == 0 )
			{
				printf("\nvar not declared loop cant be execute \n");
			}
			else
			{
			   int i;
				for(i= (yyvsp[(5) - (17)].num) ; i < (yyvsp[(9) - (17)].num) ; i+=(yyvsp[(13) - (17)].num))
				{
					setValue((yyvsp[(3) - (17)].string),i);
					printf("for loop increasing %d\n",i);
				} 
				printf("\n");	
			} 			    
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 327 "1907048.y"
    {			
			if( setValue((yyvsp[(3) - (17)].string),(yyvsp[(5) - (17)].num)) == 0 )
			{
				printf("\nvar not declared loop cant be execute \n");
			}
			else
			{
			   int i;
				for(i= (yyvsp[(5) - (17)].num) ; i >= (yyvsp[(9) - (17)].num) ; i-=(yyvsp[(13) - (17)].num))
				{
					setValue((yyvsp[(3) - (17)].string),i);
					printf("for loop increasing %d\n",i);
				} 
				printf("\n");	
			} 			    
		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 344 "1907048.y"
    {			
			if( setValue((yyvsp[(3) - (17)].string),(yyvsp[(5) - (17)].num)) == 0 )
			{
				printf("\nvar not declared loop cant be execute \n");
			}
			else
			{
			   int i;
				for(i= (yyvsp[(5) - (17)].num) ; i > (yyvsp[(9) - (17)].num) ; i-=(yyvsp[(13) - (17)].num))
				{
					setValue((yyvsp[(3) - (17)].string),i);
					printf("for loop increasing %d\n",i);
				} 
				printf("\n");	
			} 			    
		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 361 "1907048.y"
    {
			int a = store_value[getValue((yyvsp[(3) - (9)].string))];
			while((a+=1)< (yyvsp[(5) - (9)].num))
			{
				printf("While loop increasing %s : %d\n", (yyvsp[(3) - (9)].string), a);
			}
		;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 373 "1907048.y"
    {
    		case_ex = 0;
    		sw_var_val = (yyvsp[(1) - (1)].num);
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 382 "1907048.y"
    {
    		if((yyvsp[(3) - (7)].num) == sw_var_val && case_ex == 0 )
    		{
        			printf("Executed option %d\n",(yyvsp[(3) - (7)].num));
        			case_ex = 1;
   			}
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 391 "1907048.y"
    {
  		  if(case_ex == 0)
   			 {
    			   case_ex = 1;
     			   printf("Default Block executed\n");
    			}
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 402 "1907048.y"
    {
		(yyval.num) = (yyvsp[(1) - (1)].num);
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 407 "1907048.y"
    {
  		  if( chkVariable((yyvsp[(1) - (1)].string)) == 0)
   			 {
    			    (yyval.num)=0;
     			   printf("Variable not declared!\n");
   			 }
    		else
       			 (yyval.num)=store_value[getValue((yyvsp[(1) - (1)].string))];
		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 417 "1907048.y"
    {
        	if (chkVariable((yyvsp[(1) - (3)].string)) == 1)
        	{
            	setValue((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].num));
            	(yyval.num) = store_value[getValue((yyvsp[(1) - (3)].string))];
        	}
        	else
        	{
            	(yyval.num) = 0;
            	printf("Variable not declared\n");
        	}
    	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 430 "1907048.y"
    {
  		  if( chkVariable((yyvsp[(1) - (2)].string)) == 0)
   		{
    			(yyval.num)=0;
     			printf("Variable not declared for increament!\n");
   		}
    		else
			{
				int tmp = store_value[getValue((yyvsp[(1) - (2)].string))];
				tmp = tmp+1;
				store_value[getValue((yyvsp[(1) - (2)].string))] = tmp;
				(yyval.num)=store_value[getValue((yyvsp[(1) - (2)].string))];
			}

		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 446 "1907048.y"
    {
  		  if( chkVariable((yyvsp[(1) - (2)].string)) == 0)
   		{
    			(yyval.num)=0;
     			printf("Variable not declared for decreament!\n");
   		}
    		else
			{
				int tmp = store_value[getValue((yyvsp[(1) - (2)].string))];
				tmp = tmp-1;
				store_value[getValue((yyvsp[(1) - (2)].string))] = tmp;
				(yyval.num)=store_value[getValue((yyvsp[(1) - (2)].string))];
			}
		;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 461 "1907048.y"
    {
  		  if( chkVariable((yyvsp[(1) - (2)].string)) == 0)
   		{
    			(yyval.num)=0;
     			printf("Variable not declared of not!\n");
   		}
    		else
			{
				int tmp = store_value[getValue((yyvsp[(1) - (2)].string))];
				tmp = !tmp;
				store_value[getValue((yyvsp[(1) - (2)].string))] = tmp;
				(yyval.num)=store_value[getValue((yyvsp[(1) - (2)].string))];
			}

		;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 478 "1907048.y"
    { 	
			(yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num); 
			printf("Sum value of (%d and %d): %d\n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num), (yyval.num));
		 ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 484 "1907048.y"
    {
  			(yyval.num) = (yyvsp[(1) - (3)].num) - (yyvsp[(3) - (3)].num); 
			printf("Subtraction value of (%d and %d): %d\n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num), (yyval.num));
		;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 490 "1907048.y"
    {
 			   (yyval.num) = (yyvsp[(1) - (3)].num) * (yyvsp[(3) - (3)].num);
 			   printf("Multiplication value of (%d and %d): %d\n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num), (yyval.num));
		;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 496 "1907048.y"
    { 	
			if((yyvsp[(3) - (3)].num))
 			   {
  			      (yyval.num) = (yyvsp[(1) - (3)].num) / (yyvsp[(3) - (3)].num);
     				printf("Division value of (%d and %d): %d\n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num), (yyval.num));
  			   }
   			 else
    			{
      				 (yyval.num) = 0;
       				 printf("Division by zero not possible\n");
    			}
		;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 510 "1907048.y"
    { 	
			(yyval.num)=pow((yyvsp[(1) - (3)].num),(yyvsp[(3) - (3)].num)); 
			printf("Power value of (%d and %d): %d\n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num), (yyval.num));
		;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 516 "1907048.y"
    {	 
			(yyval.num)=(yyvsp[(1) - (3)].num) % (yyvsp[(3) - (3)].num); 
			printf("Remainder value of (%d and %d): %d\n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num), (yyval.num));
		;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 522 "1907048.y"
    { (yyval.num) = (yyvsp[(2) - (3)].num) ;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 524 "1907048.y"
    {
			//  $$ = $1 < $3; 
			 if( (yyvsp[(1) - (3)].num) < (yyvsp[(3) - (3)].num) )
			 {
				printf("less check for values (%d , %d) is True \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
				(yyval.num) = 1;
			 }
			 else{
				printf("less check for values (%d , %d) is False \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
				(yyval.num) = 0;
			}
		;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 538 "1907048.y"
    {
			(yyval.num) = (yyvsp[(1) - (3)].num) > (yyvsp[(3) - (3)].num);
			if((yyvsp[(1) - (3)].num) > (yyvsp[(3) - (3)].num)){
				printf("greater check for values (%d , %d) is True \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
			}
			else{
				printf("greater check for values (%d , %d) is False \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
			}
		;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 549 "1907048.y"
    { 
			(yyval.num) = (yyvsp[(1) - (3)].num) <= (yyvsp[(3) - (3)].num);
			if ((yyvsp[(1) - (3)].num) <= (yyvsp[(3) - (3)].num)) printf("less equal check for values (%d , %d) is True \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
			else printf("less equal check for values (%d , %d) is False \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
		;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 556 "1907048.y"
    { 
			(yyval.num) = (yyvsp[(1) - (3)].num) >= (yyvsp[(3) - (3)].num); 
			if ((yyvsp[(1) - (3)].num) >= (yyvsp[(3) - (3)].num)) printf("greater equal check for values (%d , %d) is True \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
			else printf("greater equal check for values (%d , %d) is False \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
		;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 563 "1907048.y"
    { 
			(yyval.num) = (yyvsp[(1) - (3)].num) == (yyvsp[(3) - (3)].num); 
			if((yyvsp[(1) - (3)].num) == (yyvsp[(3) - (3)].num)) printf("equal check for values (%d , %d) is True \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
			else printf("equal check for values (%d , %d) is False \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
		;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 570 "1907048.y"
    { 
			(yyval.num) = (yyvsp[(1) - (3)].num) != (yyvsp[(3) - (3)].num); 
			if ((yyvsp[(1) - (3)].num) != (yyvsp[(3) - (3)].num)) printf("Not equal check for values (%d , %d) is True \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
			else printf("Not equal check for values (%d , %d) is False \n",(yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num));
		;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 577 "1907048.y"
    {
			int val = (yyvsp[(1) - (3)].num)&(yyvsp[(3) - (3)].num);
			(yyval.num) = (yyvsp[(1) - (3)].num)&(yyvsp[(3) - (3)].num);
			printf("Bitwise AND of values (%d, %d): %d\n", (yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num), val);
		;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 583 "1907048.y"
    {
			int val = (yyvsp[(1) - (3)].num)|(yyvsp[(3) - (3)].num);
			(yyval.num) = (yyvsp[(1) - (3)].num)|(yyvsp[(3) - (3)].num);
			printf("Bitwise OR of values (%d, %d): %d\n", (yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num), val);
		;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 589 "1907048.y"
    {
			printf("Value of Sin(%d) is %lf\n",(yyvsp[(3) - (4)].num),sin((yyvsp[(3) - (4)].num)*3.1416/180)); (yyval.num)=sin((yyvsp[(3) - (4)].num)*3.1416/180);
		;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 594 "1907048.y"
    {
			printf("Value of Cos(%d) is %lf\n",(yyvsp[(3) - (4)].num),cos((yyvsp[(3) - (4)].num)*3.1416/180)); (yyval.num)=cos((yyvsp[(3) - (4)].num)*3.1416/180);
		;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 599 "1907048.y"
    {
			printf("Value of Log10(%d) is %lf\n",(yyvsp[(3) - (4)].num),(log((yyvsp[(3) - (4)].num)*1.0)/log(10.0))); (yyval.num)=(log((yyvsp[(3) - (4)].num)*1.0)/log(10.0));
		;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 604 "1907048.y"
    {
			if((yyvsp[(3) - (4)].num)%2==0)
			{
				(yyval.num) = 0;
				printf("value provided for OddEven function is %d which is even\n",(yyvsp[(3) - (4)].num));
			} 
			else
			{
				(yyval.num) = 1;
				printf("value provided for OddEven function is %d which is odd\n",(yyvsp[(3) - (4)].num));
			} 
				
		;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 619 "1907048.y"
    {
			int ans = 1;
			int i; 
			for(i=1; i<=(yyvsp[(3) - (4)].num); i++)
			{
				ans*=i;
			}
			printf("Factorial of %d is %d\n",(yyvsp[(3) - (4)].num),ans);
			(yyval.num) = ans;
		;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 631 "1907048.y"
    {
			float ans = sqrt((yyvsp[(3) - (4)].num) * 1.0);
			(yyval.num) = ans;
			printf("Square root of %d is %0.2lf\n",(yyvsp[(3) - (4)].num),ans);
		;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 638 "1907048.y"
    {
			if( (yyvsp[(3) - (6)].num) < (yyvsp[(5) - (6)].num) )
			{
				(yyval.num) = (yyvsp[(5) - (6)].num);
				printf("MAX of (%d,%d): %d \n",(yyvsp[(3) - (6)].num),(yyvsp[(5) - (6)].num), (yyvsp[(5) - (6)].num));
			}
			else
			{
				(yyval.num) = (yyvsp[(3) - (6)].num);
				printf("MAX of (%d,%d): %d \n",(yyvsp[(3) - (6)].num),(yyvsp[(5) - (6)].num), (yyvsp[(3) - (6)].num));
			}
		;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 651 "1907048.y"
    {
			int n1, n2;
			n1 = (yyvsp[(3) - (6)].num);
			n2 = (yyvsp[(5) - (6)].num);
    		while(n1!=n2)
    		{
        		if(n1 > n2)
            		n1 -= n2;
        		else
            		n2 -= n1;
    		}
			(yyval.num) = n1;
			printf("GCD of (%d, %d): %d \n",(yyvsp[(3) - (6)].num), (yyvsp[(5) - (6)].num), n1);
		;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 666 "1907048.y"
    {
			if( (yyvsp[(3) - (6)].num) < (yyvsp[(5) - (6)].num) )
			{
				(yyval.num) = (yyvsp[(3) - (6)].num);
				printf("MIN of (%d,%d): %d \n",(yyvsp[(3) - (6)].num),(yyvsp[(5) - (6)].num), (yyvsp[(3) - (6)].num));
			}
			else
			{
				(yyval.num) = (yyvsp[(5) - (6)].num);
				printf("MIN of (%d,%d): %d \n",(yyvsp[(3) - (6)].num),(yyvsp[(5) - (6)].num), (yyvsp[(5) - (6)].num));
			}
		;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 680 "1907048.y"
    {
			int n1, n2;
			n1 = (yyvsp[(3) - (6)].num);
			n2 = (yyvsp[(5) - (6)].num);
			int result = n1 * n2;
    		while(n1!=n2)
    		{
        		if(n1 > n2)
            		n1 -= n2;
        		else
            		n2 -= n1;
    		}
			n1 = result / n1;
			(yyval.num) = n1;
			printf("LCM of (%d, %d): %d \n",(yyvsp[(3) - (6)].num), (yyvsp[(5) - (6)].num), n1);
		;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 698 "1907048.y"
    {
			int x = (yyvsp[(3) - (4)].num);
			int ck = 0;
			int i; 
			for(i=2; i*i<=x; i++)
			{
				if( x%i == 0 )
				{
					ck = 1;
					break;
				}
			}
			if( ck )
			{
				(yyval.num) = 0;
				printf("%d is Not prime \n",x);
			}
			else
			{
				(yyval.num) = 1;
				printf("%d is prime \n",x);
			}
		;}
    break;



/* Line 1455 of yacc.c  */
#line 2622 "1907048.tab.c"
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
#line 723 "1907048.y"


int yyerror(char *s)
{
    printf( "%s\n", s);
}

