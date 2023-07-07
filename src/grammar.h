/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
