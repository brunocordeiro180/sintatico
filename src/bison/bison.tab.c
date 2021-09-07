/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "src/bison/bison.y"

#include "scope.stack.h"
#include "symbol.table.h"
#include "token.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>

Symbol symbolTable[1000];

extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* s);
extern int scopeStack[100];
extern int scopeId;
extern Node *tree;

#line 89 "src/bison/bison.tab.c"

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

#include "bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STRING = 3,                     /* STRING  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_WRITE = 7,                      /* WRITE  */
  YYSYMBOL_WRITELN = 8,                    /* WRITELN  */
  YYSYMBOL_READ = 9,                       /* READ  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_ASSIGN = 12,                    /* ASSIGN  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_LIST_CONSTRUCTOR = 14,          /* LIST_CONSTRUCTOR  */
  YYSYMBOL_NIL = 15,                       /* NIL  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_TYPE = 17,                      /* TYPE  */
  YYSYMBOL_MAP = 18,                       /* MAP  */
  YYSYMBOL_FILTER = 19,                    /* FILTER  */
  YYSYMBOL_UNARY_LIST_OP = 20,             /* UNARY_LIST_OP  */
  YYSYMBOL_LOG_OP = 21,                    /* LOG_OP  */
  YYSYMBOL_EXCLAMATION = 22,               /* EXCLAMATION  */
  YYSYMBOL_SUM_OP = 23,                    /* SUM_OP  */
  YYSYMBOL_MUL_OP = 24,                    /* MUL_OP  */
  YYSYMBOL_REL_OP = 25,                    /* REL_OP  */
  YYSYMBOL_UNARY_LOG_OP = 26,              /* UNARY_LOG_OP  */
  YYSYMBOL_27_ = 27,                       /* ';'  */
  YYSYMBOL_28_ = 28,                       /* ','  */
  YYSYMBOL_29_ = 29,                       /* '('  */
  YYSYMBOL_30_ = 30,                       /* ')'  */
  YYSYMBOL_31_ = 31,                       /* '{'  */
  YYSYMBOL_32_ = 32,                       /* '}'  */
  YYSYMBOL_33_ = 33,                       /* ':'  */
  YYSYMBOL_34_ = 34,                       /* '?'  */
  YYSYMBOL_35_ = 35,                       /* '%'  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_S = 37,                         /* S  */
  YYSYMBOL_decl_list = 38,                 /* decl_list  */
  YYSYMBOL_decl = 39,                      /* decl  */
  YYSYMBOL_var_decl = 40,                  /* var_decl  */
  YYSYMBOL_fun_decl = 41,                  /* fun_decl  */
  YYSYMBOL_params = 42,                    /* params  */
  YYSYMBOL_param_decl = 43,                /* param_decl  */
  YYSYMBOL_statement = 44,                 /* statement  */
  YYSYMBOL_for_stmt = 45,                  /* for_stmt  */
  YYSYMBOL_exp_stmt = 46,                  /* exp_stmt  */
  YYSYMBOL_exp = 47,                       /* exp  */
  YYSYMBOL_assing_exp = 48,                /* assing_exp  */
  YYSYMBOL_block_stmt = 49,                /* block_stmt  */
  YYSYMBOL_stmt_list = 50,                 /* stmt_list  */
  YYSYMBOL_if_stmt = 51,                   /* if_stmt  */
  YYSYMBOL_return_stmt = 52,               /* return_stmt  */
  YYSYMBOL_write_stmt = 53,                /* write_stmt  */
  YYSYMBOL_writeln_stmt = 54,              /* writeln_stmt  */
  YYSYMBOL_read_stmt = 55,                 /* read_stmt  */
  YYSYMBOL_simple_exp = 56,                /* simple_exp  */
  YYSYMBOL_list_exp = 57,                  /* list_exp  */
  YYSYMBOL_bin_exp = 58,                   /* bin_exp  */
  YYSYMBOL_unary_log_exp = 59,             /* unary_log_exp  */
  YYSYMBOL_rel_exp = 60,                   /* rel_exp  */
  YYSYMBOL_sum_exp = 61,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 62,                   /* mul_exp  */
  YYSYMBOL_factor = 63,                    /* factor  */
  YYSYMBOL_immutable = 64,                 /* immutable  */
  YYSYMBOL_call = 65,                      /* call  */
  YYSYMBOL_args = 66,                      /* args  */
  YYSYMBOL_constant = 67                   /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2781

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  355

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    35,     2,     2,
      29,    30,     2,     2,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    33,    27,
       2,     2,     2,    34,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      25,    26
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    76,    76,    82,    87,    93,    96,   102,   108,   111,
     117,   118,   122,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   140,   144,   145,   149,   150,   154,   158,   162,
     163,   164,   168,   169,   173,   174,   178,   182,   186,   190,
     191,   195,   196,   197,   198,   199,   203,   204,   208,   209,
     210,   214,   215,   219,   220,   224,   225,   226,   230,   231,
     235,   236,   237,   241,   242,   246,   247,   251,   252,   253,
     254
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "STRING", "ID", "INT",
  "FLOAT", "WRITE", "WRITELN", "READ", "IF", "ELSE", "ASSIGN", "FOR",
  "LIST_CONSTRUCTOR", "NIL", "RETURN", "TYPE", "MAP", "FILTER",
  "UNARY_LIST_OP", "LOG_OP", "EXCLAMATION", "SUM_OP", "MUL_OP", "REL_OP",
  "UNARY_LOG_OP", "';'", "','", "'('", "')'", "'{'", "'}'", "':'", "'?'",
  "'%'", "$accept", "S", "decl_list", "decl", "var_decl", "fun_decl",
  "params", "param_decl", "statement", "for_stmt", "exp_stmt", "exp",
  "assing_exp", "block_stmt", "stmt_list", "if_stmt", "return_stmt",
  "write_stmt", "writeln_stmt", "read_stmt", "simple_exp", "list_exp",
  "bin_exp", "unary_log_exp", "rel_exp", "sum_exp", "mul_exp", "factor",
  "immutable", "call", "args", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    59,    44,    40,
      41,   123,   125,    58,    63,    37
};
#endif

#define YYPACT_NINF (-196)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    65,    77,     6,     8,    10,    13,   -22,  -196,    19,
      20,    38,    91,    67,    34,    52,   168,  1505,    28,   101,
      67,    60,   959,  1053,  1334,   113,   140,   144,   185,   186,
    2351,   121,   153,    37,    29,    37,  1542,   768,   240,   240,
    1575,  1505,  1608,  1641,   203,   206,  1674,   205,  1707,  1740,
    1773,  1806,  1839,   211,   214,    78,   159,    40,   754,   690,
    2362,  2373,  2384,  2395,   374,    31,   802,   148,   768,   768,
     244,    85,   248,  1872,   239,   256,   472,   291,   736,  1479,
     300,   223,   275,   278,   277,  1905,    39,    37,   336,   336,
      29,   240,   240,   240,   286,  2406,   402,   511,   287,   303,
     316,    76,   296,   329,  1938,  2417,   376,  1268,  2629,  2634,
     330,   333,   337,   869,  2428,   341,   360,   363,  2235,   370,
     520,  1971,  2004,  2037,  2070,  1389,    88,  2268,   359,  2103,
     361,   367,  2136,  1505,  2639,  2644,  2649,  2654,   768,  2659,
    2664,  2669,  1031,   999,  2439,  2452,  2465,    85,   458,    85,
     768,   676,   676,   364,    82,   128,   108,    98,   276,  2478,
    2491,  2504,  2517,   396,   534,   399,   406,   410,   768,   411,
     421,   424,  1191,  1237,  1279,  1313,  1347,   187,   763,   187,
     768,   806,   806,   574,   138,   191,   151,   974,   226,  1409,
    1422,  2286,  2299,   494,   116,   712,   809,   876,   768,   908,
     985,  1010,  1132,  2169,   281,    85,  1505,  2560,   252,  2689,
    2694,  2699,   861,   768,   389,  2704,  2709,  2714,  2719,  2724,
     370,   417,   423,   426,   332,   154,  1205,   164,   429,   436,
      17,   440,   441,   453,   768,   454,   459,   464,   468,   490,
     554,   554,   458,   676,   676,   676,   366,   493,   405,   301,
     176,   394,   444,   519,   768,   250,   612,   662,   823,  1101,
    1217,   302,   496,   592,   315,   620,   752,   765,   768,   770,
     771,   792,   799,   830,   187,   588,   588,   763,   806,   806,
     806,   499,   497,  2674,   840,   190,   498,   550,  2729,   501,
     370,   861,   607,   941,  2202,  2679,  2530,   841,  2543,   584,
     505,   900,  1253,  2591,   506,   515,   521,   535,   866,   537,
    2312,   877,   623,   544,  2325,   717,   545,   356,  2597,  1358,
    1435,   892,   907,   923,  2605,   930,  2613,  2684,  1464,  2734,
     938,  2739,  2744,  2749,  1161,   548,   551,   552,  2556,   556,
     944,   565,   578,  2338,  2567,   951,  2575,   957,   966,   986,
    2621,  2754,   579,  2583,   991
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,   605,    12,  -196,  -196,   593,    90,  -196,
    -196,   -28,   -71,    -9,   -39,  -196,  -196,  -196,  -196,  -196,
    1251,  1075,  1027,   972,  1048,   924,   821,   -17,   201,   419,
    -195,   637
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    40,     6,    14,    15,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      96,   153,   154,   155,   156,   157,   158,   159,   160,   161,
      97,   162
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,   103,    84,    74,    18,    10,    -2,    11,    -4,   284,
      -5,    65,     5,    -6,    60,     5,    78,    79,    78,    -3,
      -7,    82,    83,     1,    60,    -4,     1,    -5,    -9,   297,
      -6,    -8,   134,    76,   135,   136,    -3,    -7,    94,   -28,
     134,    76,   135,   136,   137,    -9,   299,   -59,    -8,    60,
     189,   308,   137,   311,   199,    12,   -28,   130,   138,    33,
      34,   -50,    19,    35,    20,    88,   138,   -50,    13,     7,
      78,    78,    78,   109,   110,   111,   112,     8,   -70,   -70,
     -11,   -70,   -11,   -70,   -70,   -70,   325,   -70,   193,   194,
     195,   196,   330,   -70,   222,    16,   189,   205,    17,    87,
     197,    60,   216,   205,   340,   -39,   118,   147,   148,   125,
      60,   149,   -39,   220,   198,   128,    60,   345,    12,   -52,
     348,   241,   132,   -52,    21,    22,    23,    24,   -52,   -50,
     199,   226,   199,   240,   235,   239,    30,   -59,   -50,   -59,
     -59,   -59,    68,    33,    34,   281,   -59,    35,    73,   -47,
      37,   172,   173,   174,   175,    38,    39,    75,   -47,   274,
     256,   260,   256,   176,   269,   273,   -39,   286,   -39,    69,
     177,   178,   -50,    70,   179,   -49,   275,   180,    95,   -50,
     -47,   -50,   181,   182,   -49,   -48,   -47,   189,   199,    60,
     249,   250,   251,   252,   -48,   288,   -12,   -59,   -12,   -59,
     -59,   -59,   253,   216,   -59,   312,   -59,   189,   124,   177,
     178,   -46,   -47,   179,    71,    72,   254,   129,    61,   -47,
     -46,   -47,   336,   199,   199,   303,   304,   305,   306,   189,
      85,   189,    61,   -25,   139,   139,   139,    86,   -26,   169,
     169,   -40,    61,   163,   164,   165,   166,   -54,   100,   -54,
     277,   -54,   102,   105,   -54,   167,   -54,   256,   256,   256,
     320,   321,   322,   323,   189,   335,   104,    61,   190,   168,
     189,   -49,   200,   216,   333,   -59,   -59,   -59,   -49,   -59,
     -49,   287,   189,   203,   172,   173,   174,   175,   139,   139,
     139,   139,   169,   169,   169,   189,   176,   -54,   189,   -54,
     242,   -54,   -42,   177,   178,   -43,   -54,   179,    66,   -30,
     180,   283,   -49,   -27,   190,   181,   182,   115,   -49,    61,
     217,   -48,   -70,   -48,   -70,   -70,   -70,   -48,    61,   -70,
     -48,   -70,   -48,   116,    61,   172,   173,   174,   175,   134,
      76,   135,   136,   -59,   315,   -59,   117,   176,   200,   200,
     200,   137,   236,   236,   177,   178,   119,   -44,   179,    34,
     -45,   180,   296,   221,   -41,   138,   181,   182,   121,   172,
     173,   174,   175,   207,   208,   209,   210,   -46,   257,   257,
     257,   176,   270,   270,   -46,   211,   -46,   122,   177,   178,
     123,   131,   179,   212,   -40,   180,   307,   -46,   133,   213,
     181,   182,   -10,   -46,   -10,   190,   200,    61,   172,   173,
     174,   175,   290,   217,   -52,   -68,   -52,   -68,   -68,   -68,
     176,   217,   -68,   -70,   -68,   190,   -68,   177,   178,   293,
     -66,   179,   -66,   -69,   180,   310,    62,   -67,   -58,   181,
     182,   200,   200,   200,   236,   236,   236,   190,   -61,   190,
      62,   -62,   140,   140,   140,   294,   295,   170,   170,   298,
      62,   193,   194,   195,   196,   -69,   -70,   -69,   -69,   -69,
     -68,   -69,   -69,   197,   -69,   257,   257,   257,   257,   270,
     270,   270,   190,   -67,   -42,    62,   191,   198,   190,   -58,
     201,   217,   217,   -59,   -61,   -59,   -59,   -59,   -62,   -59,
     190,   204,   172,   173,   174,   175,   140,   140,   140,   140,
     170,   170,   170,   190,   176,   -70,   190,   -70,   -70,   -70,
     -43,   177,   178,   309,   -70,   179,   314,   326,   180,   324,
     328,   331,   191,   181,   182,   341,   -44,    62,   218,   113,
     -67,   114,   -67,   -67,   -67,   -45,    62,   -67,   -65,   -67,
     -65,   -41,    62,   172,   173,   174,   175,   193,   194,   195,
     196,   -59,   -64,   246,   -60,   176,   201,   201,   201,   197,
     237,   237,   177,   178,   346,   349,   179,   148,   -27,   180,
     329,   -25,   -26,   198,   181,   182,   -64,   172,   173,   174,
     175,   249,   250,   251,   252,   -60,   258,   258,   258,   176,
     271,   271,   -40,   253,   -40,   -63,   177,   178,     9,   -63,
     179,   178,    64,   180,   339,     0,     0,   254,   181,   182,
     -70,     0,   -70,   191,   201,    62,   172,   173,   174,   175,
     290,   218,   -51,   -56,   -51,   -56,   -56,   -56,   176,   218,
     -56,     0,   -56,   191,     0,   177,   178,     0,   -68,   179,
     -68,     0,   180,   344,    63,     0,     0,   181,   182,   201,
     201,   201,   237,   237,   237,   191,     0,   191,    63,     0,
     141,   141,   141,     0,     0,   171,   171,     0,    63,   229,
     230,   231,   232,   -58,     0,   -58,   -58,   -58,     0,     0,
     -58,   233,   -58,   258,   258,   258,   258,   271,   271,   271,
     191,     0,     0,    63,   192,   234,   191,     0,   202,   218,
     218,   -54,     0,   -54,    90,   -54,     0,   -54,   191,     0,
     172,   173,   174,   175,   141,   141,   141,   141,   171,   171,
     171,   191,   176,   -68,   191,   -68,   -68,   -68,     0,   177,
     178,     0,   -68,   179,     0,     0,   180,   347,     0,     0,
     192,   181,   182,     0,     0,    63,   219,   -56,     0,   -56,
     -56,   -56,     0,   -56,    63,     0,   249,   250,   251,   252,
      63,   142,   143,   144,   145,   -52,     0,    89,   253,   -52,
     -69,   -52,   -69,   146,   202,   202,   202,     0,   238,   238,
     147,   148,   254,   -67,   149,   -67,     0,   150,   -42,   -58,
     -42,   -58,   151,   152,     0,    21,    22,    23,    24,   263,
     264,   265,   266,     0,   259,   259,   259,    30,   272,   272,
     -61,   267,   -61,     0,    33,    34,     0,   -62,    35,   -62,
     -69,    37,   -69,   -69,   -69,   268,    38,    39,    59,   -69,
       0,   192,   202,    63,   -61,     0,   -61,   -61,   -61,   219,
       0,   -61,    59,   -61,    59,     0,    59,   219,   -43,     0,
     -43,   192,    59,     0,   207,   208,   209,   210,   113,   113,
     327,   338,   172,   173,   174,   175,   211,   202,   202,   202,
     238,   238,   238,   192,   176,   192,     0,    59,   188,     0,
     213,   177,   178,     0,   113,   179,   342,   -67,   180,   -67,
     -67,   -67,     0,   181,   182,   113,   -67,   343,    59,    59,
     108,   259,   259,   259,   259,   272,   272,   272,   192,     0,
     -44,   -51,   -44,   241,   192,   -51,     0,   219,   219,   -56,
     -51,   -56,   -56,   -56,   188,   -45,   192,   -45,   -56,    59,
     215,    58,     0,     0,   142,   334,   144,   145,    59,   192,
       0,   -41,   192,   -41,    59,    58,   146,    58,   113,    58,
     350,     0,     0,   147,   148,    58,   113,   149,   351,     0,
     150,    66,   113,     0,   352,   151,   152,   -59,   -59,   113,
     -59,   353,   -59,   -59,   -59,   -64,   -59,   -64,    67,    56,
      58,   187,   -59,     0,   113,   -52,   354,   276,   188,   -52,
     188,     0,   -52,    56,   -52,    77,   -58,    80,   -58,   -58,
     -58,    58,   107,    56,   -60,   -58,   -60,   -59,   -59,   -63,
     -59,   -63,   -59,   -59,   -59,   188,     0,    59,   224,   -59,
       0,   -61,   -59,   -61,   -61,   -61,     0,   187,    56,   185,
     -61,   215,    58,   214,    55,   188,     0,     0,     0,   -70,
     -70,    58,   -70,     0,   -70,   -70,   -70,    58,    55,   106,
       0,   -70,   302,     0,   -70,    57,     0,   188,    55,   188,
       0,   -68,   -68,     0,   -68,     0,   -68,   -68,   -68,    57,
     -68,    57,     0,    57,     0,   185,   -68,     0,     0,    57,
      56,     0,    54,    55,   184,   188,   188,   319,   101,    56,
       0,   187,   188,   187,     0,    56,    54,     0,   188,     0,
       0,   332,     0,     0,    57,   186,    54,     0,     0,   225,
     188,   227,   -62,     0,   -62,   -62,   -62,     0,   187,   -62,
      58,   -62,     0,   188,     0,    57,   188,     0,     0,     0,
     184,    54,   183,     0,   292,    55,     0,     0,   187,   255,
       0,   261,     0,   -62,    55,   -62,   -62,   -62,     0,     0,
      55,   186,   -62,     0,   301,     0,    57,   126,     0,     0,
     187,     0,   187,   293,     0,    57,   185,   285,    56,   -59,
     -59,    57,   -59,     0,   -59,   -59,   -59,     0,   183,     0,
     224,   -59,     0,    54,   -59,     0,   185,     0,   187,   318,
       0,     0,    54,     0,     0,   187,     0,     0,    54,   -70,
     -70,   187,   -70,     0,   -70,   -70,   -70,     0,   185,   -70,
     185,   -70,     0,   187,   -70,   186,   -57,   186,   -57,   -57,
     -57,   184,     0,    55,     0,   -57,   187,     0,   -57,   187,
     -57,   -57,   -57,     0,     0,   -57,   317,   -57,     0,     0,
       0,   184,   186,   185,    57,   -59,   -59,     0,   -59,   185,
     -59,   -59,   -59,     0,     0,   -59,   248,   -59,    53,     0,
     -59,   185,   186,   184,   -53,   184,   -53,   242,   -53,   183,
       0,    54,    53,   -53,   185,     0,     0,   185,    81,   -51,
       0,    89,    53,   -51,   186,   -51,   186,   -68,   -68,   183,
     -68,     0,   -68,   -68,   -68,     0,     0,   -68,   184,   -68,
       0,     0,   -68,     0,   184,     0,     0,    53,     0,    98,
      99,   183,   186,   183,     0,     0,   184,     0,     0,   186,
       0,   -69,   -69,     0,   -69,   186,   -69,   -69,   -69,   184,
       0,   -69,   184,   -69,     0,     0,   -69,   186,     0,     0,
       0,     0,   -69,   -69,     0,   -69,   183,   -69,   -69,   -69,
     186,   -69,   183,   186,   120,   -67,   -67,   -69,   -67,    53,
     -67,   -67,   -67,     0,   183,   -67,     0,   -67,    53,   -53,
     -67,   -53,   277,   -53,    53,     0,   -53,   183,   -53,   223,
     183,     0,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     127,   228,   -14,     0,   -14,   -14,   -14,     0,     0,     0,
       0,   -14,   -14,     0,     0,   -14,   -14,     0,   -14,   247,
     -14,   -14,     0,   -14,   -14,     0,     0,   278,   279,     0,
     -56,   262,   -56,   -56,   -56,     0,     0,   -56,     0,   -56,
     -58,   -58,   280,   -58,     0,   -58,   -58,   -58,     0,   282,
     -58,     0,   -58,     0,     0,   -58,   -55,    53,   -55,   -55,
     -55,     0,     0,   -55,   289,   -55,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,
     -28,   -28,     0,     0,     0,   300,   -28,   -28,     0,     0,
     -28,   -28,     0,   -28,     0,   -28,   -28,     0,   -28,   -28,
     -57,     0,   -57,   -57,   -57,   313,   -57,     0,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,   316,
      30,    31,    32,     0,     0,     0,     0,    33,    34,     0,
       0,    35,    36,     0,    37,     0,   133,   -29,     0,    38,
      39,     0,     0,     0,   337,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,   -24,     0,   -24,   -24,   -24,
       0,     0,     0,     0,   -24,   -24,     0,     0,   -24,   -24,
       0,   -24,     0,   -24,   -24,     0,   -24,   -24,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,
     -20,   -20,   -20,     0,     0,     0,     0,   -20,   -20,     0,
       0,   -20,   -20,     0,   -20,     0,   -20,   -20,     0,   -20,
     -20,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,   -21,     0,   -21,   -21,   -21,     0,     0,     0,     0,
     -21,   -21,     0,     0,   -21,   -21,     0,   -21,     0,   -21,
     -21,     0,   -21,   -21,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,   -13,     0,   -13,   -13,   -13,     0,
       0,     0,     0,   -13,   -13,     0,     0,   -13,   -13,     0,
     -13,     0,   -13,   -13,     0,   -13,   -13,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,     0,     0,   -14,     0,   -14,
     -14,   -14,     0,     0,     0,     0,   -14,   -14,     0,     0,
     -14,   -14,     0,   -14,     0,   -14,   -14,     0,   -14,   -14,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,     0,
     -15,     0,   -15,   -15,   -15,     0,     0,     0,     0,   -15,
     -15,     0,     0,   -15,   -15,     0,   -15,     0,   -15,   -15,
       0,   -15,   -15,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,     0,     0,   -16,     0,   -16,   -16,   -16,     0,     0,
       0,     0,   -16,   -16,     0,     0,   -16,   -16,     0,   -16,
       0,   -16,   -16,     0,   -16,   -16,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,     0,     0,   -17,     0,   -17,   -17,
     -17,     0,     0,     0,     0,   -17,   -17,     0,     0,   -17,
     -17,     0,   -17,     0,   -17,   -17,     0,   -17,   -17,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,   -18,
       0,   -18,   -18,   -18,     0,     0,     0,     0,   -18,   -18,
       0,     0,   -18,   -18,     0,   -18,     0,   -18,   -18,     0,
     -18,   -18,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
       0,     0,   -19,     0,   -19,   -19,   -19,     0,     0,     0,
       0,   -19,   -19,     0,     0,   -19,   -19,     0,   -19,     0,
     -19,   -19,     0,   -19,   -19,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,     0,   -34,   -34,   -34,
       0,     0,     0,     0,   -34,   -34,     0,     0,   -34,   -34,
       0,   -34,     0,   -34,   -34,     0,   -34,   -34,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,
     -23,   -23,   -23,     0,     0,     0,     0,   -23,   -23,     0,
       0,   -23,   -23,     0,   -23,     0,   -23,   -23,     0,   -23,
     -23,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,   -35,     0,   -35,   -35,   -35,     0,     0,     0,     0,
     -35,   -35,     0,     0,   -35,   -35,     0,   -35,     0,   -35,
     -35,     0,   -35,   -35,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,   -36,     0,   -36,   -36,   -36,     0,
       0,     0,     0,   -36,   -36,     0,     0,   -36,   -36,     0,
     -36,     0,   -36,   -36,     0,   -36,   -36,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,   -37,     0,   -37,
     -37,   -37,     0,     0,     0,     0,   -37,   -37,     0,     0,
     -37,   -37,     0,   -37,     0,   -37,   -37,     0,   -37,   -37,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
     -38,     0,   -38,   -38,   -38,     0,     0,     0,     0,   -38,
     -38,     0,     0,   -38,   -38,     0,   -38,     0,   -38,   -38,
       0,   -38,   -38,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,     0,   -32,   -32,   -32,     0,     0,
       0,     0,   -32,   -32,     0,     0,   -32,   -32,     0,   -32,
       0,   -32,   -32,     0,   -32,   -32,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,     0,   -33,   -33,
     -33,     0,     0,     0,     0,   -33,   -33,     0,     0,   -33,
     -33,     0,   -33,     0,   -33,   -33,     0,   -33,   -33,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
       0,   -22,   -22,   -22,     0,     0,     0,     0,   -22,   -22,
       0,     0,   -22,   -22,     0,   -22,     0,   -22,   -22,     0,
     -22,   -22,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
       0,     0,    -7,     0,    -7,    -7,    -7,     0,     0,     0,
       0,    -7,    -7,     0,     0,    -7,    -7,     0,    -7,     0,
      -7,    -7,     0,    -7,    -7,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,     0,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,     0,     0,   -28,   -28,
       0,   -28,     0,   -28,   -28,     0,   -28,   -28,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,     0,
      30,    31,    32,     0,     0,     0,     0,    33,    34,     0,
       0,    35,    36,     0,    37,     0,   206,     0,     0,    38,
      39,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    30,    31,    32,     0,     0,     0,     0,
      33,    34,     0,     0,    35,    36,     0,    37,     0,   133,
       0,     0,    38,    39,   -61,   -61,     0,   -61,     0,   -61,
     -61,   -61,     0,     0,   -61,     0,   -61,   -62,   -62,   -61,
     -62,     0,   -62,   -62,   -62,     0,     0,   -62,     0,   -62,
     -64,   -64,   -62,   -64,     0,   -64,   -64,   -64,     0,     0,
     -64,     0,   -64,   -60,   -60,   -64,   -60,     0,   -60,   -60,
     -60,     0,     0,   -60,     0,   -60,   -63,   -63,   -60,   -63,
       0,   -63,   -63,   -63,     0,     0,   -63,     0,   -63,   -67,
     -67,   -63,   -67,     0,   -67,   -67,   -67,     0,   -67,     0,
      91,    92,     0,   -56,   -67,   -56,   -56,   -56,     0,   -56,
       0,   -58,   -58,     0,   -58,    93,   -58,   -58,   -58,     0,
     -58,     0,   -61,   -61,     0,   -61,   -58,   -61,   -61,   -61,
       0,   -61,     0,   -62,   -62,     0,   -62,   -61,   -62,   -62,
     -62,     0,   -62,     0,   -64,   -64,     0,   -64,   -62,   -64,
     -64,   -64,     0,   -64,     0,   -60,   -60,     0,   -60,   -64,
     -60,   -60,   -60,     0,   -60,     0,   -63,   -63,     0,   -63,
     -60,   -63,   -63,   -63,     0,   -63,     0,   -68,   -68,     0,
     -68,   -63,   -68,   -68,   -68,     0,     0,     0,     0,   -68,
     -69,   -69,   -68,   -69,     0,   -69,   -69,   -69,     0,     0,
       0,     0,   -69,   -67,   -67,   -69,   -67,     0,   -67,   -67,
     -67,     0,     0,     0,     0,   -67,   243,   244,   -67,   -56,
       0,   -56,   -56,   -56,     0,     0,     0,     0,   -56,   -58,
     -58,   245,   -58,     0,   -58,   -58,   -58,     0,     0,     0,
       0,   -58,   -61,   -61,   -58,   -61,     0,   -61,   -61,   -61,
       0,     0,     0,     0,   -61,   -62,   -62,   -61,   -62,     0,
     -62,   -62,   -62,     0,     0,     0,     0,   -62,   -64,   -64,
     -62,   -64,     0,   -64,   -64,   -64,     0,     0,     0,     0,
     -64,   -60,   -60,   -64,   -60,     0,   -60,   -60,   -60,     0,
       0,     0,     0,   -60,   -63,   -63,   -60,   -63,     0,   -63,
     -63,   -63,     0,   -70,   -70,   -70,   -63,   -70,   -64,   -63,
     -64,   -64,   -64,     0,     0,   -64,   -60,   -64,   -60,   -60,
     -60,     0,     0,   -60,   -63,   -60,   -63,   -63,   -63,     0,
       0,   -63,   -55,   -63,   -55,   -55,   -55,     0,   -51,     0,
     276,   -55,   -51,     0,     0,   -51,   -64,   -51,   -64,   -64,
     -64,     0,     0,     0,   -60,   -64,   -60,   -60,   -60,     0,
       0,     0,   -63,   -60,   -63,   -63,   -63,     0,     0,     0,
     -53,   -63,   -53,    90,   -53,   -55,   -53,   -55,   -55,   -55,
     -70,   -55,   -70,   -70,   -70,   -68,   -70,   -68,   -68,   -68,
     -69,   -68,   -69,   -69,   -69,   -67,   -69,   -67,   -67,   -67,
     -58,   -67,   -58,   -58,   -58,   -61,   -58,   -61,   -61,   -61,
     -62,   -61,   -62,   -62,   -62,   -64,   -62,   -64,   -64,   -64,
     -60,   -64,   -60,   -60,   -60,   -63,   -60,   -63,   -63,   -63,
       0,   -63,   -68,   -68,   -68,     0,   -68,   -69,   -69,   -69,
       0,   -69,   -67,   -67,   -67,     0,   -67,   -54,   291,   -54,
       0,   -54,   -56,   -56,   -56,     0,   -56,   -58,   -58,   -58,
       0,   -58,   -61,   -61,   -61,     0,   -61,   -62,   -62,   -62,
       0,   -62,   -57,   -57,   -57,     0,   -57,   -64,   -64,   -64,
       0,   -64,   -60,   -60,   -60,     0,   -60,   -53,   291,   -53,
       0,   -53,   -55,   -55,   -55,     0,   -55,   -63,   -63,   -63,
       0,   -63
};

static const yytype_int16 yycheck[] =
{
      17,    72,    41,    31,    13,    27,     0,    29,     0,   204,
       0,    20,     0,     0,    31,     3,    33,    34,    35,     0,
       0,    38,    39,    17,    41,    17,    17,    17,     0,   224,
      17,     0,     3,     4,     5,     6,    17,    17,    66,     0,
       3,     4,     5,     6,    15,    17,    29,    30,    17,    66,
      67,   246,    15,   248,    71,    17,    17,   128,    29,    22,
      23,    21,    28,    26,    30,    25,    29,    27,    30,     4,
      87,    88,    89,    90,    91,    92,    93,     0,    18,    19,
      28,    21,    30,    23,    24,    25,   281,    27,     3,     4,
       5,     6,   287,    33,   133,     4,   113,    21,    31,    21,
      15,   118,   119,    21,   299,    27,    30,    22,    23,   118,
     127,    26,    30,    25,    29,    27,   133,   312,    17,    21,
     315,    23,   131,    25,     3,     4,     5,     6,    30,    21,
     147,   148,   149,    25,   151,   152,    15,    21,    30,    23,
      24,    25,    29,    22,    23,    29,    30,    26,    27,    21,
      29,     3,     4,     5,     6,    34,    35,     4,    30,    21,
     177,   178,   179,    15,   181,   182,    28,   206,    30,    29,
      22,    23,    21,    29,    26,    21,    25,    29,    30,    28,
      21,    30,    34,    35,    30,    21,    27,   204,   205,   206,
       3,     4,     5,     6,    30,   212,    28,    21,    30,    23,
      24,    25,    15,   220,    28,    29,    30,   224,   118,    22,
      23,    21,    21,    26,    29,    29,    29,   127,    17,    28,
      30,    30,   293,   240,   241,   242,   243,   244,   245,   246,
      27,   248,    31,    27,    33,    34,    35,    32,    27,    38,
      39,    27,    41,     3,     4,     5,     6,    21,     4,    23,
      24,    25,     4,    30,    28,    15,    30,   274,   275,   276,
     277,   278,   279,   280,   281,   293,    27,    66,    67,    29,
     287,    21,    71,   290,   291,    23,    24,    25,    28,    27,
      30,    29,   299,    27,     3,     4,     5,     6,    87,    88,
      89,    90,    91,    92,    93,   312,    15,    21,   315,    23,
      24,    25,    27,    22,    23,    27,    30,    26,    12,    32,
      29,    30,    21,    27,   113,    34,    35,    30,    27,   118,
     119,    21,    21,    21,    23,    24,    25,    27,   127,    28,
      28,    30,    30,    30,   133,     3,     4,     5,     6,     3,
       4,     5,     6,    28,    29,    30,    30,    15,   147,   148,
     149,    15,   151,   152,    22,    23,    27,    27,    26,    23,
      27,    29,    30,     4,    27,    29,    34,    35,    27,     3,
       4,     5,     6,     3,     4,     5,     6,    21,   177,   178,
     179,    15,   181,   182,    28,    15,    30,    27,    22,    23,
      27,    30,    26,    23,    30,    29,    30,    21,    31,    29,
      34,    35,    28,    27,    30,   204,   205,   206,     3,     4,
       5,     6,    23,   212,    25,    21,    27,    23,    24,    25,
      15,   220,    28,    27,    30,   224,    27,    22,    23,    12,
      28,    26,    30,    27,    29,    30,    17,    27,    27,    34,
      35,   240,   241,   242,   243,   244,   245,   246,    27,   248,
      31,    27,    33,    34,    35,    32,    30,    38,    39,    30,
      41,     3,     4,     5,     6,    21,    30,    23,    24,    25,
      30,    30,    28,    15,    30,   274,   275,   276,   277,   278,
     279,   280,   281,    30,    30,    66,    67,    29,   287,    30,
      71,   290,   291,    21,    30,    23,    24,    25,    30,    27,
     299,    29,     3,     4,     5,     6,    87,    88,    89,    90,
      91,    92,    93,   312,    15,    21,   315,    23,    24,    25,
      30,    22,    23,    30,    30,    26,    30,    30,    29,    30,
      32,    30,   113,    34,    35,    30,    30,   118,   119,    28,
      21,    30,    23,    24,    25,    30,   127,    28,    28,    30,
      30,    30,   133,     3,     4,     5,     6,     3,     4,     5,
       6,    27,    27,    29,    27,    15,   147,   148,   149,    15,
     151,   152,    22,    23,    30,    30,    26,    23,    30,    29,
      30,    30,    30,    29,    34,    35,    30,     3,     4,     5,
       6,     3,     4,     5,     6,    30,   177,   178,   179,    15,
     181,   182,    28,    15,    30,    27,    22,    23,     3,    30,
      26,    23,    19,    29,    30,    -1,    -1,    29,    34,    35,
      28,    -1,    30,   204,   205,   206,     3,     4,     5,     6,
      23,   212,    25,    21,    27,    23,    24,    25,    15,   220,
      28,    -1,    30,   224,    -1,    22,    23,    -1,    28,    26,
      30,    -1,    29,    30,    17,    -1,    -1,    34,    35,   240,
     241,   242,   243,   244,   245,   246,    -1,   248,    31,    -1,
      33,    34,    35,    -1,    -1,    38,    39,    -1,    41,     3,
       4,     5,     6,    21,    -1,    23,    24,    25,    -1,    -1,
      28,    15,    30,   274,   275,   276,   277,   278,   279,   280,
     281,    -1,    -1,    66,    67,    29,   287,    -1,    71,   290,
     291,    21,    -1,    23,    24,    25,    -1,    27,   299,    -1,
       3,     4,     5,     6,    87,    88,    89,    90,    91,    92,
      93,   312,    15,    21,   315,    23,    24,    25,    -1,    22,
      23,    -1,    30,    26,    -1,    -1,    29,    30,    -1,    -1,
     113,    34,    35,    -1,    -1,   118,   119,    21,    -1,    23,
      24,    25,    -1,    27,   127,    -1,     3,     4,     5,     6,
     133,     3,     4,     5,     6,    21,    -1,    23,    15,    25,
      28,    27,    30,    15,   147,   148,   149,    -1,   151,   152,
      22,    23,    29,    28,    26,    30,    -1,    29,    28,    28,
      30,    30,    34,    35,    -1,     3,     4,     5,     6,     3,
       4,     5,     6,    -1,   177,   178,   179,    15,   181,   182,
      28,    15,    30,    -1,    22,    23,    -1,    28,    26,    30,
      21,    29,    23,    24,    25,    29,    34,    35,    17,    30,
      -1,   204,   205,   206,    21,    -1,    23,    24,    25,   212,
      -1,    28,    31,    30,    33,    -1,    35,   220,    28,    -1,
      30,   224,    41,    -1,     3,     4,     5,     6,    28,    28,
      30,    30,     3,     4,     5,     6,    15,   240,   241,   242,
     243,   244,   245,   246,    15,   248,    -1,    66,    67,    -1,
      29,    22,    23,    -1,    28,    26,    30,    21,    29,    23,
      24,    25,    -1,    34,    35,    28,    30,    30,    87,    88,
      89,   274,   275,   276,   277,   278,   279,   280,   281,    -1,
      28,    21,    30,    23,   287,    25,    -1,   290,   291,    21,
      30,    23,    24,    25,   113,    28,   299,    30,    30,   118,
     119,    17,    -1,    -1,     3,     4,     5,     6,   127,   312,
      -1,    28,   315,    30,   133,    31,    15,    33,    28,    35,
      30,    -1,    -1,    22,    23,    41,    28,    26,    30,    -1,
      29,    12,    28,    -1,    30,    34,    35,    18,    19,    28,
      21,    30,    23,    24,    25,    28,    27,    30,    29,    17,
      66,    67,    33,    -1,    28,    21,    30,    23,   177,    25,
     179,    -1,    28,    31,    30,    33,    21,    35,    23,    24,
      25,    87,    88,    41,    28,    30,    30,    18,    19,    28,
      21,    30,    23,    24,    25,   204,    -1,   206,    29,    30,
      -1,    21,    33,    23,    24,    25,    -1,   113,    66,    67,
      30,   220,   118,   119,    17,   224,    -1,    -1,    -1,    18,
      19,   127,    21,    -1,    23,    24,    25,   133,    31,    87,
      -1,    30,   241,    -1,    33,    17,    -1,   246,    41,   248,
      -1,    18,    19,    -1,    21,    -1,    23,    24,    25,    31,
      27,    33,    -1,    35,    -1,   113,    33,    -1,    -1,    41,
     118,    -1,    17,    66,    67,   274,   275,   276,    71,   127,
      -1,   177,   281,   179,    -1,   133,    31,    -1,   287,    -1,
      -1,   290,    -1,    -1,    66,    67,    41,    -1,    -1,   147,
     299,   149,    21,    -1,    23,    24,    25,    -1,   204,    28,
     206,    30,    -1,   312,    -1,    87,   315,    -1,    -1,    -1,
     113,    66,    67,    -1,   220,   118,    -1,    -1,   224,   177,
      -1,   179,    -1,    21,   127,    23,    24,    25,    -1,    -1,
     133,   113,    30,    -1,   240,    -1,   118,   119,    -1,    -1,
     246,    -1,   248,    12,    -1,   127,   204,   205,   206,    18,
      19,   133,    21,    -1,    23,    24,    25,    -1,   113,    -1,
      29,    30,    -1,   118,    33,    -1,   224,    -1,   274,   275,
      -1,    -1,   127,    -1,    -1,   281,    -1,    -1,   133,    18,
      19,   287,    21,    -1,    23,    24,    25,    -1,   246,    28,
     248,    30,    -1,   299,    33,   177,    21,   179,    23,    24,
      25,   204,    -1,   206,    -1,    30,   312,    -1,    21,   315,
      23,    24,    25,    -1,    -1,    28,   274,    30,    -1,    -1,
      -1,   224,   204,   281,   206,    18,    19,    -1,    21,   287,
      23,    24,    25,    -1,    -1,    28,    29,    30,    17,    -1,
      33,   299,   224,   246,    21,   248,    23,    24,    25,   204,
      -1,   206,    31,    30,   312,    -1,    -1,   315,    37,    21,
      -1,    23,    41,    25,   246,    27,   248,    18,    19,   224,
      21,    -1,    23,    24,    25,    -1,    -1,    28,   281,    30,
      -1,    -1,    33,    -1,   287,    -1,    -1,    66,    -1,    68,
      69,   246,   274,   248,    -1,    -1,   299,    -1,    -1,   281,
      -1,    18,    19,    -1,    21,   287,    23,    24,    25,   312,
      -1,    28,   315,    30,    -1,    -1,    33,   299,    -1,    -1,
      -1,    -1,    18,    19,    -1,    21,   281,    23,    24,    25,
     312,    27,   287,   315,   113,    18,    19,    33,    21,   118,
      23,    24,    25,    -1,   299,    28,    -1,    30,   127,    21,
      33,    23,    24,    25,   133,    -1,    28,   312,    30,   138,
     315,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   150,    13,    -1,    15,    16,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,   168,
      31,    32,    -1,    34,    35,    -1,    -1,    18,    19,    -1,
      21,   180,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      18,    19,    33,    21,    -1,    23,    24,    25,    -1,   198,
      28,    -1,    30,    -1,    -1,    33,    21,   206,    23,    24,
      25,    -1,    -1,    28,   213,    30,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    -1,    15,
      16,    17,    -1,    -1,    -1,   234,    22,    23,    -1,    -1,
      26,    27,    -1,    29,    -1,    31,    32,    -1,    34,    35,
      21,    -1,    23,    24,    25,   254,    27,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,   268,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    -1,    31,    32,    -1,    34,
      35,    -1,    -1,    -1,   293,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    15,    16,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    -1,    31,    32,    -1,    34,    35,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    -1,    31,    32,    -1,    34,
      35,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    -1,    31,
      32,    -1,    34,    35,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    15,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
      29,    -1,    31,    32,    -1,    34,    35,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    29,    -1,    31,    32,    -1,    34,    35,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,    29,    -1,    31,    32,
      -1,    34,    35,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,
      -1,    31,    32,    -1,    34,    35,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    15,    16,
      17,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    29,    -1,    31,    32,    -1,    34,    35,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    27,    -1,    29,    -1,    31,    32,    -1,
      34,    35,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,    -1,
      31,    32,    -1,    34,    35,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    15,    16,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    -1,    31,    32,    -1,    34,    35,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    -1,    31,    32,    -1,    34,
      35,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    -1,    31,
      32,    -1,    34,    35,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    15,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
      29,    -1,    31,    32,    -1,    34,    35,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    29,    -1,    31,    32,    -1,    34,    35,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,    29,    -1,    31,    32,
      -1,    34,    35,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,
      -1,    31,    32,    -1,    34,    35,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    15,    16,
      17,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    29,    -1,    31,    32,    -1,    34,    35,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    27,    -1,    29,    -1,    31,    32,    -1,
      34,    35,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,    -1,
      31,    32,    -1,    34,    35,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    15,    16,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    -1,    31,    32,    -1,    34,    35,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    -1,    31,    -1,    -1,    34,
      35,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    -1,    31,
      -1,    -1,    34,    35,    18,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    18,    19,    33,
      21,    -1,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      18,    19,    33,    21,    -1,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    18,    19,    33,    21,    -1,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    18,    19,    33,    21,
      -1,    23,    24,    25,    -1,    -1,    28,    -1,    30,    18,
      19,    33,    21,    -1,    23,    24,    25,    -1,    27,    -1,
      18,    19,    -1,    21,    33,    23,    24,    25,    -1,    27,
      -1,    18,    19,    -1,    21,    33,    23,    24,    25,    -1,
      27,    -1,    18,    19,    -1,    21,    33,    23,    24,    25,
      -1,    27,    -1,    18,    19,    -1,    21,    33,    23,    24,
      25,    -1,    27,    -1,    18,    19,    -1,    21,    33,    23,
      24,    25,    -1,    27,    -1,    18,    19,    -1,    21,    33,
      23,    24,    25,    -1,    27,    -1,    18,    19,    -1,    21,
      33,    23,    24,    25,    -1,    27,    -1,    18,    19,    -1,
      21,    33,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      18,    19,    33,    21,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    18,    19,    33,    21,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    18,    19,    33,    21,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    18,
      19,    33,    21,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    18,    19,    33,    21,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    18,    19,    33,    21,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    18,    19,
      33,    21,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    18,    19,    33,    21,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    18,    19,    33,    21,    -1,    23,
      24,    25,    -1,    23,    24,    25,    30,    27,    21,    33,
      23,    24,    25,    -1,    -1,    28,    21,    30,    23,    24,
      25,    -1,    -1,    28,    21,    30,    23,    24,    25,    -1,
      -1,    28,    21,    30,    23,    24,    25,    -1,    21,    -1,
      23,    30,    25,    -1,    -1,    28,    21,    30,    23,    24,
      25,    -1,    -1,    -1,    21,    30,    23,    24,    25,    -1,
      -1,    -1,    21,    30,    23,    24,    25,    -1,    -1,    -1,
      21,    30,    23,    24,    25,    21,    27,    23,    24,    25,
      21,    27,    23,    24,    25,    21,    27,    23,    24,    25,
      21,    27,    23,    24,    25,    21,    27,    23,    24,    25,
      21,    27,    23,    24,    25,    21,    27,    23,    24,    25,
      21,    27,    23,    24,    25,    21,    27,    23,    24,    25,
      21,    27,    23,    24,    25,    21,    27,    23,    24,    25,
      -1,    27,    23,    24,    25,    -1,    27,    23,    24,    25,
      -1,    27,    23,    24,    25,    -1,    27,    23,    24,    25,
      -1,    27,    23,    24,    25,    -1,    27,    23,    24,    25,
      -1,    27,    23,    24,    25,    -1,    27,    23,    24,    25,
      -1,    27,    23,    24,    25,    -1,    27,    23,    24,    25,
      -1,    27,    23,    24,    25,    -1,    27,    23,    24,    25,
      -1,    27,    23,    24,    25,    -1,    27,    23,    24,    25,
      -1,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    37,    38,    39,    40,    41,     4,     0,    39,
      27,    29,    17,    30,    42,    43,     4,    31,    49,    28,
      30,     3,     4,     5,     6,     7,     8,     9,    10,    13,
      15,    16,    17,    22,    23,    26,    27,    29,    34,    35,
      40,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    67,    43,    49,    12,    29,    29,    29,
      29,    29,    29,    27,    47,     4,     4,    59,    63,    63,
      59,    56,    63,    63,    50,    27,    32,    21,    25,    23,
      24,    18,    19,    33,    47,    30,    56,    66,    56,    56,
       4,    58,     4,    48,    27,    30,    59,    61,    62,    63,
      63,    63,    63,    28,    30,    30,    30,    30,    30,    27,
      56,    27,    27,    27,    44,    49,    60,    11,    27,    44,
      48,    30,    49,    31,     3,     5,     6,    15,    29,    64,
      65,    67,     3,     4,     5,     6,    15,    22,    23,    26,
      29,    34,    35,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    67,     3,     4,     5,     6,    15,    29,    64,
      65,    67,     3,     4,     5,     6,    15,    22,    23,    26,
      29,    34,    35,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    67,     3,     4,     5,     6,    15,    29,    63,
      64,    65,    67,    27,    29,    21,    31,     3,     4,     5,
       6,    15,    23,    29,    61,    62,    63,    64,    65,    67,
      25,     4,    50,    56,    29,    59,    63,    59,    56,     3,
       4,     5,     6,    15,    29,    63,    64,    65,    67,    63,
      25,    23,    24,    18,    19,    33,    29,    56,    29,     3,
       4,     5,     6,    15,    29,    59,    63,    64,    65,    67,
      63,    59,    56,     3,     4,     5,     6,    15,    29,    63,
      64,    65,    67,    63,    21,    25,    23,    24,    18,    19,
      33,    29,    56,    30,    66,    59,    50,    29,    63,    56,
      23,    24,    61,    12,    32,    30,    30,    66,    30,    29,
      56,    61,    62,    63,    63,    63,    63,    30,    66,    30,
      30,    66,    29,    56,    30,    29,    56,    59,    61,    62,
      63,    63,    63,    63,    30,    66,    30,    30,    32,    30,
      66,    30,    62,    63,     4,    47,    48,    56,    30,    30,
      66,    30,    30,    30,    30,    66,    30,    30,    66,    30,
      30,    30,    30,    30,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    41,    41,
      42,    42,    43,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    45,    46,    46,    47,    47,    48,    49,    50,
      50,    50,    51,    51,    52,    52,    53,    54,    55,    56,
      56,    57,    57,    57,    57,    57,    58,    58,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    63,    63,
      64,    64,    64,    65,    65,    66,    66,    67,    67,    67,
      67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     5,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     9,     2,     1,     1,     1,     3,     3,     0,
       2,     1,     5,     7,     2,     3,     5,     5,     5,     1,
       1,     3,     2,     2,     3,     3,     3,     1,     2,     2,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     1,
       3,     1,     1,     4,     3,     3,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* S: decl_list  */
#line 76 "src/bison/bison.y"
            {
	  tree = (yyval.node);
  }
#line 2111 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 82 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list", 1);
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2121 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 87 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2129 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 93 "src/bison/bison.y"
                 {
		(yyval.node) = createNode("var_decl", 1);
	}
#line 2137 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 96 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("fun_decl", 1);
	}
#line 2145 "src/bison/bison.tab.c"
    break;

  case 7: /* var_decl: TYPE ID ';'  */
#line 102 "src/bison/bison.y"
                    {
		insertSymbol(symbolTable, (yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 2153 "src/bison/bison.tab.c"
    break;

  case 8: /* fun_decl: TYPE ID '(' params ')' block_stmt  */
#line 108 "src/bison/bison.y"
                                          {
		insertSymbol(symbolTable, (yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-5].token).lexeme, "fun",(yyvsp[-4].token).scope);
	}
#line 2161 "src/bison/bison.tab.c"
    break;

  case 9: /* fun_decl: TYPE ID '(' ')' block_stmt  */
#line 111 "src/bison/bison.y"
                                     {
		insertSymbol(symbolTable, (yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun", (yyvsp[-3].token).scope);
	}
#line 2169 "src/bison/bison.tab.c"
    break;

  case 12: /* param_decl: TYPE ID  */
#line 122 "src/bison/bison.y"
                {
		insertSymbol(symbolTable, (yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2177 "src/bison/bison.tab.c"
    break;


#line 2181 "src/bison/bison.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 257 "src/bison/bison.y"


extern void yyerror(const char* s)
{
	printf("Syntax Error:\n%s\n", s);
}

int main(int argc, char **argv){
	initializeTable(symbolTable);
	initializeList();
	initializeScopeStack(scopeStack);
    yyparse();
	printTree();
	printSymbolTable(symbolTable);
    yylex_destroy();
    return 0;
}
