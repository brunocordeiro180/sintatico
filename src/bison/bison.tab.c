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
#include <stdio.h>
#include <stdlib.h>

Symbol symbolTable[1000];

extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* s);
extern int scopeStack[100];
extern int scopeId;


#line 87 "src/bison/bison.tab.c"

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
  YYSYMBOL_LIST_OP = 18,                   /* LIST_OP  */
  YYSYMBOL_UNARY_LIST_OP = 19,             /* UNARY_LIST_OP  */
  YYSYMBOL_LOG_OP = 20,                    /* LOG_OP  */
  YYSYMBOL_EXCLAMATION = 21,               /* EXCLAMATION  */
  YYSYMBOL_SUM_OP = 22,                    /* SUM_OP  */
  YYSYMBOL_MUL_OP = 23,                    /* MUL_OP  */
  YYSYMBOL_REL_OP = 24,                    /* REL_OP  */
  YYSYMBOL_UNARY_LOG_OP = 25,              /* UNARY_LOG_OP  */
  YYSYMBOL_26_ = 26,                       /* ';'  */
  YYSYMBOL_27_ = 27,                       /* ','  */
  YYSYMBOL_28_ = 28,                       /* '('  */
  YYSYMBOL_29_ = 29,                       /* ')'  */
  YYSYMBOL_30_ = 30,                       /* '{'  */
  YYSYMBOL_31_ = 31,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_S = 33,                         /* S  */
  YYSYMBOL_decl_list = 34,                 /* decl_list  */
  YYSYMBOL_decl = 35,                      /* decl  */
  YYSYMBOL_var_decl = 36,                  /* var_decl  */
  YYSYMBOL_fun_decl = 37,                  /* fun_decl  */
  YYSYMBOL_params = 38,                    /* params  */
  YYSYMBOL_param_decl = 39,                /* param_decl  */
  YYSYMBOL_statement = 40,                 /* statement  */
  YYSYMBOL_for_stmt = 41,                  /* for_stmt  */
  YYSYMBOL_exp_stmt = 42,                  /* exp_stmt  */
  YYSYMBOL_exp = 43,                       /* exp  */
  YYSYMBOL_assing_exp = 44,                /* assing_exp  */
  YYSYMBOL_block_stmt = 45,                /* block_stmt  */
  YYSYMBOL_stmt_list = 46,                 /* stmt_list  */
  YYSYMBOL_if_stmt = 47,                   /* if_stmt  */
  YYSYMBOL_return_stmt = 48,               /* return_stmt  */
  YYSYMBOL_write_stmt = 49,                /* write_stmt  */
  YYSYMBOL_writeln_stmt = 50,              /* writeln_stmt  */
  YYSYMBOL_read_stmt = 51,                 /* read_stmt  */
  YYSYMBOL_simple_exp = 52,                /* simple_exp  */
  YYSYMBOL_list_exp = 53,                  /* list_exp  */
  YYSYMBOL_unary_list_exp = 54,            /* unary_list_exp  */
  YYSYMBOL_bin_exp = 55,                   /* bin_exp  */
  YYSYMBOL_unary_log_exp = 56,             /* unary_log_exp  */
  YYSYMBOL_rel_exp = 57,                   /* rel_exp  */
  YYSYMBOL_sum_exp = 58,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 59,                   /* mul_exp  */
  YYSYMBOL_factor = 60,                    /* factor  */
  YYSYMBOL_immutable = 61,                 /* immutable  */
  YYSYMBOL_call = 62,                      /* call  */
  YYSYMBOL_args = 63,                      /* args  */
  YYSYMBOL_constant = 64                   /* constant  */
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
#define YYLAST   1760

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  247

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    29,     2,     2,    27,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    45,    46,    50,    51,    55,    61,    64,
      70,    71,    75,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    93,    97,    98,   102,   103,   107,   111,   115,
     116,   117,   121,   122,   126,   127,   131,   135,   139,   143,
     144,   148,   149,   153,   157,   158,   162,   163,   164,   168,
     169,   173,   174,   178,   179,   180,   184,   185,   189,   190,
     191,   195,   196,   200,   201,   205,   206,   207,   208
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
  "LIST_CONSTRUCTOR", "NIL", "RETURN", "TYPE", "LIST_OP", "UNARY_LIST_OP",
  "LOG_OP", "EXCLAMATION", "SUM_OP", "MUL_OP", "REL_OP", "UNARY_LOG_OP",
  "';'", "','", "'('", "')'", "'{'", "'}'", "$accept", "S", "decl_list",
  "decl", "var_decl", "fun_decl", "params", "param_decl", "statement",
  "for_stmt", "exp_stmt", "exp", "assing_exp", "block_stmt", "stmt_list",
  "if_stmt", "return_stmt", "write_stmt", "writeln_stmt", "read_stmt",
  "simple_exp", "list_exp", "unary_list_exp", "bin_exp", "unary_log_exp",
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
     275,   276,   277,   278,   279,   280,    59,    44,    40,    41,
     123,   125
};
#endif

#define YYPACT_NINF (-187)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,    96,   105,     7,    11,    16,    20,   116,  -187,    22,
      27,    -8,   118,    48,   150,   253,   388,   716,    42,   124,
      48,  1604,   103,  1609,  1614,   134,   168,   186,   201,   202,
    1619,  1357,   237,   254,   556,   115,   556,   745,    26,   774,
     716,   803,   832,   245,   270,   861,   277,   890,   919,   948,
     977,  1006,   283,   177,   266,    14,    78,   158,   574,  1624,
    1629,  1634,  1639,  1644,   413,    43,  1365,   282,    26,    26,
     346,   630,   351,  1035,   314,   344,   333,  1597,   303,  1649,
     318,   327,   354,  1064,    58,   373,   556,    61,    61,   115,
     362,  1654,   414,   435,   368,   372,   383,    64,   421,   425,
    1093,  1659,   336,   394,   620,  1664,  1669,  1391,  1674,   426,
     433,   454,   395,   244,   495,  1122,  1151,  1180,   658,   507,
     451,   480,  1209,   456,   451,  1238,   716,   216,   198,   319,
     492,   512,   489,   630,   309,   630,    26,    17,    44,    79,
     126,    87,   141,  1319,  1385,  1513,  1521,  1529,   384,   271,
     467,   484,   524,   493,  1422,   330,  1422,    26,    74,   140,
     -14,   208,   399,  1535,   599,  1433,  1441,  1449,  1457,  1267,
     630,   716,   296,   447,  1351,  1416,  1679,  1430,    26,   349,
    1684,  1689,  1694,  1699,  1704,   244,   488,   474,   587,    50,
     204,  1543,   226,   497,   498,   374,   374,   309,  1325,   146,
     249,  1465,   340,   509,   523,  1422,  1426,  1426,   330,   248,
     518,  1330,  1709,   526,   244,  1430,   408,  1396,  1296,  1551,
     537,  1559,    56,   184,  1567,  1575,  1473,   543,  1481,   156,
     402,  1581,  1489,  1497,   687,  1714,   578,  1719,  1724,  1729,
     128,   534,   544,   550,  1589,  1505,  1734
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
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,  -187,   549,    94,  -187,  -187,   563,  -187,  -187,
    -187,   -30,   -68,   -10,   -35,  -187,  -187,  -187,  -187,  -187,
     -12,   461,    21,   250,   332,   443,   432,   369,   -17,    46,
     176,  -186,   239
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    39,     6,    14,    15,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    93,   147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    74,   220,    18,    99,    82,   205,    -2,     1,    12,
      65,    -4,   227,   -39,    60,   -39,    -5,    60,    79,    60,
      -6,    13,    -3,    60,     1,   236,    81,    -7,    -4,   127,
     128,   129,   130,    -5,    86,   194,    90,    -6,    54,    -3,
     -39,   131,    -9,    -8,    -7,   132,   -40,   133,   134,    60,
     165,   135,    54,   123,   136,    92,    94,    95,   -28,    -9,
      -8,    54,   -42,    61,    21,    77,    23,    24,   -43,    60,
      60,    60,   106,   -42,   -41,   -28,    30,    61,    17,   -43,
      61,    61,    61,    35,   170,   -41,    61,    54,   159,    38,
     165,   187,   204,   112,     5,   114,   181,     5,   -45,   170,
       7,   -40,   118,   -40,   -45,     8,   102,   -48,   -39,    60,
     122,   195,    61,   166,   125,    66,   -48,   191,    21,    77,
      23,    24,    16,   -57,   193,   -57,   -57,   -57,   159,   -57,
      30,    67,    61,    61,    61,    61,   210,   165,   201,   165,
     217,    12,    10,    38,    11,   203,   -45,    54,   -57,   242,
     -57,   -57,   -57,   166,    60,   -45,   188,   -57,   -42,   182,
     212,   -50,    68,   196,   -43,   -50,   213,   -42,   181,   -42,
     -50,   165,    61,   -43,   -41,   -43,    92,    19,   -48,    20,
     225,   165,    87,   -41,   -48,   -41,    92,   241,   165,   165,
     165,   233,    54,    62,   165,    85,    69,   181,   239,    92,
     166,   166,   166,   -40,   -49,   243,   196,    62,   -49,   159,
      62,    62,    62,   -49,    70,   222,    62,    61,   -57,   159,
     -57,   -57,   -57,   182,   -47,   229,   188,   -57,   -45,    71,
      72,   182,   159,   -47,   166,   -45,   -68,   -45,   -68,   -68,
     -68,    75,    62,   167,   166,   -68,   -46,   172,   173,   174,
     175,   166,   166,   166,   166,   -46,    63,   166,    76,   176,
     182,   182,    62,    62,    62,    62,   177,    55,   -44,   -47,
      63,    83,   178,    63,    63,    63,   -47,   -44,   -47,    63,
     -11,    55,   -11,   167,   -42,   148,   149,   150,   151,   183,
      55,   -57,   -42,   -57,   -57,   -57,   -25,   152,   -57,   198,
     -57,   153,    62,   154,   155,    63,   168,   156,    84,   -26,
     157,    91,   127,   128,   129,   130,    55,   160,   -68,   -68,
     -68,    97,   -68,   -47,   131,    63,    63,    63,    63,   -47,
     167,   167,   167,   148,   149,   150,   151,   136,   -46,   -66,
     100,   -66,   -66,   -66,   -46,   152,   168,    62,   -66,    56,
      96,   -43,   184,   183,   -41,    98,   101,   160,   157,   -43,
     -46,   183,   -41,    56,   167,    63,    78,   -46,    80,   -46,
     169,   214,    56,   -50,   167,   -50,    55,   127,   128,   129,
     130,   167,   167,   167,   167,   -30,    59,   167,   -27,   131,
     183,   183,    33,   168,   168,   168,   134,   109,    56,   161,
      59,   110,   136,    59,   -68,    59,   -68,   -68,   -68,    59,
      63,   -68,   111,   -68,   -44,   -12,   184,   -12,   103,   -48,
     -44,    55,   -44,   206,   184,   171,   -48,   168,   -48,   -44,
     214,   -44,   -49,    66,   -49,    59,   164,   168,   160,   161,
     -10,   -64,   -10,   -64,   168,   168,   168,   168,   160,    58,
     168,   113,   115,   184,   184,    59,    59,   105,    56,   116,
      57,   160,   107,    58,   108,   190,    58,   192,    58,   -57,
     -57,   -57,    58,   -57,    57,   211,   164,    57,    53,    57,
     117,   126,   180,    57,   186,   124,   200,   -66,   202,   -66,
     -66,   -66,    53,   189,   -66,    59,   -66,   199,    58,   163,
     217,    53,   209,    56,   -67,   218,   -67,   -67,   -67,    57,
     162,   -67,   -67,   -67,   -67,   -67,   -67,   132,    58,   104,
     161,   -67,   -63,   164,   -63,   164,   221,    53,   158,    57,
     161,   185,   -65,   121,   -65,   -65,   -65,   230,   228,   163,
      59,   -65,   153,   161,   -65,   179,   -65,   -65,   -65,   234,
     162,   -65,     9,   -65,   180,   237,   119,   164,    58,    21,
      77,    23,    24,   -27,   107,   224,   244,   164,   158,    57,
     107,    30,   245,   -25,   164,   164,   232,    34,    35,   -26,
     164,    36,    64,   238,    38,     0,   163,    53,   163,     0,
     148,   149,   150,   151,   -50,     0,    88,   162,   -50,   162,
     -50,     0,   152,    58,     0,   107,   153,   246,   154,   155,
       0,     0,   156,     0,    57,   157,   219,   216,     0,   -52,
     163,   -52,   208,   -52,     0,     0,   -52,   223,   -52,     0,
     163,   162,    53,   127,   128,   129,   130,   163,   231,     0,
     -49,   162,    88,   163,   -49,   131,   -49,     0,   162,   158,
       0,   133,   134,     0,   162,   135,     0,     0,   136,   158,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   120,
       0,   -32,   158,   -32,   -32,   -32,     0,   -32,     0,   -32,
     -32,     0,     0,   -32,   -32,     0,   -32,     0,   -32,   -32,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,     0,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,
       0,     0,   -28,   -28,     0,   -28,     0,   -28,   -28,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,    29,
       0,    30,    31,    32,     0,    33,     0,    34,    35,     0,
       0,    36,    37,     0,    38,     0,   126,   -29,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,     0,
     -24,   -24,   -24,     0,   -24,     0,   -24,   -24,     0,     0,
     -24,   -24,     0,   -24,     0,   -24,   -24,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,   -20,
     -20,   -20,     0,   -20,     0,   -20,   -20,     0,     0,   -20,
     -20,     0,   -20,     0,   -20,   -20,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,     0,   -21,   -21,
     -21,     0,   -21,     0,   -21,   -21,     0,     0,   -21,   -21,
       0,   -21,     0,   -21,   -21,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,     0,     0,   -13,     0,   -13,   -13,   -13,
       0,   -13,     0,   -13,   -13,     0,     0,   -13,   -13,     0,
     -13,     0,   -13,   -13,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,     0,     0,   -14,     0,   -14,   -14,   -14,     0,
     -14,     0,   -14,   -14,     0,     0,   -14,   -14,     0,   -14,
       0,   -14,   -14,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,     0,     0,   -15,     0,   -15,   -15,   -15,     0,   -15,
       0,   -15,   -15,     0,     0,   -15,   -15,     0,   -15,     0,
     -15,   -15,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
       0,     0,   -16,     0,   -16,   -16,   -16,     0,   -16,     0,
     -16,   -16,     0,     0,   -16,   -16,     0,   -16,     0,   -16,
     -16,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,
       0,   -17,     0,   -17,   -17,   -17,     0,   -17,     0,   -17,
     -17,     0,     0,   -17,   -17,     0,   -17,     0,   -17,   -17,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,
     -18,     0,   -18,   -18,   -18,     0,   -18,     0,   -18,   -18,
       0,     0,   -18,   -18,     0,   -18,     0,   -18,   -18,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,
       0,   -19,   -19,   -19,     0,   -19,     0,   -19,   -19,     0,
       0,   -19,   -19,     0,   -19,     0,   -19,   -19,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,     0,     0,
     -34,   -34,     0,   -34,     0,   -34,   -34,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,   -23,
     -23,   -23,     0,   -23,     0,   -23,   -23,     0,     0,   -23,
     -23,     0,   -23,     0,   -23,   -23,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,   -35,     0,   -35,   -35,
     -35,     0,   -35,     0,   -35,   -35,     0,     0,   -35,   -35,
       0,   -35,     0,   -35,   -35,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,   -36,     0,   -36,   -36,   -36,
       0,   -36,     0,   -36,   -36,     0,     0,   -36,   -36,     0,
     -36,     0,   -36,   -36,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,   -37,     0,   -37,   -37,   -37,     0,
     -37,     0,   -37,   -37,     0,     0,   -37,   -37,     0,   -37,
       0,   -37,   -37,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,     0,     0,   -38,     0,   -38,   -38,   -38,     0,   -38,
       0,   -38,   -38,     0,     0,   -38,   -38,     0,   -38,     0,
     -38,   -38,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,     0,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,     0,     0,   -33,   -33,     0,   -33,     0,   -33,
     -33,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,   -22,     0,   -22,   -22,   -22,     0,   -22,     0,   -22,
     -22,     0,     0,   -22,   -22,     0,   -22,     0,   -22,   -22,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,
      -7,     0,    -7,    -7,    -7,     0,    -7,     0,    -7,    -7,
       0,     0,    -7,    -7,     0,    -7,     0,    -7,    -7,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,
       0,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,     0,
       0,   -28,   -28,     0,   -28,     0,   -28,   -28,   148,   149,
     150,   151,     0,   148,   149,   150,   151,     0,     0,   -52,
     152,   -52,   197,   -52,   153,   152,   154,   155,   -52,   153,
     156,   154,   155,   157,   226,   156,     0,     0,   157,   235,
      21,    22,    23,    24,     0,     0,     0,     0,    21,    22,
      23,    24,    30,   -66,   -66,   -66,    33,   -66,    34,    35,
      30,     0,    36,    73,    33,    38,    34,    35,     0,     0,
      36,     0,     0,    38,   148,   149,   150,   151,     0,   127,
     240,   129,   130,     0,     0,   -54,   152,   -54,   -54,   -54,
     153,   131,   154,   155,   -54,   132,   156,   133,   134,   157,
       0,   135,     0,     0,   136,   148,   149,   150,   151,   148,
     149,   150,   151,   172,   173,   174,   175,   152,   -67,   -67,
     -67,   152,   -67,   154,   155,   176,     0,   156,   155,     0,
     157,     0,     0,   -54,   157,   -54,   -54,   -54,   178,     0,
     -54,   -56,   -54,   -56,   -56,   -56,     0,     0,   -56,   -59,
     -56,   -59,   -59,   -59,     0,     0,   -59,   -60,   -59,   -60,
     -60,   -60,     0,     0,   -60,   -55,   -60,   -55,   -55,   -55,
       0,     0,   -55,   -62,   -55,   -62,   -62,   -62,     0,     0,
     -62,   -58,   -62,   -58,   -58,   -58,     0,     0,   -58,   -51,
     -58,   -51,   208,   -51,     0,     0,   -51,   -53,   -51,   -53,
     -53,   -53,     0,     0,   -53,   -61,   -53,   -61,   -61,   -61,
       0,     0,   -61,   -56,   -61,   -56,   -56,   -56,     0,     0,
       0,   -59,   -56,   -59,   -59,   -59,     0,     0,     0,   -60,
     -59,   -60,   -60,   -60,     0,   -50,     0,   207,   -60,   -50,
       0,     0,   -50,   -55,   -50,   -55,   -55,   -55,     0,     0,
       0,   -62,   -55,   -62,   -62,   -62,     0,     0,     0,   -58,
     -62,   -58,   -58,   -58,     0,     0,     0,   -51,   -58,   -51,
     197,   -51,     0,     0,     0,   -53,   -51,   -53,   -53,   -53,
       0,   -49,     0,   207,   -53,   -49,     0,     0,   -49,   -61,
     -49,   -61,   -61,   -61,     0,     0,     0,   -57,   -61,   -57,
     -57,   -57,     0,   -57,   -68,    67,   -68,   -68,   -68,   -66,
     -68,   -66,   -66,   -66,   -67,   -66,   -67,   -67,   -67,   -65,
     -67,   -65,   -65,   -65,   -52,   -65,   -52,    89,   -52,   -54,
     -52,   -54,   -54,   -54,   -56,   -54,   -56,   -56,   -56,   -59,
     -56,   -59,   -59,   -59,   -60,   -59,   -60,   -60,   -60,   -55,
     -60,   -55,   -55,   -55,   -62,   -55,   -62,   -62,   -62,   -58,
     -62,   -58,   -58,   -58,   -51,   -58,   -51,    89,   -51,   -53,
     -51,   -53,   -53,   -53,   -61,   -53,   -61,   -61,   -61,     0,
     -61,   -65,   -65,   -65,     0,   -65,   -52,   215,   -52,     0,
     -52,   -54,   -54,   -54,     0,   -54,   -56,   -56,   -56,     0,
     -56,   -59,   -59,   -59,     0,   -59,   -60,   -60,   -60,     0,
     -60,   -55,   -55,   -55,     0,   -55,   -62,   -62,   -62,     0,
     -62,   -58,   -58,   -58,     0,   -58,   -51,   215,   -51,     0,
     -51,   -53,   -53,   -53,     0,   -53,   -61,   -61,   -61,     0,
     -61
};

static const yytype_int16 yycheck[] =
{
      17,    31,   188,    13,    72,    40,    20,     0,    17,    17,
      20,     0,   198,    27,    31,    29,     0,    34,    35,    36,
       0,    29,     0,    40,    17,   211,    38,     0,    17,     3,
       4,     5,     6,    17,    20,    18,    66,    17,    17,    17,
      26,    15,     0,     0,    17,    19,    29,    21,    22,    66,
      67,    25,    31,   121,    28,    67,    68,    69,     0,    17,
      17,    40,    18,    17,     3,     4,     5,     6,    18,    86,
      87,    88,    89,    29,    18,    17,    15,    31,    30,    29,
      34,    35,    36,    22,    20,    29,    40,    66,    67,    28,
     107,   126,    18,    29,     0,   107,   113,     3,    20,    20,
       4,    27,   112,    29,    26,     0,    85,    20,    29,   126,
     120,    24,    66,    67,   124,    12,    29,   134,     3,     4,
       5,     6,     4,    20,   136,    22,    23,    24,   107,    26,
      15,    28,    86,    87,    88,    89,   171,   154,   155,   156,
      12,    17,    26,    28,    28,   157,    20,   126,    20,   217,
      22,    23,    24,   107,   171,    29,    28,    29,    18,   113,
     177,    20,    28,    22,    18,    24,   178,    27,   185,    29,
      29,   188,   126,    27,    18,    29,   188,    27,    20,    29,
     197,   198,    24,    27,    26,    29,   198,   217,   205,   206,
     207,   208,   171,    17,   211,    18,    28,   214,   215,   211,
     154,   155,   156,    26,    20,   217,    22,    31,    24,   188,
      34,    35,    36,    29,    28,   194,    40,   171,    20,   198,
      22,    23,    24,   177,    20,   204,    28,    29,    20,    28,
      28,   185,   211,    29,   188,    27,    20,    29,    22,    23,
      24,     4,    66,    67,   198,    29,    20,     3,     4,     5,
       6,   205,   206,   207,   208,    29,    17,   211,     4,    15,
     214,   215,    86,    87,    88,    89,    22,    17,    20,    20,
      31,    26,    28,    34,    35,    36,    27,    29,    29,    40,
      27,    31,    29,   107,    18,     3,     4,     5,     6,   113,
      40,    20,    26,    22,    23,    24,    26,    15,    27,    28,
      29,    19,   126,    21,    22,    66,    67,    25,    31,    26,
      28,    29,     3,     4,     5,     6,    66,    67,    22,    23,
      24,    71,    26,    20,    15,    86,    87,    88,    89,    26,
     154,   155,   156,     3,     4,     5,     6,    28,    20,    20,
      26,    22,    23,    24,    26,    15,   107,   171,    29,    17,
       4,    18,   113,   177,    18,     4,    29,   107,    28,    26,
      20,   185,    26,    31,   188,   126,    34,    27,    36,    29,
      26,    22,    40,    24,   198,    26,   126,     3,     4,     5,
       6,   205,   206,   207,   208,    31,    17,   211,    26,    15,
     214,   215,    19,   154,   155,   156,    22,    29,    66,    67,
      31,    29,    28,    34,    20,    36,    22,    23,    24,    40,
     171,    27,    29,    29,    20,    27,   177,    29,    86,    20,
      26,   171,    20,    24,   185,    30,    27,   188,    29,    27,
      22,    29,    24,    12,    26,    66,    67,   198,   188,   107,
      27,    27,    29,    29,   205,   206,   207,   208,   198,    17,
     211,    26,    26,   214,   215,    86,    87,    88,   126,    26,
      17,   211,    27,    31,    29,   133,    34,   135,    36,    22,
      23,    24,    40,    26,    31,    28,   107,    34,    17,    36,
      26,    30,   113,    40,     4,    29,   154,    20,   156,    22,
      23,    24,    31,     4,    27,   126,    29,     4,    66,    67,
      12,    40,   170,   171,    20,    31,    22,    23,    24,    66,
      67,    27,    20,    29,    22,    23,    24,    19,    86,    87,
     188,    29,    27,   154,    29,   156,    29,    66,    67,    86,
     198,    24,    20,    26,    22,    23,    24,   205,    29,   107,
     171,    29,    19,   211,    20,   113,    22,    23,    24,    31,
     107,    27,     3,    29,   185,    29,   113,   188,   126,     3,
       4,     5,     6,    29,    27,   196,    29,   198,   107,   126,
      27,    15,    29,    29,   205,   206,   207,    21,    22,    29,
     211,    25,    19,   214,    28,    -1,   154,   126,   156,    -1,
       3,     4,     5,     6,    20,    -1,    22,   154,    24,   156,
      26,    -1,    15,   171,    -1,    27,    19,    29,    21,    22,
      -1,    -1,    25,    -1,   171,    28,    29,   185,    -1,    20,
     188,    22,    23,    24,    -1,    -1,    27,   195,    29,    -1,
     198,   188,   171,     3,     4,     5,     6,   205,   206,    -1,
      20,   198,    22,   211,    24,    15,    26,    -1,   205,   188,
      -1,    21,    22,    -1,   211,    25,    -1,    -1,    28,   198,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,   211,    15,    16,    17,    -1,    19,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    31,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    -1,    15,    16,    17,    -1,    19,    -1,    21,    22,
      -1,    -1,    25,    26,    -1,    28,    -1,    30,    31,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,    16,    17,    -1,    19,    -1,    21,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    31,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    19,    -1,    21,    22,    -1,    -1,
      25,    26,    -1,    28,    -1,    30,    31,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    15,
      16,    17,    -1,    19,    -1,    21,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    31,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    15,    16,
      17,    -1,    19,    -1,    21,    22,    -1,    -1,    25,    26,
      -1,    28,    -1,    30,    31,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    15,    16,    17,
      -1,    19,    -1,    21,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    31,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    15,    16,    17,    -1,
      19,    -1,    21,    22,    -1,    -1,    25,    26,    -1,    28,
      -1,    30,    31,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    15,    16,    17,    -1,    19,
      -1,    21,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    31,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    15,    16,    17,    -1,    19,    -1,
      21,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,
      31,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    15,    16,    17,    -1,    19,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    31,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    15,    16,    17,    -1,    19,    -1,    21,    22,
      -1,    -1,    25,    26,    -1,    28,    -1,    30,    31,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,    16,    17,    -1,    19,    -1,    21,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    31,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    19,    -1,    21,    22,    -1,    -1,
      25,    26,    -1,    28,    -1,    30,    31,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    13,    -1,    15,
      16,    17,    -1,    19,    -1,    21,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    31,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    15,    16,
      17,    -1,    19,    -1,    21,    22,    -1,    -1,    25,    26,
      -1,    28,    -1,    30,    31,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    15,    16,    17,
      -1,    19,    -1,    21,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    31,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    15,    16,    17,    -1,
      19,    -1,    21,    22,    -1,    -1,    25,    26,    -1,    28,
      -1,    30,    31,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    15,    16,    17,    -1,    19,
      -1,    21,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    31,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    15,    16,    17,    -1,    19,    -1,
      21,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,
      31,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    15,    16,    17,    -1,    19,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    31,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    15,    16,    17,    -1,    19,    -1,    21,    22,
      -1,    -1,    25,    26,    -1,    28,    -1,    30,    31,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,    16,    17,    -1,    19,    -1,    21,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    31,     3,     4,
       5,     6,    -1,     3,     4,     5,     6,    -1,    -1,    20,
      15,    22,    23,    24,    19,    15,    21,    22,    29,    19,
      25,    21,    22,    28,    29,    25,    -1,    -1,    28,    29,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    15,    22,    23,    24,    19,    26,    21,    22,
      15,    -1,    25,    26,    19,    28,    21,    22,    -1,    -1,
      25,    -1,    -1,    28,     3,     4,     5,     6,    -1,     3,
       4,     5,     6,    -1,    -1,    20,    15,    22,    23,    24,
      19,    15,    21,    22,    29,    19,    25,    21,    22,    28,
      -1,    25,    -1,    -1,    28,     3,     4,     5,     6,     3,
       4,     5,     6,     3,     4,     5,     6,    15,    22,    23,
      24,    15,    26,    21,    22,    15,    -1,    25,    22,    -1,
      28,    -1,    -1,    20,    28,    22,    23,    24,    28,    -1,
      27,    20,    29,    22,    23,    24,    -1,    -1,    27,    20,
      29,    22,    23,    24,    -1,    -1,    27,    20,    29,    22,
      23,    24,    -1,    -1,    27,    20,    29,    22,    23,    24,
      -1,    -1,    27,    20,    29,    22,    23,    24,    -1,    -1,
      27,    20,    29,    22,    23,    24,    -1,    -1,    27,    20,
      29,    22,    23,    24,    -1,    -1,    27,    20,    29,    22,
      23,    24,    -1,    -1,    27,    20,    29,    22,    23,    24,
      -1,    -1,    27,    20,    29,    22,    23,    24,    -1,    -1,
      -1,    20,    29,    22,    23,    24,    -1,    -1,    -1,    20,
      29,    22,    23,    24,    -1,    20,    -1,    22,    29,    24,
      -1,    -1,    27,    20,    29,    22,    23,    24,    -1,    -1,
      -1,    20,    29,    22,    23,    24,    -1,    -1,    -1,    20,
      29,    22,    23,    24,    -1,    -1,    -1,    20,    29,    22,
      23,    24,    -1,    -1,    -1,    20,    29,    22,    23,    24,
      -1,    20,    -1,    22,    29,    24,    -1,    -1,    27,    20,
      29,    22,    23,    24,    -1,    -1,    -1,    20,    29,    22,
      23,    24,    -1,    26,    20,    28,    22,    23,    24,    20,
      26,    22,    23,    24,    20,    26,    22,    23,    24,    20,
      26,    22,    23,    24,    20,    26,    22,    23,    24,    20,
      26,    22,    23,    24,    20,    26,    22,    23,    24,    20,
      26,    22,    23,    24,    20,    26,    22,    23,    24,    20,
      26,    22,    23,    24,    20,    26,    22,    23,    24,    20,
      26,    22,    23,    24,    20,    26,    22,    23,    24,    20,
      26,    22,    23,    24,    20,    26,    22,    23,    24,    -1,
      26,    22,    23,    24,    -1,    26,    22,    23,    24,    -1,
      26,    22,    23,    24,    -1,    26,    22,    23,    24,    -1,
      26,    22,    23,    24,    -1,    26,    22,    23,    24,    -1,
      26,    22,    23,    24,    -1,    26,    22,    23,    24,    -1,
      26,    22,    23,    24,    -1,    26,    22,    23,    24,    -1,
      26,    22,    23,    24,    -1,    26,    22,    23,    24,    -1,
      26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    33,    34,    35,    36,    37,     4,     0,    35,
      26,    28,    17,    29,    38,    39,     4,    30,    45,    27,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    13,
      15,    16,    17,    19,    21,    22,    25,    26,    28,    36,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    64,    39,    45,    12,    28,    28,    28,
      28,    28,    28,    26,    43,     4,     4,     4,    56,    60,
      56,    52,    46,    26,    31,    18,    20,    24,    22,    23,
      43,    29,    52,    63,    52,    52,     4,    55,     4,    44,
      26,    29,    54,    56,    58,    59,    60,    27,    29,    29,
      29,    29,    29,    26,    52,    26,    26,    26,    45,    57,
      11,    26,    45,    44,    29,    45,    30,     3,     4,     5,
       6,    15,    19,    21,    22,    25,    28,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    64,     3,     4,
       5,     6,    15,    19,    21,    22,    25,    28,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    64,    26,
      20,    30,     3,     4,     5,     6,    15,    22,    28,    58,
      59,    60,    61,    62,    64,    24,     4,    46,    28,     4,
      56,    60,    56,    52,    18,    24,    22,    23,    28,     4,
      56,    60,    56,    52,    18,    20,    24,    22,    23,    56,
      46,    28,    60,    52,    22,    23,    58,    12,    31,    29,
      63,    29,    54,    58,    59,    60,    29,    63,    29,    54,
      56,    58,    59,    60,    31,    29,    63,    29,    59,    60,
       4,    43,    44,    52,    29,    29,    29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    37,    37,
      38,    38,    39,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    41,    42,    42,    43,    43,    44,    45,    46,
      46,    46,    47,    47,    48,    48,    49,    50,    51,    52,
      52,    53,    53,    54,    55,    55,    56,    56,    56,    57,
      57,    58,    58,    59,    59,    59,    60,    60,    61,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     5,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     9,     2,     1,     1,     1,     3,     3,     0,
       2,     1,     5,     7,     2,     3,     5,     5,     5,     1,
       1,     3,     1,     2,     3,     1,     2,     2,     1,     3,
       1,     3,     1,     3,     1,     2,     1,     1,     3,     1,
       1,     4,     3,     3,     1,     1,     1,     1,     1
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
  case 7: /* var_decl: TYPE ID ';'  */
#line 55 "src/bison/bison.y"
                    {
		insertSymbol(symbolTable, (yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 1866 "src/bison/bison.tab.c"
    break;

  case 8: /* fun_decl: TYPE ID '(' params ')' block_stmt  */
#line 61 "src/bison/bison.y"
                                          {
		insertSymbol(symbolTable, (yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-5].token).lexeme, "fun",(yyvsp[-4].token).scope);
	}
#line 1874 "src/bison/bison.tab.c"
    break;

  case 9: /* fun_decl: TYPE ID '(' ')' block_stmt  */
#line 64 "src/bison/bison.y"
                                     {
		insertSymbol(symbolTable, (yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun", (yyvsp[-3].token).scope);
	}
#line 1882 "src/bison/bison.tab.c"
    break;

  case 12: /* param_decl: TYPE ID  */
#line 75 "src/bison/bison.y"
                {
		insertSymbol(symbolTable, (yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 1890 "src/bison/bison.tab.c"
    break;


#line 1894 "src/bison/bison.tab.c"

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

#line 211 "src/bison/bison.y"


extern void yyerror(const char* s)
{
	printf("Syntax Error:\n%s\n", s);
}

int main(int argc, char **argv){
	initializeTable(symbolTable);
	initializeScopeStack(scopeStack);
    yyparse();
	printSymbolTable(symbolTable);
    yylex_destroy();
    return 0;
}
