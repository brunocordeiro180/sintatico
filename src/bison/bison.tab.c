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

extern int yylex();
extern int yylex_destroy();
extern void yyerror(const char* s);
extern int scopeStack[100];
extern int scopeId;
SymbolList *symbolTable;
extern Node *tree;
extern int linhas;
extern int colunas;
int errors = 0;

#define BHRED "\e[1;91m"
#define RESET "\e[0m"

#line 95 "src/bison/bison.tab.c"

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
  YYSYMBOL_EXCLAMATION = 19,               /* EXCLAMATION  */
  YYSYMBOL_LOG_OP = 20,                    /* LOG_OP  */
  YYSYMBOL_21_ = 21,                       /* ':'  */
  YYSYMBOL_22_ = 22,                       /* '?'  */
  YYSYMBOL_23_ = 23,                       /* '%'  */
  YYSYMBOL_MAP = 24,                       /* MAP  */
  YYSYMBOL_FILTER = 25,                    /* FILTER  */
  YYSYMBOL_THEN = 26,                      /* THEN  */
  YYSYMBOL_STRING = 27,                    /* STRING  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
  YYSYMBOL_29_ = 29,                       /* ','  */
  YYSYMBOL_30_ = 30,                       /* '('  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* '{'  */
  YYSYMBOL_33_ = 33,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_S = 35,                         /* S  */
  YYSYMBOL_decl_list = 36,                 /* decl_list  */
  YYSYMBOL_decl = 37,                      /* decl  */
  YYSYMBOL_var_decl = 38,                  /* var_decl  */
  YYSYMBOL_var_decl_with_assing = 39,      /* var_decl_with_assing  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3744

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


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
       2,     2,     2,     2,     2,     2,     2,    23,     2,     2,
      30,    31,     2,     2,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    21,    28,
       2,     2,     2,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    24,    25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    95,   100,   106,   109,   112,   119,   130,
     136,   155,   169,   182,   188,   193,   196,   202,   216,   219,
     222,   225,   228,   231,   234,   237,   240,   243,   249,   259,
     266,   269,   275,   278,   284,   295,   301,   308,   313,   316,
     322,   330,   346,   351,   360,   370,   379,   391,   394,   400,
     408,   415,   421,   428,   438,   446,   452,   459,   465,   472,
     478,   485,   491,   499,   502,   510,   513,   520,   523,   526,
     532,   538,   547,   552,   558,   562,   566,   570
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
  "WRITELN", "READ", "MUL_OP", "SUM_OP", "REL_OP", "EXCLAMATION", "LOG_OP",
  "':'", "'?'", "'%'", "MAP", "FILTER", "THEN", "STRING", "';'", "','",
  "'('", "')'", "'{'", "'}'", "$accept", "S", "decl_list", "decl",
  "var_decl", "var_decl_with_assing", "fun_decl", "params", "param_decl",
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
     275,    58,    63,    37,   276,   277,   278,   279,    59,    44,
      40,    41,   123,   125
};
#endif

#define YYPACT_NINF (-187)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      49,   160,    19,    23,   192,   259,   299,   340,   368,   413,
       4,  -187,   439,  1062,   447,    15,  3571,  3586,  3599,  3612,
     228,   768,   327,   327,  3625,  1102,     7,    17,    90,   107,
     208,   167,   246,  3638,  3651,  3664,  3677,    62,    26,    33,
     102,   120,   117,   460,   125,   652,    46,    75,   121,   457,
     768,    77,    77,   228,   327,   327,   327,   157,   405,   467,
     146,    33,  3690,   288,   305,  3703,   351,   629,   843,  1036,
     137,   161,   175,  1568,  2414,   392,   511,  1130,  3716,   181,
     178,   193,   927,   428,   200,   238,   245,  2445,   518,  2476,
    2507,  2538,  2569,  2600,   258,   265,  2631,  2662,  2693,  2724,
    2755,  2786,   301,   423,   311,  1062,  1102,   433,  2817,   356,
       3,  1102,  1102,   352,  2848,   369,   376,   375,   372,   398,
    2879,   399,   429,   434,  3282,  1062,  1062,   442,   461,   465,
     869,   469,   472,  2910,  2941,  2972,  3312,   493,   493,  3003,
     444,   478,   481,   481,  3034,  3065,  1128,  1169,  1199,  1392,
    1469,  1102,  1549,  3339,  3355,   464,   531,   532,   537,   541,
    1102,   545,   549,   554,   425,  1213,  1475,  3393,   575,   797,
     613,   613,  3405,  1102,   515,    59,    80,    58,   306,    68,
    3417,  3429,  3441,  3453,   371,  1150,  1174,  1241,  1002,   806,
    1042,  1042,  1277,  1102,   502,    88,   142,    31,   583,    37,
    1407,  1533,  1597,  3329,   405,  3096,  1062,  3127,   512,   542,
    1011,   513,   560,   580,   581,  1639,   405,  1670,  1701,  1732,
    1763,   566,  1794,  1825,  1856,  1887,  1918,  1949,   389,   355,
     593,   468,   597,   498,   112,   196,   204,   222,   903,  1102,
     978,  1123,  1315,  1429,   187,  1589,    82,   600,   601,   604,
     617,  1102,   636,   640,   650,   654,   657,   658,   797,   164,
     164,   575,   613,   613,   613,   544,   621,   895,   946,  1070,
    1309,  1102,  1349,  1374,  1437,  1495,   223,  1512,    40,   539,
     564,   592,   630,  1102,   631,   655,   672,   675,   679,   661,
     806,   826,   826,  1002,  1042,  1042,  1042,  3158,   683,  1102,
     641,  1980,   687,  2011,    16,  1102,  1102,   702,  3189,  2042,
     691,  1102,  3371,   694,  3387,   698,   706,   710,  3465,   731,
     603,   703,   660,   720,  3477,   236,   333,  1617,  3537,   721,
     726,   730,  3345,   763,   690,   733,   736,   734,  3361,   514,
    1258,  3499,  3505,   775,   789,   809,  3220,  3251,   738,   742,
     754,  2073,  1062,  2104,   755,   762,   766,  2135,   777,  3565,
     771,  3489,  3547,   810,  3553,   784,   820,   791,  3377,  3515,
     823,  3521,   833,   856,   864,  3282,  1062,  1062,   798,   807,
     816,   827,  3559,   847,  3531,   876,  2166,   829,   830,  2197,
    2228,  2259,  2290,  3282,   493,   493,  2321,   858,   859,   862,
     862,  2352,  2383
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
    -187,  -187,  -187,   896,     0,     1,  -187,  -187,   849,  -110,
    -105,  -103,   -72,   -90,   -37,  -186,   -91,   -81,   -68,   -66,
     -65,   -10,  1211,  1305,   792,  1168,  1053,   949,   -14,   293,
     485,  -156,   677
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    89,    90,     8,    40,    41,    91,
      92,    93,    94,    95,    96,    74,    97,    98,    99,   100,
     101,    63,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    64,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,     7,    59,    26,     6,     7,    43,    45,    46,    47,
     109,   180,   206,    13,   130,    48,    37,   119,   297,   219,
       9,   220,    10,    11,    76,   352,   139,    38,   200,    57,
     308,   207,    14,   223,    15,    49,    45,    45,    45,    69,
      70,    71,    72,   224,   353,   -48,    39,   140,   141,   291,
       1,   -57,   221,   293,   -61,   -61,   225,   -61,   226,   227,
     -57,     2,   -57,   200,   102,    58,   -61,   103,   -61,   -66,
     336,   -66,   102,   313,   -50,   316,   259,   319,   -57,   258,
     146,   147,   148,   149,   261,   -61,   -61,   222,   -61,   -57,
     -47,   -16,   180,   -16,    20,   115,   116,   180,   180,   -61,
     -55,   121,   122,   -51,   150,   144,   145,   151,   290,   333,
      50,   -55,   322,   -66,   102,   131,   132,   -47,   -47,   -47,
     184,   185,   186,   187,   217,   218,   102,   -55,   -66,   -66,
     -66,    60,   -66,    61,   188,   -55,   189,   180,   302,   190,
     191,   230,   320,   -66,   192,   -56,   180,   193,    62,   -15,
     232,   -15,    65,   -56,   240,   245,   252,   256,    38,   180,
     -13,   -13,   -55,   257,   363,   -49,   366,   234,   235,   236,
     237,   -55,   -13,   -55,   272,   277,   284,   288,   370,   180,
     373,   168,   104,   289,    52,   -59,   -17,   -59,   -17,   -52,
     105,   238,    -2,     1,   239,   -59,   298,   -66,   -66,   -66,
     102,   -66,   -66,   -53,     2,   -66,   -66,   -56,   106,   -66,
     350,    42,   -75,   -75,   -75,   200,   -75,   200,   -56,   200,
     -76,   -76,   -76,   107,   -76,   180,    51,   -75,   -57,   321,
     111,   146,   147,   148,   149,   -76,   -57,   180,   -74,   -74,
     -74,   323,   -74,   -56,   245,   245,   245,   328,   329,   330,
     331,   200,   -56,   -74,   -56,   150,   -54,   180,   151,    -4,
      -4,   335,    53,   -61,   -61,   386,   -61,   -54,   112,   180,
     219,    -4,   220,   337,   -61,   113,   277,   277,   277,   342,
     343,   344,   345,   396,   223,   180,   114,   102,   219,   348,
     220,   180,   180,   -32,   224,   354,   355,   180,   102,    -5,
      -5,   358,   223,   221,   397,   398,   200,   225,   200,   226,
     227,    -5,   224,   152,   152,   161,   161,   -73,   181,   -73,
     200,   221,   200,   260,   -59,   225,   -59,   226,   227,   -33,
     155,   156,   157,   158,    77,   201,    78,   -59,   222,   -35,
      -7,    -7,   378,   152,   152,   152,   152,   161,   161,   161,
     260,   -58,    -7,   -58,   159,   123,   222,   160,   184,   185,
     186,   187,   401,   402,   -58,   102,   387,   388,    -6,    -6,
     201,   -54,   188,   104,   189,   217,   218,   190,   191,   -54,
      -6,   105,   192,   102,   120,   193,   312,   -66,   -66,   -66,
     310,   -66,   -66,   217,   218,   -66,   -66,   -34,   311,   181,
     -66,   265,   -66,   125,   181,   181,    73,   124,   -38,   -38,
     -38,   -38,   -38,    -9,    -9,   -38,   -38,   -38,   -38,   -38,
     -38,   -14,   -38,   -14,   -38,    -9,   126,   -38,   -38,   205,
     127,   110,   -38,   -38,   117,   -38,   118,   -38,   -38,    -3,
      -3,   -66,   -66,   -66,   181,   -66,   -66,    -8,    -8,   -66,
     -66,    -3,   -72,   181,   -72,   233,   -66,   -10,   -10,    -8,
     128,   241,   241,   253,   253,   129,   181,   -12,   -12,   -10,
     133,   184,   185,   186,   187,   142,   -64,   -64,   -64,   -12,
     -64,   273,   273,   285,   285,   188,   181,   189,   -64,   134,
     190,   191,   -66,   135,   231,   192,   228,   137,   193,   315,
     138,   184,   185,   186,   187,   153,   153,   162,   162,   143,
     182,   -11,   -11,   204,   303,   188,   304,   189,   -36,   -36,
     190,   191,   201,   -11,   201,   192,   201,   202,   193,   318,
     -36,   -48,   181,   -48,   -54,   153,   153,   153,   153,   162,
     162,   162,   299,   -54,   181,   -54,   -48,   184,   185,   186,
     187,   241,   241,   241,   241,   253,   253,   253,   201,   -75,
     -76,   188,   202,   189,   181,   -74,   190,   191,   -75,   -77,
     -75,   192,   300,   -65,   193,   332,   181,   -68,   234,   235,
     236,   237,   -69,   273,   273,   273,   273,   285,   285,   285,
     305,   182,   181,   -76,   309,   -76,   182,   182,   181,   181,
     292,   -59,   238,   -59,   181,   239,   184,   185,   186,   187,
     306,   307,   -59,   201,   -59,   201,   246,   247,   248,   249,
     188,   -74,   189,   -74,   314,   190,   191,   201,   317,   201,
     192,   -75,   -76,   193,   362,   -74,   182,   -66,   -66,   -66,
     250,   -66,   349,   251,   118,   182,    52,   -58,   -77,   -58,
     -66,   334,   -66,   242,   242,   254,   254,   -58,   182,   -77,
     -50,   -77,   -50,   184,   185,   186,   187,   -50,   -63,   -63,
     -63,   -65,   -63,   274,   274,   286,   286,   188,   182,   189,
     -63,   -68,   190,   191,   -65,   -69,   -65,   192,   -51,   324,
     193,   365,   338,   184,   185,   186,   187,   154,   154,   163,
     163,   -68,   183,   -68,   -69,   356,   -69,   188,   -51,   189,
     -51,   347,   190,   191,   202,   351,   202,   192,   202,   203,
     193,   369,   -35,    77,   182,   359,   -71,   154,   154,   154,
     154,   163,   163,   163,   364,    77,   182,   360,   -67,   184,
     185,   186,   187,   242,   242,   242,   242,   254,   254,   254,
     202,   367,   -49,   188,   203,   189,   182,   -52,   190,   191,
      77,   -53,   361,   192,   371,   374,   193,   372,   182,   375,
     376,   146,   147,   148,   149,   274,   274,   274,   274,   286,
     286,   286,   377,   183,   182,    20,   379,    21,   183,   183,
     182,   182,    77,   380,   368,   150,   182,   381,   151,   -70,
     234,   235,   236,   237,   -49,   202,   -49,   202,   -34,   266,
     267,   268,   269,    44,   168,   -71,   169,   176,   -52,   202,
     -52,   202,   -67,   188,   238,   189,   389,   239,   183,   266,
     267,   268,   269,   270,   196,   390,   271,   183,   -53,    77,
     -53,   382,    66,   188,   391,   243,   243,   255,   255,    77,
     183,   383,    77,   270,   384,   392,   271,   394,   395,    53,
     -60,   -60,   -71,   -60,   -71,   275,   275,   287,   287,   196,
     183,   -60,   -40,   -40,   -40,   -40,   -40,   136,   -70,   -40,
     -40,   -40,   -40,   -40,   -40,    77,   -40,   385,   -40,   399,
     400,   -40,   -40,   -67,   216,   -67,   -40,   -40,   176,   -40,
      12,   -40,   -40,   176,   176,   -70,   203,   -70,   203,    75,
     203,   -75,   -75,   -75,     0,   -75,   183,     0,     0,   -77,
     -77,   -77,     0,   -77,   -75,     0,   -75,     0,   183,     0,
      79,    17,    18,    19,   -77,   243,   243,   243,   243,   255,
     255,   255,   203,   176,    20,     0,    21,     0,   183,    22,
      23,     0,   176,     0,    24,   108,     0,    25,     0,     0,
     183,   244,   -76,   -76,   -76,   176,   -76,   275,   275,   275,
     275,   287,   287,   287,   179,   -76,   183,   -76,     0,     0,
       0,   276,   183,   183,     0,   176,     0,     0,   183,     0,
       0,   199,     0,     0,   -64,   -64,   -64,   203,   -64,   203,
       0,    68,     0,     0,     0,   266,   267,   268,   269,   -64,
       0,   203,     0,   203,    79,    17,    18,    19,     0,     0,
       0,   196,     0,   196,     0,   196,   199,     0,    20,   270,
      21,   176,   271,    22,    23,     0,     0,     0,    24,   301,
       0,    25,     0,   176,     0,   278,   279,   280,   281,     0,
     325,     0,   -62,   -62,   -62,   179,   -62,   196,     0,     0,
     179,   179,     0,   176,   -62,    16,    17,    18,    19,   282,
       0,     0,   283,     0,     0,   176,     0,     0,   178,    20,
       0,    21,   339,     0,    22,    23,   -74,   -74,   -74,    24,
     -74,   176,    25,     0,     0,   198,     0,   176,   176,   -74,
     179,   -74,     0,   176,    67,   164,   165,   166,   167,   179,
       0,     0,   196,     0,   196,     0,     0,     0,   179,   168,
       0,   169,   179,     0,   170,   171,   196,     0,   196,   172,
     198,     0,   173,   184,   185,   186,   187,     0,   199,   -65,
     -65,   -65,   179,   -65,   -66,   -66,   -66,   188,   -66,   189,
       0,     0,   190,   191,   -65,     0,   -66,   192,   229,   178,
     193,     0,     0,     0,   178,   178,   -75,   -75,   -75,     0,
     -75,   -75,     0,     0,   -75,   -75,     0,     0,   199,   -75,
     199,   -75,   199,     0,     0,   -75,   -75,   -75,   179,   -75,
     -76,   -76,   -76,   177,   -76,   -76,     0,   -75,   -76,   -76,
     179,     0,     0,   -76,   178,   -76,     0,   179,   179,   327,
     197,     0,     0,   178,   199,   -76,   -76,   -76,     0,   -76,
     179,     0,   178,     0,     0,     0,   178,   -76,     0,   -75,
     -75,   -75,   179,   -75,   -75,     0,   174,   -75,   -75,   199,
     199,   341,   198,     0,   -75,   197,   178,     0,   179,     0,
       0,     0,     0,   194,   179,   179,     0,   -74,   -74,   -74,
     179,   -74,   -74,     0,     0,   -74,   -74,     0,     0,   199,
     -74,   199,   -74,     0,   177,   292,   -58,     0,   -58,   177,
     177,     0,   198,   199,   198,   199,   198,   -58,   194,   -58,
       0,     0,   178,   -77,   -77,   -77,     0,   -77,   -77,     0,
       0,   -77,   -77,     0,   178,     0,   -77,     0,   -77,     0,
       0,   178,   326,     0,     0,     0,     0,   174,   198,   177,
       0,     0,   174,   174,   178,   -77,   -77,   -77,   177,   -77,
     175,   -68,   -68,   -68,     0,   -68,   178,   177,   -77,     0,
     -77,   177,     0,   198,   340,     0,   -68,   195,     0,     0,
       0,     0,   178,     0,     0,     0,     0,   197,   178,   178,
       0,   177,   174,     0,   178,   -64,   -64,   -64,     0,   -64,
       0,   174,     0,   198,     0,   198,     0,     0,   -64,     0,
     -64,     0,   195,     0,   174,     0,     0,   198,     0,   198,
     -65,   -65,   -65,     0,   -65,     0,     0,   197,     0,   197,
       0,   197,     0,   -65,   174,   -65,     0,   177,   -74,   -74,
     -74,   175,   -74,     0,     0,     0,   175,   175,     0,   177,
     -74,     0,     0,   -63,   -63,   -63,   177,   -63,   294,     0,
       0,   295,   296,   197,     0,     0,   -63,     0,   -63,   177,
     194,     0,   194,     0,   194,   -69,   -69,   -69,     0,   -69,
     174,   177,     0,   -68,   -68,   -68,   175,   -68,   197,     0,
     -69,     0,   174,     0,     0,   175,   -68,   177,   -68,     0,
       0,     0,     0,   177,   177,     0,   194,     0,   175,   177,
       0,     0,   174,     0,     0,   -77,   -77,   -77,   197,   -77,
     197,   -76,   -76,   -76,   174,   -76,   -76,   -77,   175,   -76,
     -76,     0,   197,     0,   197,     0,   -76,     0,     0,     0,
     174,   -69,   -69,   -69,     0,   -69,   174,   174,     0,     0,
       0,     0,   174,     0,   -69,     0,   -69,     0,   -63,   -63,
     -63,   194,   -63,   194,   195,     0,   195,     0,   195,     0,
       0,   -63,     0,   -63,   175,   194,     0,   194,     0,   -65,
     -65,   -65,     0,   -65,   -65,     0,   175,   -65,   -65,     0,
       0,     0,   -65,     0,   -65,   -65,   -65,   -65,     0,   -65,
     195,   -39,   -39,   -39,   -39,   -39,   175,   -65,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,     0,   -39,   175,     0,
     -39,   -39,     0,     0,     0,   -39,   -39,     0,   -39,     0,
     -39,   -39,     0,     0,   175,   -63,   -63,   -63,     0,   -63,
     175,   175,     0,   -68,   -68,   -68,   175,   -68,   -68,     0,
     -63,   -68,   -68,     0,     0,   195,   -68,   195,   -68,     0,
       0,     0,     0,   261,   -60,   -60,     0,   -60,     0,   195,
       0,   195,   -31,   -31,   -31,   -31,   -31,   -31,   -60,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,     0,   -31,     0,
       0,   -31,   -31,     0,     0,     0,   -31,   -31,     0,   -31,
       0,   -31,   -31,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,
       0,     0,   -25,   -25,     0,     0,     0,   -25,   -25,     0,
     -25,     0,   -25,   -25,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,
     -26,     0,     0,   -26,   -26,     0,     0,     0,   -26,   -26,
       0,   -26,     0,   -26,   -26,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
       0,   -27,     0,     0,   -27,   -27,     0,     0,     0,   -27,
     -27,     0,   -27,     0,   -27,   -27,   -18,   -18,   -18,   -18,
     -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,     0,
     -18,     0,   -18,     0,     0,   -18,   -18,     0,     0,     0,
     -18,   -18,     0,   -18,     0,   -18,   -18,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,
       0,   -19,     0,   -19,     0,     0,   -19,   -19,     0,     0,
       0,   -19,   -19,     0,   -19,     0,   -19,   -19,   -20,   -20,
     -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,   -20,     0,   -20,     0,     0,   -20,   -20,     0,
       0,     0,   -20,   -20,     0,   -20,     0,   -20,   -20,   -21,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,     0,   -21,     0,   -21,     0,     0,   -21,   -21,
       0,     0,     0,   -21,   -21,     0,   -21,     0,   -21,   -21,
     -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,   -22,     0,   -22,     0,   -22,     0,     0,   -22,
     -22,     0,     0,     0,   -22,   -22,     0,   -22,     0,   -22,
     -22,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,   -23,     0,   -23,     0,     0,
     -23,   -23,     0,     0,     0,   -23,   -23,     0,   -23,     0,
     -23,   -23,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,     0,
       0,   -24,   -24,     0,     0,     0,   -24,   -24,     0,   -24,
       0,   -24,   -24,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,   -42,
       0,     0,   -42,   -42,     0,     0,     0,   -42,   -42,     0,
     -42,     0,   -42,   -42,    -9,    -9,    -9,    -9,    -9,    -9,
       0,    -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,     0,
      -9,     0,     0,    -9,    -9,     0,     0,     0,    -9,    -9,
       0,    -9,     0,    -9,    -9,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
       0,   -30,     0,     0,   -30,   -30,     0,     0,     0,   -30,
     -30,     0,   -30,     0,   -30,   -30,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,     0,   -43,     0,     0,   -43,   -43,     0,     0,     0,
     -43,   -43,     0,   -43,     0,   -43,   -43,    -8,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,    -8,     0,    -8,     0,     0,    -8,    -8,     0,     0,
       0,    -8,    -8,     0,    -8,     0,    -8,    -8,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,     0,   -36,     0,     0,   -36,   -36,     0,
       0,     0,   -36,   -36,     0,   -36,     0,   -36,   -36,   -40,
     -40,   -40,   -40,   -40,   393,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,     0,   -40,     0,     0,   -40,   -40,
       0,     0,     0,   -40,   -40,     0,   -40,     0,   -40,   -40,
     -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,   -10,
     -10,   -10,   -10,     0,   -10,     0,   -10,     0,     0,   -10,
     -10,     0,     0,     0,   -10,   -10,     0,   -10,     0,   -10,
     -10,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,     0,   -44,     0,     0,
     -44,   -44,     0,     0,     0,   -44,   -44,     0,   -44,     0,
     -44,   -44,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,     0,
       0,   -45,   -45,     0,     0,     0,   -45,   -45,     0,   -45,
       0,   -45,   -45,   -46,   -46,   -46,   -46,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   -46,
       0,     0,   -46,   -46,     0,     0,     0,   -46,   -46,     0,
     -46,     0,   -46,   -46,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,     0,
     -41,     0,     0,   -41,   -41,     0,     0,     0,   -41,   -41,
       0,   -41,     0,   -41,   -41,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
       0,   -29,     0,     0,   -29,   -29,     0,     0,     0,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,     0,   -28,     0,     0,   -28,   -28,     0,     0,     0,
     -28,   -28,     0,   -28,     0,   -28,   -28,    79,    17,    18,
      19,    80,     0,     0,    81,    82,    83,    84,    85,    86,
       0,    20,     0,    21,     0,     0,    22,    23,     0,     0,
       0,    24,    87,     0,    25,     0,   204,    88,   -31,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,   -31,     0,     0,   -31,   -31,     0,
       0,     0,   -31,   -31,     0,   -31,     0,   -31,   -31,   -25,
     -25,   -25,   -25,   -25,     0,     0,   -25,   -25,   -25,   -25,
     -25,   -25,     0,   -25,     0,   -25,     0,     0,   -25,   -25,
       0,     0,     0,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,     0,   -26,     0,     0,   -26,
     -26,     0,     0,     0,   -26,   -26,     0,   -26,     0,   -26,
     -26,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,   -37,     0,     0,
     -37,   -37,     0,     0,     0,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,     0,
       0,   -27,   -27,     0,     0,     0,   -27,   -27,     0,   -27,
       0,   -27,   -27,   -18,   -18,   -18,   -18,   -18,     0,     0,
     -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,     0,   -18,
       0,     0,   -18,   -18,     0,     0,     0,   -18,   -18,     0,
     -18,     0,   -18,   -18,   -19,   -19,   -19,   -19,   -19,     0,
       0,   -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,     0,
     -19,     0,     0,   -19,   -19,     0,     0,     0,   -19,   -19,
       0,   -19,     0,   -19,   -19,   -20,   -20,   -20,   -20,   -20,
       0,     0,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
       0,   -20,     0,     0,   -20,   -20,     0,     0,     0,   -20,
     -20,     0,   -20,     0,   -20,   -20,   -21,   -21,   -21,   -21,
     -21,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,     0,   -21,     0,     0,   -21,   -21,     0,     0,     0,
     -21,   -21,     0,   -21,     0,   -21,   -21,   -22,   -22,   -22,
     -22,   -22,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,
       0,   -22,     0,   -22,     0,     0,   -22,   -22,     0,     0,
       0,   -22,   -22,     0,   -22,     0,   -22,   -22,   -23,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,     0,   -23,     0,     0,   -23,   -23,     0,
       0,     0,   -23,   -23,     0,   -23,     0,   -23,   -23,   -24,
     -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,   -24,
     -24,   -24,     0,   -24,     0,   -24,     0,     0,   -24,   -24,
       0,     0,     0,   -24,   -24,     0,   -24,     0,   -24,   -24,
     -42,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,     0,   -42,     0,     0,   -42,
     -42,     0,     0,     0,   -42,   -42,     0,   -42,     0,   -42,
     -42,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   -30,     0,   -30,     0,     0,
     -30,   -30,     0,     0,     0,   -30,   -30,     0,   -30,     0,
     -30,   -30,   -43,   -43,   -43,   -43,   -43,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,     0,   -43,     0,
       0,   -43,   -43,     0,     0,     0,   -43,   -43,     0,   -43,
       0,   -43,   -43,   -44,   -44,   -44,   -44,   -44,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   -44,
       0,     0,   -44,   -44,     0,     0,     0,   -44,   -44,     0,
     -44,     0,   -44,   -44,   -45,   -45,   -45,   -45,   -45,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,
     -45,     0,     0,   -45,   -45,     0,     0,     0,   -45,   -45,
       0,   -45,     0,   -45,   -45,   -46,   -46,   -46,   -46,   -46,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
       0,   -46,     0,     0,   -46,   -46,     0,     0,     0,   -46,
     -46,     0,   -46,     0,   -46,   -46,   -41,   -41,   -41,   -41,
     -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,     0,   -41,     0,     0,   -41,   -41,     0,     0,     0,
     -41,   -41,     0,   -41,     0,   -41,   -41,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,     0,   -29,     0,     0,   -29,   -29,     0,     0,
       0,   -29,   -29,     0,   -29,     0,   -29,   -29,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,     0,   -28,     0,     0,   -28,   -28,     0,
       0,     0,   -28,   -28,     0,   -28,     0,   -28,   -28,    -9,
      -9,    -9,    -9,    -9,     0,     0,    -9,    -9,    -9,    -9,
      -9,    -9,     0,    -9,     0,    -9,     0,     0,    -9,    -9,
       0,     0,     0,    -9,    -9,     0,    -9,     0,    -9,    -9,
      -8,    -8,    -8,    -8,    -8,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,     0,    -8,     0,    -8,     0,     0,    -8,
      -8,     0,     0,     0,    -8,    -8,     0,    -8,     0,    -8,
      -8,    79,    17,    18,    19,    80,     0,     0,    81,    82,
      83,    84,    85,    86,     0,    20,     0,    21,     0,     0,
      22,    23,     0,     0,     0,    24,    87,     0,    25,     0,
     204,   346,    79,    17,    18,    19,    80,     0,     0,    81,
      82,    83,    84,    85,    86,     0,    20,     0,    21,     0,
       0,    22,    23,     0,     0,     0,    24,    87,     0,    25,
       0,   204,   357,   -36,   -36,   -36,   -36,   -36,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,   -36,
       0,     0,   -36,   -36,     0,     0,     0,   -36,   -36,     0,
     -36,     0,   -36,   -36,   -10,   -10,   -10,   -10,   -10,     0,
       0,   -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,     0,
     -10,     0,     0,   -10,   -10,     0,     0,     0,   -10,   -10,
       0,   -10,     0,   -10,   -10,    79,    17,    18,    19,   208,
       0,     0,   209,   210,   211,   212,   213,   214,     0,    20,
       0,    21,     0,     0,    22,    23,     0,     0,     0,    24,
     215,     0,    25,     0,   216,    79,    17,    18,    19,    80,
       0,     0,    81,    82,    83,    84,    85,    86,     0,    20,
       0,    21,     0,     0,    22,    23,     0,     0,     0,    24,
      87,     0,    25,     0,   204,   -69,   -69,   -69,     0,   -69,
     -69,     0,     0,   -69,   -69,   -68,   -68,   -68,   -69,   -68,
     -69,   -71,   -71,   -71,     0,   -71,   -71,   -68,     0,   -71,
     -71,   -69,   -69,   -69,   -71,   -69,   -71,   -67,   -67,   -67,
       0,   -67,   -67,   -69,     0,   -67,   -67,   -71,   -71,   -71,
     -67,   -71,   -67,   -70,   -70,   -70,     0,   -70,   -70,   -71,
       0,   -70,   -70,   -67,   -67,   -67,   -70,   -67,   -70,   -74,
     -74,   -74,     0,   -74,   -74,   -67,     0,   -74,   -74,     0,
       0,   -77,   -77,   -77,   -74,   -77,   -77,     0,     0,   -77,
     -77,     0,     0,   -63,   -63,   -63,   -77,   -63,   262,     0,
       0,   263,   264,     0,     0,   -65,   -65,   -65,   -63,   -65,
     -65,     0,     0,   -65,   -65,     0,     0,   -68,   -68,   -68,
     -65,   -68,   -68,     0,     0,   -68,   -68,     0,     0,   -69,
     -69,   -69,   -68,   -69,   -69,     0,     0,   -69,   -69,     0,
       0,   -71,   -71,   -71,   -69,   -71,   -71,     0,     0,   -71,
     -71,     0,     0,   -67,   -67,   -67,   -71,   -67,   -67,     0,
       0,   -67,   -67,     0,     0,   -70,   -70,   -70,   -67,   -70,
     -70,     0,     0,   -70,   -70,   293,   -60,   -60,     0,   -60,
     -70,   -62,   -62,   -62,     0,   -62,     0,     0,   -60,     0,
     -60,   -71,   -71,   -71,   -62,   -71,   -62,   -67,   -67,   -67,
       0,   -67,     0,     0,   -71,     0,   -71,   -70,   -70,   -70,
     -67,   -70,   -67,   -62,   -62,   -62,     0,   -62,     0,     0,
     -70,     0,   -70,   -71,   -71,   -71,     0,   -71,   -62,   -67,
     -67,   -67,     0,   -67,     0,   -70,   -70,   -70,   -71,   -70,
       0,   -70,   -70,   -70,   -67,   -70,     0,   -66,   -66,   -66,
     -70,   -66,   -66,   -70,     0,   -66,   -66,     0,     0,   -66,
       0,    42,   -75,   -75,   -75,     0,   -75,   -75,     0,     0,
     -75,   -75,     0,     0,   -75,   -76,   -76,   -76,     0,   -76,
     -76,     0,     0,   -76,   -76,     0,     0,   -76,   -74,   -74,
     -74,     0,   -74,   -74,     0,     0,   -74,   -74,     0,     0,
     -74,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,   -77,
     -77,     0,     0,   -77,   -63,   -63,   -63,     0,   -63,    54,
       0,     0,    55,    56,     0,     0,   -63,   -65,   -65,   -65,
       0,   -65,   -65,     0,     0,   -65,   -65,     0,     0,   -65,
     -68,   -68,   -68,     0,   -68,   -68,     0,     0,   -68,   -68,
       0,     0,   -68,   -69,   -69,   -69,     0,   -69,   -69,     0,
       0,   -69,   -69,     0,     0,   -69,   -71,   -71,   -71,     0,
     -71,   -71,     0,     0,   -71,   -71,     0,     0,   -71,   -67,
     -67,   -67,     0,   -67,   -67,     0,     0,   -67,   -67,     0,
       0,   -67,   -70,   -70,   -70,     0,   -70,   -70,     0,     0,
     -70,   -70,     0,     0,   -70
};

static const yytype_int16 yycheck[] =
{
       0,     0,    39,    13,     4,     4,    20,    21,    22,    23,
      82,    25,     9,     9,   124,    25,     1,   107,   204,   124,
       1,   124,     3,     0,    61,     9,   136,    12,    42,     3,
     216,    28,    28,   124,    30,    28,    50,    51,    52,    53,
      54,    55,    56,   124,    28,    28,    31,   137,   138,    18,
       1,    20,   124,    16,    17,    18,   124,    20,   124,   124,
      29,    12,    31,    77,    74,    32,    29,    77,    31,    29,
      30,    31,    82,   229,    28,   231,    18,   233,    20,    20,
       3,     4,     5,     6,    16,    17,    18,   124,    20,    31,
      31,    29,   106,    31,    17,   105,   106,   111,   112,    31,
      20,   111,   112,    28,    27,   142,   143,    30,    20,   265,
      20,    31,    30,    31,   124,   125,   126,    29,    28,    31,
       3,     4,     5,     6,   124,   124,   136,    20,    16,    17,
      18,    29,    20,    31,    17,    28,    19,   151,   210,    22,
      23,   151,    30,    31,    27,    20,   160,    30,    31,    29,
     160,    31,    31,    28,   168,   169,   170,   171,    12,   173,
       0,     1,    20,   173,   320,    28,   322,     3,     4,     5,
       6,    29,    12,    31,   188,   189,   190,   191,   334,   193,
     336,    17,     1,   193,    17,    18,    29,    20,    31,    28,
       9,    27,     0,     1,    30,    28,   206,    16,    17,    18,
     210,    20,    21,    28,    12,    24,    25,    20,    30,    28,
     300,    30,    16,    17,    18,   229,    20,   231,    31,   233,
      16,    17,    18,    30,    20,   239,    18,    31,    20,   239,
      30,     3,     4,     5,     6,    31,    28,   251,    16,    17,
      18,   251,    20,    20,   258,   259,   260,   261,   262,   263,
     264,   265,    29,    31,    31,    27,    20,   271,    30,     0,
       1,   271,    16,    17,    18,   375,    20,    31,    30,   283,
     375,    12,   375,   283,    28,    30,   290,   291,   292,   293,
     294,   295,   296,   393,   375,   299,    28,   297,   393,   299,
     393,   305,   306,    28,   375,   305,   306,   311,   308,     0,
       1,   311,   393,   375,   394,   395,   320,   375,   322,   375,
     375,    12,   393,    20,    21,    22,    23,    29,    25,    31,
     334,   393,   336,    17,    18,   393,    20,   393,   393,    28,
       3,     4,     5,     6,    29,    42,    31,    31,   375,    28,
       0,     1,   352,    50,    51,    52,    53,    54,    55,    56,
      17,    18,    12,    20,    27,     3,   393,    30,     3,     4,
       5,     6,   399,   400,    31,   375,   376,   377,     0,     1,
      77,    20,    17,     1,    19,   375,   375,    22,    23,    28,
      12,     9,    27,   393,    28,    30,    31,    16,    17,    18,
       1,    20,    21,   393,   393,    24,    25,    28,     9,   106,
      29,    30,    31,    28,   111,   112,     1,    31,     3,     4,
       5,     6,     7,     0,     1,    10,    11,    12,    13,    14,
      15,    29,    17,    31,    19,    12,    28,    22,    23,     1,
      31,     3,    27,    28,     1,    30,     3,    32,    33,     0,
       1,    16,    17,    18,   151,    20,    21,     0,     1,    24,
      25,    12,    29,   160,    31,    30,    31,     0,     1,    12,
      31,   168,   169,   170,   171,    31,   173,     0,     1,    12,
      28,     3,     4,     5,     6,    31,    16,    17,    18,    12,
      20,   188,   189,   190,   191,    17,   193,    19,    28,    28,
      22,    23,    28,    28,    30,    27,     3,    28,    30,    31,
      28,     3,     4,     5,     6,    20,    21,    22,    23,    31,
      25,     0,     1,    32,     1,    17,     3,    19,     0,     1,
      22,    23,   229,    12,   231,    27,   233,    42,    30,    31,
      12,    29,   239,    31,    20,    50,    51,    52,    53,    54,
      55,    56,    30,    29,   251,    31,    31,     3,     4,     5,
       6,   258,   259,   260,   261,   262,   263,   264,   265,    28,
      28,    17,    77,    19,   271,    28,    22,    23,    29,    28,
      31,    27,    30,    28,    30,    31,   283,    28,     3,     4,
       5,     6,    28,   290,   291,   292,   293,   294,   295,   296,
      30,   106,   299,    29,    28,    31,   111,   112,   305,   306,
      17,    18,    27,    20,   311,    30,     3,     4,     5,     6,
      30,    30,    29,   320,    31,   322,     3,     4,     5,     6,
      17,    29,    19,    31,    31,    22,    23,   334,    31,   336,
      27,    31,    31,    30,    31,    31,   151,    16,    17,    18,
      27,    20,     1,    30,     3,   160,    17,    18,    31,    20,
      29,    30,    31,   168,   169,   170,   171,    28,   173,    29,
      29,    31,    31,     3,     4,     5,     6,    31,    16,    17,
      18,    31,    20,   188,   189,   190,   191,    17,   193,    19,
      28,    31,    22,    23,    29,    31,    31,    27,    31,    31,
      30,    31,    31,     3,     4,     5,     6,    20,    21,    22,
      23,    29,    25,    31,    29,     3,    31,    17,    29,    19,
      31,    28,    22,    23,   229,    28,   231,    27,   233,    42,
      30,    31,    31,    29,   239,    31,    28,    50,    51,    52,
      53,    54,    55,    56,    31,    29,   251,    31,    28,     3,
       4,     5,     6,   258,   259,   260,   261,   262,   263,   264,
     265,    31,    31,    17,    77,    19,   271,    31,    22,    23,
      29,    31,    31,    27,    31,    31,    30,    31,   283,    31,
      28,     3,     4,     5,     6,   290,   291,   292,   293,   294,
     295,   296,    28,   106,   299,    17,    31,    19,   111,   112,
     305,   306,    29,    31,    31,    27,   311,    31,    30,    28,
       3,     4,     5,     6,    29,   320,    31,   322,    31,     3,
       4,     5,     6,    21,    17,    31,    19,    25,    29,   334,
      31,   336,    31,    17,    27,    19,    28,    30,   151,     3,
       4,     5,     6,    27,    42,    28,    30,   160,    29,    29,
      31,    31,    50,    17,    28,   168,   169,   170,   171,    29,
     173,    31,    29,    27,    31,    28,    30,    28,    28,    16,
      17,    18,    29,    20,    31,   188,   189,   190,   191,    77,
     193,    28,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    12,    13,    14,    15,    29,    17,    31,    19,    31,
      31,    22,    23,    29,    32,    31,    27,    28,   106,    30,
       4,    32,    33,   111,   112,    29,   229,    31,   231,    60,
     233,    16,    17,    18,    -1,    20,   239,    -1,    -1,    16,
      17,    18,    -1,    20,    29,    -1,    31,    -1,   251,    -1,
       3,     4,     5,     6,    31,   258,   259,   260,   261,   262,
     263,   264,   265,   151,    17,    -1,    19,    -1,   271,    22,
      23,    -1,   160,    -1,    27,    28,    -1,    30,    -1,    -1,
     283,   169,    16,    17,    18,   173,    20,   290,   291,   292,
     293,   294,   295,   296,    25,    29,   299,    31,    -1,    -1,
      -1,   189,   305,   306,    -1,   193,    -1,    -1,   311,    -1,
      -1,    42,    -1,    -1,    16,    17,    18,   320,    20,   322,
      -1,    52,    -1,    -1,    -1,     3,     4,     5,     6,    31,
      -1,   334,    -1,   336,     3,     4,     5,     6,    -1,    -1,
      -1,   229,    -1,   231,    -1,   233,    77,    -1,    17,    27,
      19,   239,    30,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,   251,    -1,     3,     4,     5,     6,    -1,
     258,    -1,    16,    17,    18,   106,    20,   265,    -1,    -1,
     111,   112,    -1,   271,    28,     3,     4,     5,     6,    27,
      -1,    -1,    30,    -1,    -1,   283,    -1,    -1,    25,    17,
      -1,    19,   290,    -1,    22,    23,    16,    17,    18,    27,
      20,   299,    30,    -1,    -1,    42,    -1,   305,   306,    29,
     151,    31,    -1,   311,    51,     3,     4,     5,     6,   160,
      -1,    -1,   320,    -1,   322,    -1,    -1,    -1,   169,    17,
      -1,    19,   173,    -1,    22,    23,   334,    -1,   336,    27,
      77,    -1,    30,     3,     4,     5,     6,    -1,   189,    16,
      17,    18,   193,    20,    16,    17,    18,    17,    20,    19,
      -1,    -1,    22,    23,    31,    -1,    28,    27,    30,   106,
      30,    -1,    -1,    -1,   111,   112,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,   229,    29,
     231,    31,   233,    -1,    -1,    16,    17,    18,   239,    20,
      16,    17,    18,    25,    20,    21,    -1,    28,    24,    25,
     251,    -1,    -1,    29,   151,    31,    -1,   258,   259,   260,
      42,    -1,    -1,   160,   265,    16,    17,    18,    -1,    20,
     271,    -1,   169,    -1,    -1,    -1,   173,    28,    -1,    16,
      17,    18,   283,    20,    21,    -1,    25,    24,    25,   290,
     291,   292,   189,    -1,    31,    77,   193,    -1,   299,    -1,
      -1,    -1,    -1,    42,   305,   306,    -1,    16,    17,    18,
     311,    20,    21,    -1,    -1,    24,    25,    -1,    -1,   320,
      29,   322,    31,    -1,   106,    17,    18,    -1,    20,   111,
     112,    -1,   229,   334,   231,   336,   233,    29,    77,    31,
      -1,    -1,   239,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,   251,    -1,    29,    -1,    31,    -1,
      -1,   258,   259,    -1,    -1,    -1,    -1,   106,   265,   151,
      -1,    -1,   111,   112,   271,    16,    17,    18,   160,    20,
      25,    16,    17,    18,    -1,    20,   283,   169,    29,    -1,
      31,   173,    -1,   290,   291,    -1,    31,    42,    -1,    -1,
      -1,    -1,   299,    -1,    -1,    -1,    -1,   189,   305,   306,
      -1,   193,   151,    -1,   311,    16,    17,    18,    -1,    20,
      -1,   160,    -1,   320,    -1,   322,    -1,    -1,    29,    -1,
      31,    -1,    77,    -1,   173,    -1,    -1,   334,    -1,   336,
      16,    17,    18,    -1,    20,    -1,    -1,   229,    -1,   231,
      -1,   233,    -1,    29,   193,    31,    -1,   239,    16,    17,
      18,   106,    20,    -1,    -1,    -1,   111,   112,    -1,   251,
      28,    -1,    -1,    16,    17,    18,   258,    20,    21,    -1,
      -1,    24,    25,   265,    -1,    -1,    29,    -1,    31,   271,
     229,    -1,   231,    -1,   233,    16,    17,    18,    -1,    20,
     239,   283,    -1,    16,    17,    18,   151,    20,   290,    -1,
      31,    -1,   251,    -1,    -1,   160,    29,   299,    31,    -1,
      -1,    -1,    -1,   305,   306,    -1,   265,    -1,   173,   311,
      -1,    -1,   271,    -1,    -1,    16,    17,    18,   320,    20,
     322,    16,    17,    18,   283,    20,    21,    28,   193,    24,
      25,    -1,   334,    -1,   336,    -1,    31,    -1,    -1,    -1,
     299,    16,    17,    18,    -1,    20,   305,   306,    -1,    -1,
      -1,    -1,   311,    -1,    29,    -1,    31,    -1,    16,    17,
      18,   320,    20,   322,   229,    -1,   231,    -1,   233,    -1,
      -1,    29,    -1,    31,   239,   334,    -1,   336,    -1,    16,
      17,    18,    -1,    20,    21,    -1,   251,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    16,    17,    18,    -1,    20,
     265,     3,     4,     5,     6,     7,   271,    28,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,   283,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    -1,   299,    16,    17,    18,    -1,    20,
     305,   306,    -1,    16,    17,    18,   311,    20,    21,    -1,
      31,    24,    25,    -1,    -1,   320,    29,   322,    31,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    20,    -1,   334,
      -1,   336,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    16,    17,    18,    29,    20,
      31,    16,    17,    18,    -1,    20,    21,    28,    -1,    24,
      25,    16,    17,    18,    29,    20,    31,    16,    17,    18,
      -1,    20,    21,    28,    -1,    24,    25,    16,    17,    18,
      29,    20,    31,    16,    17,    18,    -1,    20,    21,    28,
      -1,    24,    25,    16,    17,    18,    29,    20,    31,    16,
      17,    18,    -1,    20,    21,    28,    -1,    24,    25,    -1,
      -1,    16,    17,    18,    31,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    16,    17,    18,    31,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    16,    17,    18,    31,    20,
      21,    -1,    -1,    24,    25,    -1,    -1,    16,    17,    18,
      31,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    16,
      17,    18,    31,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    16,    17,    18,    31,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    16,    17,    18,    31,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    16,    17,    18,    31,    20,
      21,    -1,    -1,    24,    25,    16,    17,    18,    -1,    20,
      31,    16,    17,    18,    -1,    20,    -1,    -1,    29,    -1,
      31,    16,    17,    18,    29,    20,    31,    16,    17,    18,
      -1,    20,    -1,    -1,    29,    -1,    31,    16,    17,    18,
      29,    20,    31,    16,    17,    18,    -1,    20,    -1,    -1,
      29,    -1,    31,    16,    17,    18,    -1,    20,    31,    16,
      17,    18,    -1,    20,    -1,    16,    17,    18,    31,    20,
      -1,    16,    17,    18,    31,    20,    -1,    16,    17,    18,
      31,    20,    21,    28,    -1,    24,    25,    -1,    -1,    28,
      -1,    30,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    12,    35,    36,    37,    38,    39,    40,     1,
       3,     0,    37,     9,    28,    30,     3,     4,     5,     6,
      17,    19,    22,    23,    27,    30,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    66,     1,    12,    31,
      41,    42,    30,    62,    58,    62,    62,    62,    55,    28,
      20,    18,    17,    16,    21,    24,    25,     3,    32,    48,
      29,    31,    31,    55,    65,    31,    58,    60,    61,    62,
      62,    62,    62,     1,    49,    42,    48,    29,    31,     3,
       7,    10,    11,    12,    13,    14,    15,    28,    33,    38,
      39,    43,    44,    45,    46,    47,    48,    50,    51,    52,
      53,    54,    55,    55,     1,     9,    30,    30,    28,    46,
       3,    30,    30,    30,    28,    55,    55,     1,     3,    47,
      28,    55,    55,     3,    31,    28,    28,    31,    31,    31,
      43,    55,    55,    28,    28,    28,     8,    28,    28,    43,
      47,    47,    31,    31,    48,    48,     3,     4,     5,     6,
      27,    30,    63,    64,    66,     3,     4,     5,     6,    27,
      30,    63,    64,    66,     3,     4,     5,     6,    17,    19,
      22,    23,    27,    30,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    66,     3,     4,     5,     6,    17,    19,
      22,    23,    27,    30,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    66,    32,     1,     9,    28,     7,    10,
      11,    12,    13,    14,    15,    28,    32,    38,    39,    44,
      45,    46,    48,    50,    51,    52,    53,    54,     3,    30,
      55,    30,    55,    30,     3,     4,     5,     6,    27,    30,
      62,    63,    64,    66,    58,    62,     3,     4,     5,     6,
      27,    30,    62,    63,    64,    66,    62,    55,    20,    18,
      17,    16,    21,    24,    25,    30,     3,     4,     5,     6,
      27,    30,    62,    63,    64,    66,    58,    62,     3,     4,
       5,     6,    27,    30,    62,    63,    64,    66,    62,    55,
      20,    18,    17,    16,    21,    24,    25,    49,    55,    30,
      30,    28,    46,     1,     3,    30,    30,    30,    49,    28,
       1,     9,    31,    65,    31,    31,    65,    31,    31,    65,
      30,    55,    30,    55,    31,    58,    60,    61,    62,    62,
      62,    62,    31,    65,    30,    55,    30,    55,    31,    58,
      60,    61,    62,    62,    62,    62,    33,    28,    55,     1,
      47,    28,     9,    28,    55,    55,     3,    33,    55,    31,
      31,    31,    31,    65,    31,    31,    65,    31,    31,    31,
      65,    31,    31,    65,    31,    31,    28,    28,    55,    31,
      31,    31,    31,    31,    31,    31,    43,    55,    55,    28,
      28,    28,    28,     8,    28,    28,    43,    47,    47,    31,
      31,    48,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    37,    38,    38,
      39,    40,    40,    40,    41,    41,    41,    42,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    44,    44,
      45,    45,    46,    46,    47,    47,    48,    49,    49,    49,
      50,    50,    51,    51,    52,    53,    54,    55,    55,    56,
      56,    56,    56,    56,    57,    57,    58,    58,    59,    59,
      60,    60,    61,    61,    61,    62,    62,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     2,
       5,     6,     5,     1,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     9,     9,
       2,     1,     1,     1,     3,     2,     3,     2,     0,     1,
       5,     7,     2,     3,     5,     5,     5,     1,     1,     3,
       2,     2,     3,     3,     3,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     2,     1,     1,     3,     1,     1,
       4,     3,     3,     1,     1,     1,     1,     1
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
#line 89 "src/bison/bison.y"
            {
	  tree = (yyval.node);
  }
#line 2322 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 95 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2332 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 100 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2340 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 106 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2348 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 109 "src/bison/bison.y"
                   {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2356 "src/bison/bison.tab.c"
    break;

  case 7: /* decl: var_decl_with_assing  */
#line 112 "src/bison/bison.y"
                              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2364 "src/bison/bison.tab.c"
    break;

  case 8: /* var_decl: TYPE ID ';'  */
#line 119 "src/bison/bison.y"
                    {
		(yyval.node) = createNode("var_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		insertSymbol((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 2380 "src/bison/bison.tab.c"
    break;

  case 9: /* var_decl: TYPE error  */
#line 130 "src/bison/bison.y"
                     {

	}
#line 2388 "src/bison/bison.tab.c"
    break;

  case 10: /* var_decl_with_assing: TYPE ID ASSIGN simple_exp ';'  */
#line 136 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("var_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);

		(yyval.node)->leaf3 = createNode("\0");
		(yyval.node)->leaf3->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf4 = (yyvsp[-1].node);

		insertSymbol((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "var", (yyvsp[-3].token).scope);
	}
#line 2409 "src/bison/bison.tab.c"
    break;

  case 11: /* fun_decl: TYPE ID '(' params ')' block_stmt  */
#line 155 "src/bison/bison.y"
                                          {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-5].token).lexeme, (yyvsp[-5].token).line, (yyvsp[-5].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[-2].node);
		(yyval.node)->leaf4 = (yyvsp[0].node);

		insertSymbol((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-5].token).lexeme, "fun",(yyvsp[-4].token).scope);
	}
#line 2428 "src/bison/bison.tab.c"
    break;

  case 12: /* fun_decl: TYPE ID '(' ')' block_stmt  */
#line 169 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[0].node);

		insertSymbol((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun", (yyvsp[-3].token).scope);
	}
#line 2446 "src/bison/bison.tab.c"
    break;

  case 13: /* fun_decl: error  */
#line 182 "src/bison/bison.y"
                {

	}
#line 2454 "src/bison/bison.tab.c"
    break;

  case 14: /* params: params ',' param_decl  */
#line 188 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2464 "src/bison/bison.tab.c"
    break;

  case 15: /* params: param_decl  */
#line 193 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2472 "src/bison/bison.tab.c"
    break;

  case 16: /* params: error  */
#line 196 "src/bison/bison.y"
               {
		
	}
#line 2480 "src/bison/bison.tab.c"
    break;

  case 17: /* param_decl: TYPE ID  */
#line 202 "src/bison/bison.y"
                {
		
		(yyval.node) = createNode("param_decl");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		insertSymbol((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2496 "src/bison/bison.tab.c"
    break;

  case 18: /* statement: exp_stmt  */
#line 216 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2504 "src/bison/bison.tab.c"
    break;

  case 19: /* statement: block_stmt  */
#line 219 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2512 "src/bison/bison.tab.c"
    break;

  case 20: /* statement: if_stmt  */
#line 222 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2520 "src/bison/bison.tab.c"
    break;

  case 21: /* statement: return_stmt  */
#line 225 "src/bison/bison.y"
                      {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2528 "src/bison/bison.tab.c"
    break;

  case 22: /* statement: write_stmt  */
#line 228 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2536 "src/bison/bison.tab.c"
    break;

  case 23: /* statement: writeln_stmt  */
#line 231 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2544 "src/bison/bison.tab.c"
    break;

  case 24: /* statement: read_stmt  */
#line 234 "src/bison/bison.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2552 "src/bison/bison.tab.c"
    break;

  case 25: /* statement: var_decl  */
#line 237 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2560 "src/bison/bison.tab.c"
    break;

  case 26: /* statement: var_decl_with_assing  */
#line 240 "src/bison/bison.y"
                               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2568 "src/bison/bison.tab.c"
    break;

  case 27: /* statement: for_stmt  */
#line 243 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2576 "src/bison/bison.tab.c"
    break;

  case 28: /* for_stmt: FOR '(' assing_exp ';' simple_exp ';' assing_exp ')' block_stmt  */
#line 249 "src/bison/bison.y"
                                                                        {
		(yyval.node) = createNode("for_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-8].token).lexeme, (yyvsp[-8].token).line, (yyvsp[-8].token).column);
		(yyval.node)->leaf2 = (yyvsp[-6].node);
		(yyval.node)->leaf3 = (yyvsp[-4].node);
		(yyval.node)->leaf4 = (yyvsp[-2].node);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2591 "src/bison/bison.tab.c"
    break;

  case 29: /* for_stmt: FOR '(' error ';' simple_exp ';' assing_exp ')' block_stmt  */
#line 259 "src/bison/bison.y"
                                                                           {

	}
#line 2599 "src/bison/bison.tab.c"
    break;

  case 30: /* exp_stmt: exp ';'  */
#line 266 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2607 "src/bison/bison.tab.c"
    break;

  case 31: /* exp_stmt: ';'  */
#line 269 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
	}
#line 2615 "src/bison/bison.tab.c"
    break;

  case 32: /* exp: assing_exp  */
#line 275 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2623 "src/bison/bison.tab.c"
    break;

  case 33: /* exp: simple_exp  */
#line 278 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2631 "src/bison/bison.tab.c"
    break;

  case 34: /* assing_exp: ID ASSIGN simple_exp  */
#line 284 "src/bison/bison.y"
                             {
		(yyval.node) = createNode("assing_exp");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2647 "src/bison/bison.tab.c"
    break;

  case 35: /* assing_exp: ID error  */
#line 295 "src/bison/bison.y"
                   {

	}
#line 2655 "src/bison/bison.tab.c"
    break;

  case 36: /* block_stmt: '{' stmt_list '}'  */
#line 301 "src/bison/bison.y"
                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2663 "src/bison/bison.tab.c"
    break;

  case 37: /* stmt_list: stmt_list statement  */
#line 308 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("stmt_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2673 "src/bison/bison.tab.c"
    break;

  case 38: /* stmt_list: %empty  */
#line 313 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
	}
#line 2681 "src/bison/bison.tab.c"
    break;

  case 39: /* stmt_list: error  */
#line 316 "src/bison/bison.y"
                {

	}
#line 2689 "src/bison/bison.tab.c"
    break;

  case 40: /* if_stmt: IF '(' simple_exp ')' statement  */
#line 322 "src/bison/bison.y"
                                                   {
		(yyval.node) = createNode("if_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2702 "src/bison/bison.tab.c"
    break;

  case 41: /* if_stmt: IF '(' simple_exp ')' statement ELSE statement  */
#line 330 "src/bison/bison.y"
                                                         {
		(yyval.node) = createNode("if_else_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-6].token).lexeme, (yyvsp[-6].token).line, (yyvsp[-6].token).column);
		
		(yyval.node)->leaf2 = (yyvsp[-4].node);
		(yyval.node)->leaf3 = (yyvsp[-2].node);

		(yyval.node)->leaf4 = createNode("\0");
		(yyval.node)->leaf4->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2720 "src/bison/bison.tab.c"
    break;

  case 42: /* return_stmt: RETURN ';'  */
#line 346 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2730 "src/bison/bison.tab.c"
    break;

  case 43: /* return_stmt: RETURN exp ';'  */
#line 351 "src/bison/bison.y"
                         {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
	}
#line 2741 "src/bison/bison.tab.c"
    break;

  case 44: /* write_stmt: WRITE '(' simple_exp ')' ';'  */
#line 360 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("write_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2753 "src/bison/bison.tab.c"
    break;

  case 45: /* writeln_stmt: WRITELN '(' simple_exp ')' ';'  */
#line 370 "src/bison/bison.y"
                                       {
		(yyval.node) = createNode("writeln_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2764 "src/bison/bison.tab.c"
    break;

  case 46: /* read_stmt: READ '(' ID ')' ';'  */
#line 379 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("read_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2  = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
	}
#line 2778 "src/bison/bison.tab.c"
    break;

  case 47: /* simple_exp: bin_exp  */
#line 391 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2786 "src/bison/bison.tab.c"
    break;

  case 48: /* simple_exp: list_exp  */
#line 394 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2794 "src/bison/bison.tab.c"
    break;

  case 49: /* list_exp: factor ':' factor  */
#line 400 "src/bison/bison.y"
                          {
		(yyval.node) = createNode("list_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2807 "src/bison/bison.tab.c"
    break;

  case 50: /* list_exp: '?' factor  */
#line 408 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2819 "src/bison/bison.tab.c"
    break;

  case 51: /* list_exp: '%' factor  */
#line 415 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2830 "src/bison/bison.tab.c"
    break;

  case 52: /* list_exp: factor MAP factor  */
#line 421 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2842 "src/bison/bison.tab.c"
    break;

  case 53: /* list_exp: factor FILTER factor  */
#line 428 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2854 "src/bison/bison.tab.c"
    break;

  case 54: /* bin_exp: bin_exp LOG_OP unary_log_exp  */
#line 438 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("bin_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2867 "src/bison/bison.tab.c"
    break;

  case 55: /* bin_exp: unary_log_exp  */
#line 446 "src/bison/bison.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2875 "src/bison/bison.tab.c"
    break;

  case 56: /* unary_log_exp: EXCLAMATION unary_log_exp  */
#line 452 "src/bison/bison.y"
                                  {
		(yyval.node) = createNode("unary_log_exp");
	
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2887 "src/bison/bison.tab.c"
    break;

  case 57: /* unary_log_exp: rel_exp  */
#line 459 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2895 "src/bison/bison.tab.c"
    break;

  case 58: /* rel_exp: rel_exp REL_OP sum_exp  */
#line 465 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("rel_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2907 "src/bison/bison.tab.c"
    break;

  case 59: /* rel_exp: sum_exp  */
#line 472 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2915 "src/bison/bison.tab.c"
    break;

  case 60: /* sum_exp: sum_exp SUM_OP mul_exp  */
#line 478 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("sum_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2927 "src/bison/bison.tab.c"
    break;

  case 61: /* sum_exp: mul_exp  */
#line 485 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2935 "src/bison/bison.tab.c"
    break;

  case 62: /* mul_exp: mul_exp MUL_OP factor  */
#line 491 "src/bison/bison.y"
                              {
		(yyval.node) = createNode("mul_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2948 "src/bison/bison.tab.c"
    break;

  case 63: /* mul_exp: factor  */
#line 499 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2956 "src/bison/bison.tab.c"
    break;

  case 64: /* mul_exp: SUM_OP factor  */
#line 502 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2966 "src/bison/bison.tab.c"
    break;

  case 65: /* factor: immutable  */
#line 510 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2974 "src/bison/bison.tab.c"
    break;

  case 66: /* factor: ID  */
#line 513 "src/bison/bison.y"
             {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2983 "src/bison/bison.tab.c"
    break;

  case 67: /* immutable: '(' simple_exp ')'  */
#line 520 "src/bison/bison.y"
                           {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2991 "src/bison/bison.tab.c"
    break;

  case 68: /* immutable: call  */
#line 523 "src/bison/bison.y"
               {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2999 "src/bison/bison.tab.c"
    break;

  case 69: /* immutable: constant  */
#line 526 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3007 "src/bison/bison.tab.c"
    break;

  case 70: /* call: ID '(' args ')'  */
#line 532 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("call");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
	}
#line 3018 "src/bison/bison.tab.c"
    break;

  case 71: /* call: ID '(' ')'  */
#line 538 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("call");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
	}
#line 3029 "src/bison/bison.tab.c"
    break;

  case 72: /* args: args ',' simple_exp  */
#line 547 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("args");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 3039 "src/bison/bison.tab.c"
    break;

  case 73: /* args: simple_exp  */
#line 552 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3047 "src/bison/bison.tab.c"
    break;

  case 74: /* constant: NIL  */
#line 558 "src/bison/bison.y"
            {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3056 "src/bison/bison.tab.c"
    break;

  case 75: /* constant: INT  */
#line 562 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3065 "src/bison/bison.tab.c"
    break;

  case 76: /* constant: FLOAT  */
#line 566 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3074 "src/bison/bison.tab.c"
    break;

  case 77: /* constant: STRING  */
#line 570 "src/bison/bison.y"
                 {		
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3083 "src/bison/bison.tab.c"
    break;


#line 3087 "src/bison/bison.tab.c"

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

#line 576 "src/bison/bison.y"


extern void yyerror(const char* s) {
    printf(BHRED"ERROR -> ");
    printf("%s ", s);
	printf("[Line %d, Column %d]\n"RESET, linhas, colunas);
	errors++;
}

int main(int argc, char **argv){
	initializeTable(symbolTable);
	initializeScopeStack(scopeStack);
    yyparse();
	if(!errors){
		printf("\n\n--------------------------------------------------------------- TREE ---------------------------------------------------------------- \n\n");
		printTree(tree, 1);
		printSymbolTable(symbolTable);
	}
	freeTree(tree);
	freeTable();
    yylex_destroy();
    return 0;
}
