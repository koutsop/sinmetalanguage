#include "SINParserAPI.h"
#include <cassert>
#if 0
#include "Common.h"
#include "SINAlloc.h"
#include "SINLogger.h"
#include "SINAssert.h"
#include "SINASTNode.h"
#include "SINConstants.h"
#include "SINParserBison.h"
#include "SINLoggerManager.h"







// TODO those should be somewhere?
extern int PrepareForString(void);
extern int PrepareForFile(const char * filePath);
extern int yyparse(SIN::LexAndBisonParseArguments &);


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
		labpa.SetError(LexAndBisonParseArguments::ErrorInfo("Could not parse file",0));
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

	const LexAndBisonParseArguments::Errors & ParserAPI::GetErrors(void) const 
		{ return labpa.GetErrors(); }

	//--------------------------------------------------------

	LexAndBisonParseArguments::NodesList * ParserAPI::TakeNodesList(void)
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
		labpa.SetError(LexAndBisonParseArguments::ErrorInfo("Could not parse string",0));
		return -1;

	}

    ////////////////////////////////
} // namespace SIN

#endif
