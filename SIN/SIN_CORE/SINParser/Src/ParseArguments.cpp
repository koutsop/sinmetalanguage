#include "ParseArguments.h"

#include <algorithm>
#include <functional>
#include "SINAssert.h"



#define SIN_BISON_PARSE_ARGUMENTS_LOGGER_NAME "SIN::ParseArguments"


namespace SIN {


	//-----------------------------------------------------------------
	
	struct CleanListFunctor : public std::unary_function<ASTNode *&, void> {
		void operator() (ASTNode *& node) { 
			if (node != static_cast<ASTNode *>(0)) {
				delete node;
				//SINDELETE(node); 
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

	ParseArguments::ParseArguments(const String & _fileName) : 
		hasError(false), 
		root(static_cast<ASTNode *>(0)),
		nodesList (new NodesList),
		//nodesList (SINEW(NodesList)),
		fileName(_fileName)
	{
	}
	
	
	//-----------------------------------------------------------------

	ParseArguments::~ParseArguments() 
		{ CleanErrors(); }

	
	//-----------------------------------------------------------------

	bool ParseArguments::HasError() const 
		{ return hasError; }


	//-----------------------------------------------------------------
	void ParseArguments::SetError (const ErrorInfo & ei) {
		hasError = true;
		errors.push_back(ei);
	}

	//-----------------------------------------------------------------
	
	void ParseArguments::WriteFine(const String & msg) 
		{ 	}

	
	//-----------------------------------------------------------------
	
	void ParseArguments::SetRoot(ASTNode * node) 
		{ root = node; }


	//-----------------------------------------------------------------
	
	ASTNode * ParseArguments::GetRoot() const 
		{ return root; }


	//-----------------------------------------------------------------

	void ParseArguments::SetFileName(const String & _fileName)
		{ fileName = _fileName;	}


	//-----------------------------------------------------------------
	
	const String ParseArguments::GetFileName(void) const
		{	return fileName;	}
		

	//-----------------------------------------------------------------
	
	const ParseArguments::Errors &	ParseArguments::GetErrors() const 
		{ return errors; }


	//-----------------------------------------------------------------
	
	void ParseArguments::CleanNodes (void) { 
		std::for_each(nodesList->begin(), nodesList->end(), CleanListFunctor()); 
		nodesList->clear();
	}

	
	//-----------------------------------------------------------------
	
	void ParseArguments::CleanErrors (void) 
		{ errors.clear(); }

	
	//-----------------------------------------------------------------
	
	void ParseArguments::CleanErrosAndNodes (void) {
		CleanNodes();
		CleanErrors();
	}


	//-----------------------------------------------------------------

	void ParseArguments::AppendToNodeList (ASTNode * node) 
		{ nodesList->push_back(node); }
	

	//-----------------------------------------------------------------
	
	bool ParseArguments::RemoveNodeFromList(ASTNode * node) {
		NodesList::iterator result = std::find_if(nodesList->begin(), nodesList->end(), FindFunctor(node));
		
		if (result != nodesList->end()) {
			nodesList->erase(result);
			return true;
		}
		return false;
	}

	//-----------------------------------------------------------------

	ParseArguments::NodesList * ParseArguments::TakeNodesList(void) 
		{	return nodesList;	}


	void ParseArguments::DeleteNodesListAndNodes(void) {
		SINASSERT(nodesList != 0x00);

		CleanNodes();
		delete nodesList;
		//SINDELETE(nodesList);
		nodesList = 0x00;
	}
}	//namespace SIN
