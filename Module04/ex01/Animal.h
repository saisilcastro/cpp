#ifndef ANIMAL_H
#define ANIMAL_H

#include "Brain.h"
#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(std::string);
		Animal(const Animal &);
		std::string getType(void) const;
		virtual void makeSound(void) const;
		virtual Brain* getBrain(void) const = 0;
		Animal & operator = (Animal const &);
		virtual ~Animal(void);
	protected:
		std::string type;
};

#endif