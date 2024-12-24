#include "Base.h"

int main(void) {
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        Base *base = generate();
        std::cout << "pointer value: ";
        identify(base);
        std::cout << "reference value: ";
        identify(*base);
        delete base;
    }
    return 0;
}