
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 81 "1907048.y"

   char *string;
   int num;
   double flt;



/* Line 1676 of yacc.c  */
#line 109 "1907048.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


