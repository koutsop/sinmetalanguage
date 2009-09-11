#include "SINString.h"

#include <cstring>
#include <sstream>

#define SINSTRING_STRING_CAST_DEF(ARGCLASS)				\
    String const to_string(ARGCLASS const &_val){		\
        return string_cast(_val);						\
    }

namespace SIN {

    //// Privates of shame
    template <typename T> static String string_cast(T const &o) {
        std::ostringstream imp;
        imp << o;
        return imp.str();
    }
    //// -----------------

    String::String(void) {
    }

    String::String(std::string const &_core): core(_core) {
    }

    String::String(String const &_other): core(_other.core) {
    }

    String::String(char const *_str): core(_str) {
    }

    String const String::operator +(String const &_other) const {
        return String(core + _other.core);
    }

	String const String::operator *(unsigned int _times) const { 
		std::string result_core;
		result_core.reserve(core.size() * _times);
		while (_times > 0)
			result_core += core;
		return result_core;
	}

    String const String::operator =(String const &_other) {
        return *new (this) String(_other);
    }

    bool String::operator ==(String const &_other) const {
        return core == _other.core;
    }

    bool String::operator <(String const &_other) const {
        return core < _other.core;
    }

	//-----------------------------------------------------------------

	const char& String::operator[] ( size_t pos ) const
		{	return core[pos];	}

	//-----------------------------------------------------------------

	char& String::operator[] ( size_t pos )
		{	return core[pos];	}

	//-----------------------------------------------------------------

	bool String::operator!=	(String const &_other) const
		{	return core != _other.core;	}

	//-----------------------------------------------------------------

	bool String::operator> 	(String const &_other) const
		{	return core > _other.core;	}

	//-----------------------------------------------------------------

	bool String::operator>=	(String const &_other) const
		{	return core >= _other.core;	}

	//-----------------------------------------------------------------

	bool String::operator<=	(String const &_other) const
		{	return core <= _other.core;	}

	//-----------------------------------------------------------------

	void String::Clear(void) 
		{ core.clear(); }

	//-----------------------------------------------------------------

	size_t String::Length(void) const {
		return core.length();
	}

	String& String::Erase(size_t pos, size_t n) {
		core.erase(pos, n);
		return *this;
	}

	String& String::DropLast(size_t n) {
		return Erase(Length() - n, n);
	}

    char const *String::c_str(void) const {
        return core.c_str();
    }


    String const to_string(String const &_val) {
        return _val;
    }
    SINSTRING_STRING_CAST_DEF(char const *       )
    SINSTRING_STRING_CAST_DEF(char               )
    SINSTRING_STRING_CAST_DEF(unsigned char      )
    SINSTRING_STRING_CAST_DEF(short int          )
    SINSTRING_STRING_CAST_DEF(unsigned short int )
    SINSTRING_STRING_CAST_DEF(int                )
    SINSTRING_STRING_CAST_DEF(unsigned int       )
    SINSTRING_STRING_CAST_DEF(long int           )
    SINSTRING_STRING_CAST_DEF(unsigned long int  )
    SINSTRING_STRING_CAST_DEF(float              )
    SINSTRING_STRING_CAST_DEF(double             )
	SINSTRING_STRING_CAST_DEF(void *             )

    // --- OutputStream << String
    OutputStream &operator <<(OutputStream &o, String const &s) {
        return o << s.c_str();
    }

} // namespace SIN
