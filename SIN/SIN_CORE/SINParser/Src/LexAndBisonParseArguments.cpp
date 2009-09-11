#include "LexAndBisonParseArguments.h"

#include <algorithm>
#include <functional>


#if 0
#include "Common.h"
#include "SINAlloc.h"
#include "SINLogger.h"
#include "SINConstants.h"
#include "SINLoggerManager.h"


#define SIN_BISON_PARSE_ARGUMENTS_LOGGER_NAME "SIN::LexAndBisonParseArguments"


namespace SIN {


	//-----------------------------------------------------------------
	
	struct CleanListFunctor : public std::unary_function<ASTNode *&, void> {
		void operator() (ASTNode *& node) { 
			if (node != static_cast<ASTNode *>(0)) {
				SINDELETE(node); 
				node = static_cast<ASTNode *>(0);
			}
		}
	};



	//-----------------------------------------------------------------
	
	struct FindFunctor : public std::unary_function<ASTNode *, bool> {
		ASTNode * node;
		FindFunctor(ASTNode * _node) : node(_node) {}
		
		bool operator() (ASTNode * _node) 
			{ return node->ID() == _node->ID() ? true : false; }
	};

	

	//-----------------------------------------------------------------

	LexAndBisonParseArguments::LexAndBisonParseArguments(const String & _fileName) : 
		hasError(false), 
		root(static_cast<ASTNode *>(0)),
		nodesList (SINEW(NodesList)),
		fileName(_fileName)
	{
		Type<LoggerManager>::ref lm(*LoggerManager::SingletonGetInstance());
		lm.GetDefaultLoggerFactory()->DestroyLogger(lm.MakeStdoutLogger(SIN_BISON_PARSE_ARGUMENTS_LOGGER_NAME));
		logger_p = lm.GetLogger(SIN_BISON_PARSE_ARGUMENTS_LOGGER_NAME);
	}
	
	
	//-----------------------------------------------------------------

	LexAndBisonParseArguments::~LexAndBisonParseArguments() 
		{ CleanErrors(); }

	
	//-----------------------------------------------------------------

	bool LexAndBisonParseArguments::HasError() const 
		{ return hasError; }


	//-----------------------------------------------------------------
	void LexAndBisonParseArguments::SetError (const ErrorInfo & ei) {
		hasError = true;
		errors.push_back(ei);
	}

	//-----------------------------------------------------------------
	
	void LexAndBisonParseArguments::WriteFine(const String & msg) 
		{ logger_p->Fine(msg);	}

	
	//-----------------------------------------------------------------
	
	void LexAndBisonParseArguments::SetRoot(ASTNode * node) 
		{ root = node; }


	//-----------------------------------------------------------------
	
	ASTNode * LexAndBisonParseArguments::GetRoot() const 
		{ return root; }


	//-----------------------------------------------------------------

	void LexAndBisonParseArguments::SetFileName(const String & _fileName)
		{ fileName = _fileName;	}


	//-----------------------------------------------------------------
	
	const String LexAndBisonParseArguments::GetFileName(void) const
		{	return fileName;	}
		

	//-----------------------------------------------------------------
	
	const LexAndBisonParseArguments::Errors &	LexAndBisonParseArguments::GetErrors() const 
		{ return errors; }


	//-----------------------------------------------------------------
	
	void LexAndBisonParseArguments::CleanNodes (void) { 
		std::for_each(nodesList->begin(), nodesList->end(), CleanListFunctor()); 
		nodesList->clear();
	}

	
	//-----------------------------------------------------------------
	
	void LexAndBisonParseArguments::CleanErrors (void) 
		{ errors.clear(); }

	
	//-----------------------------------------------------------------
	
	void LexAndBisonParseArguments::CleanErrosAndNodes (void) {
		CleanNodes();
		CleanErrors();
	}


	//-----------------------------------------------------------------

	void LexAndBisonParseArguments::AppendToNodeList (ASTNode * node) 
		{ nodesList->push_back(node); }
	

	//-----------------------------------------------------------------
	
	bool LexAndBisonParseArguments::RemoveNodeFromList(ASTNode * node) {
		NodesList::iterator result = std::find_if(nodesList->begin(), nodesList->end(), FindFunctor(node));
		
		if (result != nodesList->end()) {
			nodesList->erase(result);
			return true;
		}
		return false;
	}

	//-----------------------------------------------------------------

	LexAndBisonParseArguments::NodesList * LexAndBisonParseArguments::TakeNodesList(void) 
		{	return nodesList;	}


	void LexAndBisonParseArguments::DeleteNodesListAndNodes(void) {
		SINASSERT(nodesList != 0x00);

		CleanNodes();
		SINDELETE(nodesList);
		nodesList = 0x00;
	}
}	//namespace SIN
#endif
