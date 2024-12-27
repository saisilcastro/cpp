#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>
#include <stdexcept>

template <typename T>
class Array {
	public:
		Array() : data(new T[0]()), n(0) {}
		Array(unsigned int _n) : data(new T[_n]()), n(_n) {}
		unsigned int size() const { return n;}
		Array(const Array &set) : data(new T[set.n]), n(set.n) {
			for (size_t i = 0; i < n; i++)
				data[i] = set.data[i];
		}
		T &operator[](unsigned const int i) {
			if (i >= n)
				throw std::out_of_range("Index out of bounds!");
			return data[i];
		}
		T const &operator[](const unsigned int i) const {
			if (i >= n)
				throw std::out_of_range("Index out of bounds!");
			return data[i];
		}
		Array& operator = (const Array& clone) {
			if (this != &clone) {
				delete[] data;
				n = clone.n;
				data = new T[n];
				for (size_t i = 0; i < n; i++)
					data[i] = clone.data[i];
			}
			return *this;
		}
		~Array() { delete[] data; }
	private:
		T				*data;
		unsigned int	n;
};

#endif