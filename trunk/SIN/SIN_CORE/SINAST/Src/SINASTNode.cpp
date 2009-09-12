#include "SINASTNode.h"

#include <list>
#include "SINAssert.h"

namespace SIN {

    ///--------- SIN AST ---------
	
	//---------------------------------------------------
	
	ASTNode::ASTNode(void):
		name(ASTNodeFactory::NextName()),
		associatedFileName(""),
		associatedFileLine(0),
		id(ASTNodeFactory::NextID())
	{}


	//---------------------------------------------------

    ASTNode::ASTNode(String const &_name, String const & fileName, const unsigned int line):
		name(_name),
		associatedFileName(fileName),
		associatedFileLine(line),
		id(ASTNodeFactory::NextID())
	{}


	//---------------------------------------------------

	ASTNode::ASTNode(ASTNode const&_other):
		name(_other.name),
		associatedFileName(_other.associatedFileName),
		associatedFileLine(_other.associatedFileLine),
		id(ASTNodeFactory::NextID())
	{}

	//---------------------------------------------------


    ASTNode::~ASTNode(void) {}


	//---------------------------------------------------

    String const &ASTNode::Name(void) const 
		{	return name;	}


	//---------------------------------------------------

	ASTNode::ID_t const& ASTNode::ID(void) const 
		{	return id;	}
	

	//---------------------------------------------------

	void ASTNode::Accept(ASTTreeVisualisationVisitor *_v) {
		/*SINASSERT(_v);
		_v->Visit(*this);
		_v->IncreaseIndentationLevel();
		iterator const end_ = end();
		for (iterator ite = begin(); ite != end_; ++ite)
			static_cast<ASTNode&>(*ite).Accept(_v);
		_v->DecreaseIndentationLevel();*/
	}
	

	//---------------------------------------------------

	ASTNode *ASTNode::Clone(void) const { SINASSERT(!"Not cloning generally"); return 0x00;}
	

	//---------------------------------------------------

	String const to_string(ASTNode const &_node) 
		{	return to_string(_node.Name());	}

	//---------------------------------------------------

	void DeleteAST(ASTNode* _root_p, std::list<ASTNode *> & toDelete){
		/*SINASSERT(_root_p != 0x00);
		ASTNode::iterator ite(_root_p->begin());
		ASTNode::iterator const end(_root_p->end());
		for (; ite != end; ++ite) {
			ASTNode * kid = static_cast<ASTNode*>(&*ite);
			if (kid != 0x00)
				DeleteAST(kid, toDelete);
		}
		toDelete.push_back(_root_p);*/
		SINASSERT(0x00);
	}

	void DeleteAST(ASTNode* _root_p) {
/*		std::list<ASTNode *> koutsop_s_List; //this list is the opposite of the schindler's list
		DeleteAST(_root_p, koutsop_s_List);

		std::list<ASTNode *>::iterator i = koutsop_s_List.begin();
		for(; i != koutsop_s_List.end(); ++i){
			if (*i != 0x00) {
				SINDELETE(*i);
				*i = 0x00;
			}
		}*/
		SINASSERT(0x00);
	}

	//---------------------------------------------------

	ASTNode* CopyAST(ASTNode* const _root_p) {
/*		ASTCloneVisitor cloner;
		_root_p->Accept(&cloner);
		SINDELETE(cloner.TakeNodesList());
		return cloner.Root();*/
		SINASSERT(0x00);
		return 0x00;
	}

	//---------------------------------------------------

	String const UnparseAST(ASTNode& _root, bool _nnn) {
		/*ASTUnparseTreeVisitor unparser;
		if (_nnn)
			unparser.DisableNewLine();
		
		_root.Accept(&unparser);
		return unparser.UnparsedString();*/
		return "";
	}

	//---------------------------------------------------

	bool ASTNode::operator ==(const ASTNode & _other) const {
		return id == _other.id;
	}

	//---------------------------------------------------

	bool ASTNode::operator !=(const ASTNode & _other) const {
		return id != _other.id;
	}




	///--------- AST Node Factory ----------
	ASTNodeFactory::ASTNodeFactory(void): namer("ASTNode-"), next_id(0x00ul) {}

	//---------------------------------------------------

	ASTNodeFactory::ASTNodeFactory(ASTNodeFactory const& _other): namer(""), next_id(0xbee1cebul) {
		SINASSERT(!"Copy constructor called for singleton class SIN::ASTNodeFactory");
		throw String("Copy constructor called for singleton class SIN::ASTNodeFactory");
	}
	
	
	//---------------------------------------------------
	ASTNodeFactory::~ASTNodeFactory(void) {}
	
	
	//---------------------------------------------------
	// singleton related
	ASTNodeFactory* ASTNodeFactory::singleton = 0x00;
	
	
	//---------------------------------------------------
	
	bool ASTNodeFactory::singleton_created = false;
	
	
	//---------------------------------------------------
	
	void ASTNodeFactory::SingletonCreate(void) {
		SINASSERT(!singleton_created);
		if ((singleton = new ASTNodeFactory) != 0x00)		
		//if ((singleton = SINEW(ASTNodeFactory)) != 0x00)
			singleton_created = true;
	}
	
	
	//---------------------------------------------------
	
	bool ASTNodeFactory::SingletonCreated(void) 
		{	return singleton_created;	}
	
	
	//---------------------------------------------------

	void ASTNodeFactory::SingletonDestroy(void) {
		SINASSERT(singleton_created);
		delete singleton;
		//SINDELETE(singleton);
		singleton_created = false;
	}
	
	
	//---------------------------------------------------

	ASTNodeFactory& ASTNodeFactory::SingletonInstance(void) {
		SINASSERT(singleton_created);
		return *(singleton_created ? singleton : 0x00);
	}
	
	
	//---------------------------------------------------
	// convenience methods
	String const ASTNodeFactory::NextName(void) 
		{	return SingletonInstance().iNextName();	}
	
	
	//---------------------------------------------------
	
	ASTNode::ID_t const ASTNodeFactory::NextID(void) 
		{	return SingletonInstance().iNextID();	}
	
	
	//---------------------------------------------------
	// instance factory methods
	String const ASTNodeFactory::iNextName(void) 
		{	return namer++;	}


	//---------------------------------------------------

	ASTNode::ID_t const ASTNodeFactory::iNextID(void) 
		{	return next_id++;	}

} // namespace SIN
