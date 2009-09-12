#ifndef __SIN_AST_NODES_H__
#define __SIN_AST_NODES_H__

#include "SINTypes.h"
#include "SINASTNode.h"

namespace SIN{

	// Types (for whoever needs to add some)
#define SINASTNODES_ID_TYPE						0x01ul
#define SINASTNODES_LOCALID_TYPE				0x02ul
#define SINASTNODES_GLOBALID_TYPE				0x03ul
#define SINASTNODES_FUNCTION_TYPE				0x04ul
#define SINASTNODES_FORMALARGUMENTS_TYPE		0x05ul
#define SINASTNODES_BLOCK_TYPE					0x06ul
#define SINASTNODES_OBJECTMEMBER_TYPE			0x07ul
#define SINASTNODES_FOR_TYPE					0x08ul
#define SINASTNODES_WHILE_TYPE					0x09ul
#define SINASTNODES_IF_TYPE						0x0Aul
#define SINASTNODES_IFELSE_TYPE					0x0Bul
#define SINASTNODES_SEMICOLON_TYPE				0x0Cul
#define SINASTNODES_OBJECTINDEXEDMEMBER_TYPE	0x0Dul
#define SINASTNODES_SHIFTTOMETA_TYPE			0x0Eul
#define SINASTNODES_METAEVALUATE_TYPE			0x0Ful
#define SINASTNODES_EXPRESSION_CALL_TYPE		0x10ul



	#define SINASTNODE_NODE_DECL(NAME)					\
	class NAME##ASTNode : public ASTNode {				\
    public:												\
        NAME##ASTNode(void);							\
        NAME##ASTNode(	String const & _name,			\
						String const & fileName = "",	\
						const int line = 0);			\
        ~NAME##ASTNode(void);							\
        virtual void Accept(ASTVisitor *);				\
		virtual unsigned long  int Type(void) const;	\
		virtual NAME##ASTNode *Clone(void) const;		\
    }

	SINASTNODE_NODE_DECL(SinCode		);
	SINASTNODE_NODE_DECL(Block			);
	SINASTNODE_NODE_DECL(Assign			);
	SINASTNODE_NODE_DECL(NormalCall		);
	SINASTNODE_NODE_DECL(MethodCall		);
	SINASTNODE_NODE_DECL(FuncdefCall	);
	SINASTNODE_NODE_DECL(ExpressionCall	);
	SINASTNODE_NODE_DECL(ActualArguments);
	SINASTNODE_NODE_DECL(ExpressionList	);
	SINASTNODE_NODE_DECL(Function		);
	SINASTNODE_NODE_DECL(LamdaFunction	);
	SINASTNODE_NODE_DECL(FormalArguments);
	SINASTNODE_NODE_DECL(ID				);
	SINASTNODE_NODE_DECL(LocalID		);
	SINASTNODE_NODE_DECL(GlobalID		);
	SINASTNODE_NODE_DECL(If				);
	SINASTNODE_NODE_DECL(IfElse			);
	SINASTNODE_NODE_DECL(For			);
	SINASTNODE_NODE_DECL(ForPreamble	);
	SINASTNODE_NODE_DECL(ForAddendum	);
	SINASTNODE_NODE_DECL(While			);
	SINASTNODE_NODE_DECL(PreIncr		);
	SINASTNODE_NODE_DECL(PostIncr		);
	SINASTNODE_NODE_DECL(PreDecr		);
	SINASTNODE_NODE_DECL(PostDecr		);
	SINASTNODE_NODE_DECL(UnaryNot		);
	SINASTNODE_NODE_DECL(UnaryMin		);
	SINASTNODE_NODE_DECL(Continue		);
	SINASTNODE_NODE_DECL(Break			);
	SINASTNODE_NODE_DECL(Object			);
	SINASTNODE_NODE_DECL(EmptyObject	);
	SINASTNODE_NODE_DECL(UnindexedMember);
	SINASTNODE_NODE_DECL(IndexedMember	);
	SINASTNODE_NODE_DECL(ObjectMember	);
	SINASTNODE_NODE_DECL(ObjectIndex	);
	SINASTNODE_NODE_DECL(CallMember		);
	SINASTNODE_NODE_DECL(CallIndex		);
	SINASTNODE_NODE_DECL(ObjectKeys		);
	SINASTNODE_NODE_DECL(ObjectSize		);
	SINASTNODE_NODE_DECL(Return			);
	SINASTNODE_NODE_DECL(Semicolon		);
	SINASTNODE_NODE_DECL(MetaParse		);
	SINASTNODE_NODE_DECL(MetaPreserve	);
	SINASTNODE_NODE_DECL(MetaEvaluate	);
	SINASTNODE_NODE_DECL(MetaUnparse	);
	SINASTNODE_NODE_DECL(MetaParseString);


	// Constants, Operators, Terminals
	///***************	NumberASTNode	***************

    class NumberASTNode : public ConstASTNode<CONST_NUMBER, Types::Number_t> {
    public:
        NumberASTNode(Types::Number_t const &_value = 0, String const & fileName = "", const int line = 0);
        virtual void Accept(ASTVisitor *);
		virtual NumberASTNode *Clone(void) const;
		virtual unsigned long int Type(void) const;
    }; // class NumberASTNode



	///***************	StringASTNode	***************

	class StringASTNode : public ConstASTNode<CONST_STRING, Types::String_t> {
    public:
        StringASTNode(Types::String_t const &_value = "", String const & fileName = "", const int line = 0);
        virtual void Accept(ASTVisitor *);
		virtual StringASTNode *Clone(void) const;
		virtual unsigned long int Type(void) const;
    }; // class StringASTNode



	///***************	NilASTNode	***************

	class NilASTNode : public ConstASTNode<CONST_NIL, Types::Nil_t> {
    public:
        NilASTNode(String const & fileName = "", const int line = 0);
        virtual void Accept(ASTVisitor *);
		virtual NilASTNode *Clone(void) const;
		virtual unsigned long int Type(void) const;
    }; // class NilASTNode



	///***************	TrueASTNode	***************

    class TrueASTNode : public ConstASTNode<CONST_TRUE, Types::Boolean_t> {
    public:
        TrueASTNode(String const & fileName = "", const int line = 0);
        virtual void Accept(ASTVisitor *);
		virtual TrueASTNode *Clone(void) const;
		virtual unsigned long int Type(void) const;
    }; // class TrueASTNode



	///***************	FalseASTNode	***************

    class FalseASTNode : public ConstASTNode<CONST_FALSE, Types::Boolean_t> {
    public:
        FalseASTNode(String const & fileName = "", const int line = 0);
        virtual void Accept(ASTVisitor *);
		virtual FalseASTNode *Clone(void) const;
		virtual unsigned long int Type(void) const;
    }; // class FalseASTNode



	//-----------------------------------------------------------------------

	#define SINASTNODE_OPNODE_DECL(NAME, OPNAME)							\
    class NAME##ASTNode : public OpASTNode<OP_##OPNAME> {					\
    public:																	\
		NAME##ASTNode(String const & fileName = "", const int line = 0);	\
        ~NAME##ASTNode(void);												\
        void Accept(ASTVisitor *);											\
		NAME##ASTNode *Clone(void) const;									\
		virtual unsigned long int Type(void) const;							\
    }


	///***************	OpASTNode	***************

	template <enum SIN::OpValueType>
    class OpASTNode : public ASTNode {
    public:
        OpASTNode(String const &_name, String const & fileName = "", const int line = 0) : 
			ASTNode(_name, fileName, line) { }
        
		virtual ~OpASTNode(void) { }
        virtual void Accept(ASTVisitor *) = 0;
		virtual OpASTNode *Clone(void) const = 0;
		virtual unsigned long int Type(void) const = 0;
    };


	SINASTNODE_OPNODE_DECL(Add, ADD);
    SINASTNODE_OPNODE_DECL(Sub, SUB);
    SINASTNODE_OPNODE_DECL(Mul, MUL);
    SINASTNODE_OPNODE_DECL(Div, DIV);
    SINASTNODE_OPNODE_DECL(Mod, MOD);
    SINASTNODE_OPNODE_DECL(Lt , LT );
    SINASTNODE_OPNODE_DECL(Gt , GT );
    SINASTNODE_OPNODE_DECL(Le , LE );
    SINASTNODE_OPNODE_DECL(Ge , GE );
    SINASTNODE_OPNODE_DECL(Eq , EQ );
    SINASTNODE_OPNODE_DECL(Ne , NE );
    SINASTNODE_OPNODE_DECL(Or , OR );
    SINASTNODE_OPNODE_DECL(And, AND);
    SINASTNODE_OPNODE_DECL(Not, NOT);

} // namespace SIN


#endif //__SIN_AST_NODES_H__