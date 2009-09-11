#ifndef __LEX_UTILITY_H__
#define __LEX_UTILITY_H__

#include "ParseArguments.h"

namespace LEX {
	class LexUtility {
	public:
		static char *	SaveStr(const char * yytext);
		
		static char *	SaveQuotedString(char (*input)	(void),
										 int *	line,
										 SIN::ParseArguments &);
		
		static void		IgnoreCStyleComments( char (*input)	(void),
											  void (*unput) (char),
											  int *	line,
											  SIN::ParseArguments &);
	};
}	//namespace LEX


#endif
