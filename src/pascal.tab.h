/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     INTEGER = 259,
     REAL = 260,
     CHAR = 261,
     STRING = 262,
     PROGRAM = 263,
     DOT = 264,
     SEMI = 265,
     COMMA = 266,
     EQUAL = 267,
     CONST = 268,
     ARRAY = 269,
     TYPE = 270,
     LB = 271,
     RB = 272,
     OF = 273,
     RECORD = 274,
     END = 275,
     COLON = 276,
     LP = 277,
     RP = 278,
     DOTDOT = 279,
     MINUS = 280,
     VAR = 281,
     FUNCTION = 282,
     NOT = 283,
     GE = 284,
     GT = 285,
     LE = 286,
     LT = 287,
     PLUS = 288,
     MUL = 289,
     DIV = 290,
     AND = 291,
     MOD = 292,
     UNEQUAL = 293,
     OR = 294,
     ASSIGN = 295,
     BEGIN = 296,
     IF = 297,
     ELSE = 298,
     THEN = 299,
     REPEAT = 300,
     UNTIL = 301,
     WHILE = 302,
     DO = 303,
     FOR = 304,
     GOTO = 305,
     CASE = 306,
     TO = 307,
     DOWNTO = 308,
     READ = 309,
     TYPEINTEGER = 310,
     TYPEREAL = 311,
     TYPECHAR = 312,
     TYPESTRING = 313,
     TYPEBOOL = 314,
     FALSE = 315,
     TRUE = 316,
     PROCEDURE = 317
   };
#endif
/* Tokens.  */
#define ID 258
#define INTEGER 259
#define REAL 260
#define CHAR 261
#define STRING 262
#define PROGRAM 263
#define DOT 264
#define SEMI 265
#define COMMA 266
#define EQUAL 267
#define CONST 268
#define ARRAY 269
#define TYPE 270
#define LB 271
#define RB 272
#define OF 273
#define RECORD 274
#define END 275
#define COLON 276
#define LP 277
#define RP 278
#define DOTDOT 279
#define MINUS 280
#define VAR 281
#define FUNCTION 282
#define NOT 283
#define GE 284
#define GT 285
#define LE 286
#define LT 287
#define PLUS 288
#define MUL 289
#define DIV 290
#define AND 291
#define MOD 292
#define UNEQUAL 293
#define OR 294
#define ASSIGN 295
#define BEGIN 296
#define IF 297
#define ELSE 298
#define THEN 299
#define REPEAT 300
#define UNTIL 301
#define WHILE 302
#define DO 303
#define FOR 304
#define GOTO 305
#define CASE 306
#define TO 307
#define DOWNTO 308
#define READ 309
#define TYPEINTEGER 310
#define TYPEREAL 311
#define TYPECHAR 312
#define TYPESTRING 313
#define TYPEBOOL 314
#define FALSE 315
#define TRUE 316
#define PROCEDURE 317




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

