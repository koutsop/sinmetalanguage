#include "SINTypes.h"

#include "SINString.h"

namespace SIN {

	//------------------------------------------------------
	
	String const to_string(Types::Nil_t const _nil) 
		{	return "NIL";	}


	//------------------------------------------------------

	String const to_string(Types::Boolean_t const boolean) 
		{ return boolean? "true" : "false";}

}	//namespace SIN