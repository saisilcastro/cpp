#ifndef EASY_FIND_H
#define EASY_FIND_H

#include <algorithm>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <vector>
#include <list>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("There's no such value!");
    }
    return it;
}

template <typename T>
typename T::const_iterator easyfind(const T& container, int value) {
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("There's no such value!");
    }
    return it;
}

#endif