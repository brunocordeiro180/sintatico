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
#include <string.h>

Symbol symbolTable[1000];

extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* s);
extern int scopeStack[100];
extern int scopeId;
extern Node *tree;

#line 90 "src/bison/bison.tab.c"

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
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_NIL = 6,                        /* NIL  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_TYPE = 12,                      /* TYPE  */
  YYSYMBOL_WRITE = 13,                     /* WRITE  */
  YYSYMBOL_WRITELN = 14,                   /* WRITELN  */
  YYSYMBOL_READ = 15,                      /* READ  */
  YYSYMBOL_MUL_OP = 16,                    /* MUL_OP  */
  YYSYMBOL_SUM_OP = 17,                    /* SUM_OP  */
  YYSYMBOL_REL_OP = 18,                    /* REL_OP  */
  YYSYMBOL_UNARY_LOG_OP = 19,              /* UNARY_LOG_OP  */
  YYSYMBOL_EXCLAMATION = 20,               /* EXCLAMATION  */
  YYSYMBOL_LOG_OP = 21,                    /* LOG_OP  */
  YYSYMBOL_22_ = 22,                       /* ':'  */
  YYSYMBOL_23_ = 23,                       /* '?'  */
  YYSYMBOL_24_ = 24,                       /* '%'  */
  YYSYMBOL_MAP = 25,                       /* MAP  */
  YYSYMBOL_FILTER = 26,                    /* FILTER  */
  YYSYMBOL_THEN = 27,                      /* THEN  */
  YYSYMBOL_STRING = 28,                    /* STRING  */
  YYSYMBOL_29_ = 29,                       /* ';'  */
  YYSYMBOL_30_ = 30,                       /* ','  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '{'  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_S = 36,                         /* S  */
  YYSYMBOL_decl_list = 37,                 /* decl_list  */
  YYSYMBOL_decl = 38,                      /* decl  */
  YYSYMBOL_var_decl = 39,                  /* var_decl  */
  YYSYMBOL_fun_decl = 40,                  /* fun_decl  */
  YYSYMBOL_params = 41,                    /* params  */
  YYSYMBOL_param_decl = 42,                /* param_decl  */
  YYSYMBOL_statement = 43,                 /* statement  */
  YYSYMBOL_for_stmt = 44,                  /* for_stmt  */
  YYSYMBOL_exp_stmt = 45,                  /* exp_stmt  */
  YYSYMBOL_exp = 46,                       /* exp  */
  YYSYMBOL_assing_exp = 47,                /* assing_exp  */
  YYSYMBOL_block_stmt = 48,                /* block_stmt  */
  YYSYMBOL_stmt_list = 49,                 /* stmt_list  */
  YYSYMBOL_if_stmt = 50,                   /* if_stmt  */
  YYSYMBOL_return_stmt = 51,               /* return_stmt  */
  YYSYMBOL_write_stmt = 52,                /* write_stmt  */
  YYSYMBOL_writeln_stmt = 53,              /* writeln_stmt  */
  YYSYMBOL_read_stmt = 54,                 /* read_stmt  */
  YYSYMBOL_simple_exp = 55,                /* simple_exp  */
  YYSYMBOL_list_exp = 56,                  /* list_exp  */
  YYSYMBOL_bin_exp = 57,                   /* bin_exp  */
  YYSYMBOL_unary_log_exp = 58,             /* unary_log_exp  */
  YYSYMBOL_rel_exp = 59,                   /* rel_exp  */
  YYSYMBOL_sum_exp = 60,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 61,                   /* mul_exp  */
  YYSYMBOL_factor = 62,                    /* factor  */
  YYSYMBOL_immutable = 63,                 /* immutable  */
  YYSYMBOL_call = 64,                      /* call  */
  YYSYMBOL_args = 65,                      /* args  */
  YYSYMBOL_constant = 66                   /* constant  */
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
#define YYLAST   3676

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,     2,     2,     2,     2,    24,     2,     2,
      31,    32,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    22,    29,
       2,     2,     2,    23,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    25,    26,    27,
      28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    83,    83,    89,    94,   100,   103,   109,   125,   141,
     159,   162,   169,   181,   184,   187,   190,   193,   196,   199,
     202,   206,   212,   227,   230,   236,   239,   245,   261,   268,
     273,   277,   287,   302,   310,   322,   334,   346,   366,   369,
     375,   381,   386,   391,   397,   406,   407,   413,   414,   415,
     421,   427,   433,   439,   445,   452,   455,   463,   466,   473,
     476,   479,   485,   490,   497,   498,   502,   506,   510,   514
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT", "FLOAT",
  "NIL", "IF", "ELSE", "ASSIGN", "FOR", "RETURN", "TYPE", "WRITE",
  "WRITELN", "READ", "MUL_OP", "SUM_OP", "REL_OP", "UNARY_LOG_OP",
  "EXCLAMATION", "LOG_OP", "':'", "'?'", "'%'", "MAP", "FILTER", "THEN",
  "STRING", "';'", "','", "'('", "')'", "'{'", "'}'", "$accept", "S",
  "decl_list", "decl", "var_decl", "fun_decl", "params", "param_decl",
  "statement", "for_stmt", "exp_stmt", "exp", "assing_exp", "block_stmt",
  "stmt_list", "if_stmt", "return_stmt", "write_stmt", "writeln_stmt",
  "read_stmt", "simple_exp", "list_exp", "bin_exp", "unary_log_exp",
  "rel_exp", "sum_exp", "mul_exp", "factor", "immutable", "call", "args",
  "constant", YY_NULLPTR
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
     275,   276,    58,    63,    37,   277,   278,   279,   280,    59,
      44,    40,    41,   123,   125
};
#endif

#define YYPACT_NINF (-165)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    57,    74,    79,   101,   111,   140,   -17,  -165,   176,
     329,    -7,    84,    55,   119,   356,   464,  2245,   370,    97,
      55,  2277,   482,   415,   905,  1132,  3432,  3446,    93,    98,
     814,   112,   135,   136,   149,   116,   311,   311,   259,   259,
    3460,  2309,  1458,   417,  2341,  2373,  2405,  2437,   157,   167,
    2469,  2501,  2533,  2565,  2597,  2629,   180,   199,     8,    63,
     208,    36,   387,  3474,  3488,  3502,  3516,  1500,   122,   341,
     202,  2661,   221,   222,  1458,  1458,   228,   319,   759,   160,
    1020,   174,   252,   256,   257,  2693,   311,    28,    28,   116,
     259,   259,   259,   283,  3530,   522,   562,    14,   279,   292,
    2725,   330,   331,   359,  3544,   201,   445,  3422,  3572,   314,
     377,   384,  3076,  3558,   187,    58,   385,   399,   407,   563,
    1541,   461,  2757,  2789,  2821,  3045,   435,  2853,   424,   437,
    2885,  2245,  3578,  3587,  3593,  3602,  1458,  3608,  3617,  3623,
     251,   457,   471,   479,   486,  1458,   493,   501,   505,  1330,
    1309,  3272,  3284,   540,   341,   341,   545,   545,  3296,  1458,
     503,   226,   360,    26,    34,   153,  3308,  3320,  3332,  3344,
    1183,  1404,  3102,  3119,   603,   406,   406,   638,   638,  3136,
    1458,   580,   403,   427,   206,    -8,   481,  3153,  3170,  3187,
    3204,   566,   515,   597,   794,   881,  1458,  1061,  1094,  1381,
    1433,  2917,   229,   341,   533,   565,  1284,   585,   588,   589,
     601,  1573,  2245,  1605,  1637,  1669,   604,  1701,  1733,  1765,
    1797,  1829,  1861,    81,   114,   196,   250,   762,   358,  1458,
     143,   378,   622,   681,   899,   937,    58,   637,  2949,   635,
     441,   639,   689,  1518,   472,   489,    -4,   644,   648,   649,
     655,  1458,   659,   664,   672,   679,   686,   687,    77,    77,
     540,   545,   545,   545,   725,   147,   765,   850,   860,   953,
    1458,  1044,  1202,  1219,  1243,   455,  1467,   459,   336,   598,
     615,   620,   640,  1458,   658,   671,   675,   711,   720,   690,
     406,   478,   478,   603,   638,   638,   638,   972,   691,  3632,
     739,   521,   341,   202,  1893,   697,   698,  1458,  1458,   729,
    2981,  1925,  1097,   964,   708,    58,   762,   309,  3086,  3013,
    3638,   734,   764,   735,  3356,   775,  1160,   722,  3368,   238,
    1550,  1582,   726,   738,   741,  3221,   784,  1354,   742,  1384,
     746,  3238,   542,    86,  1477,  3054,   797,   798,   825,  1614,
     826,  1646,  3647,   557,   750,  1957,  1989,   752,   760,   766,
    2021,  1158,   830,  1266,  1282,  1441,  1002,   767,   774,   777,
     803,  3380,   804,   861,   812,  3255,  3392,   864,  3398,   958,
     980,   983,  1678,   187,    58,   806,   818,   819,  3113,   820,
    3415,  1010,  2053,   582,  2085,  2117,  2149,   187,   435,  2181,
     840,   832,  2213
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,   848,     0,  -165,  -165,   854,   -99,   -91,
     -84,   -24,   -49,   -12,  -127,   -78,   -75,   -74,   -73,   -72,
    1204,  1130,   984,   931,  1027,   833,   549,   -19,   265,   363,
    -164,   647
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    44,     6,    14,    15,    45,    46,
      47,    48,    49,    50,    21,    51,    52,    53,    54,    55,
      56,   160,   161,   162,   163,   164,   165,   166,   167,   168,
      96,   169
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    18,    63,     5,   238,    12,    72,     1,    23,   292,
     -51,    63,    10,   -51,    11,   120,    78,    80,    80,    82,
      83,    99,   -51,   214,   -51,    13,   127,   326,   -58,    86,
     215,    77,   132,   133,   134,   203,   218,   -38,   300,   219,
     220,   221,   222,    93,   258,    35,   114,   -49,    63,   187,
     197,   259,   -51,    88,   -51,   -51,   135,   -51,   -49,   136,
       7,   223,   224,   225,   226,   -51,   -51,    80,    80,    80,
     108,   109,   110,   111,     8,   227,   322,   128,   325,    -2,
     191,   192,   193,   194,   -46,   310,   228,    16,    17,   229,
     216,     1,   -46,   187,   153,    63,   232,   -58,   -58,   -58,
     336,    -4,   217,   292,   -50,   195,    63,   -50,   196,    12,
     -58,    -5,   312,    -4,   213,    73,   -50,   130,   -50,    77,
     132,   133,   134,    -5,    69,   170,   171,   172,   173,    70,
     -67,   -67,   -67,   350,   243,   197,   197,   252,   256,   174,
      -6,   175,   176,   -67,   135,   177,   178,   136,   362,    19,
     179,    20,    -6,   180,    94,   271,   276,   276,   284,   288,
     315,   -51,   373,   -58,   -58,   -58,    74,    75,   -58,   260,
     -53,   -53,   -51,   377,   -53,   380,    -3,   -58,   337,   -58,
      76,   -47,   305,   187,   197,   -53,    85,    63,    -3,   -47,
      24,    25,    26,    27,   204,   -48,   -25,   205,   206,   207,
     208,   209,   210,   -48,    35,    98,    36,    37,   313,   -26,
      38,    39,   -68,   -68,   -68,    40,   211,   232,    42,    63,
     212,   187,   -45,   187,   291,   -68,    87,   -49,   -39,   -49,
     -45,   103,   170,   171,   172,   173,   -49,   -49,   -49,   197,
     197,   331,   332,   333,   334,   187,   174,   203,   175,   176,
     100,   201,   177,   178,   354,   259,   -50,   179,   -38,   -50,
     180,   299,   140,   141,   142,   143,   -66,   -66,   -66,   368,
     -50,   276,   276,   276,   345,   346,   347,   348,   187,   -66,
     -58,   -41,   240,   197,   392,   -42,    64,   144,    67,   104,
     145,    63,   214,   187,   367,    64,   232,   365,   399,   215,
     137,   137,   137,   146,   146,   218,   214,   187,   219,   220,
     221,   222,   -27,   215,    77,   132,   133,   134,   187,   218,
     187,   115,   219,   220,   221,   222,   315,   -50,    35,    -7,
      36,    37,    64,   188,   198,   -58,   -58,   -58,   -50,   135,
     -58,    -7,   136,   -40,   191,   192,   193,   194,   -58,   400,
     202,   137,   137,   137,   137,   146,   146,   146,   153,   216,
     154,   155,   116,   117,    63,   232,   -58,   339,   -58,   195,
      -9,   217,   196,   216,   -69,   -69,   -69,   188,    63,    64,
     233,   -46,    -9,   213,    65,   217,   -11,   -69,   -11,   402,
      64,   118,   -46,    65,   316,   -53,   -53,   213,   138,   138,
     138,   147,   147,    89,   -53,   -53,   -43,   -53,   -53,   265,
     266,   267,   268,   -44,   122,    -8,   -53,   -28,   198,   198,
     198,   253,   253,   174,   290,   175,   176,    -8,   123,   -28,
      65,   189,   199,   -38,   269,   -38,   124,   270,   237,   272,
     272,   272,   285,   285,   170,   171,   172,   173,   -46,   138,
     138,   138,   138,   147,   147,   147,   129,   -46,   174,   -46,
     175,   176,    88,   -50,   177,   178,   -50,   188,   198,   179,
     131,    64,   180,   321,   -50,   189,   -47,    65,   234,   236,
     -48,   265,   266,   267,   268,   -47,   -67,   -47,    65,   -48,
     126,   -48,   233,   -47,   -12,   174,   -12,   293,   -53,   -53,
     -68,   233,   -53,    64,   -47,   188,   269,   188,   -66,   270,
     -48,   -53,   -10,   -53,   -10,   -69,   199,   199,   199,   254,
     254,   -48,   -57,   198,   198,   198,   253,   253,   253,   188,
     -60,   -67,   -67,   -67,   -61,   -39,   -67,   273,   273,   273,
     286,   286,   -45,   191,   192,   193,   194,   -67,   246,   247,
     248,   249,   -65,   -45,   -65,   272,   272,   272,   272,   285,
     285,   285,   188,   -45,   302,   189,   199,   198,   195,    65,
      62,   196,   -45,   250,   -45,    64,   251,   188,   203,    62,
     233,   233,   -58,   -58,   -58,    62,    62,   -58,   306,   383,
     234,   188,   112,   -64,   113,   -64,   303,   297,   -58,   234,
     236,    65,   188,   189,   188,   189,   265,   266,   267,   268,
     -39,   398,   -39,   -68,   -68,   -68,    62,   186,   -68,   307,
     308,   199,   199,   199,   254,   254,   254,   189,   -67,   -68,
     -67,   269,   309,   311,   270,    62,    62,   107,   -55,   -55,
     -55,   278,   279,   280,   281,   -68,   318,   -68,    64,   233,
     -66,   -55,   -66,   273,   273,   273,   273,   286,   286,   286,
     189,   186,    64,    62,   231,   199,   282,   320,    66,   283,
     -69,   323,   -69,    65,    62,   189,   -67,    66,   234,   234,
     -68,   -66,   139,   139,   139,   148,   148,   -69,   -41,   189,
     -41,   -41,   170,   171,   172,   173,   -57,   -57,   -57,   -57,
     189,   -57,   189,   -57,   -60,   -60,   174,   -60,   175,   176,
     -57,   -61,   177,   178,    66,   190,   200,   179,   -42,   328,
     180,   324,   341,   351,   186,   186,   355,   356,   170,   171,
     172,   173,   359,   139,   139,   139,   139,   148,   148,   148,
     363,   -61,   174,   -61,   175,   176,    65,   234,   177,   178,
     -42,   186,   -42,   179,   374,    62,   180,   335,   -40,   190,
      65,    66,   235,   -63,   -59,   223,   224,   225,   226,   112,
     -43,   352,    66,   -44,   378,   -56,   -56,   -56,   381,   384,
     -56,   -67,   -67,   -67,   385,   231,   -67,    62,   -56,   186,
     228,   186,   386,   229,   112,   -67,   370,   -67,   387,   -27,
     200,   200,   200,   255,   255,   112,   -25,   371,   330,   -26,
     -66,   -66,   -66,   186,   112,   -66,   375,    24,    25,    26,
      27,   274,   274,   274,   287,   287,   -66,   -40,   -43,   -40,
     -43,    35,   -62,    36,    37,   394,   -63,    38,    39,   186,
     186,   344,    40,    71,   -59,    42,   186,   395,   396,   190,
     200,     9,   -62,    66,    61,   -44,   112,   -44,   382,    62,
     112,   186,   388,    61,   364,   212,   -68,   -68,   -68,    61,
      61,   -68,   401,    22,   235,   186,   -66,   -66,   -66,     0,
     -68,   -66,   -68,   235,     0,    66,   186,   190,   186,   190,
     -66,   112,   -66,   389,   112,     0,   390,   -69,   -69,   -69,
      61,   185,   -69,     0,     0,   200,   200,   200,   255,   255,
     255,   190,     0,   -69,    67,   -60,   -60,   -60,     0,    61,
     106,   -58,   -58,   -58,     0,     0,   -58,   -58,   -60,     0,
     -58,   -58,    62,   231,   -58,     0,    68,   274,   274,   274,
     274,   287,   287,   287,   190,   185,    62,    61,   230,   200,
       0,     0,    59,   -61,   -61,   -61,     0,    66,    61,   190,
       0,    59,   235,   235,     0,     0,   -61,    79,    81,   -69,
     -69,   -69,     0,   190,   -69,   170,   171,   172,   173,     0,
     -56,   -56,   -56,   -69,   190,   -69,   190,     0,   -63,   174,
     -63,   175,   176,   -56,     0,   177,   178,     0,    59,   183,
     179,     0,     0,   180,   349,    58,     0,     0,   185,   185,
     112,   318,   391,   -59,    58,   -59,     0,   105,   -58,   -58,
     -58,     0,     0,   -58,   -58,     0,     0,   -58,   -58,     0,
      66,   235,     0,   242,   -58,   185,   -55,   -55,   -55,    61,
     -62,   -55,   -62,   183,    66,    59,     0,     0,    60,   -55,
       0,    58,   182,    97,     0,     0,    59,    60,     0,     0,
     -56,   -56,   -56,    60,    60,   -56,     0,     0,     0,   317,
       0,    61,     0,   185,   -56,   185,   -56,   -55,   -55,   -55,
       0,     0,   -55,     0,     0,   244,   245,     0,     0,     0,
       0,   329,     0,   -55,    60,   184,   182,   185,    58,     0,
     170,   171,   172,   173,     0,     0,   275,   277,     0,    58,
     -57,   -57,   -57,    60,   174,   -57,   175,   176,     0,     0,
     177,   178,     0,   185,   343,   179,   -57,     0,   180,   361,
     185,     0,     0,   183,   301,     0,     0,    59,     0,   184,
       0,    60,   121,    61,     0,   185,     0,     0,   -67,   -67,
     -67,    57,    60,   -67,   -67,     0,     0,   -67,   -67,   185,
      57,   -67,     0,   170,   171,   172,   173,     0,     0,    59,
     185,   183,   185,   183,   -63,   -63,   -63,   174,     0,   175,
     176,     0,     0,   177,   178,     0,   182,   -63,   179,     0,
      58,   180,   372,     0,     0,   183,     0,    57,   181,   -58,
     -58,   -58,   184,   184,   -58,   -58,     0,     0,   -58,   -58,
       0,     0,     0,   -58,   264,   -58,    61,   230,   -57,   -57,
     -57,   342,    58,   -57,   182,     0,   182,     0,   183,   184,
      61,     0,   -57,    60,   -57,   -60,   -60,   -60,     0,     0,
     -60,    59,   181,   183,    57,     0,    84,     0,   182,   -60,
       0,   -60,     0,     0,     0,    57,     0,   183,     0,   -61,
     -61,   -61,     0,     0,   -61,    60,     0,   184,   183,   184,
     183,     0,    95,   -61,     0,   -61,     0,     0,   101,   102,
       0,   182,   -59,   -59,   -59,     0,   353,    24,    25,    26,
      27,   184,     0,     0,    58,   -59,   182,     0,   316,   -52,
     -52,    35,     0,    36,    37,     0,     0,    38,    39,     0,
     182,   -52,    40,   304,    59,    42,   119,   184,     0,     0,
       0,   182,     0,   182,   184,   -67,   -67,   -67,    59,     0,
     -67,   -67,   181,     0,   -67,   -67,    57,    60,     0,   184,
     239,   -67,     0,     0,     0,     0,   -58,   -58,   -58,   241,
       0,   -58,   -58,   184,     0,   -58,   -58,   170,   171,   172,
     173,   242,   -58,   257,   184,     0,   184,    58,    57,     0,
     181,   174,   181,   175,   176,     0,     0,   177,   178,     0,
       0,    58,   179,     0,   289,   180,   376,   170,   171,   172,
     173,     0,     0,     0,   181,     0,     0,   -60,   -60,   -60,
     298,   174,   -60,   175,   176,     0,    95,   177,   178,     0,
      60,   393,   179,   -60,     0,   180,   379,     0,     0,     0,
     -67,   -67,   -67,     0,    60,   -67,   -67,   181,     0,   -67,
     -67,     0,     0,   314,   -67,     0,   -67,     0,     0,     0,
      57,     0,   181,     0,    95,     0,    95,     0,     0,   -61,
     -61,   -61,     0,     0,   -61,   327,   181,   -54,   -54,   -54,
       0,   149,   150,   151,   152,   -61,     0,   181,    95,   181,
     -54,     0,     0,     0,   338,   153,     0,   154,   155,     0,
       0,   156,   157,   -55,   -55,   -55,   158,   340,   -55,   159,
       0,     0,     0,   293,   -52,   -52,     0,   -55,   -52,   -55,
       0,    95,     0,    24,    25,    26,    27,   -52,     0,   -52,
       0,   357,   358,    57,     0,     0,    95,    35,     0,    36,
      37,     0,   369,    38,    39,     0,     0,    57,    40,     0,
      95,    42,     0,     0,   -56,   -56,   -56,     0,     0,   -56,
       0,    95,     0,    95,   -31,   -31,   -31,   -31,   -31,   125,
     -56,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,     0,     0,   -31,   -31,   260,   -52,   -52,   -31,
     -31,   -52,   -31,     0,   -31,   -31,   -24,   -24,   -24,   -24,
     -24,   -24,   -52,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,     0,   -24,   -24,     0,     0,   -24,   -24,   -54,   -54,
     -54,   -24,   -24,   -54,   -24,     0,   -24,   -24,   -20,   -20,
     -20,   -20,   -20,   -20,   -54,   -20,   -20,   -20,   -20,   -20,
     -20,     0,   -20,     0,   -20,   -20,     0,     0,   -20,   -20,
     -63,   -63,   -63,   -20,   -20,   -63,   -20,     0,   -20,   -20,
     -21,   -21,   -21,   -21,   -21,   -21,   -63,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   -21,     0,   -21,   -21,     0,     0,
     -21,   -21,   -59,   -59,   -59,   -21,   -21,   -59,   -21,     0,
     -21,   -21,   -13,   -13,   -13,   -13,   -13,   -13,   -59,   -13,
     -13,   -13,   -13,   -13,   -13,     0,   -13,     0,   -13,   -13,
       0,     0,   -13,   -13,   -62,   -62,   -62,   -13,   -13,   -62,
     -13,     0,   -13,   -13,   -14,   -14,   -14,   -14,   -14,   -14,
     -62,   -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,     0,
     -14,   -14,     0,     0,   -14,   -14,     0,     0,     0,   -14,
     -14,     0,   -14,     0,   -14,   -14,   -15,   -15,   -15,   -15,
     -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
     -15,     0,   -15,   -15,     0,     0,   -15,   -15,     0,     0,
       0,   -15,   -15,     0,   -15,     0,   -15,   -15,   -16,   -16,
     -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,
     -16,     0,   -16,     0,   -16,   -16,     0,     0,   -16,   -16,
       0,     0,     0,   -16,   -16,     0,   -16,     0,   -16,   -16,
     -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -17,   -17,     0,   -17,     0,   -17,   -17,     0,     0,
     -17,   -17,     0,     0,     0,   -17,   -17,     0,   -17,     0,
     -17,   -17,   -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -18,   -18,     0,   -18,     0,   -18,   -18,
       0,     0,   -18,   -18,     0,     0,     0,   -18,   -18,     0,
     -18,     0,   -18,   -18,   -19,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,     0,
     -19,   -19,     0,     0,   -19,   -19,     0,     0,     0,   -19,
     -19,     0,   -19,     0,   -19,   -19,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,     0,     0,   -33,   -33,     0,     0,
       0,   -33,   -33,     0,   -33,     0,   -33,   -33,   -23,   -23,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,     0,   -23,   -23,     0,     0,   -23,   -23,
       0,     0,     0,   -23,   -23,     0,   -23,     0,   -23,   -23,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,     0,     0,
     -34,   -34,     0,     0,     0,   -34,   -34,     0,   -34,     0,
     -34,   -34,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,    -7,     0,    -7,     0,    -7,    -7,
       0,     0,    -7,    -7,     0,     0,     0,    -7,    -7,     0,
      -7,     0,    -7,    -7,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,     0,     0,     0,   -28,
     -28,     0,   -28,     0,   -28,   -28,   -31,   -31,   -31,   -31,
     -31,   397,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,     0,   -31,   -31,     0,     0,   -31,   -31,     0,     0,
       0,   -31,   -31,     0,   -31,     0,   -31,   -31,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,     0,   -35,   -35,     0,     0,   -35,   -35,
       0,     0,     0,   -35,   -35,     0,   -35,     0,   -35,   -35,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,     0,     0,
     -36,   -36,     0,     0,     0,   -36,   -36,     0,   -36,     0,
     -36,   -36,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,
       0,     0,   -37,   -37,     0,     0,     0,   -37,   -37,     0,
     -37,     0,   -37,   -37,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,
     -32,   -32,     0,     0,   -32,   -32,     0,     0,     0,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -22,   -22,   -22,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,     0,   -22,   -22,     0,     0,   -22,   -22,     0,     0,
       0,   -22,   -22,     0,   -22,     0,   -22,   -22,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,     0,   -30,   -30,     0,     0,   -30,   -30,
       0,     0,     0,   -30,   -30,     0,   -30,     0,   -30,   -30,
      24,    25,    26,    27,    28,     0,     0,    29,    30,    31,
      32,    33,    34,     0,    35,     0,    36,    37,     0,     0,
      38,    39,     0,     0,     0,    40,    41,     0,    42,     0,
     131,    43,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,   -24,
       0,     0,   -24,   -24,     0,     0,     0,   -24,   -24,     0,
     -24,     0,   -24,   -24,   -20,   -20,   -20,   -20,   -20,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,     0,
     -20,   -20,     0,     0,   -20,   -20,     0,     0,     0,   -20,
     -20,     0,   -20,     0,   -20,   -20,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,     0,   -29,   -29,     0,     0,   -29,   -29,     0,     0,
       0,   -29,   -29,     0,   -29,     0,   -29,   -29,   -21,   -21,
     -21,   -21,   -21,     0,     0,   -21,   -21,   -21,   -21,   -21,
     -21,     0,   -21,     0,   -21,   -21,     0,     0,   -21,   -21,
       0,     0,     0,   -21,   -21,     0,   -21,     0,   -21,   -21,
     -13,   -13,   -13,   -13,   -13,     0,     0,   -13,   -13,   -13,
     -13,   -13,   -13,     0,   -13,     0,   -13,   -13,     0,     0,
     -13,   -13,     0,     0,     0,   -13,   -13,     0,   -13,     0,
     -13,   -13,   -14,   -14,   -14,   -14,   -14,     0,     0,   -14,
     -14,   -14,   -14,   -14,   -14,     0,   -14,     0,   -14,   -14,
       0,     0,   -14,   -14,     0,     0,     0,   -14,   -14,     0,
     -14,     0,   -14,   -14,   -15,   -15,   -15,   -15,   -15,     0,
       0,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,     0,
     -15,   -15,     0,     0,   -15,   -15,     0,     0,     0,   -15,
     -15,     0,   -15,     0,   -15,   -15,   -16,   -16,   -16,   -16,
     -16,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,     0,
     -16,     0,   -16,   -16,     0,     0,   -16,   -16,     0,     0,
       0,   -16,   -16,     0,   -16,     0,   -16,   -16,   -17,   -17,
     -17,   -17,   -17,     0,     0,   -17,   -17,   -17,   -17,   -17,
     -17,     0,   -17,     0,   -17,   -17,     0,     0,   -17,   -17,
       0,     0,     0,   -17,   -17,     0,   -17,     0,   -17,   -17,
     -18,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,
     -18,   -18,   -18,     0,   -18,     0,   -18,   -18,     0,     0,
     -18,   -18,     0,     0,     0,   -18,   -18,     0,   -18,     0,
     -18,   -18,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,
     -19,   -19,   -19,   -19,   -19,     0,   -19,     0,   -19,   -19,
       0,     0,   -19,   -19,     0,     0,     0,   -19,   -19,     0,
     -19,     0,   -19,   -19,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,     0,     0,   -33,   -33,     0,     0,     0,   -33,
     -33,     0,   -33,     0,   -33,   -33,   -23,   -23,   -23,   -23,
     -23,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,     0,   -23,   -23,     0,     0,   -23,   -23,     0,     0,
       0,   -23,   -23,     0,   -23,     0,   -23,   -23,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,     0,   -34,   -34,     0,     0,   -34,   -34,
       0,     0,     0,   -34,   -34,     0,   -34,     0,   -34,   -34,
     -35,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,     0,   -35,   -35,     0,     0,
     -35,   -35,     0,     0,     0,   -35,   -35,     0,   -35,     0,
     -35,   -35,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,     0,   -36,   -36,
       0,     0,   -36,   -36,     0,     0,     0,   -36,   -36,     0,
     -36,     0,   -36,   -36,   -37,   -37,   -37,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,
     -37,   -37,     0,     0,   -37,   -37,     0,     0,     0,   -37,
     -37,     0,   -37,     0,   -37,   -37,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,     0,     0,   -32,   -32,     0,     0,
       0,   -32,   -32,     0,   -32,     0,   -32,   -32,   -22,   -22,
     -22,   -22,   -22,     0,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,   -22,     0,   -22,   -22,     0,     0,   -22,   -22,
       0,     0,     0,   -22,   -22,     0,   -22,     0,   -22,   -22,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,     0,    -7,    -7,     0,     0,
      -7,    -7,     0,     0,     0,    -7,    -7,     0,    -7,     0,
      -7,    -7,    24,    25,    26,    27,    28,     0,     0,    29,
      30,    31,    32,    33,    34,     0,    35,     0,    36,    37,
       0,     0,    38,    39,     0,     0,     0,    40,    41,     0,
      42,     0,   131,   319,    24,    25,    26,    27,    28,     0,
       0,    29,    30,    31,    32,    33,    34,     0,    35,     0,
      36,    37,     0,     0,    38,    39,     0,     0,     0,    40,
      41,     0,    42,     0,   131,   360,   -28,   -28,   -28,   -28,
     -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,     0,   -28,   -28,     0,     0,   -28,   -28,     0,     0,
       0,   -28,   -28,     0,   -28,     0,   -28,   -28,    24,    25,
      26,    27,    28,     0,     0,    29,    30,    31,    32,    33,
      34,     0,    35,     0,    36,    37,     0,     0,    38,    39,
     -54,   -54,   -54,    40,    41,   -54,    42,     0,   131,   170,
     171,   172,   173,     0,   -54,     0,   -54,     0,     0,   366,
     150,   151,   152,   174,     0,   175,   176,     0,     0,   177,
     178,     0,     0,   153,   179,   154,   155,   180,     0,   156,
     157,     0,     0,     0,   158,     0,     0,   159,   -68,   -68,
     -68,     0,     0,   -68,   -68,     0,     0,   -68,   -68,   -62,
     -62,   -62,   -68,     0,   -68,   -66,   -66,   -66,     0,     0,
     -66,   -66,   -62,     0,   -66,   -66,     0,     0,     0,   -66,
       0,   -66,   -69,   -69,   -69,     0,     0,   -69,   -69,     0,
       0,   -69,   -69,     0,     0,     0,   -69,     0,   -69,   -55,
     -55,   -55,     0,     0,   -55,   294,     0,     0,   295,   296,
       0,     0,     0,   -55,     0,   -55,   -57,   -57,   -57,     0,
       0,   -57,   -57,     0,     0,   -57,   -57,     0,     0,     0,
     -57,     0,   -57,   -60,   -60,   -60,     0,     0,   -60,   -60,
       0,     0,   -60,   -60,     0,     0,     0,   -60,     0,   -60,
     -61,   -61,   -61,     0,     0,   -61,   -61,     0,     0,   -61,
     -61,     0,     0,     0,   -61,     0,   -61,   -63,   -63,   -63,
       0,     0,   -63,   -63,     0,     0,   -63,   -63,     0,     0,
       0,   -63,     0,   -63,   -59,   -59,   -59,     0,     0,   -59,
     -59,     0,     0,   -59,   -59,     0,     0,     0,   -59,     0,
     -59,   -62,   -62,   -62,     0,     0,   -62,   -62,     0,     0,
     -62,   -62,     0,     0,     0,   -62,     0,   -62,   -68,   -68,
     -68,     0,     0,   -68,   -68,     0,     0,   -68,   -68,     0,
     -66,   -66,   -66,     0,   -68,   -66,   -66,     0,     0,   -66,
     -66,     0,   -69,   -69,   -69,     0,   -66,   -69,   -69,     0,
       0,   -69,   -69,     0,   -55,   -55,   -55,     0,   -69,   -55,
     261,     0,     0,   262,   263,     0,   -57,   -57,   -57,     0,
     -55,   -57,   -57,     0,     0,   -57,   -57,     0,   -60,   -60,
     -60,     0,   -57,   -60,   -60,     0,     0,   -60,   -60,     0,
     -61,   -61,   -61,     0,   -60,   -61,   -61,     0,     0,   -61,
     -61,     0,   -63,   -63,   -63,     0,   -61,   -63,   -63,     0,
       0,   -63,   -63,     0,   -59,   -59,   -59,     0,   -63,   -59,
     -59,     0,     0,   -59,   -59,     0,   -62,   -62,   -62,     0,
     -59,   -62,   -62,     0,     0,   -62,   -62,     0,   -63,   -63,
     -63,     0,   -62,   -63,   -59,   -59,   -59,     0,     0,   -59,
       0,     0,   -63,     0,   -63,     0,     0,     0,   -59,     0,
     -59,   -62,   -62,   -62,     0,     0,   -62,     0,    89,   -52,
     -52,     0,     0,   -52,     0,   -62,     0,   -62,   -68,   -68,
     -68,   -52,     0,   -68,   -68,     0,     0,   -68,   -68,     0,
       0,   -68,   -66,   -66,   -66,     0,     0,   -66,   -66,     0,
       0,   -66,   -66,     0,     0,   -66,   -69,   -69,   -69,     0,
       0,   -69,   -69,     0,     0,   -69,   -69,     0,     0,   -69,
     -55,   -55,   -55,     0,     0,   -55,    90,     0,     0,    91,
      92,     0,     0,   -55,   -57,   -57,   -57,     0,     0,   -57,
     -57,     0,     0,   -57,   -57,     0,     0,   -57,   -60,   -60,
     -60,     0,     0,   -60,   -60,     0,     0,   -60,   -60,     0,
       0,   -60,   -61,   -61,   -61,     0,     0,   -61,   -61,     0,
       0,   -61,   -61,     0,     0,   -61,   -63,   -63,   -63,     0,
       0,   -63,   -63,     0,     0,   -63,   -63,     0,     0,   -63,
     -59,   -59,   -59,     0,     0,   -59,   -59,     0,     0,   -59,
     -59,     0,     0,   -59,   -62,   -62,   -62,     0,     0,   -62,
     -62,     0,     0,   -62,   -62,     0,     0,   -62,   -54,   -54,
     -54,     0,     0,   -54,   -67,   -67,   -67,     0,     0,   -67,
       0,   -54,     0,   -68,   -68,   -68,     0,   -67,   -68,   -66,
     -66,   -66,     0,     0,   -66,     0,   -68,     0,   -69,   -69,
     -69,     0,   -66,   -69,   -57,   -57,   -57,     0,     0,   -57,
       0,   -69,     0,   -60,   -60,   -60,     0,   -57,   -60,   -61,
     -61,   -61,     0,     0,   -61,     0,   -60,     0,   -63,   -63,
     -63,     0,   -61,   -63,   -59,   -59,   -59,     0,     0,   -59,
       0,   -63,     0,   -62,   -62,   -62,     0,   -59,   -62,     0,
       0,     0,     0,     0,     0,     0,   -62
};

static const yytype_int16 yycheck[] =
{
       0,    13,    21,     3,   131,    12,    30,    12,    20,    17,
      18,    30,    29,    21,    31,   114,    35,    36,    37,    38,
      39,    70,    30,   114,    32,    32,   125,    31,    32,    21,
     114,     3,     4,     5,     6,    21,   114,    29,   202,   114,
     114,   114,   114,    67,    18,    17,    32,    21,    67,    68,
      69,    17,    18,    17,    18,    21,    28,    21,    32,    31,
       3,     3,     4,     5,     6,    29,    32,    86,    87,    88,
      89,    90,    91,    92,     0,    17,   240,   126,   242,     0,
       3,     4,     5,     6,    21,   212,    28,     3,    33,    31,
     114,    12,    29,   112,    17,   114,   115,    16,    17,    18,
     264,     0,   114,    17,    18,    28,   125,    21,    31,    12,
      29,     0,    31,    12,   114,     3,    30,   129,    32,     3,
       4,     5,     6,    12,    31,     3,     4,     5,     6,    31,
      16,    17,    18,   297,   153,   154,   155,   156,   157,    17,
       0,    19,    20,    29,    28,    23,    24,    31,   312,    30,
      28,    32,    12,    31,    32,   174,   175,   176,   177,   178,
      17,    18,   326,    16,    17,    18,    31,    31,    21,    16,
      17,    18,    29,   337,    21,   339,     0,    30,    31,    32,
      31,    21,   206,   202,   203,    32,    29,   206,    12,    29,
       3,     4,     5,     6,     7,    21,    29,    10,    11,    12,
      13,    14,    15,    29,    17,     3,    19,    20,   227,    29,
      23,    24,    16,    17,    18,    28,    29,   236,    31,   238,
      33,   240,    21,   242,    18,    29,    18,    21,    29,    21,
      29,     3,     3,     4,     5,     6,    30,    29,    32,   258,
     259,   260,   261,   262,   263,   264,    17,    21,    19,    20,
      29,    29,    23,    24,   303,    17,    18,    28,    32,    21,
      31,    32,     3,     4,     5,     6,    16,    17,    18,   318,
      32,   290,   291,   292,   293,   294,   295,   296,   297,    29,
      29,    29,    31,   302,   383,    29,    21,    28,     9,    32,
      31,   310,   383,   312,   318,    30,   315,   316,   397,   383,
      35,    36,    37,    38,    39,   383,   397,   326,   383,   383,
     383,   383,    29,   397,     3,     4,     5,     6,   337,   397,
     339,    29,   397,   397,   397,   397,    17,    18,    17,     0,
      19,    20,    67,    68,    69,    16,    17,    18,    29,    28,
      21,    12,    31,    29,     3,     4,     5,     6,    29,   398,
      31,    86,    87,    88,    89,    90,    91,    92,    17,   383,
      19,    20,    32,    32,   383,   384,    30,    31,    32,    28,
       0,   383,    31,   397,    16,    17,    18,   112,   397,   114,
     115,    21,    12,   383,    21,   397,    30,    29,    32,   401,
     125,    32,    32,    30,    16,    17,    18,   397,    35,    36,
      37,    38,    39,    16,    17,    18,    29,    29,    21,     3,
       4,     5,     6,    29,    29,     0,    29,     0,   153,   154,
     155,   156,   157,    17,    21,    19,    20,    12,    29,    12,
      67,    68,    69,    30,    28,    32,    29,    31,     3,   174,
     175,   176,   177,   178,     3,     4,     5,     6,    21,    86,
      87,    88,    89,    90,    91,    92,    32,    30,    17,    32,
      19,    20,    17,    18,    23,    24,    21,   202,   203,    28,
      33,   206,    31,    32,    29,   112,    21,   114,   115,    18,
      21,     3,     4,     5,     6,    30,    29,    32,   125,    30,
      29,    32,   227,    21,    30,    17,    32,    16,    17,    18,
      29,   236,    21,   238,    32,   240,    28,   242,    29,    31,
      21,    30,    30,    32,    32,    29,   153,   154,   155,   156,
     157,    32,    29,   258,   259,   260,   261,   262,   263,   264,
      29,    16,    17,    18,    29,    32,    21,   174,   175,   176,
     177,   178,    21,     3,     4,     5,     6,    32,     3,     4,
       5,     6,    30,    32,    32,   290,   291,   292,   293,   294,
     295,   296,   297,    21,    31,   202,   203,   302,    28,   206,
      21,    31,    30,    28,    32,   310,    31,   312,    21,    30,
     315,   316,    16,    17,    18,    36,    37,    21,     3,    32,
     227,   326,    30,    30,    32,    32,    31,    31,    32,   236,
      18,   238,   337,   240,   339,   242,     3,     4,     5,     6,
      30,    29,    32,    16,    17,    18,    67,    68,    21,    31,
      31,   258,   259,   260,   261,   262,   263,   264,    30,    32,
      32,    28,    31,    29,    31,    86,    87,    88,    16,    17,
      18,     3,     4,     5,     6,    30,     9,    32,   383,   384,
      30,    29,    32,   290,   291,   292,   293,   294,   295,   296,
     297,   112,   397,   114,   115,   302,    28,    32,    21,    31,
      30,    32,    32,   310,   125,   312,    32,    30,   315,   316,
      32,    32,    35,    36,    37,    38,    39,    32,    30,   326,
      32,    32,     3,     4,     5,     6,    32,    16,    17,    18,
     337,    30,   339,    32,    32,    30,    17,    32,    19,    20,
      29,    32,    23,    24,    67,    68,    69,    28,    32,    32,
      31,    32,    32,    32,   175,   176,    29,    29,     3,     4,
       5,     6,     3,    86,    87,    88,    89,    90,    91,    92,
      32,    30,    17,    32,    19,    20,   383,   384,    23,    24,
      30,   202,    32,    28,    32,   206,    31,    32,    32,   112,
     397,   114,   115,    29,    29,     3,     4,     5,     6,    30,
      32,    32,   125,    32,    32,    16,    17,    18,    32,    29,
      21,    16,    17,    18,    32,   236,    21,   238,    29,   240,
      28,   242,    32,    31,    30,    30,    32,    32,    32,    32,
     153,   154,   155,   156,   157,    30,    32,    32,   259,    32,
      16,    17,    18,   264,    30,    21,    32,     3,     4,     5,
       6,   174,   175,   176,   177,   178,    32,    30,    30,    32,
      32,    17,    29,    19,    20,    29,    32,    23,    24,   290,
     291,   292,    28,    29,    32,    31,   297,    29,    29,   202,
     203,     3,    32,   206,    21,    30,    30,    32,    32,   310,
      30,   312,    32,    30,   315,    33,    16,    17,    18,    36,
      37,    21,    32,    19,   227,   326,    16,    17,    18,    -1,
      30,    21,    32,   236,    -1,   238,   337,   240,   339,   242,
      30,    30,    32,    32,    30,    -1,    32,    16,    17,    18,
      67,    68,    21,    -1,    -1,   258,   259,   260,   261,   262,
     263,   264,    -1,    32,     9,    16,    17,    18,    -1,    86,
      87,    16,    17,    18,    -1,    -1,    21,    22,    29,    -1,
      25,    26,   383,   384,    29,    -1,    31,   290,   291,   292,
     293,   294,   295,   296,   297,   112,   397,   114,   115,   302,
      -1,    -1,    21,    16,    17,    18,    -1,   310,   125,   312,
      -1,    30,   315,   316,    -1,    -1,    29,    36,    37,    16,
      17,    18,    -1,   326,    21,     3,     4,     5,     6,    -1,
      16,    17,    18,    30,   337,    32,   339,    -1,    30,    17,
      32,    19,    20,    29,    -1,    23,    24,    -1,    67,    68,
      28,    -1,    -1,    31,    32,    21,    -1,    -1,   175,   176,
      30,     9,    32,    30,    30,    32,    -1,    86,    16,    17,
      18,    -1,    -1,    21,    22,    -1,    -1,    25,    26,    -1,
     383,   384,    -1,    31,    32,   202,    16,    17,    18,   206,
      30,    21,    32,   112,   397,   114,    -1,    -1,    21,    29,
      -1,    67,    68,    69,    -1,    -1,   125,    30,    -1,    -1,
      16,    17,    18,    36,    37,    21,    -1,    -1,    -1,   236,
      -1,   238,    -1,   240,    30,   242,    32,    16,    17,    18,
      -1,    -1,    21,    -1,    -1,   154,   155,    -1,    -1,    -1,
      -1,   258,    -1,    32,    67,    68,   112,   264,   114,    -1,
       3,     4,     5,     6,    -1,    -1,   175,   176,    -1,   125,
      16,    17,    18,    86,    17,    21,    19,    20,    -1,    -1,
      23,    24,    -1,   290,   291,    28,    32,    -1,    31,    32,
     297,    -1,    -1,   202,   203,    -1,    -1,   206,    -1,   112,
      -1,   114,   115,   310,    -1,   312,    -1,    -1,    16,    17,
      18,    21,   125,    21,    22,    -1,    -1,    25,    26,   326,
      30,    29,    -1,     3,     4,     5,     6,    -1,    -1,   238,
     337,   240,   339,   242,    16,    17,    18,    17,    -1,    19,
      20,    -1,    -1,    23,    24,    -1,   202,    29,    28,    -1,
     206,    31,    32,    -1,    -1,   264,    -1,    67,    68,    16,
      17,    18,   175,   176,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    31,    32,   383,   384,    16,    17,
      18,   290,   238,    21,   240,    -1,   242,    -1,   297,   202,
     397,    -1,    30,   206,    32,    16,    17,    18,    -1,    -1,
      21,   310,   112,   312,   114,    -1,    42,    -1,   264,    30,
      -1,    32,    -1,    -1,    -1,   125,    -1,   326,    -1,    16,
      17,    18,    -1,    -1,    21,   238,    -1,   240,   337,   242,
     339,    -1,    68,    30,    -1,    32,    -1,    -1,    74,    75,
      -1,   297,    16,    17,    18,    -1,   302,     3,     4,     5,
       6,   264,    -1,    -1,   310,    29,   312,    -1,    16,    17,
      18,    17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,
     326,    29,    28,    29,   383,    31,   112,   290,    -1,    -1,
      -1,   337,    -1,   339,   297,    16,    17,    18,   397,    -1,
      21,    22,   202,    -1,    25,    26,   206,   310,    -1,   312,
     136,    32,    -1,    -1,    -1,    -1,    16,    17,    18,   145,
      -1,    21,    22,   326,    -1,    25,    26,     3,     4,     5,
       6,    31,    32,   159,   337,    -1,   339,   383,   238,    -1,
     240,    17,   242,    19,    20,    -1,    -1,    23,    24,    -1,
      -1,   397,    28,    -1,   180,    31,    32,     3,     4,     5,
       6,    -1,    -1,    -1,   264,    -1,    -1,    16,    17,    18,
     196,    17,    21,    19,    20,    -1,   202,    23,    24,    -1,
     383,   384,    28,    32,    -1,    31,    32,    -1,    -1,    -1,
      16,    17,    18,    -1,   397,    21,    22,   297,    -1,    25,
      26,    -1,    -1,   229,    30,    -1,    32,    -1,    -1,    -1,
     310,    -1,   312,    -1,   240,    -1,   242,    -1,    -1,    16,
      17,    18,    -1,    -1,    21,   251,   326,    16,    17,    18,
      -1,     3,     4,     5,     6,    32,    -1,   337,   264,   339,
      29,    -1,    -1,    -1,   270,    17,    -1,    19,    20,    -1,
      -1,    23,    24,    16,    17,    18,    28,   283,    21,    31,
      -1,    -1,    -1,    16,    17,    18,    -1,    30,    21,    32,
      -1,   297,    -1,     3,     4,     5,     6,    30,    -1,    32,
      -1,   307,   308,   383,    -1,    -1,   312,    17,    -1,    19,
      20,    -1,   318,    23,    24,    -1,    -1,   397,    28,    -1,
     326,    31,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      -1,   337,    -1,   339,     3,     4,     5,     6,     7,     8,
      32,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    16,    17,    18,    28,
      29,    21,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,     8,    32,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    16,    17,
      18,    28,    29,    21,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,     8,    32,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      16,    17,    18,    28,    29,    21,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,     8,    32,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    16,    17,    18,    28,    29,    21,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,     8,    32,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    16,    17,    18,    28,    29,    21,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,     8,
      32,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    -1,    -1,    23,    24,
      16,    17,    18,    28,    29,    21,    31,    -1,    33,     3,
       4,     5,     6,    -1,    30,    -1,    32,    -1,    -1,     3,
       4,     5,     6,    17,    -1,    19,    20,    -1,    -1,    23,
      24,    -1,    -1,    17,    28,    19,    20,    31,    -1,    23,
      24,    -1,    -1,    -1,    28,    -1,    -1,    31,    16,    17,
      18,    -1,    -1,    21,    22,    -1,    -1,    25,    26,    16,
      17,    18,    30,    -1,    32,    16,    17,    18,    -1,    -1,
      21,    22,    29,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    16,    17,    18,    -1,    -1,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    16,
      17,    18,    -1,    -1,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    16,    17,    18,    -1,
      -1,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    16,    17,    18,    -1,    -1,    21,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      16,    17,    18,    -1,    -1,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    16,    17,    18,
      -1,    -1,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    16,    17,    18,    -1,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    16,    17,    18,    -1,    -1,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    16,    17,
      18,    -1,    -1,    21,    22,    -1,    -1,    25,    26,    -1,
      16,    17,    18,    -1,    32,    21,    22,    -1,    -1,    25,
      26,    -1,    16,    17,    18,    -1,    32,    21,    22,    -1,
      -1,    25,    26,    -1,    16,    17,    18,    -1,    32,    21,
      22,    -1,    -1,    25,    26,    -1,    16,    17,    18,    -1,
      32,    21,    22,    -1,    -1,    25,    26,    -1,    16,    17,
      18,    -1,    32,    21,    22,    -1,    -1,    25,    26,    -1,
      16,    17,    18,    -1,    32,    21,    22,    -1,    -1,    25,
      26,    -1,    16,    17,    18,    -1,    32,    21,    22,    -1,
      -1,    25,    26,    -1,    16,    17,    18,    -1,    32,    21,
      22,    -1,    -1,    25,    26,    -1,    16,    17,    18,    -1,
      32,    21,    22,    -1,    -1,    25,    26,    -1,    16,    17,
      18,    -1,    32,    21,    16,    17,    18,    -1,    -1,    21,
      -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    30,    -1,
      32,    16,    17,    18,    -1,    -1,    21,    -1,    16,    17,
      18,    -1,    -1,    21,    -1,    30,    -1,    32,    16,    17,
      18,    29,    -1,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    29,    16,    17,    18,    -1,    -1,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    29,    16,    17,    18,    -1,
      -1,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    29,
      16,    17,    18,    -1,    -1,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    29,    16,    17,    18,    -1,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    29,    16,    17,
      18,    -1,    -1,    21,    22,    -1,    -1,    25,    26,    -1,
      -1,    29,    16,    17,    18,    -1,    -1,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    29,    16,    17,    18,    -1,
      -1,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    29,
      16,    17,    18,    -1,    -1,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    29,    16,    17,    18,    -1,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    29,    16,    17,
      18,    -1,    -1,    21,    16,    17,    18,    -1,    -1,    21,
      -1,    29,    -1,    16,    17,    18,    -1,    29,    21,    16,
      17,    18,    -1,    -1,    21,    -1,    29,    -1,    16,    17,
      18,    -1,    29,    21,    16,    17,    18,    -1,    -1,    21,
      -1,    29,    -1,    16,    17,    18,    -1,    29,    21,    16,
      17,    18,    -1,    -1,    21,    -1,    29,    -1,    16,    17,
      18,    -1,    29,    21,    16,    17,    18,    -1,    -1,    21,
      -1,    29,    -1,    16,    17,    18,    -1,    29,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    36,    37,    38,    39,    40,     3,     0,    38,
      29,    31,    12,    32,    41,    42,     3,    33,    48,    30,
      32,    49,    42,    48,     3,     4,     5,     6,     7,    10,
      11,    12,    13,    14,    15,    17,    19,    20,    23,    24,
      28,    29,    31,    34,    39,    43,    44,    45,    46,    47,
      48,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    66,     9,    31,    31,
      31,    29,    46,     3,    31,    31,    31,     3,    62,    58,
      62,    58,    62,    62,    55,    29,    21,    18,    17,    16,
      22,    25,    26,    46,    32,    55,    65,    57,     3,    47,
      29,    55,    55,     3,    32,    58,    60,    61,    62,    62,
      62,    62,    30,    32,    32,    29,    32,    32,    32,    55,
      43,    59,    29,    29,    29,     8,    29,    43,    47,    32,
      48,    33,     4,     5,     6,    28,    31,    63,    64,    66,
       3,     4,     5,     6,    28,    31,    63,    64,    66,     3,
       4,     5,     6,    17,    19,    20,    23,    24,    28,    31,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    66,
       3,     4,     5,     6,    17,    19,    20,    23,    24,    28,
      31,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      66,     3,     4,     5,     6,    28,    31,    62,    63,    64,
      66,    29,    31,    21,     7,    10,    11,    12,    13,    14,
      15,    29,    33,    39,    44,    45,    46,    48,    50,    51,
      52,    53,    54,     3,     4,     5,     6,    17,    28,    31,
      60,    61,    62,    63,    64,    66,    18,     3,    49,    55,
      31,    55,    31,    62,    58,    58,     3,     4,     5,     6,
      28,    31,    62,    63,    64,    66,    62,    55,    18,    17,
      16,    22,    25,    26,    31,     3,     4,     5,     6,    28,
      31,    62,    63,    64,    66,    58,    62,    58,     3,     4,
       5,     6,    28,    31,    62,    63,    64,    66,    62,    55,
      21,    18,    17,    16,    22,    25,    26,    31,    55,    32,
      65,    58,    31,    31,    29,    46,     3,    31,    31,    31,
      49,    29,    31,    62,    55,    17,    16,    60,     9,    34,
      32,    32,    65,    32,    32,    65,    31,    55,    32,    60,
      61,    62,    62,    62,    62,    32,    65,    31,    55,    31,
      55,    32,    58,    60,    61,    62,    62,    62,    62,    32,
      65,    32,    32,    57,    47,    29,    29,    55,    55,     3,
      34,    32,    65,    32,    61,    62,     3,    46,    47,    55,
      32,    32,    32,    65,    32,    32,    32,    65,    32,    32,
      65,    32,    32,    32,    29,    32,    32,    32,    32,    32,
      32,    32,    43,    59,    29,    29,    29,     8,    29,    43,
      47,    32,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    40,    40,
      41,    41,    42,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    44,    45,    45,    46,    46,    47,    48,    49,
      49,    50,    50,    51,    51,    52,    53,    54,    55,    55,
      56,    56,    56,    56,    56,    57,    57,    58,    58,    58,
      59,    59,    60,    60,    61,    61,    61,    62,    62,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     5,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     9,     2,     1,     1,     1,     3,     3,     2,
       0,     5,     7,     2,     3,     5,     5,     5,     1,     1,
       3,     2,     2,     3,     3,     3,     1,     2,     2,     1,
       3,     1,     3,     1,     3,     1,     2,     1,     1,     3,
       1,     1,     4,     3,     3,     1,     1,     1,     1,     1
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
#line 83 "src/bison/bison.y"
            {
	  tree = (yyval.node);
  }
#line 2301 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 89 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2311 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 94 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2319 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 100 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2327 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 103 "src/bison/bison.y"
                   {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2335 "src/bison/bison.tab.c"
    break;

  case 7: /* var_decl: TYPE ID ';'  */
#line 109 "src/bison/bison.y"
                    {
		(yyval.node) = createNode("var_decl");
		
		Node * aux1 = createNode("\0");
		aux1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->leaf1 = aux1;

		Node *aux2 = createNode("\0");
		aux2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = aux2;

		insertSymbol(symbolTable, (yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 2353 "src/bison/bison.tab.c"
    break;

  case 8: /* fun_decl: TYPE ID '(' params ')' block_stmt  */
#line 125 "src/bison/bison.y"
                                          {
		(yyval.node) = createNode("fun_decl");
		
		Node * aux1 = createNode("\0");
		aux1->token = allocateToken((yyvsp[-5].token).lexeme, (yyvsp[-5].token).line, (yyvsp[-5].token).column);
		(yyval.node)->leaf1 = aux1;

		Node *aux2 = createNode("\0");
		aux2->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = aux2;
		
		(yyval.node)->leaf3 = (yyvsp[-2].node);
		(yyval.node)->leaf4 = (yyvsp[0].node);

		insertSymbol(symbolTable, (yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-5].token).lexeme, "fun",(yyvsp[-4].token).scope);
	}
#line 2374 "src/bison/bison.tab.c"
    break;

  case 9: /* fun_decl: TYPE ID '(' ')' block_stmt  */
#line 141 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("fun_decl");
		
		Node * aux1 = createNode("\0");
		aux1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf1 = aux1;

		Node *aux2 = createNode("\0");
		aux2->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		(yyval.node)->leaf2 = aux2;
		
		(yyval.node)->leaf3 = (yyvsp[0].node);

		insertSymbol(symbolTable, (yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun", (yyvsp[-3].token).scope);
	}
#line 2394 "src/bison/bison.tab.c"
    break;

  case 10: /* params: params ',' param_decl  */
#line 159 "src/bison/bison.y"
                               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2402 "src/bison/bison.tab.c"
    break;

  case 11: /* params: param_decl  */
#line 162 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("param_decl");
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2411 "src/bison/bison.tab.c"
    break;

  case 12: /* param_decl: TYPE ID  */
#line 169 "src/bison/bison.y"
                {
		char type[100];
		strcpy(type, (yyvsp[-1].token).lexeme);
		
		(yyval.node) = createNode(type);
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		insertSymbol(symbolTable, (yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2425 "src/bison/bison.tab.c"
    break;

  case 13: /* statement: exp_stmt  */
#line 181 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2433 "src/bison/bison.tab.c"
    break;

  case 14: /* statement: block_stmt  */
#line 184 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2441 "src/bison/bison.tab.c"
    break;

  case 15: /* statement: if_stmt  */
#line 187 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2449 "src/bison/bison.tab.c"
    break;

  case 16: /* statement: return_stmt  */
#line 190 "src/bison/bison.y"
                      {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2457 "src/bison/bison.tab.c"
    break;

  case 17: /* statement: write_stmt  */
#line 193 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2465 "src/bison/bison.tab.c"
    break;

  case 18: /* statement: writeln_stmt  */
#line 196 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2473 "src/bison/bison.tab.c"
    break;

  case 19: /* statement: read_stmt  */
#line 199 "src/bison/bison.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2481 "src/bison/bison.tab.c"
    break;

  case 20: /* statement: var_decl  */
#line 202 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("var_decl");
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2490 "src/bison/bison.tab.c"
    break;

  case 21: /* statement: for_stmt  */
#line 206 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2498 "src/bison/bison.tab.c"
    break;

  case 22: /* for_stmt: FOR '(' assing_exp ';' rel_exp ';' assing_exp ')' block_stmt  */
#line 212 "src/bison/bison.y"
                                                                     {
		(yyval.node) = createNode("for_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken((yyvsp[-8].token).lexeme, (yyvsp[-8].token).line, (yyvsp[-8].token).column);
		
		(yyval.node)->leaf1 = aux;
		(yyval.node)->leaf2 = (yyvsp[-6].node);
		(yyval.node)->leaf3 = (yyvsp[-4].node);
		(yyval.node)->leaf4 = (yyvsp[-2].node);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2515 "src/bison/bison.tab.c"
    break;

  case 23: /* exp_stmt: exp ';'  */
#line 227 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2523 "src/bison/bison.tab.c"
    break;

  case 24: /* exp_stmt: ';'  */
#line 230 "src/bison/bison.y"
              {
		/* do nothing */
	}
#line 2531 "src/bison/bison.tab.c"
    break;

  case 25: /* exp: assing_exp  */
#line 236 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2539 "src/bison/bison.tab.c"
    break;

  case 26: /* exp: simple_exp  */
#line 239 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2547 "src/bison/bison.tab.c"
    break;

  case 27: /* assing_exp: ID ASSIGN exp  */
#line 245 "src/bison/bison.y"
                      {
		(yyval.node) = createNode("assing_exp");

		Node* aux1 = createNode("\0");
		aux1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		Node* aux2 = createNode("\0");
		aux2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf1 = aux1;
		(yyval.node)->leaf2 = aux2;
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2565 "src/bison/bison.tab.c"
    break;

  case 28: /* block_stmt: '{' stmt_list '}'  */
#line 261 "src/bison/bison.y"
                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2573 "src/bison/bison.tab.c"
    break;

  case 29: /* stmt_list: stmt_list statement  */
#line 268 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("stmt_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2583 "src/bison/bison.tab.c"
    break;

  case 31: /* if_stmt: IF '(' bin_exp ')' statement  */
#line 277 "src/bison/bison.y"
                                                {
		(yyval.node) = createNode("if_stmt");

		Node *aux1 = createNode("\0");
		aux1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf1 = aux1;
		(yyval.node)->leaf2 = (yyvsp[-2].node);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2598 "src/bison/bison.tab.c"
    break;

  case 32: /* if_stmt: IF '(' bin_exp ')' statement ELSE statement  */
#line 287 "src/bison/bison.y"
                                                      {
		(yyval.node) = createNode("if_stmt");

		Node *aux1 = createNode("\0");
		aux1->token = allocateToken((yyvsp[-6].token).lexeme, (yyvsp[-6].token).line, (yyvsp[-6].token).column);

		(yyval.node)->leaf1 = aux1;
		(yyval.node)->leaf2 = (yyvsp[-4].node);
		(yyval.node)->leaf3 = (yyvsp[-2].node);
		(yyval.node)->leaf4 = (yyvsp[0].node);
		(yyval.node)->leaf4->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2615 "src/bison/bison.tab.c"
    break;

  case 33: /* return_stmt: RETURN ';'  */
#line 302 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("return_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf1 = aux;
	}
#line 2628 "src/bison/bison.tab.c"
    break;

  case 34: /* return_stmt: RETURN exp ';'  */
#line 310 "src/bison/bison.y"
                         {
		(yyval.node) = createNode("return_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf1 = aux;
		(yyval.node)->leaf2 = (yyvsp[-1].node);
	}
#line 2642 "src/bison/bison.tab.c"
    break;

  case 35: /* write_stmt: WRITE '(' simple_exp ')' ';'  */
#line 322 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("write_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf1 = aux;
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2656 "src/bison/bison.tab.c"
    break;

  case 36: /* writeln_stmt: WRITELN '(' simple_exp ')' ';'  */
#line 334 "src/bison/bison.y"
                                       {
		(yyval.node) = createNode("writeln_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf1 = aux;
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2670 "src/bison/bison.tab.c"
    break;

  case 37: /* read_stmt: READ '(' ID ')' ';'  */
#line 346 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("read_stmt");

		Node *aux = createNode("\0");
		aux->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf1 = aux;

		char id[100];
		strcpy(id, "\0");
		
		Node* aux2 = createNode(id);
		aux2->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);


		(yyval.node)->leaf2 = aux2;
	}
#line 2692 "src/bison/bison.tab.c"
    break;

  case 38: /* simple_exp: bin_exp  */
#line 366 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2700 "src/bison/bison.tab.c"
    break;

  case 39: /* simple_exp: list_exp  */
#line 369 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2708 "src/bison/bison.tab.c"
    break;

  case 40: /* list_exp: factor ':' factor  */
#line 375 "src/bison/bison.y"
                          {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2719 "src/bison/bison.tab.c"
    break;

  case 41: /* list_exp: '?' factor  */
#line 381 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2729 "src/bison/bison.tab.c"
    break;

  case 42: /* list_exp: '%' factor  */
#line 386 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2739 "src/bison/bison.tab.c"
    break;

  case 43: /* list_exp: factor MAP factor  */
#line 391 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2750 "src/bison/bison.tab.c"
    break;

  case 44: /* list_exp: factor FILTER factor  */
#line 397 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2761 "src/bison/bison.tab.c"
    break;

  case 46: /* bin_exp: unary_log_exp  */
#line 407 "src/bison/bison.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2769 "src/bison/bison.tab.c"
    break;

  case 49: /* unary_log_exp: rel_exp  */
#line 415 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2777 "src/bison/bison.tab.c"
    break;

  case 50: /* rel_exp: rel_exp REL_OP sum_exp  */
#line 421 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("rel_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2788 "src/bison/bison.tab.c"
    break;

  case 51: /* rel_exp: sum_exp  */
#line 427 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2796 "src/bison/bison.tab.c"
    break;

  case 52: /* sum_exp: sum_exp SUM_OP mul_exp  */
#line 433 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("sum_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2807 "src/bison/bison.tab.c"
    break;

  case 53: /* sum_exp: mul_exp  */
#line 439 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2815 "src/bison/bison.tab.c"
    break;

  case 54: /* mul_exp: mul_exp MUL_OP factor  */
#line 445 "src/bison/bison.y"
                              {
		(yyval.node) = createNode("mul_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2827 "src/bison/bison.tab.c"
    break;

  case 55: /* mul_exp: factor  */
#line 452 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2835 "src/bison/bison.tab.c"
    break;

  case 56: /* mul_exp: SUM_OP factor  */
#line 455 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2845 "src/bison/bison.tab.c"
    break;

  case 57: /* factor: immutable  */
#line 463 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2853 "src/bison/bison.tab.c"
    break;

  case 58: /* factor: ID  */
#line 466 "src/bison/bison.y"
             {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2862 "src/bison/bison.tab.c"
    break;

  case 59: /* immutable: '(' simple_exp ')'  */
#line 473 "src/bison/bison.y"
                           {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2870 "src/bison/bison.tab.c"
    break;

  case 60: /* immutable: call  */
#line 476 "src/bison/bison.y"
               {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2878 "src/bison/bison.tab.c"
    break;

  case 61: /* immutable: constant  */
#line 479 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2886 "src/bison/bison.tab.c"
    break;

  case 62: /* call: ID '(' args ')'  */
#line 485 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("call");
		(yyval.node)->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		(yyval.node)->leaf1 = (yyvsp[-1].node);
	}
#line 2896 "src/bison/bison.tab.c"
    break;

  case 63: /* call: ID '(' ')'  */
#line 490 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
	}
#line 2905 "src/bison/bison.tab.c"
    break;

  case 66: /* constant: NIL  */
#line 502 "src/bison/bison.y"
            {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2914 "src/bison/bison.tab.c"
    break;

  case 67: /* constant: INT  */
#line 506 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2923 "src/bison/bison.tab.c"
    break;

  case 68: /* constant: FLOAT  */
#line 510 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2932 "src/bison/bison.tab.c"
    break;

  case 69: /* constant: STRING  */
#line 514 "src/bison/bison.y"
                 {		
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2941 "src/bison/bison.tab.c"
    break;


#line 2945 "src/bison/bison.tab.c"

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

#line 520 "src/bison/bison.y"


extern void yyerror(const char* s)
{
	printf("Syntax Error:\n%s\n", s);
}

int main(int argc, char **argv){
	initializeTable(symbolTable);
	initializeScopeStack(scopeStack);
    yyparse();
	printf("\n\n--------------------------------------------------------------- TREE ---------------------------------------------------------------- \n\n");
	// printTree(tree, 1);
	printSymbolTable(symbolTable);
    yylex_destroy();
    return 0;
}
