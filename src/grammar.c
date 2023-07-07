/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "grammar.y"

/* --------------------------------------------------------------------------
 * Copyright (C) 2023 Jorge Giner Cordero
 * License: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>
 * --------------------------------------------------------------------------
 */

/* Minimal BASIC grammar. */

#include <config.h>
#include "ecma55.h"
#include <stddef.h>

#define YYERROR_VERBOSE

static int s_on_goto_nelems;
static int s_on_goto_pc;
static int s_save_pc;

#line 90 "grammar.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_GRAMMAR_H_INCLUDED
# define YY_YY_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BASE = 258,
    DATA = 259,
    DEF = 260,
    DIM = 261,
    END = 262,
    FOR = 263,
    GO = 264,
    GOSUB = 265,
    GOTO = 266,
    IF = 267,
    INPUT = 268,
    LET = 269,
    NEXT = 270,
    ON = 271,
    OPTION = 272,
    PRINT = 273,
    RANDOMIZE = 274,
    READ = 275,
    REM = 276,
    RESTORE = 277,
    RETURN = 278,
    STEP = 279,
    STOP = 280,
    SUB = 281,
    TAB = 282,
    THEN = 283,
    TO = 284,
    LESS_EQ = 285,
    GREATER_EQ = 286,
    NOT_EQ = 287,
    BAD_ID = 288,
    INVAL_CHAR = 289,
    NUM = 290,
    INT = 291,
    NUMVAR = 292,
    STRVAR = 293,
    STR = 294,
    QUOTED_STR = 295,
    USRFN = 296,
    IFUN = 297,
    NEG = 298
  };
#endif
/* Tokens.  */
#define BASE 258
#define DATA 259
#define DEF 260
#define DIM 261
#define END 262
#define FOR 263
#define GO 264
#define GOSUB 265
#define GOTO 266
#define IF 267
#define INPUT 268
#define LET 269
#define NEXT 270
#define ON 271
#define OPTION 272
#define PRINT 273
#define RANDOMIZE 274
#define READ 275
#define REM 276
#define RESTORE 277
#define RETURN 278
#define STEP 279
#define STOP 280
#define SUB 281
#define TAB 282
#define THEN 283
#define TO 284
#define LESS_EQ 285
#define GREATER_EQ 286
#define NOT_EQ 287
#define BAD_ID 288
#define INVAL_CHAR 289
#define NUM 290
#define INT 291
#define NUMVAR 292
#define STRVAR 293
#define STR 294
#define QUOTED_STR 295
#define USRFN 296
#define IFUN 297
#define NEG 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  89
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

#define YYUNDEFTOK  2
#define YYMAXUTOK   298


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,    45,    44,    49,    43,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
      50,    52,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    48,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    68,    72,    76,    84,    85,    89,    97,    98,
     102,   106,   111,   110,   125,   126,   130,   138,   147,   153,
     159,   169,   170,   171,   172,   173,   177,   178,   182,   192,
     196,   204,   208,   219,   229,   233,   238,   250,   249,   260,
     261,   266,   265,   290,   304,   307,   312,   321,   325,   326,
     330,   336,   342,   349,   360,   364,   368,   369,   373,   378,
     386,   390,   391,   395,   400,   409,   416,   420,   424,   425,
     426,   427,   431,   432,   436,   437,   441,   442,   446,   454,
     462,   469,   476,   484,   496,   500,   506,   512,   517,   523,
     530,   535,   541,   546,   552,   553,   554,   555,   556,   562,
     563,   564
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BASE", "DATA", "DEF", "DIM", "END",
  "FOR", "GO", "GOSUB", "GOTO", "IF", "INPUT", "LET", "NEXT", "ON",
  "OPTION", "PRINT", "RANDOMIZE", "READ", "REM", "RESTORE", "RETURN",
  "STEP", "STOP", "SUB", "TAB", "THEN", "TO", "LESS_EQ", "GREATER_EQ",
  "NOT_EQ", "BAD_ID", "INVAL_CHAR", "NUM", "INT", "NUMVAR", "STRVAR",
  "STR", "QUOTED_STR", "USRFN", "IFUN", "'-'", "'+'", "'*'", "'/'", "NEG",
  "'^'", "','", "'<'", "'>'", "'='", "'('", "')'", "';'", "$accept",
  "stmnt", "rem_stmnt", "end_stmnt", "goto_stmnt", "goto", "gosub_stmnt",
  "gosub", "return_stmnt", "stop_stmnt", "on_stmnt", "$@1", "num_list",
  "num_list_int", "if_stmnt", "str_expr", "rel", "eq_rel", "for_stmnt",
  "step", "next_stmnt", "def_stmnt_head", "def_stmnt", "fnparam",
  "input_stmnt", "$@2", "var_list", "var_loc", "$@3", "var_loc_rest",
  "read_stmnt", "read_var_list", "read_var_loc", "restore_stmnt",
  "data_stmnt", "dat_list", "datum", "dim_stmnt", "dim_list", "dim_decl",
  "option_stmnt", "randomize_stmnt", "print_stmnt", "print_expr",
  "print_item_sep", "print_list", "print_sep", "print_item", "let_stmnt",
  "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    45,    43,    42,    47,   298,    94,    44,
      60,    62,    61,    40,    41,    59
};
# endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     120,    14,   -33,   -16,   -83,   -14,    52,   -83,   -83,   159,
     -83,    23,    -8,   159,    32,   -25,   -83,    47,   -83,   -83,
     -83,   -83,    41,   -83,   -83,   -83,     7,   -83,    19,   -83,
     -83,   -83,   -83,   -83,   -83,    10,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,    18,   -83,
      16,    27,    24,   -83,    30,   -83,   -83,   -83,   -83,    35,
     -83,   -83,   -83,    44,    57,   159,   159,   159,   -83,    20,
      49,    53,    59,   -83,    -6,    76,    63,   -83,   -83,   -83,
     -83,   -25,   -83,   -29,   -12,    64,   -83,    69,   -83,   -83,
     -83,   -83,   159,    14,    71,   -83,    84,   -16,   159,   159,
     159,   159,    73,    73,    50,   -83,   -83,   -83,   159,   159,
     159,   159,   159,   -83,   -83,   -83,   159,   -83,   -83,   -83,
      95,   -83,   159,   159,   159,    93,   -83,   -83,   159,   -83,
     -29,   -83,   159,    47,   -12,   -83,    92,   103,   -27,   -83,
     123,   105,   129,   187,   -83,   -39,   -39,    73,    73,   -83,
      31,    94,    49,   -12,   161,   -12,   122,   194,   173,   -83,
     -83,   -83,   124,   -83,   159,   159,   -83,   -83,   -83,   126,
     159,   -83,   -83,   159,   111,   -83,   116,   -83,   -83,   159,
     -83,   125,     1,   201,   -83,   180,   208,   159,   122,   215,
     -83,   159,   -83,   -83,   159,   -83,   128,   -12,   -83,   -83,
     -12,   222,   159,   -83,   -12
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    23,     0,     0,    28,    25,     0,
      57,     0,     0,     0,     0,    88,    86,     0,    22,    74,
      30,    31,     0,     2,     3,     7,     0,     8,     0,     9,
      10,    11,    12,    13,    14,     0,    15,    16,    17,    18,
      19,     4,    20,    21,     6,     5,    78,    79,    75,    76,
      54,     0,    80,    81,     0,    29,    26,   106,   105,   107,
      40,    38,    39,   110,   112,     0,     0,     0,   104,     0,
       0,     0,     0,    51,     0,     0,     0,    96,    97,    87,
      94,    90,    93,    89,    98,    71,    70,    67,    68,     1,
      24,    27,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,   118,   119,     0,    44,    45,    47,     0,     0,
       0,     0,     0,    42,    43,    46,     0,    41,    61,    63,
      58,    59,     0,     0,     0,     0,    32,    85,     0,    95,
      91,    92,     0,     0,    53,    77,     0,     0,     0,    82,
       0,     0,     0,     0,   121,   115,   114,   116,   117,   120,
       0,    64,     0,   101,     0,   100,     0,     0,     0,    69,
      55,    56,     0,    83,     0,     0,   108,   111,   113,     0,
       0,    62,    60,     0,     0,    36,    33,    34,    99,     0,
      72,     0,    49,     0,    37,     0,     0,     0,     0,     0,
      84,     0,    48,   109,     0,    65,     0,   102,    35,    73,
      50,     0,     0,    66,   103
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -83,   -83,   -83,   102,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,    -7,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,    34,   -83,   -83,
     -83,   -83,    51,   -83,   -83,   -83,    96,   -83,   -83,    90,
     -83,   -83,   -83,   -83,   107,   -83,   -82,   109,   -83,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   156,   176,   177,    32,    68,   116,   117,    33,   192,
      34,    35,    36,    95,    37,    70,   120,   121,   151,   171,
      38,    87,    88,    39,    40,    48,    49,    41,    52,    53,
      42,    43,    44,    79,    80,    81,    82,    83,    45,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      69,   131,    76,   125,    74,     8,   110,   111,    50,   112,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      77,    51,   162,    54,    77,   191,    78,   163,    67,    73,
      78,   108,   109,   110,   111,    75,   112,   108,   109,   110,
     111,    89,   112,    90,   108,   109,   110,   111,   131,   112,
     105,   106,   107,    46,    47,    91,   102,   103,   104,   169,
      71,    72,    92,   108,   109,   110,   111,    93,   112,    94,
     113,   114,   115,    97,   108,   109,   110,   111,    55,   112,
      96,    56,    98,   134,    85,    86,   118,   119,    99,   140,
     141,   142,   143,   108,   109,   110,   111,   100,   112,   145,
     146,   147,   148,   149,   144,   122,   123,   150,   136,   137,
     101,   124,   127,   153,   154,   155,   128,   132,   133,   157,
     138,   112,    56,   158,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   152,    21,   160,   170,   108,   109,
     110,   111,   164,   112,   165,   182,   183,   161,   175,   166,
     181,   185,   184,   187,   186,   188,   108,   109,   110,   111,
     189,   112,   108,   109,   110,   111,   126,   112,   197,   190,
     202,   198,   200,   167,   159,   201,   172,   139,   129,   135,
     130,     0,     0,   204,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,   108,   109,   110,   111,     0,   112,
     173,     0,    67,     0,     0,   174,   108,   109,   110,   111,
       0,   112,   179,   108,   109,   110,   111,   180,   112,   194,
     108,   109,   110,   111,   195,   112,     0,   108,   109,   110,
     111,   168,   112,     0,   108,   109,   110,   111,   178,   112,
       0,   108,   109,   110,   111,   193,   112,     0,   108,   109,
     110,   111,   196,   112,     0,   108,   109,   110,   111,   199,
     112,     0,     0,     0,     0,     0,   203
};

static const yytype_int16 yycheck[] =
{
       9,    83,    27,     9,    13,    11,    45,    46,    41,    48,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      49,    37,    49,    37,    49,    24,    55,    54,    53,    37,
      55,    43,    44,    45,    46,     3,    48,    43,    44,    45,
      46,     0,    48,    36,    43,    44,    45,    46,   130,    48,
      30,    31,    32,    39,    40,    36,    65,    66,    67,    28,
      37,    38,    52,    43,    44,    45,    46,    49,    48,    53,
      50,    51,    52,    49,    43,    44,    45,    46,    26,    48,
      53,    29,    52,    92,    37,    38,    37,    38,    53,    98,
      99,   100,   101,    43,    44,    45,    46,    53,    48,   108,
     109,   110,   111,   112,    54,    52,    53,   116,    37,    38,
      53,    52,    36,   122,   123,   124,    53,    53,    49,   128,
      36,    48,    29,   132,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    49,    25,    54,    53,    43,    44,
      45,    46,    29,    48,    49,   164,   165,    54,    36,    54,
      36,   170,    36,    52,   173,    49,    43,    44,    45,    46,
     179,    48,    43,    44,    45,    46,    74,    48,   187,    54,
      52,   188,   191,    54,   133,   194,   152,    97,    81,    93,
      81,    -1,    -1,   202,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    43,    44,    45,    46,    -1,    48,
      49,    -1,    53,    -1,    -1,    54,    43,    44,    45,    46,
      -1,    48,    49,    43,    44,    45,    46,    54,    48,    49,
      43,    44,    45,    46,    54,    48,    -1,    43,    44,    45,
      46,    54,    48,    -1,    43,    44,    45,    46,    54,    48,
      -1,    43,    44,    45,    46,    54,    48,    -1,    43,    44,
      45,    46,    54,    48,    -1,    43,    44,    45,    46,    54,
      48,    -1,    -1,    -1,    -1,    -1,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    25,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    70,    74,    76,    77,    78,    80,    86,    89,
      90,    93,    96,    97,    98,   104,    39,    40,    91,    92,
      41,    37,    94,    95,    37,    26,    29,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    53,    71,   105,
      81,    37,    38,    37,   105,     3,    27,    49,    55,    99,
     100,   101,   102,   103,   105,    37,    38,    87,    88,     0,
      36,    36,    52,    49,    53,    79,    53,    49,    52,    53,
      53,    53,   105,   105,   105,    30,    31,    32,    43,    44,
      45,    46,    48,    50,    51,    52,    72,    73,    37,    38,
      82,    83,    52,    53,    52,     9,    61,    36,    53,   100,
     103,   102,    53,    49,   105,    92,    37,    38,    36,    95,
     105,   105,   105,   105,    54,   105,   105,   105,   105,   105,
     105,    84,    49,   105,   105,   105,    67,   105,   105,    88,
      54,    54,    49,    54,    29,    49,    54,    54,    54,    28,
      53,    85,    83,    49,    54,    36,    68,    69,    54,    49,
      54,    36,   105,   105,    36,   105,   105,    52,    49,   105,
      54,    24,    75,    54,    49,    54,    54,   105,    69,    54,
     105,   105,    52,    54,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    59,    60,    61,    61,    62,    63,    63,
      64,    65,    67,    66,    68,    68,    69,    70,    71,    71,
      71,    72,    72,    72,    72,    72,    73,    73,    74,    75,
      75,    76,    77,    78,    79,    79,    79,    81,    80,    82,
      82,    84,    83,    83,    85,    85,    85,    86,    87,    87,
      88,    88,    88,    88,    89,    90,    91,    91,    92,    92,
      93,    94,    94,    95,    95,    96,    97,    98,    99,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   104,   104,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     2,
       1,     1,     0,     5,     1,     3,     1,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     0,
       2,     2,     3,     3,     0,     3,     3,     0,     3,     1,
       3,     0,     3,     1,     0,     3,     5,     2,     1,     3,
       1,     1,     4,     6,     1,     2,     1,     3,     1,     1,
       2,     1,     3,     4,     6,     3,     1,     2,     0,     1,
       1,     2,     2,     1,     1,     2,     1,     1,     1,     4,
       4,     4,     7,     9,     1,     1,     1,     1,     4,     6,
       1,     4,     1,     4,     3,     3,     3,     3,     2,     2,
       3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 23:
#line 72 "grammar.y"
                { end_decl(); }
#line 1567 "grammar.c"
    break;

  case 24:
#line 77 "grammar.y"
                {
			add_op_instr(GOTO_OP);
			add_line_ref(yyvsp[0].column, yyvsp[0].u.num.i);
		}
#line 1576 "grammar.c"
    break;

  case 27:
#line 90 "grammar.y"
                {
			add_op_instr(GOSUB_OP);
			add_line_ref(yyvsp[0].column, yyvsp[0].u.num.i);
		}
#line 1585 "grammar.c"
    break;

  case 30:
#line 102 "grammar.y"
                        { add_op_instr(RETURN_OP); }
#line 1591 "grammar.c"
    break;

  case 31:
#line 106 "grammar.y"
                        { add_op_instr(END_OP); }
#line 1597 "grammar.c"
    break;

  case 32:
#line 111 "grammar.y"
                { 			
			check_type(yyvsp[-1], PSTACK_NUM);
			add_op_instr(ON_GOTO_OP);
			s_on_goto_nelems = 0;
			s_on_goto_pc = get_code_size();
			add_id_instr(0);
		}
#line 1609 "grammar.c"
    break;

  case 33:
#line 119 "grammar.y"
                {
			set_id_instr(s_on_goto_pc, s_on_goto_nelems);
		}
#line 1617 "grammar.c"
    break;

  case 36:
#line 131 "grammar.y"
                { 
			s_on_goto_nelems++;
			add_line_ref(yyvsp[0].column, yyvsp[0].u.num.i);
		}
#line 1626 "grammar.c"
    break;

  case 37:
#line 139 "grammar.y"
                {
			boolean_expr(yyvsp[-4], yyvsp[-3], yyvsp[-2]);
			add_op_instr(GOTO_IF_TRUE_OP);
			add_line_ref(yyvsp[0].column, yyvsp[0].u.num.i);
		}
#line 1636 "grammar.c"
    break;

  case 38:
#line 148 "grammar.y"
                {
			add_op_instr(PUSH_STR_OP);
			add_id_instr(str_decl(yyvsp[0].u.str.start, yyvsp[0].u.str.len));	
			yyval.type = PSTACK_STR;
		}
#line 1646 "grammar.c"
    break;

  case 39:
#line 154 "grammar.y"
                {
			add_op_instr(PUSH_STR_OP);
			add_id_instr(str_decl(yyvsp[0].u.str.start, yyvsp[0].u.str.len));	
			yyval.type = PSTACK_STR;
		}
#line 1656 "grammar.c"
    break;

  case 40:
#line 160 "grammar.y"
                {
			strvar_decl(yyvsp[0].u.i);
			add_op_instr(GET_STRVAR_OP);
			add_id_instr(get_rampos(yyvsp[0].u.i));
			yyval.type = PSTACK_STR;
		}
#line 1667 "grammar.c"
    break;

  case 41:
#line 169 "grammar.y"
                        { yyval.u.i = yyvsp[0].u.i; }
#line 1673 "grammar.c"
    break;

  case 42:
#line 170 "grammar.y"
                        { yyval.u.i = '<'; }
#line 1679 "grammar.c"
    break;

  case 43:
#line 171 "grammar.y"
                        { yyval.u.i = '>'; }
#line 1685 "grammar.c"
    break;

  case 44:
#line 172 "grammar.y"
                        { yyval.u.i = LESS_EQ; }
#line 1691 "grammar.c"
    break;

  case 45:
#line 173 "grammar.y"
                        { yyval.u.i = GREATER_EQ; }
#line 1697 "grammar.c"
    break;

  case 46:
#line 177 "grammar.y"
                        { yyval.u.i = '='; }
#line 1703 "grammar.c"
    break;

  case 47:
#line 178 "grammar.y"
                        { yyval.u.i = NOT_EQ; }
#line 1709 "grammar.c"
    break;

  case 48:
#line 183 "grammar.y"
                {
			check_type(yyvsp[-3], PSTACK_NUM);
			check_type(yyvsp[-1], PSTACK_NUM);
			for_decl(yyvsp[-5].column, yyvsp[-5].u.i);
		}
#line 1719 "grammar.c"
    break;

  case 49:
#line 192 "grammar.y"
                {
			add_op_instr(PUSH_NUM_OP);
			add_num_instr(1.0);
		}
#line 1728 "grammar.c"
    break;

  case 50:
#line 197 "grammar.y"
                {
			check_type(yyvsp[0], PSTACK_NUM);
		}
#line 1736 "grammar.c"
    break;

  case 51:
#line 204 "grammar.y"
                                { next_decl(yyvsp[0].column, yyvsp[0].u.i); }
#line 1742 "grammar.c"
    break;

  case 52:
#line 209 "grammar.y"
                {
			add_op_instr(GOTO_OP);
			s_save_pc = get_code_size();
			add_id_instr(0);
			fun_decl(yyvsp[-1].column, yyvsp[-1].u.i, yyvsp[0].u.fun_param.nparams,
				 yyvsp[0].u.fun_param.param, get_code_size());
		}
#line 1754 "grammar.c"
    break;

  case 53:
#line 220 "grammar.y"
                {
			check_type(yyvsp[0], PSTACK_NUM);
			add_op_instr(RETURN_OP);
			set_id_instr(s_save_pc, get_code_size());
		}
#line 1764 "grammar.c"
    break;

  case 54:
#line 229 "grammar.y"
                {
			yyval.u.fun_param.nparams = 0;
			yyval.u.fun_param.param = '$';
		}
#line 1773 "grammar.c"
    break;

  case 55:
#line 234 "grammar.y"
                {
			yyval.u.fun_param.nparams = 1;
			yyval.u.fun_param.param = yyvsp[-1].u.i;
		}
#line 1782 "grammar.c"
    break;

  case 56:
#line 239 "grammar.y"
                {
			yyval.u.fun_param.nparams = 1;
			yyval.u.fun_param.param = encode_var2(
				get_var_letter(yyvsp[-1].u.i), '\0');
			cerror(E_NUMVAR_EXPECT, 1);
			print_lex_context(yyvsp[-1].column);	
		}
#line 1794 "grammar.c"
    break;

  case 57:
#line 250 "grammar.y"
                {
			add_op_instr(INPUT_OP);
		}
#line 1802 "grammar.c"
    break;

  case 58:
#line 254 "grammar.y"
                {
			add_op_instr(INPUT_END_OP);
		}
#line 1810 "grammar.c"
    break;

  case 61:
#line 266 "grammar.y"
                {
			add_op_instr(INPUT_NUM_OP);
			s_save_pc = get_code_size();
			add_id_instr(0);
		}
#line 1820 "grammar.c"
    break;

  case 62:
#line 272 "grammar.y"
                {
			if (yyvsp[0].u.i == VARTYPE_NUM) {
				numvar_declared(yyvsp[-2].column, yyvsp[-2].u.i, VARTYPE_NUM);
				add_op_instr(LET_VAR_OP);
				add_id_instr(get_rampos(yyvsp[-2].u.i));
			} else if (yyvsp[0].u.i == VARTYPE_LIST) {
				numvar_declared(yyvsp[-2].column, yyvsp[-2].u.i,
						VARTYPE_LIST);
				add_op_instr(INPUT_LIST_OP);
				add_id_instr(var_index1(yyvsp[-2].u.i));
			} else {
				numvar_declared(yyvsp[-2].column, yyvsp[-2].u.i,
						VARTYPE_TABLE);
				add_op_instr(INPUT_TABLE_OP);
				add_id_instr(var_index1(yyvsp[-2].u.i));
			}
			set_id_instr(s_save_pc, get_code_size());
		}
#line 1843 "grammar.c"
    break;

  case 63:
#line 291 "grammar.y"
                {			
			add_op_instr(INPUT_STR_OP);
			s_save_pc = get_code_size();
			add_id_instr(0);
			strvar_decl(yyvsp[0].u.i);
			add_op_instr(LET_STRVAR_OP);
			add_id_instr(get_rampos(yyvsp[0].u.i));
			set_id_instr(s_save_pc, get_code_size());
		}
#line 1857 "grammar.c"
    break;

  case 64:
#line 304 "grammar.y"
                { 
			yyval.u.i = VARTYPE_NUM;
		}
#line 1865 "grammar.c"
    break;

  case 65:
#line 308 "grammar.y"
                {
			check_type(yyvsp[-1], PSTACK_NUM);
			yyval.u.i = VARTYPE_LIST;
		}
#line 1874 "grammar.c"
    break;

  case 66:
#line 313 "grammar.y"
                {
			check_type(yyvsp[-3], PSTACK_NUM);
			check_type(yyvsp[-1], PSTACK_NUM);
			yyval.u.i = VARTYPE_TABLE;
		}
#line 1884 "grammar.c"
    break;

  case 70:
#line 331 "grammar.y"
                {
			strvar_decl(yyvsp[0].u.i);
			add_op_instr(READ_STRVAR_OP);
			add_id_instr(get_rampos(yyvsp[0].u.i));
		}
#line 1894 "grammar.c"
    break;

  case 71:
#line 337 "grammar.y"
                {
			numvar_declared(yyvsp[0].column, yyvsp[0].u.i, VARTYPE_NUM);
			add_op_instr(READ_VAR_OP);
			add_id_instr(get_rampos(yyvsp[0].u.i));
		}
#line 1904 "grammar.c"
    break;

  case 72:
#line 343 "grammar.y"
                {
			check_type(yyvsp[-1], PSTACK_NUM);	
			numvar_declared(yyvsp[-3].column, yyvsp[-3].u.i, VARTYPE_LIST);
			add_op_instr(READ_LIST_OP);
			add_id_instr(var_index1(yyvsp[-3].u.i));
		}
#line 1915 "grammar.c"
    break;

  case 73:
#line 350 "grammar.y"
                {
			check_type(yyvsp[-3], PSTACK_NUM);	
			check_type(yyvsp[-1], PSTACK_NUM);	
			numvar_declared(yyvsp[-5].column, yyvsp[-5].u.i, VARTYPE_TABLE);
			add_op_instr(READ_TABLE_OP);
			add_id_instr(var_index1(yyvsp[-5].u.i));
		}
#line 1927 "grammar.c"
    break;

  case 74:
#line 360 "grammar.y"
                        { add_op_instr(RESTORE_OP); }
#line 1933 "grammar.c"
    break;

  case 78:
#line 374 "grammar.y"
                {
			data_str_decl(str_decl(yyvsp[0].u.str.start, yyvsp[0].u.str.len),
				DATA_DATUM_UNQUOTED_STR);
		}
#line 1942 "grammar.c"
    break;

  case 79:
#line 379 "grammar.y"
                {
			data_str_decl(str_decl(yyvsp[0].u.str.start, yyvsp[0].u.str.len),
				DATA_DATUM_QUOTED_STR);
		}
#line 1951 "grammar.c"
    break;

  case 83:
#line 396 "grammar.y"
                {
			numvar_dimensioned(yyvsp[-3].column, yyvsp[-1].column, 0, yyvsp[-3].u.i,
					   VARTYPE_LIST, yyvsp[-1].u.num.i, 0);
		}
#line 1960 "grammar.c"
    break;

  case 84:
#line 401 "grammar.y"
                {
			numvar_dimensioned(yyvsp[-5].column, yyvsp[-3].column, yyvsp[-1].column,
					   yyvsp[-5].u.i, VARTYPE_TABLE, yyvsp[-3].u.num.i,
					   yyvsp[-1].u.num.i);
		}
#line 1970 "grammar.c"
    break;

  case 85:
#line 410 "grammar.y"
                {
			 option_decl(yyvsp[-2].column, yyvsp[0].column, yyvsp[0].u.num.i);
		}
#line 1978 "grammar.c"
    break;

  case 86:
#line 416 "grammar.y"
                                { add_op_instr(RANDOMIZE_OP); }
#line 1984 "grammar.c"
    break;

  case 88:
#line 424 "grammar.y"
                                        { add_op_instr(PRINT_NL_OP); }
#line 1990 "grammar.c"
    break;

  case 89:
#line 425 "grammar.y"
                                        { add_op_instr(PRINT_NL_OP); }
#line 1996 "grammar.c"
    break;

  case 91:
#line 427 "grammar.y"
                                        { add_op_instr(PRINT_NL_OP); }
#line 2002 "grammar.c"
    break;

  case 96:
#line 441 "grammar.y"
                { add_op_instr(PRINT_COMMA_OP); }
#line 2008 "grammar.c"
    break;

  case 98:
#line 447 "grammar.y"
                {
			if (yyvsp[0].type == PSTACK_NUM) {
				add_op_instr(PRINT_NUM_OP);
			} else {
				add_op_instr(PRINT_STR_OP);
			}
		}
#line 2020 "grammar.c"
    break;

  case 99:
#line 455 "grammar.y"
                {
			check_type(yyvsp[-1], PSTACK_NUM);
			add_op_instr(PRINT_TAB_OP);
		}
#line 2029 "grammar.c"
    break;

  case 100:
#line 463 "grammar.y"
                {
			check_type(yyvsp[0], PSTACK_STR);
			strvar_decl(yyvsp[-2].u.i);
			add_op_instr(LET_STRVAR_OP);
			add_id_instr(get_rampos(yyvsp[-2].u.i));
		}
#line 2040 "grammar.c"
    break;

  case 101:
#line 470 "grammar.y"
                {
			check_type(yyvsp[0], PSTACK_NUM);
			numvar_declared(yyvsp[-2].column, yyvsp[-2].u.i, VARTYPE_NUM);
			add_op_instr(LET_VAR_OP);
			add_id_instr(get_rampos(yyvsp[-2].u.i));
		}
#line 2051 "grammar.c"
    break;

  case 102:
#line 477 "grammar.y"
                {
			check_type(yyvsp[-3], PSTACK_NUM);
			check_type(yyvsp[0], PSTACK_NUM);
			numvar_declared(yyvsp[-5].column, yyvsp[-5].u.i, VARTYPE_LIST);
			add_op_instr(LET_LIST_OP);
			add_id_instr(var_index1(yyvsp[-5].u.i));
		}
#line 2063 "grammar.c"
    break;

  case 103:
#line 485 "grammar.y"
                {
			check_type(yyvsp[-5], PSTACK_NUM);
			check_type(yyvsp[-3], PSTACK_NUM);
			check_type(yyvsp[0], PSTACK_NUM);
			numvar_declared(yyvsp[-7].column, yyvsp[-7].u.i, VARTYPE_TABLE);
			add_op_instr(LET_TABLE_OP);
			add_id_instr(var_index1(yyvsp[-7].u.i));
		}
#line 2076 "grammar.c"
    break;

  case 104:
#line 497 "grammar.y"
                {
			yyval.type = yyvsp[0].type;
		}
#line 2084 "grammar.c"
    break;

  case 105:
#line 501 "grammar.y"
                {
			add_op_instr(PUSH_NUM_OP);
			add_num_instr(yyvsp[0].u.num.d);
			yyval.type = PSTACK_NUM;
		}
#line 2094 "grammar.c"
    break;

  case 106:
#line 507 "grammar.y"
                {
			add_op_instr(PUSH_NUM_OP);
			add_num_instr(yyvsp[0].u.num.d);
			yyval.type = PSTACK_NUM;
		}
#line 2104 "grammar.c"
    break;

  case 107:
#line 513 "grammar.y"
                {
			numvar_expr(yyvsp[0].column, yyvsp[0].u.i);
			yyval.type = PSTACK_NUM;
		}
#line 2113 "grammar.c"
    break;

  case 108:
#line 518 "grammar.y"
                {
			check_type(yyvsp[-1], PSTACK_NUM);
			list_expr(yyvsp[-3].column, yyvsp[-3].u.i);
			yyval.type = PSTACK_NUM;
		}
#line 2123 "grammar.c"
    break;

  case 109:
#line 524 "grammar.y"
                {
			check_type(yyvsp[-3], PSTACK_NUM);
			check_type(yyvsp[-1], PSTACK_NUM);
			table_expr(yyvsp[-5].column, yyvsp[-5].u.i);
			yyval.type = PSTACK_NUM;
		}
#line 2134 "grammar.c"
    break;

  case 110:
#line 531 "grammar.y"
                {
			usrfun_call(yyvsp[0].column, yyvsp[0].u.i, 0);
			yyval.type = PSTACK_NUM;
		}
#line 2143 "grammar.c"
    break;

  case 111:
#line 536 "grammar.y"
                {
			check_type(yyvsp[-1], PSTACK_NUM);
			usrfun_call(yyvsp[-3].column, yyvsp[-3].u.i, 1);
			yyval.type = PSTACK_NUM;
		}
#line 2153 "grammar.c"
    break;

  case 112:
#line 542 "grammar.y"
                {
			ifun_call(yyvsp[0].column, yyvsp[0].u.i, 0);
			yyval.type = PSTACK_NUM;
		}
#line 2162 "grammar.c"
    break;

  case 113:
#line 547 "grammar.y"
                {
			check_type(yyvsp[-1], PSTACK_NUM);
			ifun_call(yyvsp[-3].column, yyvsp[-3].u.i, 1);
			yyval.type = PSTACK_NUM;
		}
#line 2172 "grammar.c"
    break;

  case 114:
#line 552 "grammar.y"
                                { yyval.type = binary_expr(yyvsp[-2], yyvsp[0], ADD_OP); }
#line 2178 "grammar.c"
    break;

  case 115:
#line 553 "grammar.y"
                                { yyval.type = binary_expr(yyvsp[-2], yyvsp[0], SUB_OP); }
#line 2184 "grammar.c"
    break;

  case 116:
#line 554 "grammar.y"
                                { yyval.type = binary_expr(yyvsp[-2], yyvsp[0], MUL_OP); }
#line 2190 "grammar.c"
    break;

  case 117:
#line 555 "grammar.y"
                                { yyval.type = binary_expr(yyvsp[-2], yyvsp[0], DIV_OP); }
#line 2196 "grammar.c"
    break;

  case 118:
#line 557 "grammar.y"
                {
			check_type(yyvsp[0], PSTACK_NUM);
			add_op_instr(NEG_OP);
			yyval.type = PSTACK_NUM;
		}
#line 2206 "grammar.c"
    break;

  case 119:
#line 562 "grammar.y"
                                { yyval.type = yyvsp[0].type; }
#line 2212 "grammar.c"
    break;

  case 120:
#line 563 "grammar.y"
                                { yyval.type = binary_expr(yyvsp[-2], yyvsp[0], POW_OP); }
#line 2218 "grammar.c"
    break;

  case 121:
#line 564 "grammar.y"
                                { yyval.type = yyvsp[-1].type; }
#line 2224 "grammar.c"
    break;


#line 2228 "grammar.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 567 "grammar.y"

