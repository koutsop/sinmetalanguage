#ifndef __SIN_AST_UNPARSE_TREE_VISITOR_H__
#define __SIN_AST_UNPARSE_TREE_VISITOR_H__


#include "Common.h"
#include "SINString.h"
#include "SINASTNode.h"
#include "SINASTVisitor.h"


#ifdef _MSC_VER // compiling with Microsoft Visual Studio
//disable the error: not enough actual parameters for macro 'SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE'
#pragma warning(disable:4003)
#endif // _MSC_VER


#define SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(NODENAME) virtual void Visit(NODENAME##ASTNode &)


namespace SIN {
	class ASTUnparseTreeVisitor : public ASTVisitor {
	public:
		ASTUnparseTreeVisitor(void);
		virtual ~ASTUnparseTreeVisitor();
		

		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(	);
		//////////////////////////////////////////////////
		//Const value nodes
		//virtual void	Visit (IdASTNode const &		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Number	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(String	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Nil	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(True	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(False	);
		
		
		//////////////////////////////////////////////////
		//arithmetic operators nodes
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Add	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Sub	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Mul	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Div	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Mod	);
		

		//////////////////////////////////////////////////
		//compare nodes
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Lt);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Gt);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Le);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Ge);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Eq);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Ne);


		//////////////////////////////////////////////////
		//logic nodes
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Or		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Not	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(And	);

		//////////////////////////////////////////////////
		//stmt nodes
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(For			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ForPreamble	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ForAddendum	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(While			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(If				);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(IfElse			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Return			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Semicolon		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Break			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Continue		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Block			);

		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Assign	);

		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(NormalCall			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(MethodCall			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(FuncdefCall		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ExpressionCall		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ActualArguments	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ExpressionList		);

		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Function			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(LamdaFunction		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(FormalArguments	);

		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ID			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(LocalID	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(GlobalID	);

		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(PreIncr	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(PostIncr	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(PreDecr	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(PostDecr	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(UnaryNot	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(UnaryMin	);

		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(Object				);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(EmptyObject		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(UnindexedMember	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(IndexedMember		);

		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ObjectMember		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ObjectIndex		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(CallMember			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(CallIndex			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ObjectKeys			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(ObjectSize			);

		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(MetaParse			);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(MetaPreserve		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(MetaEvaluate		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(MetaUnparse		);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(MetaParseString	);
		SIN_UNPARSE_TREE_VISITOR_VISIT_SIGNATURE(SinCode			);
		
		void			CleanUnparsedString(void)	{ unparsedString.Clear(); }
		String const&	UnparsedString(void) const	{ return unparsedString; }
	
		void	EnableNewLine(void)		{ newLine = to_string("\n"); }
		void	DisableNewLine(void)	{ newLine = to_string(""); }
	private:
		String	newLine;
		String	unparsedString;
		int		indexedObjectFunctionCounter;

	}; // class ASTUnparseTreeVisitor



}	//namespace SIN


#endif // __SIN_AST_UNPARSE_TREE_VISITOR_H__
