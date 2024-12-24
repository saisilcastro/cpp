#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <iostream>
#include <stdint.h>

//typedef struct Data Data;
struct Data{
	std::string	name;
	int			age;
};

class Serializer {
    	Serializer(void);
	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif