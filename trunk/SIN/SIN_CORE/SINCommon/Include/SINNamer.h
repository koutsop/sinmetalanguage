#ifndef __SIN_NAMER_H__
#define __SIN_NAMER_H__

#include "Common.h"
#include <cstdlib>
#include <new>

#define SINNAMER_BASELEN 128

namespace SIN {

    class Namer {
    public:
        explicit Namer(char const _base[SINNAMER_BASELEN]);
        Namer(Namer const &);
        ~Namer(void);
		void operator =(Namer const& _other) { new(this) Namer(_other); }

        char const *operator++(void);
        char const *operator++(int);
        char const *Next(void) { return (*this)++; }


	private:
		char base[SINNAMER_BASELEN + ULONG_MAX_STR_LEN + 1];
        unsigned long int counter;
        size_t const base_offset;
        size_t const number_maximun_length;
	
	}; // class Namer

} // namespace SIN

#endif //__SIN_NAMER_H__
