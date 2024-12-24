#ifndef ITER_H
#define ITER_H

#include <cstddef>

template <typename T, typename F>
void iter(T *array, size_t length, F call) {
	for (size_t i = 0; i < length; i++)
		call(*(array + i));
}

#endif