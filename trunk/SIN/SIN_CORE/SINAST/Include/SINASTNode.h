#ifndef __SIN_AST_NODE_H__
#define __SIN_AST_NODE_H__

#include "SINString.h"
#include "SINNamer.h"

namespace SIN {


	///***************	ASTNode	***************

	class ASTNode {
	public :
		typedef unsigned long int ID_t;

		//Constructor and destructor 
		ASTNode(void);
        ASTNode(String const &name, String const & fileName = "", const unsigned int line = 0u);
		ASTNode(ASTNode const&);
		virtual ~ASTNode(void);

		virtual ID_t const&			ID(void) const;
		virtual ASTNode *			Clone(void) const;
		virtual String const &		Name(void) const;
		virtual String const&		AssociatedFileName(void) const { return associatedFileName; }
		virtual unsigned int const	AssociatedFileLine(void) const { return associatedFileLine; }


		//virtual void Accept(ASTVisitor *) = 0;
		//virtual void Accept(ASTTreeVisualisationVisitor *);
		


		virtual bool operator== (const ASTNode & node) const;
		virtual bool operator!= (const ASTNode & node) const;

		// introduced for loose runtime checking.
		// 0 is the default value, signifying that inheriting classes do not override this method
		//virtual unsigned long Type(void) const = 0;
    private:
        String const		name;
		String const		associatedFileName;
		const unsigned int	associatedFileLine;
		ID_t id;
	
	}; // class ASTNode
	extern String const to_string(SIN::ASTNode const &_val);
	


	///***************	ASTNodeFactory	***************
	
	class ASTNodeFactory {
		Namer namer;
		ASTNode::ID_t next_id;

		ASTNodeFactory(void);
		ASTNodeFactory(ASTNodeFactory const&);
		~ASTNodeFactory(void);

		static ASTNodeFactory* singleton;
		static bool singleton_created;
	public:
		static void SingletonCreate(void);
		static bool SingletonCreated(void);
		static void SingletonDestroy(void);
		static ASTNodeFactory& SingletonInstance(void);

		// convenience methods
		static String const NextName(void);
		static ASTNode::ID_t const NextID(void);

		// normal methods
		String const iNextName(void);
		ASTNode::ID_t const iNextID(void);
	}; // class ASTNodeFactory


}	//namespace SIN



#endif	//__SIN_AST_NODE_H__