#include "Iter.h"
#include <iostream>

template <typename T>
void show(T value) {
	std::cout << value << std::endl;
}

void reverse(const std::string& value) {
    for (size_t i = value.size(); i > 0; i--)
        std::cout << value[i - 1];
    std::cout << std::endl;
}

int main(void) {
	int number[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	std::string array[] = {"fucker", "sucker", "dicker"};
	::iter(number, sizeof(number) / sizeof(number[0]), show<int>);
	::iter(array, sizeof(array) / sizeof(array[0]), show<std::string>);
	::iter(array, sizeof(array) / sizeof(array[0]), reverse);
}