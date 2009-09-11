%{
	#include <stdio.h>
	#include <utility>
	#include <assert.h>
	#include <iostream>
	#include <string.h>
	
	
	// Bison assumes alloca is the memory allocation
	// function.
	//
	#ifndef	alloca
	#define alloca malloc
	#endif



	#include "SINString.h"
	#include "SINASTNodes.h"
	#include "SINParserManage.h"
	#include "ParseArguments.h"
	

	////////////////////////////////////////////////////////////////////////
	// defines
	


	////////////////////////////////////////////////////////////////////////
	// functions definitions
	
	int yyerror (SIN::ParseArguments & parseArg, char const* yaccProvidedMessage);
	int PrepareForFile(const char * filePath);
	int PrepareForString(void);


	int yylex(SIN::ParseArguments & parseArg);
	//
	extern int yylineno;
	extern char* yytext;
	extern FILE* yyin;	
%}



%parse-param {SIN::ParseArguments & parseArg}
%lex-param   {SIN::ParseArguments & parseArg}



/*Token types*/
%union {
    char *			stringV;
    double			realV;
    SIN::ASTNode *	AST;
};


%start SinCode

%type <AST>	SinCode stmts
%type <AST> stmt ifstmt whilestmt forstmt returnstmt block
%type <AST> expr assignexpr term metaexpr metaparse metapreserve ternaryexpr 
%type <AST> lvalue primary
%type <AST> call objectdef funcdef valuefuncdef methodef const
%type <AST> member
%type <AST> elist
%type <AST> normalcall
%type <AST> elists
%type <AST> objectlist objectlists
%type <AST> stmtd
%type <AST> idlist idlists
%token <realV>   NUMBER
%token <stringV> ID STRING


////////////////////////////////////////////////////////////////////////
// Untyped tokens
// 
%token '[' ']' '{' '}' '(' ')' ';' ':' ',' '$' '?' DOT DOUBLEDOT
%token IF ELSE WHILE FOR FUNCTION RETURN BREAK CONTINUE LOCAL GLOBAL STATIC TRUE_ FALSE_ NIL_
%token ASSIGN ADD MIN MUL DIV MOD EQ NOTEQ INCR DECR GT LT GE LE AND OR NOT 
%token DOT_LT GT_DOT DOT_TILDE DOT_EXCl_MARK DOT_AT DOT_HASH 
%token KEYS_MEMBER SIZE_MEMBER CONST METHOD SELF


%left		ASSIGN
%left		OR
%left		AND
%nonassoc	EQ NOTEQ
%nonassoc	GT GE LT LE
%left		ADD MIN
%left		MUL DIV MOD
%right		NOT INCR DECR UMINUS
%left		DOT
%left		'[' ']'
%left		'{' '}'
%left		'(' ')'


%%

SinCode:		stmts										{}
				;



stmts:			stmt stmts									{}
				|											{}
				;



stmt:			expr ';'									{}
				|	ifstmt									{}
				|	whilestmt								{}
				|	forstmt									{}
				|	returnstmt								{}
				|	BREAK ';'								{}
				|	CONTINUE ';'							{}
				|	block									{}
				|	funcdef									{}
				|	';'										{}
				;



expr:			assignexpr 									{}
				|	expr	ADD		expr					{}
				|	expr	MIN		expr					{}
				|	expr	MUL		expr					{}
				|	expr	DIV		expr					{}
				|	expr	MOD		expr					{}
				|	expr	GT		expr					{}
				|	expr	GE		expr					{}
				|	expr	LT		expr					{}
				|	expr	LE		expr					{}
				|	expr	EQ		expr					{}
				|	expr	NOTEQ	expr					{}
				|	expr	AND		expr					{}
				|	expr	OR		expr					{}
				|	ternaryexpr								{}
				|	metaexpr								{}
				|	term									{}
				;
	
assignexpr:		lvalue ASSIGN expr							{}
				;

								
ternaryexpr:	'(' expr '?' expr ':' expr ')'				{}				
				;
				
				
/**************************	 Meta expressions  **************************/

metaexpr:		metaparse									{}
				|	metapreserve							{}
				|	DOT_EXCl_MARK	metaexpr				{}
				|	DOT_AT			lvalue					{}
				|	DOT_HASH		metaexpr				{}
				;

				
metaparse:		DOT_LT	SinCode  GT_DOT						{}
				|	DOT_LT	expr  GT_DOT					{}
				;


metapreserve:	DOT_TILDE		lvalue						{}
				|	DOT_TILDE		call					{}
				;
				
				
/**************************	 Term  **************************/


term:			'(' expr ')'								{}
				|	'$' stmt '$'							{}
				|	MIN		expr %prec UMINUS				{}	
				|	NOT		expr							{}
				|	INCR	lvalue							{}
				|	lvalue	INCR							{}
				|	DECR	lvalue							{}
				|	lvalue	DECR							{}
				|	primary									{}
				;
				


primary:		lvalue										{}
				|	call									{}
				|	objectdef								{}
				|	valuefuncdef							{}
				|	const									{}
				;


const:			NUMBER 										{}
				|	STRING 									{}
				|	NIL_ 									{}
				|	TRUE_ 									{}
				|	FALSE_									{}
				;


lvalue:			ID 											{}
				|	CONST	ID								{}
				|	LOCAL	ID								{}
				|	GLOBAL	ID								{}
				|	STATIC	ID								{}
				|	SELF									{}
				|	member									{}
				;

    
member:			lvalue DOT ID								{}
				|	lvalue	'[' expr ']'					{}
				|	lvalue DOT KEYS_MEMBER					{}
				|	lvalue DOT SIZE_MEMBER					{}
				|	call	DOT ID							{}
				|	call	'[' expr ']'					{}
				;



/********************* functions and method call ********************/
	
call:			call normalcall								{}
				|	lvalue normalcall						{}
				|	'(' expr ')'	normalcall				{}
				|	valuefuncdef	normalcall				{}
				; 


normalcall:		'(' elist ')'								{}
				;
				
				
				
elist:			expr elists									{}
				| 											{}
				;


elists:			',' expr elists								{}
				|											{}
				;
		
		
				
/*********************  OBJECTS  *********************/

objectdef:		'[' ']'										{}
				|	'[' objectlist ']'						{}
				;
			
objectlist:	 	unindexed									{}
				|	indexed									{}
				;

indexed:		expr		':' expr objectlists			{}
				|	expr	':' methodef					{}
				|	DOT ID	':' expr objectlists			{}
				|	DOT ID	':'	methodef					{} 
				;
				
unindexed:		expr objectlists							{}
				|	methodef objectlists					{}
				;


objectlists:	',' indexed									{}
				|	',' unindexed							{}
				|											{}
				;


methodef:		METHOD ID	'(' idlist ')' block			{}
				|	METHOD		'(' idlist ')' block		{}
				;




/**********************************************************************/

				
funcdef:		FUNCTION									{}
				ID	'(' idlist ')' block					{}
				|	FUNCTION								{}
					'(' idlist ')' block					{}
				;


valuefuncdef:	'(' funcdef ')'								{}
				;


idlist:			ID idlists									{}
				|	/*empty*/								{}
				;


idlists:		',' ID idlists	    						{}
				|				    						{}
				;



/****************************  Stmts  ****************************/


stmtd:			stmt stmtd									{}
				|											{}
				;


block:			'{' stmtd '}'								{}
				;
				
				

ifstmt:			IF '(' expr	')' stmt						{}
				|	IF '(' expr ')' stmt ELSE stmt			{}
				;

whilestmt:		WHILE										{}
				'(' expr ')' stmt							{}
				;

forstmt:		FOR											{}
				'(' elist ';' expr ';' elist ')' stmt		{}
				;

returnstmt:		RETURN ';'									{}
				|	RETURN expr ';' 						{}
				;

%%

int yyerror (char const* yaccProvidedMessage){
	return 0;
}


int yyerror (SIN::ParseArguments & parseArg, char const* yaccProvidedMessage)
{
	SIN::String error = SIN::String() << yaccProvidedMessage;
	
	if (*yytext == 0)
		error << " maybe missing ';'";
	else
		error << ", before token: " << yytext;
	parseArg.SetError(std::make_pair(error, yylineno));
	return 1;
}



int PrepareForFile(const char * filePath) {
	assert (filePath);
	if (!(yyin = fopen(filePath, "r"))) {
			fprintf(stderr, "Cannot read file: %s\n", filePath);
			return 1;
	}
	return 0;
}

int PrepareForString(void) {
	return yylineno = 1;
}