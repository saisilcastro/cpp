#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <algorithm>
#include <limits>

class Span {
	public:
		Span();
		Span(unsigned int _n);
		void addNumber(int value);
		int shortestSpan(void) const;
		int longestSpan(void) const;
		int	queueGet(int i);
		bool exists(int number) const;
		Span & operator = (const Span & clone);
		~Span(void);
	private:
		unsigned int n;
		std::vector<int> queue;
};

#endif