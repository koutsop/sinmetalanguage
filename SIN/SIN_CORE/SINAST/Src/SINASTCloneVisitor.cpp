#include "SINASTCloneVisitor.h"


#include <algorithm>
#include <functional>
#if 0
//#include "SINAlloc.h"
#include "SINAssert.h"
//#include "SINMemoryCellAST.h"




//----------------------------------------------------------------------------------------------------------


#define VISIT_NODE_WITH_MANY_CHILDREN()				if (true) {																	\
														for(ASTNode::iterator kid = _node.begin();								\
															kid != _node.end();													\
															++kid)																\
														{																		\
															parent = newNode;													\
															static_cast<ASTNode&>(*kid).Accept(this);							\
														}																		\
													}																			\
													else




//----------------------------------------------------------------------------------------------------------

#define CONNECT_NEW_NODE_TO_TREE()					if (parent)																	\
														*parent << newNode;														\
													if (!root)																	\
														root = newNode
			

//----------------------------------------------------------------------------------------------------------

//Edw o pateras prepei na minei os exein
#define CONECT_NODE_WITH_ZERO_CHILD(NODE_TYPE)		SINASSERT(nodesList != 0x00);												\
													SINASSERT(_node.NumberOfChildren() == 0);									\
													NODE_TYPE##ASTNode * newNode = SINEWCLASS(NODE_TYPE##ASTNode, (_node));		\
													nodesList->push_back(newNode);												\
													CONNECT_NEW_NODE_TO_TREE()


//----------------------------------------------------------------------------------------------------------


#define CONECT_NODE_WITH_ONE_CHILD(NODE_TYPE)		SINASSERT(nodesList != 0x00);												\
													SINASSERT(_node.NumberOfChildren() == 1);									\
													NODE_TYPE##ASTNode * newNode = SINEWCLASS(NODE_TYPE##ASTNode, (_node));		\
													nodesList->push_back(newNode);												\
													CONNECT_NEW_NODE_TO_TREE();													\
													parent = newNode;															\
													static_cast<ASTNode&>(*(_node.begin())).Accept(this)


//----------------------------------------------------------------------------------------------------------


#define CONECT_NODE_WITH_TWO_CHILDREN(NODE_TYPE)	SINASSERT(nodesList != 0x00);												\
													SINASSERT(_node.NumberOfChildren() == 2);									\
													NODE_TYPE##ASTNode * newNode = SINEWCLASS(NODE_TYPE##ASTNode, (_node));		\
													nodesList->push_back(newNode);												\
													CONNECT_NEW_NODE_TO_TREE();													\
													parent = newNode;															\
													ASTNode::iterator kid = _node.begin();										\
													static_cast<ASTNode&>(*kid++).Accept(this);									\
													parent = newNode;															\
													static_cast<ASTNode&>(*kid++).Accept(this)


//----------------------------------------------------------------------------------------------------------


#define CONECT_NODE_WITH_MANY_CHILDREN(NODE_TYPE)	NODE_TYPE##ASTNode * newNode = SINEWCLASS(NODE_TYPE##ASTNode, (_node));		\
													nodesList->push_back(newNode);												\
													CONNECT_NEW_NODE_TO_TREE();													\
													VISIT_NODE_WITH_MANY_CHILDREN()


//----------------------------------------------------------------------------------------------------------

#define SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(NODE_TYPE)				\
		void ASTCloneVisitor::Visit(NODE_TYPE##ASTNode& _node)					\
			{	CONECT_NODE_WITH_ZERO_CHILD(NODE_TYPE);	}

//----------------------------------------------------------------------------------------------------------

#define SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(NODE_TYPE)					\
		void ASTCloneVisitor::Visit(NODE_TYPE##ASTNode& _node)					\
			{	CONECT_NODE_WITH_ONE_CHILD(NODE_TYPE);	}

//----------------------------------------------------------------------------------------------------------

#define SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(NODE_TYPE)				\
		void ASTCloneVisitor::Visit(NODE_TYPE##ASTNode& _node)					\
			{	CONECT_NODE_WITH_TWO_CHILDREN(NODE_TYPE);	}

//----------------------------------------------------------------------------------------------------------

#define SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(NODE_TYPE)				\
		void ASTCloneVisitor::Visit(NODE_TYPE##ASTNode& _node)					\
			{	CONECT_NODE_WITH_MANY_CHILDREN(NODE_TYPE);	}




namespace SIN {

	namespace {
		template<class C>
		struct CleanListFunctor : public std::unary_function<C *&, void> {
			void operator() (C *& node) { 
				if (node != static_cast<C *>(0)) {
					SINDELETE(node); 
					node = static_cast<C *>(0);
				}
			}
		};
	}


	//-----------------------------------------------------------------

	ASTCloneVisitor::ASTCloneVisitor(void):
		root(0x00),
		parent(0x00),
		nodesList(SINEW( NodesList))
	{ }

	//-----------------------------------------------------------------

	ASTCloneVisitor::ASTCloneVisitor(ASTCloneVisitor const& _o) :
		root(_o.root),
		parent(_o.parent),
		nodesList(_o.nodesList)	
	{ }

	//-----------------------------------------------------------------

	ASTCloneVisitor::~ASTCloneVisitor(void) {}


	//-----------------------------------------------------------------

	ASTNode * ASTCloneVisitor::Root(void) const
		{	return root;	}


	//-----------------------------------------------------------------
	
	void ASTCloneVisitor::Resset(void) {
		root	= 0x00;
		parent	= 0x00;
		DeleteAST();
	}


	//-----------------------------------------------------------------

	void ASTCloneVisitor::DeleteAST(void){ 
		SINASSERT(nodesList != 0x00);
		std::for_each(nodesList->begin(), nodesList->end(), CleanListFunctor<ASTNode>()); 
		nodesList->clear();
	}


	//-----------------------------------------------------------------

	void ASTCloneVisitor::DeleteList(void) {
		SINASSERT(nodesList != 0x00);
		SINDELETE(nodesList);
		nodesList = 0x00;
	}


	//-----------------------------------------------------------------
	
	void ASTCloneVisitor::DeleteListAndAST(void) {
		DeleteAST();
		DeleteList();
	}


	//-----------------------------------------------------------------

	ASTCloneVisitor::NodesList * ASTCloneVisitor::TakeNodesList(void)
		{	return nodesList;	}



	//-----------------------------------------------------------------

	void ASTCloneVisitor::Visit(SinCodeASTNode& _node)	{ 
		SinCodeASTNode * newNode = SINEWCLASS(SinCodeASTNode, (_node));
		ASTNode * localParent	 = parent;
		nodesList->push_back(newNode);		

		if (!root)
			root = newNode;
		
		VISIT_NODE_WITH_MANY_CHILDREN();
		parent	= newNode;
		
		if( localParent != 0x00 && *localParent != *newNode )
			*localParent << newNode;
	}
	
	
	//-----------------------------------------------------------------

	void ASTCloneVisitor::Visit(ReturnASTNode& _node)	{
		size_t numberOfChildren = _node.NumberOfChildren();
		SINASSERT(numberOfChildren == 0 || numberOfChildren == 1);
		SINASSERT(nodesList != 0x00);

		ReturnASTNode * newNode = SINEWCLASS(ReturnASTNode, (_node));		
		nodesList->push_back(newNode);

		CONNECT_NEW_NODE_TO_TREE();

		if (numberOfChildren == 1) {
			parent = newNode;															
			static_cast<ASTNode&>(*(_node.begin())).Accept(this);
		}
	}


	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(Number				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(String				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(Nil					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(True					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(False					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(ID					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(Break					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(Continue				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(Semicolon				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(EmptyObject			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(LocalID				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ZERO_CHILD(GlobalID				)
	

	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(PreIncr				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(PostIncr				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(PreDecr				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(PostDecr				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(UnaryMin				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(MetaParse				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(MetaPreserve			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(MetaEvaluate			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(MetaUnparse			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(MetaParseString		)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(ObjectKeys				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(ObjectSize				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(UnaryNot				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_ONE_CHILD(UnindexedMember		)


	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(If					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Add					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Sub					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Mul					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Div					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Mod					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Lt					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Gt					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Le					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Ge					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Eq					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Ne					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Or					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(And					)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Assign				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(While				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(FuncdefCall			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(ExpressionCall		)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(Function			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(LamdaFunction		)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(ObjectIndex			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(CallMember			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(CallIndex			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(NormalCall			)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_TWO_CHILDREN(MethodCall			)


	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(ObjectMember		)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(IndexedMember		)	
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(Not				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(ActualArguments	)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(ExpressionList		)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(FormalArguments	)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(Object				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(For				)	
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(ForPreamble		)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(ForAddendum		)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(Block				)
	SIN_VISIT_DEFINITION_FOR_NODE_WITH_MENY_CHILDREN(IfElse				)

} // namespace SIN


#endif