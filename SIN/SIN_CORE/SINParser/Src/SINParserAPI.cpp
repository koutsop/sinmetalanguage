#include "SINParserAPI.h"
#include <cassert>

#include "SINParser.h"
#include "SINAssert.h"
#include "SINASTNodes.h"







// TODO those should be somewhere?
extern int PrepareForString(void);
extern int PrepareForFile(const char * filePath);
extern int yyparse(SIN::ParseArguments &);


namespace SIN {
    //--------------------------------------------------------

	ParserAPI::ParserAPI(void) {
    }



    //--------------------------------------------------------

    ParserAPI::~ParserAPI(void) {
    }
    
	//--------------------------------------------------------

    int ParserAPI::ParseFile(String const &_filepath) {
		labpa.SetFileName(_filepath);
        if (PrepareForFile(_filepath.c_str()) == 0 && yyparse(labpa) == 0)
			return 0;
		labpa.SetError(ParseArguments::ErrorInfo("Could not parse file", 0));
		return -1;
    }
    
	//--------------------------------------------------------
	// If Parse* returned no error, this returns the produced AST
	ASTNode * ParserAPI::GetAST(void) const {
		ASTNode * root = labpa.GetRoot();
		SINASSERT(root);
		return labpa.HasError() ? static_cast<ASTNode *>(0): root;
	}

	//--------------------------------------------------------

	const ParseArguments::Errors & ParserAPI::GetErrors(void) const 
		{ return labpa.GetErrors(); }

	//--------------------------------------------------------

	ParseArguments::NodesList * ParserAPI::TakeNodesList(void)
		{ return labpa.TakeNodesList(); }

	//--------------------------------------------------------

	void ParserAPI::DeleteAST(void) 
		{ labpa.CleanNodes(); }

	void ParserAPI::DeleteListAndAST(void) {
		labpa.DeleteNodesListAndNodes();
	}

	//--------------------------------------------------------

	int ParserAPI::ParserString(char const *_input) {	

		labpa.SetFileName(to_string(_input));
		if ((PrepareForString() == 1) && yyparse(labpa) == 0)
			return 0;
		labpa.SetError(ParseArguments::ErrorInfo("Could not parse string",0));
		return -1;

	}

    ////////////////////////////////
} // namespace SIN

