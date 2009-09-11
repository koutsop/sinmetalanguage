#include "SINASTNodes.h"

#include <list>
#include "SINAssert.h"

namespace SIN{


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

	ASTNode *ASTNode::Clone(void) const { SINASSERT(!"Not cloning generally"); return 0x00;}
	

	//---------------------------------------------------

	String const to_string(ASTNode const &_node) 
		{	return to_string(_node.Name());	}


	//---------------------------------------------------

	void DeleteAST(ASTNode* _root_p, std::list<ASTNode *> & toDelete){
	}


	//---------------------------------------------------

	void DeleteAST(ASTNode* _root_p) {
	}

	//---------------------------------------------------

	bool ASTNode::operator ==(const ASTNode & _other) const 
		{	return id == _other.id;	}

	//---------------------------------------------------

	bool ASTNode::operator !=(const ASTNode & _other) const 
		{	return id != _other.id;	}



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
		singleton;
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
		{	return "";	}


	//---------------------------------------------------

	ASTNode::ID_t const ASTNodeFactory::iNextID(void) 
		{	return next_id++;	}


}	//namespace SIN