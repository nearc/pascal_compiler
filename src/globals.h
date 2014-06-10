  /****************************************************/
/* File: globals.h                                  */
/* Yacc/Bison Version                               */
/* Global types and vars for TINY compiler          */
/* must come before other include files             */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* Yacc/Bison generates internally its own values
 * for the tokens. Other files can access these values
 * by including the tab.h file generated using the
 * Yacc/Bison option -d ("generate header")
 *
 * The YYPARSER flag prevents inclusion of the tab.h
 * into the Yacc/Bison output itself
 */

#ifndef YYPARSER

/* the name of the following file may change */
#include "pascal.tab.h"

/* ENDFILE is implicitly defined by Yacc/Bison,
 * and not included in the tab.h file
 */
#define ENDFILE 0

#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

/* MAXRESERVED = the number of reserved words */
#define MAXRESERVED 8

/* Yacc/Bison generates its own integer values
 * for tokens
 */
typedef int TokenType; 

extern FILE* source; /* source code text file */
extern const FILE* listing;
// extern FILE* listing; /* listing output text file */
extern FILE* code; /* code text file for TM simulator */

extern int lineno; /* source line number for listing */

/**************************************************/
/***********   Syntax tree for parsing ************/
/**************************************************/

typedef enum {ModuleK,DeclK,StmtK,ExpK} NodeKind;
typedef enum {
    ProgramK, 
    RoutineK,
    Routine_headK,
    ProcedureK, 
    FunctionK
} ModuleKind;
typedef enum {
    ArrayK, 
    FieldK,
    SimpleK,
    VarK,
    ParaK
} DeclKind;
typedef enum {
    EqualK,
	AssignK, 
	ProcK, 
	CompK, 
	IfK,
	RepeatK, WhileK,
    LabelK,
	ForK, CaseK, GotoK
} StmtKind;
typedef enum {
	OpK, /*Operator Node   op
	     *                /  \
		 *              exp  exp   
		 */
	ConstIntK, /*Const Value Node*/
    ConstDoubleK,
    ConstCharK,
    ConstStrK,

	IdK ,/*Identifier Node*/
    Case_expK,
    FactorK
} ExpKind;

/* ExpType is used for type checking */
typedef enum {Void,Int,Bool,Char,Double,String} ExpType;

#define MAXCHILDREN 5

typedef struct treeNode
   { struct treeNode * child[MAXCHILDREN];
     struct treeNode * sibling;
     int lineno;
     NodeKind nodekind;
     union {
        ModuleKind module; 
        StmtKind stmt; 
        ExpKind exp;
        DeclKind decl;
    } kind;
     union { TokenType op;
             int goto_label;
             int direction;//1-to,0-downto
             int int_val;
             char char_val;
             char * string_val;
             double double_val;
             char * name; } attr;
     ExpType type; /* for type checking of exps */
   } TreeNode;

/**************************************************/
/***********   Flags for tracing       ************/
/**************************************************/

/* EchoSource = TRUE causes the source program to
 * be echoed to the listing file with line numbers
 * during parsing
 */
extern int EchoSource;

/* TraceScan = TRUE causes token information to be
 * printed to the listing file as each token is
 * recognized by the scanner
 */
extern int TraceScan;

/* TraceParse = TRUE causes the syntax tree to be
 * printed to the listing file in linearized form
 * (using indents for children)
 */
extern int TraceParse;

/* TraceAnalyze = TRUE causes symbol table inserts
 * and lookups to be reported to the listing file
 */
extern int TraceAnalyze;

/* TraceCode = TRUE causes comments to be written
 * to the TM code file as code is generated
 */
extern int TraceCode;

/* Error = TRUE prevents further passes if an error occurs */
extern int Error; 
#endif