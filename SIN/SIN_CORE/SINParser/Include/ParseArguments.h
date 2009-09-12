#ifndef __SIN_PARSER_ARGUMENTS_H__
#define __SIN_PARSER_ARGUMENTS_H__


#include <list>

#include <utility>
#include "SINString.h"
#include "SINASTNode.h"



namespace SIN {
		
		
	class ParseArguments {
	public:
		typedef std::list<ASTNode *>		NodesList;
		typedef std::pair<String, unsigned>	ErrorInfo;
		typedef std::list<ErrorInfo>		Errors;

		ParseArguments(const String & _fileName = "");
		~ParseArguments();



		struct ParsingFalgs {
		} parsingFlags;



		struct ParsingCounters {
			int loops;
			int functions;
			int nextLamdaFunctionId;
			
			std::list<int> funLineDecl;
			std::list<int> forLineDecl;
			std::list<int> whileLineDecl;
			ParsingCounters() : loops(0), functions(0), nextLamdaFunctionId(0) {}
		} parsingCounters;



		bool	HasError () const;
		void	SetRoot (ASTNode *);
		void	SetError (const ErrorInfo &);
		void	WriteFine (const String &);
		void	AppendToNodeList (ASTNode *);
		bool	RemoveNodeFromList(ASTNode *);

		

		void	CleanNodes (void);
		void	CleanErrors (void);
		void	CleanErrosAndNodes (void);
		void	DeleteNodesListAndNodes(void);
		
		
		void			SetFileName(const String &);
		const String	GetFileName(void) const;
		
		ASTNode *		GetRoot (void) const;
		const Errors &	GetErrors (void) const;
		
		//------------->  WARNING	<----------------//
		//YOU MUST TAKE THIS LIST AND DELETE ALL THE ELEMENTS AND AFTER THAT YOU MUST DELETE AND THE LIST.
		//ParseArguments DOES NOT DO THIS AUTOMATCILALLY.
		//IF YOU DO NOT DO THAT, YOU ARE GOING TO HAVE MEMORY LEAKS
		NodesList *		TakeNodesList(void);
		
		
	private:
		bool		hasError;
		Errors		errors;
		ASTNode *	root;
		NodesList *	nodesList;
		String		fileName;
		

	};
}	//namespace BISON


#endif //__SIN_PARSER_ARGUMENTS_H__
