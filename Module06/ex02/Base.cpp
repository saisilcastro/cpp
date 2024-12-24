#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base *generate(void) {
    switch(rand() % 3) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
    return NULL;
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cerr << "not identified!" << std::endl;
}

void identify(Base &p) {
    try {
        A & a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return ;
    }catch (std::exception &e){}
    try {
        B & a = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return ;
    }catch (std::exception &e){}
    try {
        C & a = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return ;
    }catch (std::exception &e){}
    std::cerr << "not identified!" << std::endl;
}

Base::~Base(){}