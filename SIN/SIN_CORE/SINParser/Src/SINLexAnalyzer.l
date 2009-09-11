%{
	#include <stdlib.h>
	#include <stdarg.h>
	
	#include "LexUtility.h"
	#include "SINParser.h" /**/
	#include "SINString.h"
	#include "SINParserAPI.h"
	#include "ParseArguments.h"
	
	#define YY_NEVER_INTERACTIVE 1

	#define YY_DECL int yylex(SIN::ParseArguments & fabpa)

	static char InputWrapper (void);
	static void UnputWrapper (char c);
	

	//--------------------------------------------------------
	
	int SIN::ParserAPI::ParseText(char const *_input, const char * _fileName) {
        yy_scan_string(_input);
		if ( !ParserString(_fileName))
			return 0;
        return -1;
    }	

%}


 
/* Flex options */
%option noyywrap
%option yylineno

/* Flex macros */
ws				[ \t\r\v\n]+

digit			[0-9]
letter			[a-zA-Z]
underscore		[_]
id				{letter}({letter}|{underscore}|{digit})*


string			"\""
ccomments		"/*"
lineComm		\/\/.*
number			{digit}+(\.{digit}+)?


%%


"["				{ return '[';			}
"]"				{ return ']';			}
"{"				{ return '{';			}
"}"				{ return '}';			}
"("				{ return '(';			}
")"				{ return ')';			}
";"				{ return ';';			}
":"				{ return ':';			}
","				{ return ',';			}
"$"				{ return '$';			}
"?"				{ return '?';			}	
".<"			{ return DOT_LT;		}
">."			{ return GT_DOT;		}
".~"			{ return DOT_TILDE;		}
".!"			{ return DOT_EXCl_MARK;	}
".@"			{ return DOT_AT;		}
".#"			{ return DOT_HASH;		}
"."				{ return DOT;			}
".."			{ return DOUBLEDOT;		}



"+"				{ return ADD;		}
"-"				{ return MIN;		}
"*"				{ return MUL;		}
"/"				{ return DIV;		}
"%"				{ return MOD;		}
"<"				{ return LT;		}
">"				{ return GT;		}
"<="			{ return LE;		}
">="			{ return GE;		}
"=="			{ return EQ;		}
"!="			{ return NOTEQ;		}
"++"			{ return INCR;		}
"--"			{ return DECR;		}
"="				{ return ASSIGN;	}


"if"			{ return IF;		}
"else"			{ return ELSE;		}
"for"			{ return FOR;		}
"while"			{ return WHILE;		}
"break"			{ return BREAK;		}
"continue"		{ return CONTINUE;	}
"function"		{ return FUNCTION;	}
"return"		{ return RETURN;	}
"local"			{ return LOCAL;		}
"global"		{ return GLOBAL;	}
"true"			{ return TRUE_;		}
"false"			{ return FALSE_;	}
"nil"			{ return NIL_;		}
"not"			{ return NOT;		}
"and"			{ return AND;		}
"or"			{ return OR;		}

"static"		{ return STATIC;	}
"self"			{ return SELF;		}
"const"			{ return CONST;		}
"method"		{ return METHOD;	}


"$keys"			{ return KEYS_MEMBER;	}
"$size"			{ return SIZE_MEMBER;	}


{ccomments}		{	LEX::LexUtility::IgnoreCStyleComments(InputWrapper, UnputWrapper, &yylineno, fabpa); }

{lineComm}		{}

{ws}			{}

{id}			{
					yylval.stringV = LEX::LexUtility::SaveStr(yytext);
					return ID;
				}
				
{number}		{ 
					yylval.realV = atof(yytext);
					return NUMBER;	
				}
				
{string}		{ 
					yylval.stringV = LEX::LexUtility::SaveQuotedString(InputWrapper, &yylineno, fabpa);
					return STRING;	
				}


.				{	SIN::String error;
					error<<"Cannot match character " << SIN::String(yytext) << "with any rule";
					fabpa.SetError(std::make_pair(error, yylineno));
					return yytext[0]; 
				}


%%

static char InputWrapper (void)		{ return yyinput(); }
static void UnputWrapper (char c)	{ unput(c); }
