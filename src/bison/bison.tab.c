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
#define YYLAST   3691

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  421

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
       0,    83,    83,    89,    94,   100,   103,   109,   123,   137,
     153,   158,   164,   178,   181,   184,   187,   190,   193,   196,
     199,   202,   208,   221,   224,   230,   233,   239,   253,   260,
     265,   271,   279,   295,   300,   309,   319,   328,   340,   343,
     349,   357,   364,   370,   377,   387,   395,   401,   408,   414,
     421,   427,   434,   440,   448,   451,   459,   462,   469,   472,
     475,   481,   487,   496,   501,   507,   511,   515,   519
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

#define YYPACT_NINF (-179)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    43,    25,    77,   102,   149,   169,   339,  -179,   509,
     559,    41,    48,    72,   173,   341,   365,  2273,   563,   155,
      72,  2305,   401,   631,  1239,  3448,  3462,  3476,    80,   151,
     929,   193,   178,   191,   200,    32,    24,   233,   233,  3490,
    2337,  1295,   649,  2369,  2401,  2433,  2465,   240,   246,  2497,
    2529,  2561,  2593,  2625,  2657,   250,   265,   -14,    21,   247,
     275,   424,  3504,  3518,  3532,  3546,  3113,    75,    28,   296,
    2689,   291,   295,  1295,  1295,   325,  3432,   804,    55,   837,
     298,   308,   319,  2721,    24,   113,   113,    32,   233,   233,
     233,   336,  3560,   547,   633,    95,   385,   370,  2753,   366,
     384,   392,  3574,   137,   471,  1161,  1734,   373,   425,   435,
    3122,  3588,   187,   229,   441,   442,   445,   672,   415,    56,
    2785,  2817,  2849,  1020,   478,  2881,   459,   468,  2913,  2273,
    3438,  3602,  3608,  3617,  1295,  3623,  3632,  3638,   581,   466,
     473,   489,   490,  1295,   493,   496,   503,   978,   922,  1074,
    1555,   537,   452,   580,   580,  3274,  1295,   517,   174,   209,
      69,    22,   208,  3286,  3298,  3310,  3322,  3416,  1044,  1465,
    1491,  1527,   611,   541,   616,   616,  3138,  1295,   705,    99,
     518,   127,  1635,   653,  3155,  3172,  3189,  3206,   196,   314,
     361,   369,   782,   520,  1295,    65,   571,   765,   958,   996,
    1061,  2945,   119,    28,   504,   526,  1169,   573,   549,   578,
     587,   500,  2273,   683,   745,  1693,   603,  1725,  1761,  1793,
    1825,  1857,  1889,   777,    92,   388,   434,   786,   584,  1295,
     289,   711,   830,  1578,  1620,  3149,   229,   632,  2977,   608,
     239,   613,   352,   154,   256,   332,   813,   844,  1295,   896,
    1167,  1323,  1377,   226,  1399,   157,   618,   628,   635,   636,
    1295,   640,   641,   648,   652,   669,   673,   452,   335,   335,
     537,   580,   580,   580,   462,   147,   715,  1127,  1195,  1272,
    1295,  1317,  1349,  1426,  1653,   645,  3050,   312,   734,   772,
     854,   855,  1295,   858,   862,   876,   888,   941,   677,   541,
     456,   456,   611,   616,   616,   616,   550,  1093,   681,    28,
     782,  3647,   953,   120,    28,   296,  1921,   686,   689,  1295,
    1295,   716,  3009,  1953,   795,  3166,   694,   229,   786,   305,
    1295,  3041,  3653,   701,   961,   709,  3334,   989,  1401,   702,
    1627,   714,  3346,   257,    40,  1515,  1603,   722,   731,   735,
    3223,  1006,  3073,   738,  3083,   748,  3240,   678,  1645,  3092,
    3370,  1015,  1025,  1097,  1214,  1100,  1340,  1433,  1443,  3662,
     108,   755,  1985,  2017,   771,   784,   792,  2049,  3183,  1121,
    3200,  3217,  3234,   796,   803,  3358,  1702,  1126,  1770,   824,
    1133,   825,  3257,  3376,  1173,  3393,  1188,  1191,  1196,  1546,
     187,   229,   834,   835,   838,  3251,  1802,   845,  3399,  1204,
    2081,   318,  2113,  2145,  2177,   187,   478,  2209,   857,   744,
    2241
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,   892,     0,  -179,  -179,   886,  -102,  -103,
    -100,   -26,   -49,   -12,  -124,   -99,   -98,   -90,   -89,   -86,
    1362,  1264,  1287,  1261,  1140,  1037,   895,   -19,   324,   569,
    -178,   814
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    43,     6,    14,    15,    44,    45,
      46,    47,    48,    49,    21,    50,    51,    52,    53,    54,
      93,   157,   158,   159,   160,   161,   162,   163,   164,   165,
      94,   166
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    18,    62,     5,    71,   238,     1,    84,    23,   214,
     118,    62,   215,   218,   219,   -38,    77,    79,    80,    81,
      97,   125,   220,   221,   312,     8,   222,    76,   130,   131,
     132,   188,   189,   190,   191,    76,   130,   131,   132,   269,
     -50,    35,   -46,   -50,    36,   192,     7,    62,   184,   197,
     -46,    16,   133,    12,   -50,   134,   193,   269,   -49,   194,
     133,   -49,   334,   134,   337,    79,    79,    79,   106,   107,
     108,   109,   -49,    13,   236,   126,   -47,    -2,   168,   169,
     170,   171,   309,   -50,   -47,   124,   216,   268,   322,     1,
     -48,   184,   172,    62,   232,   173,   351,   -50,   174,   175,
     217,   -48,    -4,   176,    62,    17,   177,    92,   -66,   -66,
     -66,    68,   213,   203,    -4,   128,    76,   130,   131,   132,
     299,   -66,   168,   169,   170,   171,   203,   112,   365,   -38,
      35,   -38,   249,   254,   261,   265,   172,   309,   -49,   173,
     400,   133,   174,   175,   134,   300,   379,   176,   -48,    -5,
     177,   311,   -49,   281,   286,   293,   297,   -48,   -45,   -48,
     387,    -5,   390,   -57,   -57,   -57,   -45,    12,   -57,    -6,
     -57,   -57,   -57,   307,   394,   -57,   397,   -57,   352,   -57,
     317,    -6,    69,   184,   197,   338,   -57,    62,   340,   -57,
      24,    25,    26,    27,   204,   267,    72,   205,   206,   207,
     208,   209,   210,    19,    35,    20,   -38,    36,   325,    73,
      37,    38,   -57,   -57,   -57,    39,   211,   232,    41,    62,
     212,   184,    74,   184,   270,   -52,   -52,   306,   -57,   -52,
     -46,    75,   223,   224,   225,   226,   138,   139,   140,   141,
     -52,   -46,   168,   169,   170,   171,   227,   -47,   254,   254,
     254,   346,   347,   348,   349,   184,   172,   228,   -47,   173,
     229,   142,   174,   175,   143,    85,   371,   176,   -48,    83,
     177,   333,   -66,   -66,   -66,   -25,   -48,   -66,   -45,   -26,
     286,   286,   286,   360,   361,   362,   363,   184,   -66,   -45,
     197,   368,    86,   -50,   -39,   197,   -50,   214,   410,    96,
     215,   218,   219,    62,   -50,   184,   327,   -50,   232,   382,
     220,   221,   214,   417,   222,   215,   218,   219,   -50,   184,
      98,   184,   327,   -49,   201,   220,   221,   -41,   101,   222,
     -66,   -66,   -66,   184,   -49,   184,   236,   -42,   243,   244,
     245,   246,   -57,   354,   -57,    63,   -66,   416,   -67,   -67,
     -67,   102,   151,   -67,    63,   168,   169,   170,   171,   135,
     135,   144,   144,   247,   -67,   -27,   248,   418,    10,   172,
      11,   -11,   173,   -11,   216,   174,   175,   -67,   -67,   -67,
     176,    62,   232,   177,   336,   -65,   -65,   -65,   217,   216,
      63,   185,   198,   -67,    66,   -12,    62,   -12,   114,   113,
     213,   -65,   -40,   217,   -67,   -67,   -67,   420,   135,   135,
     135,   135,   144,   144,   144,   213,   115,   -67,   -31,   -31,
     -31,   -31,   -31,   123,   116,   -31,   -31,   -31,   -31,   -31,
     -31,   -10,   -31,   -10,   185,   -31,    63,   233,   -31,   -31,
      87,   -52,   -52,   -31,   -31,   -52,   -31,    63,   -31,   -31,
     -65,   -65,   -65,   -52,   -43,   243,   244,   245,   246,   275,
     276,   277,   278,   -65,   -44,   168,   169,   170,   171,   151,
     120,   121,   152,   172,   122,   250,   250,   262,   262,   172,
     247,   237,   173,   248,   279,   174,   175,   280,    86,   -49,
     176,   127,   -49,   177,   350,   -66,   282,   282,   294,   294,
     -49,   129,   -67,   -24,   -24,   -24,   -24,   -24,   -24,    -3,
     -24,   -24,   -24,   -24,   -24,   -24,   198,   -24,   -65,   -68,
     -24,    -3,   -56,   -24,   -24,   -59,   185,   198,   -24,   -24,
      63,   -24,   -60,   -24,   -24,   314,   -68,   -68,   -68,   -46,
     243,   244,   245,   246,   275,   276,   277,   278,   -46,   -39,
     -46,   233,   -68,   168,   169,   170,   171,   315,   172,    -7,
     233,   173,    63,    -9,   185,   247,   185,   172,   248,   279,
     173,    -7,   280,   174,   175,    -9,   318,   -64,   176,   -64,
     319,   177,   364,   255,   256,   257,   258,   310,   -52,   -52,
      64,   250,   250,   250,   250,   262,   262,   262,   185,    64,
     -68,   -68,   -68,   -52,   136,   136,   145,   145,   259,   320,
     -57,   260,   240,   -68,   275,   276,   277,   278,   321,   287,
     288,   289,   290,   282,   282,   282,   282,   294,   294,   294,
     185,    -8,   323,   198,   198,    64,   186,   199,   198,   279,
     332,   330,   280,    -8,   291,   335,    63,   292,   185,   -28,
     -66,   233,   233,   136,   136,   136,   136,   145,   145,   145,
     -67,   -28,   185,   110,   185,   111,   -47,   -65,   -68,   302,
     -52,   -52,   -41,   -56,   -52,   -47,   185,   -47,   185,   186,
     -59,    64,   234,   -52,   -60,   -52,   -20,   -20,   -20,   -20,
     -20,   -20,    64,   -20,   -20,   -20,   -20,   -20,   -20,   -45,
     -20,   -42,   -63,   -20,   -63,   342,   -20,   -20,   -45,   356,
     -45,   -20,   -20,   366,   -20,   372,   -20,   -20,   373,   376,
     251,   251,   263,   263,    63,   233,   380,   328,   -52,   -52,
     -62,   -66,   -66,   -66,   388,   -39,   -66,   -39,   -58,    63,
     -52,   283,   283,   295,   295,   -66,   391,   -66,   -21,   -21,
     -21,   -21,   -21,   -21,   -40,   -21,   -21,   -21,   -21,   -21,
     -21,   199,   -21,   -43,   -66,   -21,   -66,   -44,   -21,   -21,
     395,   186,   199,   -21,   -21,    64,   -21,   212,   -21,   -21,
     398,   -54,   -54,   -54,   401,   188,   189,   190,   191,   223,
     224,   225,   226,   -57,   -57,   -57,   234,   -54,   168,   169,
     170,   171,   -67,   402,   -67,   234,   -57,    64,   324,   186,
     193,   186,   172,   194,   228,   173,   403,   229,   174,   175,
     -55,   -55,   -55,   176,   404,   -55,   177,   378,   -27,   -65,
     -65,   -65,   -61,   -55,   -65,    65,   251,   251,   251,   251,
     263,   263,   263,   186,    65,   -65,   -54,   -54,   -54,   137,
     137,   146,   146,   -54,   -54,   -54,   -62,   -58,   -54,   -54,
     -68,   -68,   -68,   412,   413,   -68,   -54,   414,   283,   283,
     283,   283,   295,   295,   295,   186,   -68,   -61,   199,   199,
      65,   187,   200,   199,   -65,   -68,   -65,   -68,   -41,   419,
     -41,    64,   -56,   186,   -56,     9,   234,   234,   137,   137,
     137,   137,   146,   146,   146,    22,   -59,   186,   -59,   186,
       0,     0,   -55,   -55,   -55,     0,    61,   -55,   -60,     0,
     -60,   186,     0,   186,   187,    61,    65,   235,   -55,     0,
       0,    61,    24,    25,    26,    27,     0,    65,   -66,   -66,
     -66,     0,     0,   -66,   -66,     0,    35,   -66,   -66,    36,
       0,     0,    37,    38,   -66,     0,     0,    39,    70,     0,
      41,    61,   183,   196,     0,   252,   252,   264,   264,    64,
     234,   -42,     0,   -42,   -56,   -56,   -56,     0,     0,    61,
      61,   105,     0,   110,    64,   369,   284,   284,   296,   296,
     -56,   110,     0,   384,   -57,   -57,   -57,     0,     0,   -57,
     -57,     0,     0,   -57,   -57,   183,   200,    61,   231,   242,
     -57,     0,   -59,   -59,   -59,     0,   187,   200,    61,   110,
      65,   385,     0,    24,    25,    26,    27,    28,   -59,     0,
      29,    30,    31,    32,    33,    34,   110,    35,   392,     0,
      36,   235,     0,    37,    38,   -40,     0,   -40,    39,    40,
     235,    41,    65,   129,   187,   -43,   187,   -43,    60,     0,
     -57,   -57,   -57,     0,     0,   -57,   -57,    60,   183,   -57,
     -57,     0,     0,    60,   -57,   274,   -57,   -60,   -60,   -60,
       0,   252,   252,   252,   252,   264,   264,   264,   187,     0,
     -67,   -67,   -67,   -60,     0,   -67,   -67,   183,   196,   -67,
     -67,    61,     0,    60,   182,   195,   -67,     0,     0,   -55,
     -55,   -55,     0,   284,   284,   284,   284,   296,   296,   296,
     187,    60,   104,   200,   200,   -55,     0,   -44,   200,   -44,
     110,   231,   399,    61,     0,   183,    65,   183,   187,     0,
       0,   235,   235,   -67,   -67,   -67,     0,   182,   -67,    60,
     230,   110,   187,   405,   187,     0,   110,   -67,   406,   -67,
      60,    59,     0,   110,   345,   407,   187,     0,   187,   183,
      59,     0,    24,    25,    26,    27,    59,    87,   -51,   -51,
       0,     0,   -51,   -56,   -56,   -56,    35,     0,   -56,    36,
     -51,     0,    37,    38,   183,   183,   359,    39,   316,   -56,
      41,   183,     0,   110,   367,   408,    59,   181,    95,   196,
     182,   -65,   -65,   -65,    65,   235,   -65,    61,   -62,   183,
     -62,   110,   381,   409,    59,   -65,   -58,   -65,   -58,    65,
     -62,   -62,   -62,   183,   -61,   183,   -61,     0,     0,   182,
     313,     0,     0,    60,     0,     0,   -62,   183,    66,   183,
     181,     0,    59,   119,     0,   -57,   -57,   -57,     0,     0,
     -57,   -57,     0,    59,   -57,   -57,     0,     0,   -57,     0,
      67,     0,     0,   329,     0,    60,     0,   182,     0,   182,
       0,     0,    58,     0,     0,    56,     0,     0,   -68,   -68,
     -68,    58,     0,   -68,    56,    61,   231,    78,   147,   148,
     149,   150,   -68,     0,   -68,   344,     0,     0,    57,     0,
      61,   182,   151,   181,     0,   152,     0,    57,   153,   154,
       0,     0,     0,   155,     0,     0,   156,    58,   180,     0,
      56,   178,     0,   -55,   -55,   -55,   182,   358,   -55,   -59,
     -59,   -59,   181,   182,   -59,   103,    59,   -55,     0,   -55,
       0,   195,     0,    57,   179,   -59,   -58,   -58,   -58,    60,
       0,   182,     0,     0,     0,   -56,   -56,   -56,     0,     0,
     -56,   180,   -58,    58,   178,   182,    56,   182,    59,   -56,
     181,   -56,   181,    55,    58,     0,     0,    56,     0,   182,
       0,   182,    55,   -60,   -60,   -60,     0,   179,   -60,    57,
       0,     0,     0,    82,   168,   169,   170,   171,     0,   -60,
      57,     0,     0,   253,   181,   -54,   -54,   -54,   172,     0,
     -54,   173,     0,     0,   174,   175,     0,     0,    91,   176,
       0,   -54,   177,   386,   285,    99,   100,    60,   230,   181,
       0,     0,   -59,   -59,   -59,     0,   181,   -59,     0,   310,
     -51,   -51,    60,     0,   370,     0,   -59,     0,   -59,   -53,
     -53,   -53,    59,   180,   181,   -51,   178,    58,     0,     0,
      56,     0,   117,     0,    55,   -53,     0,     0,   181,     0,
     181,   -66,   -66,   -66,     0,    55,   -66,   -66,     0,   179,
     -66,   -66,   181,    57,   181,   -66,   239,   -66,     0,    58,
       0,   180,    56,   180,   178,   241,   178,   -67,   -67,   -67,
       0,     0,   -67,   -67,     0,     0,   -67,   -67,   266,     0,
       0,   -67,     0,   -67,     0,    57,     0,   179,   343,   179,
       0,   270,   -51,   -51,     0,   180,   -51,     0,   178,   298,
      59,   411,     0,   -65,   -65,   -65,     0,   -51,   -65,   -65,
       0,     0,   -65,   -65,     0,    59,   308,   -65,     0,   -65,
     357,   179,   -61,   -61,   -61,     0,     0,   180,    55,     0,
     178,   -65,   -65,   -65,     0,     0,   -65,   -65,   -61,     0,
     -65,   -65,     0,    58,     0,   180,    56,   -65,   178,     0,
       0,   326,     0,   179,   -56,   -56,   -56,     0,     0,   180,
      55,   180,   178,     0,   178,     0,     0,   -56,     0,    57,
     339,   179,     0,   180,     0,   180,   178,     0,   178,   -53,
     -53,   -53,   341,     0,   -53,   179,     0,   179,     0,     0,
     168,   169,   170,   171,     0,   -53,   -59,   -59,   -59,   179,
       0,   179,   353,     0,   172,     0,     0,   173,     0,   -59,
     174,   175,   301,   -50,   355,   176,   -50,     0,   177,   389,
       0,    58,   301,   -49,    56,   -50,   -49,   -50,     0,   -60,
     -60,   -60,     0,     0,   -60,   -49,    58,   -49,     0,    56,
       0,   374,   375,   -60,    55,   -60,     0,    57,     0,     0,
       0,     0,   383,     0,     0,     0,   -13,   -13,   -13,   -13,
     -13,   -13,    57,   -13,   -13,   -13,   -13,   -13,   -13,     0,
     -13,     0,     0,   -13,     0,     0,   -13,   -13,   -62,   -62,
     -62,   -13,   -13,   -62,   -13,     0,   -13,   -13,   -14,   -14,
     -14,   -14,   -14,   -14,   -62,   -14,   -14,   -14,   -14,   -14,
     -14,     0,   -14,     0,     0,   -14,     0,     0,   -14,   -14,
     -53,   -53,   -53,   -14,   -14,   -53,   -14,     0,   -14,   -14,
       0,     0,    55,   -53,   -15,   -15,   -15,   -15,   -15,   -15,
       0,   -15,   -15,   -15,   -15,   -15,   -15,    55,   -15,     0,
       0,   -15,     0,     0,   -15,   -15,   -58,   -58,   -58,   -15,
     -15,   -58,   -15,     0,   -15,   -15,   -16,   -16,   -16,   -16,
     -16,   -16,   -58,   -16,   -16,   -16,   -16,   -16,   -16,     0,
     -16,     0,     0,   -16,     0,     0,   -16,   -16,   -61,   -61,
     -61,   -16,   -16,   -61,   -16,     0,   -16,   -16,   -17,   -17,
     -17,   -17,   -17,   -17,   -61,   -17,   -17,   -17,   -17,   -17,
     -17,     0,   -17,     0,     0,   -17,     0,     0,   -17,   -17,
       0,     0,     0,   -17,   -17,     0,   -17,     0,   -17,   -17,
     -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,
     -18,   -18,   -18,     0,   -18,     0,     0,   -18,     0,     0,
     -18,   -18,     0,     0,     0,   -18,   -18,     0,   -18,     0,
     -18,   -18,   -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,   -19,   -19,     0,   -19,     0,     0,   -19,
       0,     0,   -19,   -19,     0,     0,     0,   -19,   -19,     0,
     -19,     0,   -19,   -19,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
       0,   -33,     0,     0,   -33,   -33,     0,     0,     0,   -33,
     -33,     0,   -33,     0,   -33,   -33,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,     0,     0,   -23,     0,     0,   -23,   -23,     0,     0,
       0,   -23,   -23,     0,   -23,     0,   -23,   -23,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,     0,     0,   -34,     0,     0,   -34,   -34,
       0,     0,     0,   -34,   -34,     0,   -34,     0,   -34,   -34,
      -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,     0,     0,    -7,     0,     0,
      -7,    -7,     0,     0,     0,    -7,    -7,     0,    -7,     0,
      -7,    -7,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,     0,     0,   -28,
       0,     0,   -28,   -28,     0,     0,     0,   -28,   -28,     0,
     -28,     0,   -28,   -28,   -31,   -31,   -31,   -31,   -31,   415,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,
       0,   -31,     0,     0,   -31,   -31,     0,     0,     0,   -31,
     -31,     0,   -31,     0,   -31,   -31,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,     0,     0,   -35,     0,     0,   -35,   -35,     0,     0,
       0,   -35,   -35,     0,   -35,     0,   -35,   -35,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,     0,     0,   -36,     0,     0,   -36,   -36,
       0,     0,     0,   -36,   -36,     0,   -36,     0,   -36,   -36,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,     0,     0,   -37,     0,     0,
     -37,   -37,     0,     0,     0,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,   -32,
       0,     0,   -32,   -32,     0,     0,     0,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -22,   -22,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,     0,
       0,   -22,     0,     0,   -22,   -22,     0,     0,     0,   -22,
     -22,     0,   -22,     0,   -22,   -22,   -30,   -30,   -30,   -30,
     -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,     0,     0,   -30,     0,     0,   -30,   -30,     0,     0,
       0,   -30,   -30,     0,   -30,     0,   -30,   -30,    24,    25,
      26,    27,    28,     0,     0,    29,    30,    31,    32,    33,
      34,     0,    35,     0,     0,    36,     0,     0,    37,    38,
       0,     0,     0,    39,    40,     0,    41,     0,   129,    42,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,   -24,     0,     0,   -24,     0,     0,
     -24,   -24,     0,     0,     0,   -24,   -24,     0,   -24,     0,
     -24,   -24,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -20,   -20,   -20,   -20,   -20,     0,   -20,     0,     0,   -20,
       0,     0,   -20,   -20,     0,     0,     0,   -20,   -20,     0,
     -20,     0,   -20,   -20,   -29,   -29,   -29,   -29,   -29,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,
       0,   -29,     0,     0,   -29,   -29,     0,     0,     0,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -21,   -21,   -21,   -21,
     -21,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,     0,     0,   -21,     0,     0,   -21,   -21,     0,     0,
       0,   -21,   -21,     0,   -21,     0,   -21,   -21,   -13,   -13,
     -13,   -13,   -13,     0,     0,   -13,   -13,   -13,   -13,   -13,
     -13,     0,   -13,     0,     0,   -13,     0,     0,   -13,   -13,
       0,     0,     0,   -13,   -13,     0,   -13,     0,   -13,   -13,
     -14,   -14,   -14,   -14,   -14,     0,     0,   -14,   -14,   -14,
     -14,   -14,   -14,     0,   -14,     0,     0,   -14,     0,     0,
     -14,   -14,     0,     0,     0,   -14,   -14,     0,   -14,     0,
     -14,   -14,   -15,   -15,   -15,   -15,   -15,     0,     0,   -15,
     -15,   -15,   -15,   -15,   -15,     0,   -15,     0,     0,   -15,
       0,     0,   -15,   -15,     0,     0,     0,   -15,   -15,     0,
     -15,     0,   -15,   -15,   -16,   -16,   -16,   -16,   -16,     0,
       0,   -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,     0,
       0,   -16,     0,     0,   -16,   -16,     0,     0,     0,   -16,
     -16,     0,   -16,     0,   -16,   -16,   -17,   -17,   -17,   -17,
     -17,     0,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,
     -17,     0,     0,   -17,     0,     0,   -17,   -17,     0,     0,
       0,   -17,   -17,     0,   -17,     0,   -17,   -17,   -18,   -18,
     -18,   -18,   -18,     0,     0,   -18,   -18,   -18,   -18,   -18,
     -18,     0,   -18,     0,     0,   -18,     0,     0,   -18,   -18,
       0,     0,     0,   -18,   -18,     0,   -18,     0,   -18,   -18,
     -19,   -19,   -19,   -19,   -19,     0,     0,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,     0,     0,   -19,     0,     0,
     -19,   -19,     0,     0,     0,   -19,   -19,     0,   -19,     0,
     -19,   -19,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,   -33,
       0,     0,   -33,   -33,     0,     0,     0,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -23,   -23,   -23,   -23,   -23,     0,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,     0,
       0,   -23,     0,     0,   -23,   -23,     0,     0,     0,   -23,
     -23,     0,   -23,     0,   -23,   -23,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,     0,   -34,     0,     0,   -34,   -34,     0,     0,
       0,   -34,   -34,     0,   -34,     0,   -34,   -34,   -35,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,     0,     0,   -35,     0,     0,   -35,   -35,
       0,     0,     0,   -35,   -35,     0,   -35,     0,   -35,   -35,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,     0,   -36,     0,     0,
     -36,   -36,     0,     0,     0,   -36,   -36,     0,   -36,     0,
     -36,   -36,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,     0,     0,   -37,
       0,     0,   -37,   -37,     0,     0,     0,   -37,   -37,     0,
     -37,     0,   -37,   -37,   -32,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,
       0,   -32,     0,     0,   -32,   -32,     0,     0,     0,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -22,   -22,   -22,   -22,
     -22,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,     0,     0,   -22,     0,     0,   -22,   -22,     0,     0,
       0,   -22,   -22,     0,   -22,     0,   -22,   -22,    -7,    -7,
      -7,    -7,    -7,     0,     0,    -7,    -7,    -7,    -7,    -7,
      -7,     0,    -7,     0,     0,    -7,     0,     0,    -7,    -7,
       0,     0,     0,    -7,    -7,     0,    -7,     0,    -7,    -7,
      24,    25,    26,    27,    28,     0,     0,    29,    30,    31,
      32,    33,    34,     0,    35,     0,     0,    36,     0,     0,
      37,    38,     0,     0,     0,    39,    40,     0,    41,     0,
     129,   331,    24,    25,    26,    27,    28,     0,     0,    29,
      30,    31,    32,    33,    34,     0,    35,     0,     0,    36,
       0,     0,    37,    38,     0,     0,     0,    39,    40,     0,
      41,     0,   129,   377,   -28,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,
       0,   -28,     0,     0,   -28,   -28,   -54,   -54,   -54,   -28,
     -28,   -54,   -28,     0,   -28,   -28,   168,   169,   170,   171,
     -54,     0,   -54,     0,     0,     0,   168,   169,   170,   171,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
     172,   176,     0,   173,   177,   393,   174,   175,   302,   -51,
     -51,   176,     0,   -51,   177,   396,   167,    25,    26,    27,
       0,     0,   -51,     0,   -51,   168,   169,   170,   171,     0,
      35,     0,     0,    36,     0,     0,    37,    38,     0,   172,
       0,    39,   173,     0,    41,   174,   175,     0,     0,     0,
     176,     0,     0,   177,   -68,   -68,   -68,     0,     0,   -68,
     -68,     0,     0,   -68,   -68,   -60,   -60,   -60,   -68,     0,
     -68,   -54,   -54,   -54,     0,     0,   -54,   303,   -60,     0,
     304,   305,   -55,   -55,   -55,   -54,     0,   -54,   -56,   -56,
     -56,     0,     0,   -56,   -56,   -55,     0,   -56,   -56,   -62,
     -62,   -62,   -56,     0,   -56,   -59,   -59,   -59,     0,     0,
     -59,   -59,   -62,     0,   -59,   -59,   -58,   -58,   -58,   -59,
       0,   -59,   -60,   -60,   -60,     0,     0,   -60,   -60,   -58,
       0,   -60,   -60,   328,   -51,   -51,   -60,     0,   -60,   -62,
     -62,   -62,     0,     0,   -62,   -62,   -51,     0,   -62,   -62,
     -53,   -53,   -53,   -62,     0,   -62,   -58,   -58,   -58,     0,
       0,   -58,   -58,   -53,     0,   -58,   -58,   -61,   -61,   -61,
     -58,     0,   -58,   -61,   -61,   -61,     0,     0,   -61,   -61,
     -61,     0,   -61,   -61,     0,     0,     0,   -61,     0,   -61,
     -68,   -68,   -68,     0,     0,   -68,   -68,     0,     0,   -68,
     -68,     0,   -54,   -54,   -54,     0,   -68,   -54,   271,     0,
       0,   272,   273,     0,   -56,   -56,   -56,     0,   -54,   -56,
     -56,     0,     0,   -56,   -56,     0,   -59,   -59,   -59,     0,
     -56,   -59,   -59,     0,     0,   -59,   -59,     0,   -60,   -60,
     -60,     0,   -59,   -60,   -60,     0,     0,   -60,   -60,     0,
     -62,   -62,   -62,     0,   -60,   -62,   -62,     0,     0,   -62,
     -62,     0,   -58,   -58,   -58,     0,   -62,   -58,   -58,     0,
       0,   -58,   -58,     0,   -61,   -61,   -61,     0,   -58,   -61,
     -61,     0,     0,   -61,   -61,     0,   -53,   -53,   -53,     0,
     -61,   -53,   -62,   -62,   -62,     0,     0,   -62,     0,     0,
     -53,     0,   -53,     0,     0,     0,   -62,     0,   -62,   -58,
     -58,   -58,     0,     0,   -58,   -61,   -61,   -61,     0,     0,
     -61,     0,     0,   -58,     0,   -58,     0,     0,     0,   -61,
       0,   -61,   -57,   -57,   -57,     0,     0,   -57,   -57,     0,
       0,   -57,   -57,     0,     0,   -57,     0,    67,   -57,   -57,
     -57,     0,     0,   -57,   -66,   -66,   -66,     0,     0,   -66,
       0,   -57,     0,   202,   -66,   -66,   -66,   -66,     0,   -66,
     -66,     0,     0,   -66,   -66,     0,     0,   -66,   -67,   -67,
     -67,     0,     0,   -67,   -67,     0,     0,   -67,   -67,     0,
       0,   -67,   -65,   -65,   -65,     0,     0,   -65,   -65,     0,
       0,   -65,   -65,     0,     0,   -65,   -68,   -68,   -68,     0,
       0,   -68,   -68,     0,     0,   -68,   -68,     0,     0,   -68,
     -54,   -54,   -54,     0,     0,   -54,    88,     0,     0,    89,
      90,     0,     0,   -54,   -56,   -56,   -56,     0,     0,   -56,
     -56,     0,     0,   -56,   -56,     0,     0,   -56,   -59,   -59,
     -59,     0,     0,   -59,   -59,     0,     0,   -59,   -59,     0,
       0,   -59,   -60,   -60,   -60,     0,     0,   -60,   -60,     0,
       0,   -60,   -60,     0,     0,   -60,   -62,   -62,   -62,     0,
       0,   -62,   -62,     0,     0,   -62,   -62,     0,     0,   -62,
     -58,   -58,   -58,     0,     0,   -58,   -58,     0,     0,   -58,
     -58,     0,     0,   -58,   -61,   -61,   -61,     0,     0,   -61,
     -61,     0,     0,   -61,   -61,     0,     0,   -61,   -67,   -67,
     -67,     0,     0,   -67,   -65,   -65,   -65,     0,     0,   -65,
       0,   -67,     0,   -68,   -68,   -68,     0,   -65,   -68,   -56,
     -56,   -56,     0,     0,   -56,     0,   -68,     0,   -59,   -59,
     -59,     0,   -56,   -59,   -60,   -60,   -60,     0,     0,   -60,
       0,   -59,     0,   -62,   -62,   -62,     0,   -60,   -62,   -58,
     -58,   -58,     0,     0,   -58,     0,   -62,     0,   -61,   -61,
     -61,     0,   -58,   -61,     0,     0,     0,     0,     0,     0,
       0,   -61
};

static const yytype_int16 yycheck[] =
{
       0,    13,    21,     3,    30,   129,    12,    21,    20,   112,
     112,    30,   112,   112,   112,    29,    35,    36,    37,    38,
      69,   123,   112,   112,   202,     0,   112,     3,     4,     5,
       6,     3,     4,     5,     6,     3,     4,     5,     6,    17,
      18,    17,    21,    21,    20,    17,     3,    66,    67,    68,
      29,     3,    28,    12,    32,    31,    28,    17,    18,    31,
      28,    21,   240,    31,   242,    84,    85,    86,    87,    88,
      89,    90,    32,    32,    18,   124,    21,     0,     3,     4,
       5,     6,    17,    18,    29,    29,   112,    18,   212,    12,
      21,   110,    17,   112,   113,    20,   274,    32,    23,    24,
     112,    32,     0,    28,   123,    33,    31,    32,    16,    17,
      18,    31,   112,    18,    12,   127,     3,     4,     5,     6,
      21,    29,     3,     4,     5,     6,    18,    32,   306,    30,
      17,    32,   151,   152,   153,   154,    17,    17,    18,    20,
      32,    28,    23,    24,    31,    18,   324,    28,    21,     0,
      31,    32,    32,   172,   173,   174,   175,    30,    21,    32,
     338,    12,   340,    16,    17,    18,    29,    12,    21,     0,
      16,    17,    18,   192,   352,    21,   354,    30,    31,    32,
     206,    12,    31,   202,   203,    31,    32,   206,    31,    32,
       3,     4,     5,     6,     7,    21,     3,    10,    11,    12,
      13,    14,    15,    30,    17,    32,    32,    20,   227,    31,
      23,    24,    16,    17,    18,    28,    29,   236,    31,   238,
      33,   240,    31,   242,    16,    17,    18,    31,    32,    21,
      21,    31,     3,     4,     5,     6,     3,     4,     5,     6,
      32,    32,     3,     4,     5,     6,    17,    21,   267,   268,
     269,   270,   271,   272,   273,   274,    17,    28,    32,    20,
      31,    28,    23,    24,    31,    18,   315,    28,    21,    29,
      31,    32,    16,    17,    18,    29,    29,    21,    21,    29,
     299,   300,   301,   302,   303,   304,   305,   306,    32,    32,
     309,   310,    17,    18,    29,   314,    21,   400,   400,     3,
     400,   400,   400,   322,    29,   324,    17,    18,   327,   328,
     400,   400,   415,   415,   400,   415,   415,   415,    29,   338,
      29,   340,    17,    18,    29,   415,   415,    29,     3,   415,
      16,    17,    18,   352,    29,   354,    18,    29,     3,     4,
       5,     6,    30,    31,    32,    21,    32,    29,    16,    17,
      18,    32,    17,    21,    30,     3,     4,     5,     6,    35,
      36,    37,    38,    28,    32,    29,    31,   416,    29,    17,
      31,    30,    20,    32,   400,    23,    24,    16,    17,    18,
      28,   400,   401,    31,    32,    16,    17,    18,   400,   415,
      66,    67,    68,    32,     9,    30,   415,    32,    32,    29,
     400,    32,    29,   415,    16,    17,    18,   419,    84,    85,
      86,    87,    88,    89,    90,   415,    32,    29,     3,     4,
       5,     6,     7,     8,    32,    10,    11,    12,    13,    14,
      15,    30,    17,    32,   110,    20,   112,   113,    23,    24,
      16,    17,    18,    28,    29,    21,    31,   123,    33,    34,
      16,    17,    18,    29,    29,     3,     4,     5,     6,     3,
       4,     5,     6,    29,    29,     3,     4,     5,     6,    17,
      29,    29,    20,    17,    29,   151,   152,   153,   154,    17,
      28,     3,    20,    31,    28,    23,    24,    31,    17,    18,
      28,    32,    21,    31,    32,    29,   172,   173,   174,   175,
      29,    33,    29,     3,     4,     5,     6,     7,     8,     0,
      10,    11,    12,    13,    14,    15,   192,    17,    29,    29,
      20,    12,    29,    23,    24,    29,   202,   203,    28,    29,
     206,    31,    29,    33,    34,    31,    16,    17,    18,    21,
       3,     4,     5,     6,     3,     4,     5,     6,    30,    32,
      32,   227,    32,     3,     4,     5,     6,    31,    17,     0,
     236,    20,   238,     0,   240,    28,   242,    17,    31,    28,
      20,    12,    31,    23,    24,    12,     3,    30,    28,    32,
      31,    31,    32,     3,     4,     5,     6,    16,    17,    18,
      21,   267,   268,   269,   270,   271,   272,   273,   274,    30,
      16,    17,    18,    32,    35,    36,    37,    38,    28,    31,
      29,    31,    31,    29,     3,     4,     5,     6,    31,     3,
       4,     5,     6,   299,   300,   301,   302,   303,   304,   305,
     306,     0,    29,   309,   310,    66,    67,    68,   314,    28,
      32,     9,    31,    12,    28,    32,   322,    31,   324,     0,
      32,   327,   328,    84,    85,    86,    87,    88,    89,    90,
      32,    12,   338,    30,   340,    32,    21,    32,    32,    16,
      17,    18,    32,    32,    21,    30,   352,    32,   354,   110,
      32,   112,   113,    30,    32,    32,     3,     4,     5,     6,
       7,     8,   123,    10,    11,    12,    13,    14,    15,    21,
      17,    32,    30,    20,    32,    32,    23,    24,    30,    32,
      32,    28,    29,    32,    31,    29,    33,    34,    29,     3,
     151,   152,   153,   154,   400,   401,    32,    16,    17,    18,
      29,    16,    17,    18,    32,    30,    21,    32,    29,   415,
      29,   172,   173,   174,   175,    30,    32,    32,     3,     4,
       5,     6,     7,     8,    32,    10,    11,    12,    13,    14,
      15,   192,    17,    32,    30,    20,    32,    32,    23,    24,
      32,   202,   203,    28,    29,   206,    31,    33,    33,    34,
      32,    16,    17,    18,    29,     3,     4,     5,     6,     3,
       4,     5,     6,    16,    17,    18,   227,    32,     3,     4,
       5,     6,    30,    32,    32,   236,    29,   238,    31,   240,
      28,   242,    17,    31,    28,    20,    32,    31,    23,    24,
      16,    17,    18,    28,    32,    21,    31,    32,    32,    16,
      17,    18,    29,    29,    21,    21,   267,   268,   269,   270,
     271,   272,   273,   274,    30,    32,    16,    17,    18,    35,
      36,    37,    38,    16,    17,    18,    32,    32,    21,    29,
      16,    17,    18,    29,    29,    21,    29,    29,   299,   300,
     301,   302,   303,   304,   305,   306,    32,    32,   309,   310,
      66,    67,    68,   314,    30,    30,    32,    32,    30,    32,
      32,   322,    30,   324,    32,     3,   327,   328,    84,    85,
      86,    87,    88,    89,    90,    19,    30,   338,    32,   340,
      -1,    -1,    16,    17,    18,    -1,    21,    21,    30,    -1,
      32,   352,    -1,   354,   110,    30,   112,   113,    32,    -1,
      -1,    36,     3,     4,     5,     6,    -1,   123,    16,    17,
      18,    -1,    -1,    21,    22,    -1,    17,    25,    26,    20,
      -1,    -1,    23,    24,    32,    -1,    -1,    28,    29,    -1,
      31,    66,    67,    68,    -1,   151,   152,   153,   154,   400,
     401,    30,    -1,    32,    16,    17,    18,    -1,    -1,    84,
      85,    86,    -1,    30,   415,    32,   172,   173,   174,   175,
      32,    30,    -1,    32,    16,    17,    18,    -1,    -1,    21,
      22,    -1,    -1,    25,    26,   110,   192,   112,   113,    31,
      32,    -1,    16,    17,    18,    -1,   202,   203,   123,    30,
     206,    32,    -1,     3,     4,     5,     6,     7,    32,    -1,
      10,    11,    12,    13,    14,    15,    30,    17,    32,    -1,
      20,   227,    -1,    23,    24,    30,    -1,    32,    28,    29,
     236,    31,   238,    33,   240,    30,   242,    32,    21,    -1,
      16,    17,    18,    -1,    -1,    21,    22,    30,   173,    25,
      26,    -1,    -1,    36,    30,    31,    32,    16,    17,    18,
      -1,   267,   268,   269,   270,   271,   272,   273,   274,    -1,
      16,    17,    18,    32,    -1,    21,    22,   202,   203,    25,
      26,   206,    -1,    66,    67,    68,    32,    -1,    -1,    16,
      17,    18,    -1,   299,   300,   301,   302,   303,   304,   305,
     306,    84,    85,   309,   310,    32,    -1,    30,   314,    32,
      30,   236,    32,   238,    -1,   240,   322,   242,   324,    -1,
      -1,   327,   328,    16,    17,    18,    -1,   110,    21,   112,
     113,    30,   338,    32,   340,    -1,    30,    30,    32,    32,
     123,    21,    -1,    30,   269,    32,   352,    -1,   354,   274,
      30,    -1,     3,     4,     5,     6,    36,    16,    17,    18,
      -1,    -1,    21,    16,    17,    18,    17,    -1,    21,    20,
      29,    -1,    23,    24,   299,   300,   301,    28,    29,    32,
      31,   306,    -1,    30,   309,    32,    66,    67,    68,   314,
     173,    16,    17,    18,   400,   401,    21,   322,    30,   324,
      32,    30,   327,    32,    84,    30,    30,    32,    32,   415,
      16,    17,    18,   338,    30,   340,    32,    -1,    -1,   202,
     203,    -1,    -1,   206,    -1,    -1,    32,   352,     9,   354,
     110,    -1,   112,   113,    -1,    16,    17,    18,    -1,    -1,
      21,    22,    -1,   123,    25,    26,    -1,    -1,    29,    -1,
      31,    -1,    -1,   236,    -1,   238,    -1,   240,    -1,   242,
      -1,    -1,    21,    -1,    -1,    21,    -1,    -1,    16,    17,
      18,    30,    -1,    21,    30,   400,   401,    36,     3,     4,
       5,     6,    30,    -1,    32,   268,    -1,    -1,    21,    -1,
     415,   274,    17,   173,    -1,    20,    -1,    30,    23,    24,
      -1,    -1,    -1,    28,    -1,    -1,    31,    66,    67,    -1,
      66,    67,    -1,    16,    17,    18,   299,   300,    21,    16,
      17,    18,   202,   306,    21,    84,   206,    30,    -1,    32,
      -1,   314,    -1,    66,    67,    32,    16,    17,    18,   322,
      -1,   324,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      21,   110,    32,   112,   110,   338,   112,   340,   238,    30,
     240,    32,   242,    21,   123,    -1,    -1,   123,    -1,   352,
      -1,   354,    30,    16,    17,    18,    -1,   110,    21,   112,
      -1,    -1,    -1,    41,     3,     4,     5,     6,    -1,    32,
     123,    -1,    -1,   152,   274,    16,    17,    18,    17,    -1,
      21,    20,    -1,    -1,    23,    24,    -1,    -1,    66,    28,
      -1,    32,    31,    32,   173,    73,    74,   400,   401,   299,
      -1,    -1,    16,    17,    18,    -1,   306,    21,    -1,    16,
      17,    18,   415,    -1,   314,    -1,    30,    -1,    32,    16,
      17,    18,   322,   202,   324,    32,   202,   206,    -1,    -1,
     206,    -1,   110,    -1,   112,    32,    -1,    -1,   338,    -1,
     340,    16,    17,    18,    -1,   123,    21,    22,    -1,   202,
      25,    26,   352,   206,   354,    30,   134,    32,    -1,   238,
      -1,   240,   238,   242,   240,   143,   242,    16,    17,    18,
      -1,    -1,    21,    22,    -1,    -1,    25,    26,   156,    -1,
      -1,    30,    -1,    32,    -1,   238,    -1,   240,   267,   242,
      -1,    16,    17,    18,    -1,   274,    21,    -1,   274,   177,
     400,   401,    -1,    16,    17,    18,    -1,    32,    21,    22,
      -1,    -1,    25,    26,    -1,   415,   194,    30,    -1,    32,
     299,   274,    16,    17,    18,    -1,    -1,   306,   206,    -1,
     306,    16,    17,    18,    -1,    -1,    21,    22,    32,    -1,
      25,    26,    -1,   322,    -1,   324,   322,    32,   324,    -1,
      -1,   229,    -1,   306,    16,    17,    18,    -1,    -1,   338,
     238,   340,   338,    -1,   340,    -1,    -1,    29,    -1,   322,
     248,   324,    -1,   352,    -1,   354,   352,    -1,   354,    16,
      17,    18,   260,    -1,    21,   338,    -1,   340,    -1,    -1,
       3,     4,     5,     6,    -1,    32,    16,    17,    18,   352,
      -1,   354,   280,    -1,    17,    -1,    -1,    20,    -1,    29,
      23,    24,    17,    18,   292,    28,    21,    -1,    31,    32,
      -1,   400,    17,    18,   400,    30,    21,    32,    -1,    16,
      17,    18,    -1,    -1,    21,    30,   415,    32,    -1,   415,
      -1,   319,   320,    30,   322,    32,    -1,   400,    -1,    -1,
      -1,    -1,   330,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,   415,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    16,    17,
      18,    28,    29,    21,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,     8,    32,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      16,    17,    18,    28,    29,    21,    31,    -1,    33,    34,
      -1,    -1,   400,    29,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,   415,    17,    -1,
      -1,    20,    -1,    -1,    23,    24,    16,    17,    18,    28,
      29,    21,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,     8,    32,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    16,    17,
      18,    28,    29,    21,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,     8,    32,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    34,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    -1,    -1,    23,    24,    16,    17,    18,    28,
      29,    21,    31,    -1,    33,    34,     3,     4,     5,     6,
      30,    -1,    32,    -1,    -1,    -1,     3,     4,     5,     6,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      17,    28,    -1,    20,    31,    32,    23,    24,    16,    17,
      18,    28,    -1,    21,    31,    32,     3,     4,     5,     6,
      -1,    -1,    30,    -1,    32,     3,     4,     5,     6,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    17,
      -1,    28,    20,    -1,    31,    23,    24,    -1,    -1,    -1,
      28,    -1,    -1,    31,    16,    17,    18,    -1,    -1,    21,
      22,    -1,    -1,    25,    26,    16,    17,    18,    30,    -1,
      32,    16,    17,    18,    -1,    -1,    21,    22,    29,    -1,
      25,    26,    16,    17,    18,    30,    -1,    32,    16,    17,
      18,    -1,    -1,    21,    22,    29,    -1,    25,    26,    16,
      17,    18,    30,    -1,    32,    16,    17,    18,    -1,    -1,
      21,    22,    29,    -1,    25,    26,    16,    17,    18,    30,
      -1,    32,    16,    17,    18,    -1,    -1,    21,    22,    29,
      -1,    25,    26,    16,    17,    18,    30,    -1,    32,    16,
      17,    18,    -1,    -1,    21,    22,    29,    -1,    25,    26,
      16,    17,    18,    30,    -1,    32,    16,    17,    18,    -1,
      -1,    21,    22,    29,    -1,    25,    26,    16,    17,    18,
      30,    -1,    32,    16,    17,    18,    -1,    -1,    21,    22,
      29,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      16,    17,    18,    -1,    -1,    21,    22,    -1,    -1,    25,
      26,    -1,    16,    17,    18,    -1,    32,    21,    22,    -1,
      -1,    25,    26,    -1,    16,    17,    18,    -1,    32,    21,
      22,    -1,    -1,    25,    26,    -1,    16,    17,    18,    -1,
      32,    21,    22,    -1,    -1,    25,    26,    -1,    16,    17,
      18,    -1,    32,    21,    22,    -1,    -1,    25,    26,    -1,
      16,    17,    18,    -1,    32,    21,    22,    -1,    -1,    25,
      26,    -1,    16,    17,    18,    -1,    32,    21,    22,    -1,
      -1,    25,    26,    -1,    16,    17,    18,    -1,    32,    21,
      22,    -1,    -1,    25,    26,    -1,    16,    17,    18,    -1,
      32,    21,    16,    17,    18,    -1,    -1,    21,    -1,    -1,
      30,    -1,    32,    -1,    -1,    -1,    30,    -1,    32,    16,
      17,    18,    -1,    -1,    21,    16,    17,    18,    -1,    -1,
      21,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    30,
      -1,    32,    16,    17,    18,    -1,    -1,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    29,    -1,    31,    16,    17,
      18,    -1,    -1,    21,    16,    17,    18,    -1,    -1,    21,
      -1,    29,    -1,    31,    16,    17,    18,    29,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    29,    16,    17,
      18,    -1,    -1,    21,    22,    -1,    -1,    25,    26,    -1,
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
      18,    -1,    29,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    36,    37,    38,    39,    40,     3,     0,    38,
      29,    31,    12,    32,    41,    42,     3,    33,    48,    30,
      32,    49,    42,    48,     3,     4,     5,     6,     7,    10,
      11,    12,    13,    14,    15,    17,    20,    23,    24,    28,
      29,    31,    34,    39,    43,    44,    45,    46,    47,    48,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    66,     9,    31,    31,    31,
      29,    46,     3,    31,    31,    31,     3,    62,    58,    62,
      62,    62,    55,    29,    21,    18,    17,    16,    22,    25,
      26,    55,    32,    55,    65,    59,     3,    47,    29,    55,
      55,     3,    32,    58,    60,    61,    62,    62,    62,    62,
      30,    32,    32,    29,    32,    32,    32,    55,    43,    59,
      29,    29,    29,     8,    29,    43,    47,    32,    48,    33,
       4,     5,     6,    28,    31,    63,    64,    66,     3,     4,
       5,     6,    28,    31,    63,    64,    66,     3,     4,     5,
       6,    17,    20,    23,    24,    28,    31,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    66,     3,     3,     4,
       5,     6,    17,    20,    23,    24,    28,    31,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    66,     3,     4,
       5,     6,    17,    28,    31,    60,    61,    62,    63,    64,
      66,    29,    31,    18,     7,    10,    11,    12,    13,    14,
      15,    29,    33,    39,    44,    45,    46,    48,    50,    51,
      52,    53,    54,     3,     4,     5,     6,    17,    28,    31,
      60,    61,    62,    63,    64,    66,    18,     3,    49,    55,
      31,    55,    31,     3,     4,     5,     6,    28,    31,    62,
      63,    64,    66,    58,    62,     3,     4,     5,     6,    28,
      31,    62,    63,    64,    66,    62,    55,    21,    18,    17,
      16,    22,    25,    26,    31,     3,     4,     5,     6,    28,
      31,    62,    63,    64,    66,    58,    62,     3,     4,     5,
       6,    28,    31,    62,    63,    64,    66,    62,    55,    21,
      18,    17,    16,    22,    25,    26,    31,    62,    55,    17,
      16,    32,    65,    60,    31,    31,    29,    46,     3,    31,
      31,    31,    49,    29,    31,    62,    55,    17,    16,    60,
       9,    34,    32,    32,    65,    32,    32,    65,    31,    55,
      31,    55,    32,    58,    60,    61,    62,    62,    62,    62,
      32,    65,    31,    55,    31,    55,    32,    58,    60,    61,
      62,    62,    62,    62,    32,    65,    32,    61,    62,    32,
      59,    47,    29,    29,    55,    55,     3,    34,    32,    65,
      32,    61,    62,    55,    32,    32,    32,    65,    32,    32,
      65,    32,    32,    32,    65,    32,    32,    65,    32,    32,
      32,    29,    32,    32,    32,    32,    32,    32,    32,    32,
      43,    59,    29,    29,    29,     8,    29,    43,    47,    32,
      48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    40,    40,
      41,    41,    42,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    44,    45,    45,    46,    46,    47,    48,    49,
      49,    50,    50,    51,    51,    52,    53,    54,    55,    55,
      56,    56,    56,    56,    56,    57,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      63,    64,    64,    65,    65,    66,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     5,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     9,     2,     1,     1,     1,     3,     3,     2,
       0,     5,     7,     2,     3,     5,     5,     5,     1,     1,
       3,     2,     2,     3,     3,     3,     1,     2,     1,     3,
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
  case 2: /* S: decl_list  */
#line 83 "src/bison/bison.y"
            {
	  tree = (yyval.node);
  }
#line 2311 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 89 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2321 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 94 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2329 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 100 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2337 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 103 "src/bison/bison.y"
                   {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2345 "src/bison/bison.tab.c"
    break;

  case 7: /* var_decl: TYPE ID ';'  */
#line 109 "src/bison/bison.y"
                    {
		(yyval.node) = createNode("var_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		insertSymbol(symbolTable, (yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 2361 "src/bison/bison.tab.c"
    break;

  case 8: /* fun_decl: TYPE ID '(' params ')' block_stmt  */
#line 123 "src/bison/bison.y"
                                          {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-5].token).lexeme, (yyvsp[-5].token).line, (yyvsp[-5].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[-2].node);
		(yyval.node)->leaf4 = (yyvsp[0].node);

		insertSymbol(symbolTable, (yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column, (yyvsp[-5].token).lexeme, "fun",(yyvsp[-4].token).scope);
	}
#line 2380 "src/bison/bison.tab.c"
    break;

  case 9: /* fun_decl: TYPE ID '(' ')' block_stmt  */
#line 137 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[0].node);

		insertSymbol(symbolTable, (yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun", (yyvsp[-3].token).scope);
	}
#line 2398 "src/bison/bison.tab.c"
    break;

  case 10: /* params: params ',' param_decl  */
#line 153 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2408 "src/bison/bison.tab.c"
    break;

  case 11: /* params: param_decl  */
#line 158 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2416 "src/bison/bison.tab.c"
    break;

  case 12: /* param_decl: TYPE ID  */
#line 164 "src/bison/bison.y"
                {
		
		(yyval.node) = createNode("param_decl");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		insertSymbol(symbolTable, (yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2432 "src/bison/bison.tab.c"
    break;

  case 13: /* statement: exp_stmt  */
#line 178 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2440 "src/bison/bison.tab.c"
    break;

  case 14: /* statement: block_stmt  */
#line 181 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2448 "src/bison/bison.tab.c"
    break;

  case 15: /* statement: if_stmt  */
#line 184 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2456 "src/bison/bison.tab.c"
    break;

  case 16: /* statement: return_stmt  */
#line 187 "src/bison/bison.y"
                      {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2464 "src/bison/bison.tab.c"
    break;

  case 17: /* statement: write_stmt  */
#line 190 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2472 "src/bison/bison.tab.c"
    break;

  case 18: /* statement: writeln_stmt  */
#line 193 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2480 "src/bison/bison.tab.c"
    break;

  case 19: /* statement: read_stmt  */
#line 196 "src/bison/bison.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2488 "src/bison/bison.tab.c"
    break;

  case 20: /* statement: var_decl  */
#line 199 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2496 "src/bison/bison.tab.c"
    break;

  case 21: /* statement: for_stmt  */
#line 202 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2504 "src/bison/bison.tab.c"
    break;

  case 22: /* for_stmt: FOR '(' assing_exp ';' rel_exp ';' assing_exp ')' block_stmt  */
#line 208 "src/bison/bison.y"
                                                                     {
		(yyval.node) = createNode("for_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-8].token).lexeme, (yyvsp[-8].token).line, (yyvsp[-8].token).column);
		(yyval.node)->leaf2 = (yyvsp[-6].node);
		(yyval.node)->leaf3 = (yyvsp[-4].node);
		(yyval.node)->leaf4 = (yyvsp[-2].node);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2519 "src/bison/bison.tab.c"
    break;

  case 23: /* exp_stmt: exp ';'  */
#line 221 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2527 "src/bison/bison.tab.c"
    break;

  case 24: /* exp_stmt: ';'  */
#line 224 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
	}
#line 2535 "src/bison/bison.tab.c"
    break;

  case 25: /* exp: assing_exp  */
#line 230 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2543 "src/bison/bison.tab.c"
    break;

  case 26: /* exp: simple_exp  */
#line 233 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2551 "src/bison/bison.tab.c"
    break;

  case 27: /* assing_exp: ID ASSIGN simple_exp  */
#line 239 "src/bison/bison.y"
                             {
		(yyval.node) = createNode("assing_exp");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2567 "src/bison/bison.tab.c"
    break;

  case 28: /* block_stmt: '{' stmt_list '}'  */
#line 253 "src/bison/bison.y"
                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2575 "src/bison/bison.tab.c"
    break;

  case 29: /* stmt_list: stmt_list statement  */
#line 260 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("stmt_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2585 "src/bison/bison.tab.c"
    break;

  case 30: /* stmt_list: %empty  */
#line 265 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
	}
#line 2593 "src/bison/bison.tab.c"
    break;

  case 31: /* if_stmt: IF '(' rel_exp ')' statement  */
#line 271 "src/bison/bison.y"
                                                {
		(yyval.node) = createNode("if_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2606 "src/bison/bison.tab.c"
    break;

  case 32: /* if_stmt: IF '(' rel_exp ')' statement ELSE statement  */
#line 279 "src/bison/bison.y"
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
#line 2624 "src/bison/bison.tab.c"
    break;

  case 33: /* return_stmt: RETURN ';'  */
#line 295 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2634 "src/bison/bison.tab.c"
    break;

  case 34: /* return_stmt: RETURN exp ';'  */
#line 300 "src/bison/bison.y"
                         {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
	}
#line 2645 "src/bison/bison.tab.c"
    break;

  case 35: /* write_stmt: WRITE '(' simple_exp ')' ';'  */
#line 309 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("write_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2657 "src/bison/bison.tab.c"
    break;

  case 36: /* writeln_stmt: WRITELN '(' simple_exp ')' ';'  */
#line 319 "src/bison/bison.y"
                                       {
		(yyval.node) = createNode("writeln_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2668 "src/bison/bison.tab.c"
    break;

  case 37: /* read_stmt: READ '(' ID ')' ';'  */
#line 328 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("read_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2  = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
	}
#line 2682 "src/bison/bison.tab.c"
    break;

  case 38: /* simple_exp: bin_exp  */
#line 340 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2690 "src/bison/bison.tab.c"
    break;

  case 39: /* simple_exp: list_exp  */
#line 343 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2698 "src/bison/bison.tab.c"
    break;

  case 40: /* list_exp: factor ':' factor  */
#line 349 "src/bison/bison.y"
                          {
		(yyval.node) = createNode("list_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2711 "src/bison/bison.tab.c"
    break;

  case 41: /* list_exp: '?' factor  */
#line 357 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2723 "src/bison/bison.tab.c"
    break;

  case 42: /* list_exp: '%' factor  */
#line 364 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2734 "src/bison/bison.tab.c"
    break;

  case 43: /* list_exp: factor MAP factor  */
#line 370 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2746 "src/bison/bison.tab.c"
    break;

  case 44: /* list_exp: factor FILTER factor  */
#line 377 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2758 "src/bison/bison.tab.c"
    break;

  case 45: /* bin_exp: bin_exp LOG_OP unary_log_exp  */
#line 387 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("bin_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2771 "src/bison/bison.tab.c"
    break;

  case 46: /* bin_exp: unary_log_exp  */
#line 395 "src/bison/bison.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2779 "src/bison/bison.tab.c"
    break;

  case 47: /* unary_log_exp: EXCLAMATION unary_log_exp  */
#line 401 "src/bison/bison.y"
                                  {
		(yyval.node) = createNode("unary_log_exp");
	
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2791 "src/bison/bison.tab.c"
    break;

  case 48: /* unary_log_exp: rel_exp  */
#line 408 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2799 "src/bison/bison.tab.c"
    break;

  case 49: /* rel_exp: rel_exp REL_OP sum_exp  */
#line 414 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("rel_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2811 "src/bison/bison.tab.c"
    break;

  case 50: /* rel_exp: sum_exp  */
#line 421 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2819 "src/bison/bison.tab.c"
    break;

  case 51: /* sum_exp: sum_exp SUM_OP mul_exp  */
#line 427 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("sum_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2831 "src/bison/bison.tab.c"
    break;

  case 52: /* sum_exp: mul_exp  */
#line 434 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2839 "src/bison/bison.tab.c"
    break;

  case 53: /* mul_exp: mul_exp MUL_OP factor  */
#line 440 "src/bison/bison.y"
                              {
		(yyval.node) = createNode("mul_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2852 "src/bison/bison.tab.c"
    break;

  case 54: /* mul_exp: factor  */
#line 448 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2860 "src/bison/bison.tab.c"
    break;

  case 55: /* mul_exp: SUM_OP factor  */
#line 451 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2870 "src/bison/bison.tab.c"
    break;

  case 56: /* factor: immutable  */
#line 459 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2878 "src/bison/bison.tab.c"
    break;

  case 57: /* factor: ID  */
#line 462 "src/bison/bison.y"
             {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2887 "src/bison/bison.tab.c"
    break;

  case 58: /* immutable: '(' simple_exp ')'  */
#line 469 "src/bison/bison.y"
                           {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2895 "src/bison/bison.tab.c"
    break;

  case 59: /* immutable: call  */
#line 472 "src/bison/bison.y"
               {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2903 "src/bison/bison.tab.c"
    break;

  case 60: /* immutable: constant  */
#line 475 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2911 "src/bison/bison.tab.c"
    break;

  case 61: /* call: ID '(' args ')'  */
#line 481 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("call");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
	}
#line 2922 "src/bison/bison.tab.c"
    break;

  case 62: /* call: ID '(' ')'  */
#line 487 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("call");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
	}
#line 2933 "src/bison/bison.tab.c"
    break;

  case 63: /* args: args ',' simple_exp  */
#line 496 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("args");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2943 "src/bison/bison.tab.c"
    break;

  case 64: /* args: simple_exp  */
#line 501 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2951 "src/bison/bison.tab.c"
    break;

  case 65: /* constant: NIL  */
#line 507 "src/bison/bison.y"
            {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2960 "src/bison/bison.tab.c"
    break;

  case 66: /* constant: INT  */
#line 511 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2969 "src/bison/bison.tab.c"
    break;

  case 67: /* constant: FLOAT  */
#line 515 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2978 "src/bison/bison.tab.c"
    break;

  case 68: /* constant: STRING  */
#line 519 "src/bison/bison.y"
                 {		
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2987 "src/bison/bison.tab.c"
    break;


#line 2991 "src/bison/bison.tab.c"

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

#line 525 "src/bison/bison.y"


extern void yyerror(const char* s)
{
	printf("Syntax Error:\n%s\n", s);
}

int main(int argc, char **argv){
	initializeTable(symbolTable);
	initializeScopeStack(scopeStack);
    yyparse();
	printf("\n\n--------------------------------------------------------------- TREE ---------------------------------------------------------------- \n\n");
	printTree(tree, 1);
	printSymbolTable(symbolTable);
	freeTree(tree);
    yylex_destroy();
    return 0;
}
