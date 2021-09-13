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

#define BHRED "\e[1;91m"
#define RESET "\e[0m"

#line 94 "src/bison/bison.tab.c"

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
  YYSYMBOL_fun_decl = 39,                  /* fun_decl  */
  YYSYMBOL_params = 40,                    /* params  */
  YYSYMBOL_param_decl = 41,                /* param_decl  */
  YYSYMBOL_statement = 42,                 /* statement  */
  YYSYMBOL_for_stmt = 43,                  /* for_stmt  */
  YYSYMBOL_exp_stmt = 44,                  /* exp_stmt  */
  YYSYMBOL_exp = 45,                       /* exp  */
  YYSYMBOL_assing_exp = 46,                /* assing_exp  */
  YYSYMBOL_block_stmt = 47,                /* block_stmt  */
  YYSYMBOL_stmt_list = 48,                 /* stmt_list  */
  YYSYMBOL_if_stmt = 49,                   /* if_stmt  */
  YYSYMBOL_return_stmt = 50,               /* return_stmt  */
  YYSYMBOL_write_stmt = 51,                /* write_stmt  */
  YYSYMBOL_writeln_stmt = 52,              /* writeln_stmt  */
  YYSYMBOL_read_stmt = 53,                 /* read_stmt  */
  YYSYMBOL_simple_exp = 54,                /* simple_exp  */
  YYSYMBOL_list_exp = 55,                  /* list_exp  */
  YYSYMBOL_bin_exp = 56,                   /* bin_exp  */
  YYSYMBOL_unary_log_exp = 57,             /* unary_log_exp  */
  YYSYMBOL_rel_exp = 58,                   /* rel_exp  */
  YYSYMBOL_sum_exp = 59,                   /* sum_exp  */
  YYSYMBOL_mul_exp = 60,                   /* mul_exp  */
  YYSYMBOL_factor = 61,                    /* factor  */
  YYSYMBOL_immutable = 62,                 /* immutable  */
  YYSYMBOL_call = 63,                      /* call  */
  YYSYMBOL_args = 64,                      /* args  */
  YYSYMBOL_constant = 65                   /* constant  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3939

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  438

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
       0,    87,    87,    93,    98,   104,   107,   110,   116,   127,
     133,   147,   163,   168,   174,   188,   191,   194,   197,   200,
     203,   206,   209,   212,   218,   231,   234,   240,   243,   249,
     263,   270,   275,   278,   284,   292,   308,   313,   322,   332,
     341,   353,   356,   362,   370,   377,   383,   390,   400,   408,
     414,   421,   427,   434,   440,   447,   453,   461,   464,   472,
     475,   482,   485,   488,   494,   500,   506,   512,   517,   520,
     526,   530,   534,   538
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
  "var_decl", "fun_decl", "params", "param_decl", "statement", "for_stmt",
  "exp_stmt", "exp", "assing_exp", "block_stmt", "stmt_list", "if_stmt",
  "return_stmt", "write_stmt", "writeln_stmt", "read_stmt", "simple_exp",
  "list_exp", "bin_exp", "unary_log_exp", "rel_exp", "sum_exp", "mul_exp",
  "factor", "immutable", "call", "args", "constant", YY_NULLPTR
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

#define YYPACT_NINF (-207)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      83,   286,     7,    59,   675,   713,   863,   896,    27,  -207,
     930,   993,   998,     2,    73,    -2,    71,    91,    94,   473,
    1037,   107,    -2,   778,   242,  1058,  2450,  1093,  3638,  3651,
    3664,    76,   133,  1160,   143,   136,   154,   160,   169,   215,
     174,   174,  3677,  2483,  1348,  1063,  2516,  2549,  2582,  2615,
     175,   177,  2648,  2681,  2714,  2747,  2780,  2813,   189,   203,
      46,    70,   471,   180,  1116,  3690,  3703,  3716,  3729,  3742,
    1381,    82,   586,   232,  2846,   219,     6,  1348,  1348,   277,
     558,  1582,   250,  3330,   257,   273,   275,  2879,   215,   636,
     636,   169,   174,   174,   174,   288,   310,  3755,   333,   385,
      -9,   302,   306,  2912,   314,   330,   339,  3768,   312,   410,
    3346,  3794,   364,   380,   393,  1432,  3781,  3273,   640,   423,
     432,   437,   402,  1689,    -3,  2945,  2978,  3011,  3303,   495,
    3044,   416,   470,  3077,   473,  3799,  3808,  3813,  3822,  1348,
    3827,  3836,  3841,    28,   476,   485,   494,   503,  1348,   508,
     512,   516,   668,   740,  3352,  3364,   885,   278,   889,   889,
    3376,  1348,   514,   124,   162,    62,   906,   111,  3388,  3400,
    3412,  3424,  1130,   428,  1249,  1455,  1475,   941,   520,   945,
     945,  1503,  1348,   441,   223,   328,   131,  1109,   590,  1529,
    1549,  1566,  1595,    30,   116,   349,  1429,  1078,  1495,  1348,
     222,  3250,  3281,  3311,  3575,  3580,  3110,  3143,  3850,   164,
     586,   518,   522,  1278,   555,   527,   540,   541,  1722,   473,
    1757,  1790,  1823,   551,  1856,  1889,  1922,  1955,  1988,  2021,
     370,    98,   198,   367,  1191,   438,  1348,   406,   492,   797,
    1405,  3629,  3877,   640,   575,  3176,   556,   583,   206,   587,
    3436,   245,   389,   419,   451,   756,  1182,  1348,  1223,  1272,
    1374,  1616,   283,  1650,    22,   594,   601,   602,   606,  1348,
     619,   624,   625,   641,   659,   660,   278,   723,   723,   885,
     889,   889,   889,  1624,   511,   123,   692,   997,  1016,  1069,
    1348,  1206,  1318,  1412,  1656,   362,  3482,    10,   444,   490,
     554,   571,  1348,   633,   666,   693,   703,   710,   665,   520,
     825,   825,   941,   945,   945,   945,  3586,   550,  3591,   669,
     586,  1078,  3855,   746,   248,   586,   232,  2054,   643,    64,
    1348,  1348,   611,  3209,  2087,  3882,   732,  3885,   680,   640,
    1191,   630,  1348,  3242,  3864,   691,   749,   714,  3448,   765,
    3536,   816,   712,   721,   855,   739,  3460,   289,  1229,  3546,
    3552,   772,   773,   776,  1640,   795,  3488,   973,   787,   850,
    1038,   796,  3320,   674,  3622,  3498,  3504,   876,   882,   924,
    3596,   929,  3602,  3607,  3612,  3869,    44,   716,  2120,  2153,
    2186,   805,   810,   813,  2219,  3890,   932,  3898,  3903,  3906,
     814,   781,  3472,  3558,   938,  3564,   818,   960,   819,  3336,
    3514,   987,  3520,   994,  1000,  1025,  3618,  3273,   640,   829,
     834,   848,  3911,  3570,   822,  3530,  1059,  2252,    26,  2285,
    2318,  2351,  3273,   495,  2384,   849,   851,  2417
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,   880,     0,  -207,  -207,   897,  -104,   -90,
     -82,   -28,   -52,   -14,  -128,   -81,   -80,   -79,   -74,   -38,
    1349,   298,   603,    -7,  1292,  1205,  1007,   -21,   284,   589,
    -206,   894
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    46,     7,    16,    17,    47,    48,
      49,    50,    51,    52,    23,    53,    54,    55,    56,    57,
      98,   162,   163,   164,   165,   166,   167,   168,   169,   170,
      99,   171
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    20,    65,   323,     6,    75,   245,   206,    25,   210,
       8,   369,    65,   123,    14,   243,    61,    81,    83,    84,
      85,   102,   117,   353,   130,   129,    61,   221,    11,   247,
      19,   316,    82,    15,   207,   222,   225,   226,   227,   -60,
     370,   -60,   346,   228,   243,   349,   -60,   -60,   -60,    65,
     189,   202,   354,   -60,   433,    12,   -60,    13,   248,     9,
     317,   -60,   210,    61,   185,   389,    88,    83,    83,    83,
     111,   112,   113,   114,   -41,   417,    18,   131,   365,   229,
     277,   108,   -51,    96,     1,   173,   174,   175,   176,   223,
     -49,   333,   390,   -51,   189,     2,    65,   239,   -49,   177,
      21,   178,    22,   224,   179,   180,    72,    65,   185,   181,
      61,   381,   182,    97,   -71,   -71,   -71,   220,   133,    14,
     -13,    61,   -13,   -14,   366,   -14,   -71,   279,   -55,   -55,
     396,   -55,   -71,   -71,   -71,   258,   263,   270,   274,   -60,
     -60,   -60,   -55,   -60,   276,   404,    76,   -71,   407,   310,
     262,   -51,   -60,   367,   -60,   -41,   291,   296,   303,   307,
     -51,   411,   -51,    73,   414,    96,    77,   173,   174,   175,
     176,   295,    80,   135,   136,   137,   318,   143,   144,   145,
     146,   177,   -49,   178,    78,   328,   179,   180,   189,   202,
      79,   181,    65,   -49,   182,   322,   138,    90,   -53,   139,
     -53,   147,   185,    87,   148,   -27,    61,    96,   -53,   173,
     174,   175,   176,   337,   -72,   -72,   -72,   -28,    80,   135,
     136,   137,   239,   177,    65,   178,   -72,   189,   179,   180,
     189,   -42,    38,   181,    39,   101,   182,   345,    61,   320,
     -53,   185,   138,   309,   185,   139,    96,   103,   173,   174,
     175,   176,   -41,   -53,   -41,   263,   263,   263,   360,   361,
     362,   363,   177,   189,   178,   320,   -52,   179,   180,   357,
     -50,   -12,   181,   -12,   387,   182,   348,   185,   -50,   -52,
     106,   252,   253,   254,   255,   -44,    -7,    -7,   296,   296,
     296,   376,   377,   378,   379,   156,   189,   157,    -7,   202,
     384,   -45,   373,   -50,   202,   256,   107,    66,   257,   -48,
     185,    70,    65,   427,   -50,   189,   -29,    66,   239,   399,
     -48,    59,   140,   140,   149,   149,    61,   221,   434,   185,
     189,    59,   -48,   189,   118,   222,   225,   226,   227,   -69,
     -48,   -69,   221,   228,   185,   119,   189,   185,   -49,   189,
     222,   225,   226,   227,    66,   190,   203,   -49,   228,   -49,
     185,   120,   -68,   185,   -68,   -72,   -72,   -72,    59,   183,
     121,   335,   140,   140,   140,   140,   149,   149,   149,   229,
     -72,   435,   -50,   -70,   -70,   -70,   -60,   -60,   -60,   223,
     350,   -50,   -43,   -50,   229,   -70,    65,   239,   -60,   190,
     336,    66,   240,   224,   223,   -60,   -60,   -60,   -46,   -60,
      61,    65,    66,   183,   115,    59,   116,   220,   224,   351,
     -60,   -47,   437,   339,   -53,    61,    59,    90,   -52,   283,
     -52,   -67,   220,   -67,   -53,   -71,   -71,   -71,   -52,   -71,
     259,   259,   271,   271,   -60,   -60,   -60,   132,   -60,   -60,
     -71,   125,   -60,   -60,   -73,   -73,   -73,   -60,   284,   -60,
     126,   292,   292,   304,   304,   127,   -73,   -72,   -72,   -72,
     -42,   -72,   -42,   -71,   -32,   -71,   -32,   -32,   -32,   -32,
     -32,   203,   -72,   -32,   -32,   -32,   -32,   -32,   -32,    89,
     -32,   -51,   -32,   190,   203,   -32,   -32,    66,   244,   -51,
     -32,   -32,   134,   -32,   -71,   -32,   -32,   183,   340,   -55,
     -55,    59,    96,   -72,   173,   174,   175,   176,   240,   -72,
     -55,   -72,   -70,   285,   286,   287,   288,   240,   177,    66,
     178,   -73,   190,   179,   180,   190,   -59,   177,   181,   178,
     -62,   182,   364,    59,   -63,   -42,   183,   289,   325,   183,
     290,    96,   326,   173,   174,   175,   176,   330,   329,   208,
     259,   259,   259,   259,   271,   271,   271,   177,   190,   178,
     331,   332,   179,   180,   -60,   -60,   -60,   181,   -60,   334,
     182,   380,   183,   -70,   342,   -70,   -60,   344,   209,   193,
     194,   195,   196,   292,   292,   292,   292,   304,   304,   304,
     -73,   190,   -73,   197,   203,   203,   312,   -55,   -55,   203,
     -55,   -66,    67,   198,   393,   183,   199,    66,   347,   -55,
     190,   -55,    67,   240,   240,   -71,    60,   141,   141,   150,
     150,    59,   -72,   -70,   183,   190,    60,   -73,   190,    80,
     135,   136,   137,   230,   231,   232,   233,   339,   -52,   183,
     -44,   190,   183,    38,   190,   -59,   -62,   234,   -52,    67,
     191,   204,   -44,   138,   -44,   183,   139,   235,   183,   250,
     236,   388,   -63,    60,   184,    -2,     1,   141,   141,   141,
     141,   150,   150,   150,   -60,   -60,   -60,     2,   -60,   -60,
     -45,   356,   -60,   -60,   -48,   -59,   372,   -59,   251,   -60,
     382,    66,   240,   -48,   191,   -48,    67,   241,   -71,   -71,
     -71,   397,   -71,    -4,    -4,    59,    66,    67,   184,   -65,
      60,   -71,   -62,   -71,   -62,    -4,   252,   253,   254,   255,
      59,    60,   -63,    96,   -63,   173,   174,   175,   176,   -45,
     156,   -45,   -61,   405,   418,   260,   260,   272,   272,   177,
     256,   178,   -66,   257,   179,   180,   -71,   -71,   -71,   181,
     -71,   -71,   182,   395,   -71,   -71,   293,   293,   305,   305,
     408,   -71,   -70,   -70,   -70,   115,   -70,   385,   115,    26,
     401,    27,    28,    29,    30,    31,   204,   -70,    32,    33,
      34,    35,    36,    37,   115,    38,   402,    39,   191,   204,
      40,    41,    67,   -43,   -46,    42,    43,   -47,    44,   -64,
     134,    45,   184,   -57,   -57,   -57,    60,    96,   412,   173,
     174,   175,   176,   241,   115,   -57,   409,   415,   285,   286,
     287,   288,   241,   177,    67,   178,   419,   191,   179,   180,
     191,   420,   177,   181,   421,   -29,   182,   403,    60,   -65,
     -61,   184,   289,   -64,   184,   290,    96,   429,   173,   174,
     175,   176,   430,    -5,    -5,   260,   260,   260,   260,   272,
     272,   272,   177,   191,   178,    -5,   431,   179,   180,   -66,
     436,   -66,   181,   219,    10,   182,   406,   184,   252,   253,
     254,   255,   264,   265,   266,   267,    -6,    -6,   293,   293,
     293,   293,   305,   305,   305,   -43,   191,   -43,    -6,   204,
     204,   -46,   256,   -46,   204,   257,   268,    68,    24,   269,
     184,     0,    67,   278,   -53,   191,   -53,    68,   241,   241,
      -3,    -3,   142,   142,   151,   151,    60,   -53,     0,   184,
     191,     0,    -3,   191,   285,   286,   287,   288,   297,   298,
     299,   300,     0,   -47,   184,   -47,   191,   184,   115,   191,
     416,   115,     0,   422,    68,   192,   205,   115,   289,   423,
     184,   290,   301,   184,    96,   302,   173,   174,   175,   176,
       0,     0,   142,   142,   142,   142,   151,   151,   151,   115,
     177,   424,   178,    -9,    -9,   179,   180,     0,    -8,    -8,
     181,     0,     0,   182,   410,    -9,    67,   241,     0,   192,
      -8,    68,   242,   -72,   -72,   -72,   115,   -72,   425,     0,
      60,    67,    68,   -65,     0,   -65,   -72,     0,   -72,   115,
      64,   426,   -70,   -70,   -70,    60,   -70,   -11,   -11,    96,
      64,   173,   174,   175,   176,   -70,    64,   -70,     0,   -11,
     261,   261,   273,   273,   -61,   177,   -61,   178,   -10,   -10,
     179,   180,     0,   -30,   -30,   181,     0,     0,   182,   413,
     -10,   294,   294,   306,   306,   -30,     0,    64,   188,   201,
       0,   193,   194,   195,   196,   -73,   -73,   -73,   -64,   -73,
     -64,   205,     0,     0,    69,    64,    64,   110,   -73,     0,
     -73,     0,    70,   192,   205,   198,     0,    68,   199,   -60,
     -60,   -60,     0,   -60,   -60,     0,     0,   -60,   -60,     0,
       0,   -60,   188,    71,    64,   238,   311,   -53,   242,   -53,
       0,    69,    91,   -55,   -55,    64,   -55,   242,   -53,    68,
     -53,     0,   192,     0,   -55,   192,   -60,   -60,   -60,     0,
     -60,   -60,     0,     0,   -60,   -60,     0,     0,   -60,     0,
      71,     0,     0,    27,    28,    29,    30,     0,     0,     0,
     261,   261,   261,   261,   273,   273,   273,    38,   192,    39,
       0,     0,    40,    41,     0,   188,     0,    42,    74,     0,
      44,     0,     0,     0,   230,   231,   232,   233,   -73,   -73,
     -73,     0,   -73,   294,   294,   294,   294,   306,   306,   306,
       0,   192,     0,   -73,   205,   205,   188,   201,   235,   205,
      64,   236,   -58,   -58,   -58,     0,   -58,    68,    63,     0,
     192,     0,     0,   242,   242,   -58,     0,   -58,    63,   -58,
     -58,   -58,     0,   -58,    63,   192,   278,   -52,   192,   -52,
     238,     0,    64,     0,   -58,   188,     0,     0,   188,     0,
     -52,   192,     0,     0,   192,   -71,   -71,   -71,     0,   -71,
     -71,     0,     0,   -71,   -71,    63,   187,   200,   -71,     0,
     -71,    27,    28,    29,    30,   359,     0,     0,   -59,   -59,
     -59,   188,   -59,    63,   109,    38,     0,    39,     0,     0,
      40,    41,     0,   -59,     0,    42,   327,     0,    44,     0,
       0,    68,   242,     0,     0,    62,   188,   188,   375,     0,
     187,     0,    63,   237,   188,    62,    68,   383,     0,     0,
       0,    62,   201,    63,   -59,   -59,   -59,     0,   -59,     0,
      64,     0,     0,   188,     0,     0,   398,   -59,     0,   -59,
       0,   152,   153,   154,   155,     0,     0,     0,   188,     0,
       0,   188,    62,   186,   100,   156,     0,   157,     0,     0,
     158,   159,    58,     0,   188,   160,     0,   188,   161,     0,
      62,     0,    58,   187,   172,    28,    29,    30,     0,     0,
     -62,   -62,   -62,    86,   -62,     0,     0,     0,    38,     0,
      39,     0,     0,    40,    41,   -62,     0,   186,    42,    62,
     124,    44,     0,     0,   187,   324,     0,     0,    63,    95,
      62,   -59,   -59,   -59,    64,   238,   104,   105,   -62,   -62,
     -62,     0,   -62,   -59,     0,   173,   174,   175,   176,    64,
       0,   -62,     0,   -62,     0,   -70,   -70,   -70,   341,   177,
      63,   178,     0,   187,   179,   180,   187,     0,     0,   181,
     -70,     0,   182,     0,   122,     0,    58,     0,     0,     0,
     186,   -72,   -72,   -72,     0,   -72,   -72,    58,     0,   -72,
     -72,     0,   358,     0,   -72,     0,   -72,     0,   246,   187,
       0,   -70,   -70,   -70,     0,   -70,   -70,   249,     0,   -70,
     -70,   186,     0,     0,   -70,    62,   -70,     0,     0,     0,
     275,   -73,   -73,   -73,   187,   374,     0,     0,     0,   -73,
     -73,   -73,   187,   -73,   -73,     0,   -73,   -73,   -73,     0,
     200,   308,   -73,     0,   -73,     0,     0,    62,    63,     0,
     186,   187,     0,   186,     0,   -57,   -57,   -57,   319,   -57,
     313,     0,     0,   314,   315,     0,   187,     0,   -57,   187,
     -57,     0,    58,     0,     0,   -59,   -59,   -59,     0,   -59,
     -59,     0,   187,   -59,   -59,   187,   186,     0,   -59,     0,
     -59,     0,   -62,   -62,   -62,   338,   -62,   -62,     0,     0,
     -62,   -62,     0,     0,    58,   -62,     0,   -62,   -58,   -58,
     -58,   186,   -58,     0,     0,     0,   352,     0,     0,   186,
     -58,   -63,   -63,   -63,     0,   -63,   -63,   386,   355,   -63,
     -63,     0,    63,   237,   -63,    62,   -63,     0,   186,     0,
       0,     0,   -63,   -63,   -63,     0,   -63,    63,     0,   368,
     -66,   -66,   -66,   186,   -66,   -66,   186,   -63,   -66,   -66,
       0,   371,     0,   -66,     0,   -66,   -65,   -65,   -65,   186,
     -65,   -65,   186,     0,   -65,   -65,   -57,   -57,   -57,   -65,
     -57,   -65,   -63,   -63,   -63,     0,   -63,     0,     0,   391,
     392,   -57,    58,     0,     0,   -63,     0,   -63,     0,     0,
     -34,   400,   -34,   -34,   -34,   -34,   -34,   128,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,     0,   -34,    62,
     428,   -34,   -34,     0,     0,     0,   -34,   -34,     0,   -34,
       0,   -34,   -34,   -26,    62,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
       0,   -26,     0,     0,   -26,   -26,     0,     0,     0,   -26,
     -26,     0,   -26,     0,   -26,   -26,     0,     0,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,    58,   -22,   -22,   -22,
     -22,   -22,   -22,     0,   -22,     0,   -22,     0,     0,   -22,
     -22,    58,     0,     0,   -22,   -22,     0,   -22,     0,   -22,
     -22,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,     0,   -23,
       0,     0,   -23,   -23,     0,     0,     0,   -23,   -23,     0,
     -23,     0,   -23,   -23,   -15,     0,   -15,   -15,   -15,   -15,
     -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,
     -15,     0,   -15,     0,     0,   -15,   -15,     0,     0,     0,
     -15,   -15,     0,   -15,     0,   -15,   -15,   -16,     0,   -16,
     -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,
     -16,   -16,     0,   -16,     0,   -16,     0,     0,   -16,   -16,
       0,     0,     0,   -16,   -16,     0,   -16,     0,   -16,   -16,
     -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,
     -17,   -17,   -17,   -17,   -17,     0,   -17,     0,   -17,     0,
       0,   -17,   -17,     0,     0,     0,   -17,   -17,     0,   -17,
       0,   -17,   -17,   -18,     0,   -18,   -18,   -18,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,
       0,   -18,     0,     0,   -18,   -18,     0,     0,     0,   -18,
     -18,     0,   -18,     0,   -18,   -18,   -19,     0,   -19,   -19,
     -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
     -19,     0,   -19,     0,   -19,     0,     0,   -19,   -19,     0,
       0,     0,   -19,   -19,     0,   -19,     0,   -19,   -19,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   -20,     0,   -20,     0,   -20,     0,     0,
     -20,   -20,     0,     0,     0,   -20,   -20,     0,   -20,     0,
     -20,   -20,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,     0,
     -21,     0,     0,   -21,   -21,     0,     0,     0,   -21,   -21,
       0,   -21,     0,   -21,   -21,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,     0,   -36,     0,     0,   -36,   -36,     0,     0,
       0,   -36,   -36,     0,   -36,     0,   -36,   -36,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,     0,   -25,     0,     0,   -25,
     -25,     0,     0,     0,   -25,   -25,     0,   -25,     0,   -25,
     -25,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,
       0,     0,   -37,   -37,     0,     0,     0,   -37,   -37,     0,
     -37,     0,   -37,   -37,    -9,     0,    -9,    -9,    -9,    -9,
      -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,     0,
      -9,     0,    -9,     0,     0,    -9,    -9,     0,     0,     0,
      -9,    -9,     0,    -9,     0,    -9,    -9,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,
      -8,    -8,     0,    -8,     0,    -8,     0,     0,    -8,    -8,
       0,     0,     0,    -8,    -8,     0,    -8,     0,    -8,    -8,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,     0,   -30,     0,
       0,   -30,   -30,     0,     0,     0,   -30,   -30,     0,   -30,
       0,   -30,   -30,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     432,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,   -34,     0,     0,   -34,   -34,     0,     0,     0,   -34,
     -34,     0,   -34,     0,   -34,   -34,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,     0,   -38,     0,     0,   -38,   -38,     0,
       0,     0,   -38,   -38,     0,   -38,     0,   -38,   -38,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,     0,   -39,     0,     0,
     -39,   -39,     0,     0,     0,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,     0,
     -40,     0,     0,   -40,   -40,     0,     0,     0,   -40,   -40,
       0,   -40,     0,   -40,   -40,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,     0,   -35,     0,     0,   -35,   -35,     0,     0,
       0,   -35,   -35,     0,   -35,     0,   -35,   -35,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,   -24,     0,   -24,     0,     0,   -24,
     -24,     0,     0,     0,   -24,   -24,     0,   -24,     0,   -24,
     -24,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,
       0,     0,   -33,   -33,     0,     0,     0,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,     0,   -26,     0,     0,   -26,   -26,     0,     0,     0,
     -26,   -26,     0,   -26,     0,   -26,   -26,   -22,     0,   -22,
     -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,   -22,     0,   -22,     0,     0,   -22,   -22,
       0,     0,     0,   -22,   -22,     0,   -22,     0,   -22,   -22,
     -31,     0,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,     0,   -31,     0,
       0,   -31,   -31,     0,     0,     0,   -31,   -31,     0,   -31,
       0,   -31,   -31,   -23,     0,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,
       0,   -23,     0,     0,   -23,   -23,     0,     0,     0,   -23,
     -23,     0,   -23,     0,   -23,   -23,   -15,     0,   -15,   -15,
     -15,   -15,   -15,     0,     0,   -15,   -15,   -15,   -15,   -15,
     -15,     0,   -15,     0,   -15,     0,     0,   -15,   -15,     0,
       0,     0,   -15,   -15,     0,   -15,     0,   -15,   -15,   -16,
       0,   -16,   -16,   -16,   -16,   -16,     0,     0,   -16,   -16,
     -16,   -16,   -16,   -16,     0,   -16,     0,   -16,     0,     0,
     -16,   -16,     0,     0,     0,   -16,   -16,     0,   -16,     0,
     -16,   -16,   -17,     0,   -17,   -17,   -17,   -17,   -17,     0,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,     0,
     -17,     0,     0,   -17,   -17,     0,     0,     0,   -17,   -17,
       0,   -17,     0,   -17,   -17,   -18,     0,   -18,   -18,   -18,
     -18,   -18,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,
       0,   -18,     0,   -18,     0,     0,   -18,   -18,     0,     0,
       0,   -18,   -18,     0,   -18,     0,   -18,   -18,   -19,     0,
     -19,   -19,   -19,   -19,   -19,     0,     0,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,     0,   -19,     0,     0,   -19,
     -19,     0,     0,     0,   -19,   -19,     0,   -19,     0,   -19,
     -19,   -20,     0,   -20,   -20,   -20,   -20,   -20,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,     0,   -20,
       0,     0,   -20,   -20,     0,     0,     0,   -20,   -20,     0,
     -20,     0,   -20,   -20,   -21,     0,   -21,   -21,   -21,   -21,
     -21,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,     0,   -21,     0,     0,   -21,   -21,     0,     0,     0,
     -21,   -21,     0,   -21,     0,   -21,   -21,   -36,     0,   -36,
     -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,     0,   -36,     0,     0,   -36,   -36,
       0,     0,     0,   -36,   -36,     0,   -36,     0,   -36,   -36,
     -25,     0,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,     0,
       0,   -25,   -25,     0,     0,     0,   -25,   -25,     0,   -25,
       0,   -25,   -25,   -37,     0,   -37,   -37,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
       0,   -37,     0,     0,   -37,   -37,     0,     0,     0,   -37,
     -37,     0,   -37,     0,   -37,   -37,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,     0,   -38,     0,     0,   -38,   -38,     0,
       0,     0,   -38,   -38,     0,   -38,     0,   -38,   -38,   -39,
       0,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,     0,   -39,     0,     0,
     -39,   -39,     0,     0,     0,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,     0,
     -40,     0,     0,   -40,   -40,     0,     0,     0,   -40,   -40,
       0,   -40,     0,   -40,   -40,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,     0,   -35,     0,     0,   -35,   -35,     0,     0,
       0,   -35,   -35,     0,   -35,     0,   -35,   -35,   -24,     0,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,   -24,     0,   -24,     0,     0,   -24,
     -24,     0,     0,     0,   -24,   -24,     0,   -24,     0,   -24,
     -24,    -9,     0,    -9,    -9,    -9,    -9,    -9,     0,     0,
      -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,     0,    -9,
       0,     0,    -9,    -9,     0,     0,     0,    -9,    -9,     0,
      -9,     0,    -9,    -9,    -8,     0,    -8,    -8,    -8,    -8,
      -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,
      -8,     0,    -8,     0,     0,    -8,    -8,     0,     0,     0,
      -8,    -8,     0,    -8,     0,    -8,    -8,    26,     0,    27,
      28,    29,    30,    31,     0,     0,    32,    33,    34,    35,
      36,    37,     0,    38,     0,    39,     0,     0,    40,    41,
       0,     0,     0,    42,    43,     0,    44,     0,   134,   343,
      26,     0,    27,    28,    29,    30,    31,     0,     0,    32,
      33,    34,    35,    36,    37,     0,    38,     0,    39,     0,
       0,    40,    41,     0,     0,     0,    42,    43,     0,    44,
       0,   134,   394,   -30,     0,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
       0,   -30,     0,     0,   -30,   -30,   321,   -55,   -55,   -30,
     -30,     0,   -30,     0,   -30,   -30,    27,    28,    29,    30,
     211,   -55,     0,   212,   213,   214,   215,   216,   217,     0,
      38,     0,    39,     0,     0,    40,    41,   -57,   -57,   -57,
      42,   218,     0,    44,     0,   219,    27,    28,    29,    30,
      31,     0,   -57,    32,    33,    34,    35,    36,    37,     0,
      38,     0,    39,     0,     0,    40,    41,   -59,   -59,   -59,
      42,    43,     0,    44,     0,   134,   -61,   -61,   -61,     0,
     -61,   -61,   -59,     0,   -61,   -61,   -57,   -57,   -57,   -61,
     -57,   -61,   -64,   -64,   -64,     0,   -64,   -64,   -57,     0,
     -64,   -64,    91,   -54,   -54,   -64,   -54,   -64,   -72,   -72,
     -72,     0,   -72,   -72,   -54,     0,   -72,   -72,     0,     0,
     -70,   -70,   -70,   -72,   -70,   -70,     0,     0,   -70,   -70,
       0,     0,   -73,   -73,   -73,   -70,   -73,   -73,     0,     0,
     -73,   -73,     0,     0,   -57,   -57,   -57,   -73,   -57,   280,
       0,     0,   281,   282,     0,     0,   -59,   -59,   -59,   -57,
     -59,   -59,     0,     0,   -59,   -59,     0,     0,   -62,   -62,
     -62,   -59,   -62,   -62,     0,     0,   -62,   -62,     0,     0,
     -63,   -63,   -63,   -62,   -63,   -63,     0,     0,   -63,   -63,
       0,     0,   -66,   -66,   -66,   -63,   -66,   -66,     0,     0,
     -66,   -66,     0,     0,   -65,   -65,   -65,   -66,   -65,   -65,
       0,     0,   -65,   -65,     0,     0,   -61,   -61,   -61,   -65,
     -61,   -61,     0,     0,   -61,   -61,     0,     0,   -64,   -64,
     -64,   -61,   -64,   -64,     0,     0,   -64,   -64,   -57,   -57,
     -57,     0,   -57,   -64,   -66,   -66,   -66,     0,   -66,     0,
       0,   -57,     0,   -57,   312,   -54,   -54,   -66,   -54,   -66,
     -56,   -56,   -56,     0,   -56,     0,     0,   -54,     0,   -54,
     -65,   -65,   -65,   -56,   -65,   -56,   -61,   -61,   -61,     0,
     -61,     0,     0,   -65,     0,   -65,   -64,   -64,   -64,   -61,
     -64,   -61,   -66,   -66,   -66,     0,   -66,     0,     0,   -64,
       0,   -64,   279,   -54,   -54,     0,   -54,   -66,   -56,   -56,
     -56,     0,   -56,     0,   -65,   -65,   -65,   -54,   -65,     0,
     -61,   -61,   -61,   -56,   -61,     0,   -64,   -64,   -64,   -65,
     -64,   -62,   -62,   -62,     0,   -61,   -63,   -63,   -63,     0,
       0,   -64,   -66,   -66,   -66,     0,   -62,   -58,   -58,   -58,
       0,   -63,   -65,   -65,   -65,     0,     0,   -66,   -61,   -61,
     -61,     0,   -58,   321,   -54,   -54,     0,   -65,   -56,   -56,
     -56,     0,     0,   -61,   -64,   -64,   -64,     0,   -54,   311,
     -52,     0,   -52,   -56,     0,   -62,   -62,   -62,     0,   -64,
       0,   -52,     0,   -52,   -71,   -71,   -71,   -62,   -71,   -71,
       0,     0,   -71,   -71,     0,     0,   -71,   -72,   -72,   -72,
       0,   -72,   -72,     0,     0,   -72,   -72,     0,     0,   -72,
     -70,   -70,   -70,     0,   -70,   -70,     0,     0,   -70,   -70,
       0,     0,   -70,   -73,   -73,   -73,     0,   -73,   -73,     0,
       0,   -73,   -73,     0,     0,   -73,   -57,   -57,   -57,     0,
     -57,    92,     0,     0,    93,    94,     0,     0,   -57,   -59,
     -59,   -59,     0,   -59,   -59,     0,     0,   -59,   -59,     0,
       0,   -59,   -62,   -62,   -62,     0,   -62,   -62,     0,     0,
     -62,   -62,     0,     0,   -62,   -63,   -63,   -63,     0,   -63,
     -63,     0,     0,   -63,   -63,     0,     0,   -63,   -66,   -66,
     -66,     0,   -66,   -66,     0,     0,   -66,   -66,     0,     0,
     -66,   -65,   -65,   -65,     0,   -65,   -65,     0,     0,   -65,
     -65,     0,     0,   -65,   -61,   -61,   -61,     0,   -61,   -61,
       0,     0,   -61,   -61,     0,     0,   -61,   -64,   -64,   -64,
       0,   -64,   -64,     0,     0,   -64,   -64,     0,     0,   -64,
     -56,   -56,   -56,     0,   -56,   -71,   -71,   -71,     0,   -71,
       0,     0,   -56,     0,   -72,   -72,   -72,   -71,   -72,   -70,
     -70,   -70,     0,   -70,     0,     0,   -72,     0,   -73,   -73,
     -73,   -70,   -73,   -59,   -59,   -59,     0,   -59,     0,     0,
     -73,     0,   -62,   -62,   -62,   -59,   -62,   -63,   -63,   -63,
       0,   -63,     0,     0,   -62,     0,   -66,   -66,   -66,   -63,
     -66,   -65,   -65,   -65,     0,   -65,     0,     0,   -66,     0,
     -61,   -61,   -61,   -65,   -61,   -64,   -64,   -64,     0,   -64,
       0,     0,   -61,   -63,   -63,   -63,     0,   -64,   -66,   -66,
     -66,   -58,   -58,   -58,     0,   -63,   -65,   -65,   -65,     0,
     -66,     0,     0,   -58,   -61,   -61,   -61,     0,   -65,   340,
     -54,   -54,   -56,   -56,   -56,     0,   -61,   -64,   -64,   -64,
       0,   -54,     0,     0,   -56,     0,     0,     0,     0,   -64
};

static const yytype_int16 yycheck[] =
{
       0,    15,    23,   209,     4,    33,   134,     1,    22,    18,
       3,     1,    33,   117,    12,    18,    23,    38,    39,    40,
      41,    73,    31,     1,   128,    28,    33,   117,     1,     1,
      32,     1,    39,    31,    28,   117,   117,   117,   117,    29,
      30,    31,   248,   117,    18,   251,    16,    17,    18,    70,
      71,    72,    30,    31,    28,    28,    28,    30,    30,     0,
      30,    31,    18,    70,    71,     1,    20,    88,    89,    90,
      91,    92,    93,    94,    28,    31,     3,   129,   284,   117,
      18,    88,    20,     1,     1,     3,     4,     5,     6,   117,
      20,   219,    28,    31,   115,    12,   117,   118,    28,    17,
      29,    19,    31,   117,    22,    23,    30,   128,   115,    27,
     117,   317,    30,    31,    16,    17,    18,   117,   132,    12,
      29,   128,    31,    29,     1,    31,    28,    16,    17,    18,
     336,    20,    16,    17,    18,   156,   157,   158,   159,    16,
      17,    18,    31,    20,    20,   351,     3,    31,   354,    18,
     157,    20,    29,    30,    31,    31,   177,   178,   179,   180,
      29,   367,    31,    30,   370,     1,    30,     3,     4,     5,
       6,   178,     3,     4,     5,     6,   197,     3,     4,     5,
       6,    17,    20,    19,    30,   213,    22,    23,   209,   210,
      30,    27,   213,    31,    30,    31,    27,    17,    18,    30,
      20,    27,   209,    28,    30,    28,   213,     1,    28,     3,
       4,     5,     6,   234,    16,    17,    18,    28,     3,     4,
       5,     6,   243,    17,   245,    19,    28,   248,    22,    23,
     251,    28,    17,    27,    19,     3,    30,    31,   245,    17,
      18,   248,    27,    20,   251,    30,     1,    28,     3,     4,
       5,     6,    29,    31,    31,   276,   277,   278,   279,   280,
     281,   282,    17,   284,    19,    17,    18,    22,    23,   276,
      20,    29,    27,    31,   326,    30,    31,   284,    28,    31,
       3,     3,     4,     5,     6,    28,     0,     1,   309,   310,
     311,   312,   313,   314,   315,    17,   317,    19,    12,   320,
     321,    28,   309,    20,   325,    27,    31,    23,    30,    20,
     317,     9,   333,   417,    31,   336,    28,    33,   339,   340,
      31,    23,    38,    39,    40,    41,   333,   417,   432,   336,
     351,    33,    20,   354,    28,   417,   417,   417,   417,    29,
      28,    31,   432,   417,   351,    31,   367,   354,    20,   370,
     432,   432,   432,   432,    70,    71,    72,    29,   432,    31,
     367,    31,    29,   370,    31,    16,    17,    18,    70,    71,
      31,     1,    88,    89,    90,    91,    92,    93,    94,   417,
      31,   433,    20,    16,    17,    18,    16,    17,    18,   417,
       1,    29,    28,    31,   432,    28,   417,   418,    28,   115,
      30,   117,   118,   417,   432,    16,    17,    18,    28,    20,
     417,   432,   128,   115,    29,   117,    31,   417,   432,    30,
      31,    28,   436,    17,    18,   432,   128,    17,    18,     1,
      20,    29,   432,    31,    28,    16,    17,    18,    28,    20,
     156,   157,   158,   159,    16,    17,    18,    31,    20,    21,
      31,    28,    24,    25,    16,    17,    18,    29,    30,    31,
      28,   177,   178,   179,   180,    28,    28,    16,    17,    18,
      29,    20,    31,    29,     1,    31,     3,     4,     5,     6,
       7,   197,    31,    10,    11,    12,    13,    14,    15,    18,
      17,    20,    19,   209,   210,    22,    23,   213,     3,    28,
      27,    28,    32,    30,    28,    32,    33,   209,    16,    17,
      18,   213,     1,    28,     3,     4,     5,     6,   234,    29,
      28,    31,    28,     3,     4,     5,     6,   243,    17,   245,
      19,    28,   248,    22,    23,   251,    28,    17,    27,    19,
      28,    30,    31,   245,    28,    31,   248,    27,    30,   251,
      30,     1,    30,     3,     4,     5,     6,    30,     3,     1,
     276,   277,   278,   279,   280,   281,   282,    17,   284,    19,
      30,    30,    22,    23,    16,    17,    18,    27,    20,    28,
      30,    31,   284,    29,     9,    31,    28,    31,    30,     3,
       4,     5,     6,   309,   310,   311,   312,   313,   314,   315,
      29,   317,    31,    17,   320,   321,    16,    17,    18,   325,
      20,    28,    23,    27,     3,   317,    30,   333,    31,    29,
     336,    31,    33,   339,   340,    31,    23,    38,    39,    40,
      41,   333,    31,    31,   336,   351,    33,    31,   354,     3,
       4,     5,     6,     3,     4,     5,     6,    17,    18,   351,
      31,   367,   354,    17,   370,    31,    31,    17,    28,    70,
      71,    72,    29,    27,    31,   367,    30,    27,   370,     1,
      30,    28,    31,    70,    71,     0,     1,    88,    89,    90,
      91,    92,    93,    94,    16,    17,    18,    12,    20,    21,
      31,    31,    24,    25,    20,    29,    31,    31,    30,    31,
      31,   417,   418,    29,   115,    31,   117,   118,    16,    17,
      18,    31,    20,     0,     1,   417,   432,   128,   115,    28,
     117,    29,    29,    31,    31,    12,     3,     4,     5,     6,
     432,   128,    29,     1,    31,     3,     4,     5,     6,    29,
      17,    31,    28,    31,    28,   156,   157,   158,   159,    17,
      27,    19,    31,    30,    22,    23,    16,    17,    18,    27,
      20,    21,    30,    31,    24,    25,   177,   178,   179,   180,
      31,    31,    16,    17,    18,    29,    20,    31,    29,     1,
      31,     3,     4,     5,     6,     7,   197,    31,    10,    11,
      12,    13,    14,    15,    29,    17,    31,    19,   209,   210,
      22,    23,   213,    31,    31,    27,    28,    31,    30,    28,
      32,    33,   209,    16,    17,    18,   213,     1,    31,     3,
       4,     5,     6,   234,    29,    28,    31,    31,     3,     4,
       5,     6,   243,    17,   245,    19,    31,   248,    22,    23,
     251,    31,    17,    27,    31,    31,    30,    31,   245,    31,
      31,   248,    27,    31,   251,    30,     1,    28,     3,     4,
       5,     6,    28,     0,     1,   276,   277,   278,   279,   280,
     281,   282,    17,   284,    19,    12,    28,    22,    23,    29,
      31,    31,    27,    32,     4,    30,    31,   284,     3,     4,
       5,     6,     3,     4,     5,     6,     0,     1,   309,   310,
     311,   312,   313,   314,   315,    29,   317,    31,    12,   320,
     321,    29,    27,    31,   325,    30,    27,    23,    21,    30,
     317,    -1,   333,    17,    18,   336,    20,    33,   339,   340,
       0,     1,    38,    39,    40,    41,   333,    31,    -1,   336,
     351,    -1,    12,   354,     3,     4,     5,     6,     3,     4,
       5,     6,    -1,    29,   351,    31,   367,   354,    29,   370,
      31,    29,    -1,    31,    70,    71,    72,    29,    27,    31,
     367,    30,    27,   370,     1,    30,     3,     4,     5,     6,
      -1,    -1,    88,    89,    90,    91,    92,    93,    94,    29,
      17,    31,    19,     0,     1,    22,    23,    -1,     0,     1,
      27,    -1,    -1,    30,    31,    12,   417,   418,    -1,   115,
      12,   117,   118,    16,    17,    18,    29,    20,    31,    -1,
     417,   432,   128,    29,    -1,    31,    29,    -1,    31,    29,
      23,    31,    16,    17,    18,   432,    20,     0,     1,     1,
      33,     3,     4,     5,     6,    29,    39,    31,    -1,    12,
     156,   157,   158,   159,    29,    17,    31,    19,     0,     1,
      22,    23,    -1,     0,     1,    27,    -1,    -1,    30,    31,
      12,   177,   178,   179,   180,    12,    -1,    70,    71,    72,
      -1,     3,     4,     5,     6,    16,    17,    18,    29,    20,
      31,   197,    -1,    -1,     1,    88,    89,    90,    29,    -1,
      31,    -1,     9,   209,   210,    27,    -1,   213,    30,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,   115,    30,   117,   118,    17,    18,   234,    20,
      -1,     1,    16,    17,    18,   128,    20,   243,    29,   245,
      31,    -1,   248,    -1,    28,   251,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
     276,   277,   278,   279,   280,   281,   282,    17,   284,    19,
      -1,    -1,    22,    23,    -1,   178,    -1,    27,    28,    -1,
      30,    -1,    -1,    -1,     3,     4,     5,     6,    16,    17,
      18,    -1,    20,   309,   310,   311,   312,   313,   314,   315,
      -1,   317,    -1,    31,   320,   321,   209,   210,    27,   325,
     213,    30,    16,    17,    18,    -1,    20,   333,    23,    -1,
     336,    -1,    -1,   339,   340,    29,    -1,    31,    33,    16,
      17,    18,    -1,    20,    39,   351,    17,    18,   354,    20,
     243,    -1,   245,    -1,    31,   248,    -1,    -1,   251,    -1,
      31,   367,    -1,    -1,   370,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    70,    71,    72,    29,    -1,
      31,     3,     4,     5,     6,   278,    -1,    -1,    16,    17,
      18,   284,    20,    88,    89,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    31,    -1,    27,    28,    -1,    30,    -1,
      -1,   417,   418,    -1,    -1,    23,   309,   310,   311,    -1,
     115,    -1,   117,   118,   317,    33,   432,   320,    -1,    -1,
      -1,    39,   325,   128,    16,    17,    18,    -1,    20,    -1,
     333,    -1,    -1,   336,    -1,    -1,   339,    29,    -1,    31,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,   351,    -1,
      -1,   354,    70,    71,    72,    17,    -1,    19,    -1,    -1,
      22,    23,    23,    -1,   367,    27,    -1,   370,    30,    -1,
      88,    -1,    33,   178,     3,     4,     5,     6,    -1,    -1,
      16,    17,    18,    44,    20,    -1,    -1,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    31,    -1,   115,    27,   117,
     118,    30,    -1,    -1,   209,   210,    -1,    -1,   213,    70,
     128,    16,    17,    18,   417,   418,    77,    78,    16,    17,
      18,    -1,    20,    28,    -1,     3,     4,     5,     6,   432,
      -1,    29,    -1,    31,    -1,    16,    17,    18,   243,    17,
     245,    19,    -1,   248,    22,    23,   251,    -1,    -1,    27,
      31,    -1,    30,    -1,   115,    -1,   117,    -1,    -1,    -1,
     178,    16,    17,    18,    -1,    20,    21,   128,    -1,    24,
      25,    -1,   277,    -1,    29,    -1,    31,    -1,   139,   284,
      -1,    16,    17,    18,    -1,    20,    21,   148,    -1,    24,
      25,   209,    -1,    -1,    29,   213,    31,    -1,    -1,    -1,
     161,    16,    17,    18,   309,   310,    -1,    -1,    -1,    16,
      17,    18,   317,    20,    21,    -1,    31,    24,    25,    -1,
     325,   182,    29,    -1,    31,    -1,    -1,   245,   333,    -1,
     248,   336,    -1,   251,    -1,    16,    17,    18,   199,    20,
      21,    -1,    -1,    24,    25,    -1,   351,    -1,    29,   354,
      31,    -1,   213,    -1,    -1,    16,    17,    18,    -1,    20,
      21,    -1,   367,    24,    25,   370,   284,    -1,    29,    -1,
      31,    -1,    16,    17,    18,   236,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,   245,    29,    -1,    31,    16,    17,
      18,   309,    20,    -1,    -1,    -1,   257,    -1,    -1,   317,
      28,    16,    17,    18,    -1,    20,    21,   325,   269,    24,
      25,    -1,   417,   418,    29,   333,    31,    -1,   336,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,   432,    -1,   290,
      16,    17,    18,   351,    20,    21,   354,    31,    24,    25,
      -1,   302,    -1,    29,    -1,    31,    16,    17,    18,   367,
      20,    21,   370,    -1,    24,    25,    16,    17,    18,    29,
      20,    31,    16,    17,    18,    -1,    20,    -1,    -1,   330,
     331,    31,   333,    -1,    -1,    29,    -1,    31,    -1,    -1,
       1,   342,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,   417,
     418,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,   432,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,   417,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,   432,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    32,    33,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,
      32,    33,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    -1,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    32,    33,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    32,    33,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    33,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    23,    16,    17,    18,    27,
      28,    -1,    30,    -1,    32,    33,     3,     4,     5,     6,
       7,    31,    -1,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    16,    17,    18,
      27,    28,    -1,    30,    -1,    32,     3,     4,     5,     6,
       7,    -1,    31,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    23,    16,    17,    18,
      27,    28,    -1,    30,    -1,    32,    16,    17,    18,    -1,
      20,    21,    31,    -1,    24,    25,    16,    17,    18,    29,
      20,    31,    16,    17,    18,    -1,    20,    21,    28,    -1,
      24,    25,    16,    17,    18,    29,    20,    31,    16,    17,
      18,    -1,    20,    21,    28,    -1,    24,    25,    -1,    -1,
      16,    17,    18,    31,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    16,    17,    18,    31,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    16,    17,    18,    31,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    16,    17,    18,    31,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    16,    17,
      18,    31,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      16,    17,    18,    31,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    16,    17,    18,    31,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    16,    17,    18,    31,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    16,    17,    18,    31,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    16,    17,
      18,    31,    20,    21,    -1,    -1,    24,    25,    16,    17,
      18,    -1,    20,    31,    16,    17,    18,    -1,    20,    -1,
      -1,    29,    -1,    31,    16,    17,    18,    29,    20,    31,
      16,    17,    18,    -1,    20,    -1,    -1,    29,    -1,    31,
      16,    17,    18,    29,    20,    31,    16,    17,    18,    -1,
      20,    -1,    -1,    29,    -1,    31,    16,    17,    18,    29,
      20,    31,    16,    17,    18,    -1,    20,    -1,    -1,    29,
      -1,    31,    16,    17,    18,    -1,    20,    31,    16,    17,
      18,    -1,    20,    -1,    16,    17,    18,    31,    20,    -1,
      16,    17,    18,    31,    20,    -1,    16,    17,    18,    31,
      20,    16,    17,    18,    -1,    31,    16,    17,    18,    -1,
      -1,    31,    16,    17,    18,    -1,    31,    16,    17,    18,
      -1,    31,    16,    17,    18,    -1,    -1,    31,    16,    17,
      18,    -1,    31,    16,    17,    18,    -1,    31,    16,    17,
      18,    -1,    -1,    31,    16,    17,    18,    -1,    31,    17,
      18,    -1,    20,    31,    -1,    16,    17,    18,    -1,    31,
      -1,    29,    -1,    31,    16,    17,    18,    28,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    28,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      16,    17,    18,    -1,    20,    16,    17,    18,    -1,    20,
      -1,    -1,    28,    -1,    16,    17,    18,    28,    20,    16,
      17,    18,    -1,    20,    -1,    -1,    28,    -1,    16,    17,
      18,    28,    20,    16,    17,    18,    -1,    20,    -1,    -1,
      28,    -1,    16,    17,    18,    28,    20,    16,    17,    18,
      -1,    20,    -1,    -1,    28,    -1,    16,    17,    18,    28,
      20,    16,    17,    18,    -1,    20,    -1,    -1,    28,    -1,
      16,    17,    18,    28,    20,    16,    17,    18,    -1,    20,
      -1,    -1,    28,    16,    17,    18,    -1,    28,    16,    17,
      18,    16,    17,    18,    -1,    28,    16,    17,    18,    -1,
      28,    -1,    -1,    28,    16,    17,    18,    -1,    28,    16,
      17,    18,    16,    17,    18,    -1,    28,    16,    17,    18,
      -1,    28,    -1,    -1,    28,    -1,    -1,    -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    12,    35,    36,    37,    38,    39,     3,     0,
      37,     1,    28,    30,    12,    31,    40,    41,     3,    32,
      47,    29,    31,    48,    41,    47,     1,     3,     4,     5,
       6,     7,    10,    11,    12,    13,    14,    15,    17,    19,
      22,    23,    27,    28,    30,    33,    38,    42,    43,    44,
      45,    46,    47,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    65,     1,
       9,    30,    30,    30,    28,    45,     3,    30,    30,    30,
       3,    61,    57,    61,    61,    61,    54,    28,    20,    18,
      17,    16,    21,    24,    25,    54,     1,    31,    54,    64,
      58,     3,    46,    28,    54,    54,     3,    31,    57,    59,
      60,    61,    61,    61,    61,    29,    31,    31,    28,    31,
      31,    31,    54,    42,    58,    28,    28,    28,     8,    28,
      42,    46,    31,    47,    32,     4,     5,     6,    27,    30,
      62,    63,    65,     3,     4,     5,     6,    27,    30,    62,
      63,    65,     3,     4,     5,     6,    17,    19,    22,    23,
      27,    30,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    65,     3,     3,     4,     5,     6,    17,    19,    22,
      23,    27,    30,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    65,     3,     4,     5,     6,    17,    27,    30,
      59,    60,    61,    62,    63,    65,     1,    28,     1,    30,
      18,     7,    10,    11,    12,    13,    14,    15,    28,    32,
      38,    43,    44,    45,    47,    49,    50,    51,    52,    53,
       3,     4,     5,     6,    17,    27,    30,    59,    60,    61,
      62,    63,    65,    18,     3,    48,    54,     1,    30,    54,
       1,    30,     3,     4,     5,     6,    27,    30,    61,    62,
      63,    65,    57,    61,     3,     4,     5,     6,    27,    30,
      61,    62,    63,    65,    61,    54,    20,    18,    17,    16,
      21,    24,    25,     1,    30,     3,     4,     5,     6,    27,
      30,    61,    62,    63,    65,    57,    61,     3,     4,     5,
       6,    27,    30,    61,    62,    63,    65,    61,    54,    20,
      18,    17,    16,    21,    24,    25,     1,    30,    61,    54,
      17,    16,    31,    64,    59,    30,    30,    28,    45,     3,
      30,    30,    30,    48,    28,     1,    30,    61,    54,    17,
      16,    59,     9,    33,    31,    31,    64,    31,    31,    64,
       1,    30,    54,     1,    30,    54,    31,    57,    59,    60,
      61,    61,    61,    61,    31,    64,     1,    30,    54,     1,
      30,    54,    31,    57,    59,    60,    61,    61,    61,    61,
      31,    64,    31,    60,    61,    31,    58,    46,    28,     1,
      28,    54,    54,     3,    33,    31,    64,    31,    60,    61,
      54,    31,    31,    31,    64,    31,    31,    64,    31,    31,
      31,    64,    31,    31,    64,    31,    31,    31,    28,    31,
      31,    31,    31,    31,    31,    31,    31,    42,    58,    28,
      28,    28,     8,    28,    42,    46,    31,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    37,    38,    38,
      39,    39,    40,    40,    41,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    43,    44,    44,    45,    45,    46,
      47,    48,    48,    48,    49,    49,    50,    50,    51,    52,
      53,    54,    54,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    60,    61,
      61,    62,    62,    62,    63,    63,    63,    64,    64,    64,
      65,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     3,
       6,     5,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     9,     2,     1,     1,     1,     3,
       3,     2,     0,     2,     5,     7,     2,     3,     5,     5,
       5,     1,     1,     3,     2,     2,     3,     3,     3,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     2,     1,
       1,     3,     1,     1,     4,     3,     2,     3,     1,     1,
       1,     1,     1,     1
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
#line 87 "src/bison/bison.y"
            {
	  tree = (yyval.node);
  }
#line 2366 "src/bison/bison.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 93 "src/bison/bison.y"
                       {
		(yyval.node) = createNode("decl_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2376 "src/bison/bison.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 98 "src/bison/bison.y"
               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2384 "src/bison/bison.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 104 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2392 "src/bison/bison.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 107 "src/bison/bison.y"
                   {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2400 "src/bison/bison.tab.c"
    break;

  case 7: /* decl: error  */
#line 110 "src/bison/bison.y"
                {

	}
#line 2408 "src/bison/bison.tab.c"
    break;

  case 8: /* var_decl: TYPE ID ';'  */
#line 116 "src/bison/bison.y"
                    {
		(yyval.node) = createNode("var_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		insertSymbol((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column, (yyvsp[-2].token).lexeme, "var", (yyvsp[-1].token).scope);
	}
#line 2424 "src/bison/bison.tab.c"
    break;

  case 9: /* var_decl: TYPE ID error  */
#line 127 "src/bison/bison.y"
                        {
		
	}
#line 2432 "src/bison/bison.tab.c"
    break;

  case 10: /* fun_decl: TYPE ID '(' params ')' block_stmt  */
#line 133 "src/bison/bison.y"
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
#line 2451 "src/bison/bison.tab.c"
    break;

  case 11: /* fun_decl: TYPE ID '(' ')' block_stmt  */
#line 147 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("fun_decl");
		
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		
		(yyval.node)->leaf3 = (yyvsp[0].node);

		insertSymbol((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column, (yyvsp[-4].token).lexeme, "fun", (yyvsp[-3].token).scope);
	}
#line 2469 "src/bison/bison.tab.c"
    break;

  case 12: /* params: params ',' param_decl  */
#line 163 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("\0");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2479 "src/bison/bison.tab.c"
    break;

  case 13: /* params: param_decl  */
#line 168 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2487 "src/bison/bison.tab.c"
    break;

  case 14: /* param_decl: TYPE ID  */
#line 174 "src/bison/bison.y"
                {
		
		(yyval.node) = createNode("param_decl");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);

		insertSymbol((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column, (yyvsp[-1].token).lexeme, "param", (scopeId + 1));
	}
#line 2503 "src/bison/bison.tab.c"
    break;

  case 15: /* statement: exp_stmt  */
#line 188 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2511 "src/bison/bison.tab.c"
    break;

  case 16: /* statement: block_stmt  */
#line 191 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2519 "src/bison/bison.tab.c"
    break;

  case 17: /* statement: if_stmt  */
#line 194 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2527 "src/bison/bison.tab.c"
    break;

  case 18: /* statement: return_stmt  */
#line 197 "src/bison/bison.y"
                      {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2535 "src/bison/bison.tab.c"
    break;

  case 19: /* statement: write_stmt  */
#line 200 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2543 "src/bison/bison.tab.c"
    break;

  case 20: /* statement: writeln_stmt  */
#line 203 "src/bison/bison.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2551 "src/bison/bison.tab.c"
    break;

  case 21: /* statement: read_stmt  */
#line 206 "src/bison/bison.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2559 "src/bison/bison.tab.c"
    break;

  case 22: /* statement: var_decl  */
#line 209 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2567 "src/bison/bison.tab.c"
    break;

  case 23: /* statement: for_stmt  */
#line 212 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2575 "src/bison/bison.tab.c"
    break;

  case 24: /* for_stmt: FOR '(' assing_exp ';' rel_exp ';' assing_exp ')' block_stmt  */
#line 218 "src/bison/bison.y"
                                                                     {
		(yyval.node) = createNode("for_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-8].token).lexeme, (yyvsp[-8].token).line, (yyvsp[-8].token).column);
		(yyval.node)->leaf2 = (yyvsp[-6].node);
		(yyval.node)->leaf3 = (yyvsp[-4].node);
		(yyval.node)->leaf4 = (yyvsp[-2].node);
		(yyval.node)->leaf5 = (yyvsp[0].node);
	}
#line 2590 "src/bison/bison.tab.c"
    break;

  case 25: /* exp_stmt: exp ';'  */
#line 231 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2598 "src/bison/bison.tab.c"
    break;

  case 26: /* exp_stmt: ';'  */
#line 234 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
	}
#line 2606 "src/bison/bison.tab.c"
    break;

  case 27: /* exp: assing_exp  */
#line 240 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2614 "src/bison/bison.tab.c"
    break;

  case 28: /* exp: simple_exp  */
#line 243 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2622 "src/bison/bison.tab.c"
    break;

  case 29: /* assing_exp: ID ASSIGN simple_exp  */
#line 249 "src/bison/bison.y"
                             {
		(yyval.node) = createNode("assing_exp");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);

		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);

		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2638 "src/bison/bison.tab.c"
    break;

  case 30: /* block_stmt: '{' stmt_list '}'  */
#line 263 "src/bison/bison.y"
                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2646 "src/bison/bison.tab.c"
    break;

  case 31: /* stmt_list: stmt_list statement  */
#line 270 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("stmt_list");
		(yyval.node)->leaf1 = (yyvsp[-1].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2656 "src/bison/bison.tab.c"
    break;

  case 32: /* stmt_list: %empty  */
#line 275 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
	}
#line 2664 "src/bison/bison.tab.c"
    break;

  case 33: /* stmt_list: stmt_list error  */
#line 278 "src/bison/bison.y"
                         {

	}
#line 2672 "src/bison/bison.tab.c"
    break;

  case 34: /* if_stmt: IF '(' rel_exp ')' statement  */
#line 284 "src/bison/bison.y"
                                                {
		(yyval.node) = createNode("if_stmt");

		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2685 "src/bison/bison.tab.c"
    break;

  case 35: /* if_stmt: IF '(' rel_exp ')' statement ELSE statement  */
#line 292 "src/bison/bison.y"
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
#line 2703 "src/bison/bison.tab.c"
    break;

  case 36: /* return_stmt: RETURN ';'  */
#line 308 "src/bison/bison.y"
                   {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
	}
#line 2713 "src/bison/bison.tab.c"
    break;

  case 37: /* return_stmt: RETURN exp ';'  */
#line 313 "src/bison/bison.y"
                         {
		(yyval.node) = createNode("return_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
	}
#line 2724 "src/bison/bison.tab.c"
    break;

  case 38: /* write_stmt: WRITE '(' simple_exp ')' ';'  */
#line 322 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("write_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2736 "src/bison/bison.tab.c"
    break;

  case 39: /* writeln_stmt: WRITELN '(' simple_exp ')' ';'  */
#line 332 "src/bison/bison.y"
                                       {
		(yyval.node) = createNode("writeln_stmt");
		(yyval.node)->leaf1 = createNode("\0");;
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);
		(yyval.node)->leaf2 = (yyvsp[-2].node);
	}
#line 2747 "src/bison/bison.tab.c"
    break;

  case 40: /* read_stmt: READ '(' ID ')' ';'  */
#line 341 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("read_stmt");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-4].token).lexeme, (yyvsp[-4].token).line, (yyvsp[-4].token).column);

		(yyval.node)->leaf2  = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
	}
#line 2761 "src/bison/bison.tab.c"
    break;

  case 41: /* simple_exp: bin_exp  */
#line 353 "src/bison/bison.y"
                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2769 "src/bison/bison.tab.c"
    break;

  case 42: /* simple_exp: list_exp  */
#line 356 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2777 "src/bison/bison.tab.c"
    break;

  case 43: /* list_exp: factor ':' factor  */
#line 362 "src/bison/bison.y"
                          {
		(yyval.node) = createNode("list_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2790 "src/bison/bison.tab.c"
    break;

  case 44: /* list_exp: '?' factor  */
#line 370 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2802 "src/bison/bison.tab.c"
    break;

  case 45: /* list_exp: '%' factor  */
#line 377 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("list_exp"); 
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2813 "src/bison/bison.tab.c"
    break;

  case 46: /* list_exp: factor MAP factor  */
#line 383 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2825 "src/bison/bison.tab.c"
    break;

  case 47: /* list_exp: factor FILTER factor  */
#line 390 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("list_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2837 "src/bison/bison.tab.c"
    break;

  case 48: /* bin_exp: bin_exp LOG_OP unary_log_exp  */
#line 400 "src/bison/bison.y"
                                     {
		(yyval.node) = createNode("bin_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2850 "src/bison/bison.tab.c"
    break;

  case 49: /* bin_exp: unary_log_exp  */
#line 408 "src/bison/bison.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2858 "src/bison/bison.tab.c"
    break;

  case 50: /* unary_log_exp: EXCLAMATION unary_log_exp  */
#line 414 "src/bison/bison.y"
                                  {
		(yyval.node) = createNode("unary_log_exp");
	
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 2870 "src/bison/bison.tab.c"
    break;

  case 51: /* unary_log_exp: rel_exp  */
#line 421 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2878 "src/bison/bison.tab.c"
    break;

  case 52: /* rel_exp: rel_exp REL_OP sum_exp  */
#line 427 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("rel_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2890 "src/bison/bison.tab.c"
    break;

  case 53: /* rel_exp: sum_exp  */
#line 434 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2898 "src/bison/bison.tab.c"
    break;

  case 54: /* sum_exp: sum_exp SUM_OP mul_exp  */
#line 440 "src/bison/bison.y"
                               {
		(yyval.node) = createNode("sum_exp");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2910 "src/bison/bison.tab.c"
    break;

  case 55: /* sum_exp: mul_exp  */
#line 447 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2918 "src/bison/bison.tab.c"
    break;

  case 56: /* mul_exp: mul_exp MUL_OP factor  */
#line 453 "src/bison/bison.y"
                              {
		(yyval.node) = createNode("mul_exp");

		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = createNode("\0");
		(yyval.node)->leaf2->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf3 = (yyvsp[0].node);
	}
#line 2931 "src/bison/bison.tab.c"
    break;

  case 57: /* mul_exp: factor  */
#line 461 "src/bison/bison.y"
                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2939 "src/bison/bison.tab.c"
    break;

  case 58: /* mul_exp: SUM_OP factor  */
#line 464 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[-1].token).lexeme, (yyvsp[-1].token).line, (yyvsp[-1].token).column);
		(yyval.node)->leaf1 = (yyvsp[0].node);
	}
#line 2949 "src/bison/bison.tab.c"
    break;

  case 59: /* factor: immutable  */
#line 472 "src/bison/bison.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2957 "src/bison/bison.tab.c"
    break;

  case 60: /* factor: ID  */
#line 475 "src/bison/bison.y"
             {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 2966 "src/bison/bison.tab.c"
    break;

  case 61: /* immutable: '(' simple_exp ')'  */
#line 482 "src/bison/bison.y"
                           {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2974 "src/bison/bison.tab.c"
    break;

  case 62: /* immutable: call  */
#line 485 "src/bison/bison.y"
               {
		(yyval.node) =  (yyvsp[0].node);
	}
#line 2982 "src/bison/bison.tab.c"
    break;

  case 63: /* immutable: constant  */
#line 488 "src/bison/bison.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2990 "src/bison/bison.tab.c"
    break;

  case 64: /* call: ID '(' args ')'  */
#line 494 "src/bison/bison.y"
                        {
		(yyval.node) = createNode("call");
		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-3].token).lexeme, (yyvsp[-3].token).line, (yyvsp[-3].token).column);
		(yyval.node)->leaf2 = (yyvsp[-1].node);
	}
#line 3001 "src/bison/bison.tab.c"
    break;

  case 65: /* call: ID '(' ')'  */
#line 500 "src/bison/bison.y"
                     {
		(yyval.node) = createNode("call");

		(yyval.node)->leaf1 = createNode("\0");
		(yyval.node)->leaf1->token = allocateToken((yyvsp[-2].token).lexeme, (yyvsp[-2].token).line, (yyvsp[-2].token).column);
	}
#line 3012 "src/bison/bison.tab.c"
    break;

  case 66: /* call: ID error  */
#line 506 "src/bison/bison.y"
                   {

	}
#line 3020 "src/bison/bison.tab.c"
    break;

  case 67: /* args: args ',' simple_exp  */
#line 512 "src/bison/bison.y"
                            {
		(yyval.node) = createNode("args");
		(yyval.node)->leaf1 = (yyvsp[-2].node);
		(yyval.node)->leaf2 = (yyvsp[0].node);
	}
#line 3030 "src/bison/bison.tab.c"
    break;

  case 68: /* args: simple_exp  */
#line 517 "src/bison/bison.y"
                     {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3038 "src/bison/bison.tab.c"
    break;

  case 69: /* args: error  */
#line 520 "src/bison/bison.y"
                {
		
	}
#line 3046 "src/bison/bison.tab.c"
    break;

  case 70: /* constant: NIL  */
#line 526 "src/bison/bison.y"
            {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3055 "src/bison/bison.tab.c"
    break;

  case 71: /* constant: INT  */
#line 530 "src/bison/bison.y"
              {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3064 "src/bison/bison.tab.c"
    break;

  case 72: /* constant: FLOAT  */
#line 534 "src/bison/bison.y"
                {
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3073 "src/bison/bison.tab.c"
    break;

  case 73: /* constant: STRING  */
#line 538 "src/bison/bison.y"
                 {		
		(yyval.node) = createNode("\0");
		(yyval.node)->token = allocateToken((yyvsp[0].token).lexeme, (yyvsp[0].token).line, (yyvsp[0].token).column);
	}
#line 3082 "src/bison/bison.tab.c"
    break;


#line 3086 "src/bison/bison.tab.c"

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

#line 544 "src/bison/bison.y"


extern void yyerror(const char* s) {
    printf(BHRED"SYNTAX ERROR -> ");
    printf("%s ", s);
	printf("[Line %d, Column %d]\n"RESET, linhas, colunas);
}

int main(int argc, char **argv){
	initializeTable(symbolTable);
	initializeScopeStack(scopeStack);
    yyparse();
	printf("\n\n--------------------------------------------------------------- TREE ---------------------------------------------------------------- \n\n");
	printTree(tree, 1);
	printSymbolTable(symbolTable);
	freeTree(tree);
	freeTable();
    yylex_destroy();
    return 0;
}
