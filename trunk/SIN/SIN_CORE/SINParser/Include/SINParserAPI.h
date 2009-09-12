#ifndef __SIN_PARSER_API_H__
#define __SIN_PARSER_API_H__

#include <string>
#include <stdio.h>
#include <assert.h>
#include <iostream>
#include "SINString.h"
#include "SINASTNode.h"
#include "ParseArguments.h"

namespace SIN {

	class ParserAPI {
	public:
		ParserAPI(void);
		~ParserAPI();

		// return !=0 on error
		int		ParseFile(const String &_fileName);
        int		ParseText(const char *_text, const char *_fileName);
		bool	HasError(void) const { return labpa.HasError(); }
		void	DeleteAST(void); //delete the fucking AST
		void	DeleteListAndAST(void); //delete the fucking AST and the nodes list
		
		// If Parse* returned no error, this returns the produced AST
		ASTNode *GetAST(void) const;

		SIN::ParseArguments::NodesList *		TakeNodesList(void);
		const SIN::ParseArguments::Errors &	GetErrors(void) const;
		
		

	private:
		SIN::ParseArguments labpa;

		int ParserString(char const *_input);

		
	}; // class ParserAPI

} // namespace SIN


#endif // __SIN_PARSER_API_H__

