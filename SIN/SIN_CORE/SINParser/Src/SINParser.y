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
	#include "SINASTNode.h"
	#include "SINParserManage.h"
	#include "LexAndBisonParseArguments.h"
	

	////////////////////////////////////////////////////////////////////////
	// defines
	


	////////////////////////////////////////////////////////////////////////
	// functions definitions
	
	int yyerror (SIN::LexAndBisonParseArguments & fabpa, char const* yaccProvidedMessage);
	int PrepareForFile(const char * filePath);
	int PrepareForString(void);


	int yylex(SIN::LexAndBisonParseArguments & fabpa);
	//
	extern int yylineno;
	extern char* yytext;
	extern FILE* yyin;	
%}



%parse-param {SIN::LexAndBisonParseArguments & fabpa}
%lex-param   {SIN::LexAndBisonParseArguments & fabpa}



/*Token types*/
%union {
    char *	stringV;
    double			realV;
    SIN::ASTNode *	AST;
};


%start SinCode

%type <AST>	SinCode stmts
%type <AST> stmt ifstmt whilestmt forstmt returnstmt block
%type <AST> expr assignexpr term metaexpr
%type <AST> lvalue primary
%type <AST> call objectdef funcdef fvaluedef objectfuncdef const
%type <AST> member
%type <AST> callsuffix elist
%type <AST> normalcall methodcall
%type <AST> elists
%type <AST> objectlist objectlists
%type <AST> stmtd
%type <AST> idlist idlists
%token <realV>   NUMBER
%token <stringV> ID STRING


////////////////////////////////////////////////////////////////////////
// Untyped tokens
// 
%token '[' ']' '{' '}' '(' ')' ';' ':' ',' '$' DOT DOUBLEDOT
%token IF ELSE WHILE FOR FUNCTION RETURN BREAK CONTINUE LOCAL GLOBAL TRUE FALSE NIL
%token ASSIGN ADD MIN MUL DIV MOD EQ NOTEQ INCR DECR GT LT GE LE AND OR NOT 
%token DOT_LT GT_DOT DOT_TILDE DOT_EXCl_MARK DOT_AT DOT_HASH 
%token KEYS_MEMBER SIZE_MEMBER


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
				|	metaexpr								{}
				|	DOT_HASH	metaexpr					{}
				|	"[[" stmt "]]"							{}
				|	term									{}

				;
				
				
				
metaexpr:		DOT_LT	SinCode  GT_DOT						{}
				|	DOT_LT	expr  GT_DOT					{}
				|	DOT_TILDE lvalue						{}
				|	DOT_TILDE call							{}
				|	DOT_EXCl_MARK	metaexpr				{}
				|	DOT_AT	lvalue							{}
				;
				
				

term:			'(' expr ')'								{}
				|	MIN		expr %prec UMINUS				{}	
				|	NOT		expr							{}
				|	INCR	lvalue							{}
				|	lvalue	INCR							{}
				|	DECR	lvalue							{}
				|	lvalue	DECR							{}
				|	primary									{}
				;
				


assignexpr:		lvalue ASSIGN expr							{}
				;



primary:		lvalue										{}
				|	call									{}
				|	objectdef								{}
				|	'(' fvaluedef ')'						{}
				|	const									{}
				;



lvalue:			ID 											{}
				|	LOCAL ID								{}
				|	GLOBAL ID								{}
				|	member									{}
				;


    
member:			lvalue DOT ID								{}
				|	lvalue	'[' expr ']'					{}
				|	lvalue DOT KEYS_MEMBER					{}
				|	lvalue DOT SIZE_MEMBER					{}
				|	call	DOT ID							{}
				|	call	'[' expr ']'					{}
				;



	
call:			call callsuffix								{}
				|	lvalue callsuffix						{}
				|	'(' expr ')'	'(' elist ')'			{}
				|	'(' fvaluedef ')' '(' elist ')'			{}
				; 


callsuffix:		normalcall									{}
				|	methodcall								{}
				;



normalcall:		'(' elist ')'								{}
				;
				
				
				
methodcall:		DOUBLEDOT ID '(' elist ')'					{}	/*equivalent to lvalue.id(lvalue, elist)*/
				;



elist:			expr elists									{}
				| 											{}
				;



elists:			',' expr elists								{}
				|											{}
				;



objectdef:		'[' ']'										{}
				|	'[' objectlist ']'						{}
				;
			
			
			
objectlist:	 	expr objectlists							{}
				|	expr ':' expr objectlists				{}
				|	objectfuncdef objectlists				{}
				;



objectlists:	',' expr objectlists						{}
				|	',' expr ':' expr objectlists			{}
				|	',' objectfuncdef objectlists			{}
				|											{}
				;



block:			'{' {} stmtd '}'							{}
				;



stmtd:			stmt stmtd									{}
				|											{}
				;
				
objectfuncdef:	FUNCTION									{}
				ID	'(' idlist ')' block					{}
				|	FUNCTION								{}
					'(' idlist ')' block					{}
				;

fvaluedef:		FUNCTION									{}
				ID	'(' idlist ')' block					{}
				|	FUNCTION								{}
					'(' idlist ')' block					{}
				;

				
funcdef:		FUNCTION									{}
				ID	'(' idlist ')' block					{}
				|	FUNCTION								{}
					'(' idlist ')' block					{}
				;


const:			NUMBER 										{}
				|	STRING 									{}
				|	NIL 									{}
				|	TRUE 									{}
				|	FALSE									{}
				;


idlist:			ID idlists									{}
				|	/*empty*/								{}
				;



idlists:		',' ID idlists	    						{}
				|				    						{}
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

int yyerror (SIN::LexAndBisonParseArguments & fabpa, char const* yaccProvidedMessage)
{
	SIN::String error = SIN::String() << yaccProvidedMessage;
	
	if (*yytext == 0)
		error << " maybe missing ';'";
	else
		error << ", before token: " << yytext;
	fabpa.SetError(std::make_pair(error, yylineno));
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