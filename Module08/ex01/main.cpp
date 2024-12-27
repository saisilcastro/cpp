#include "Span.h"

void example(void);
void ten_thousand(void);

int	main(void) {
	srand(time(NULL));
	example();
	ten_thousand();
	return 0;	
}

void example(void) {
	try {
		Span value(5);
		value.addNumber(6);
		value.addNumber(3);
		value.addNumber(17);
		value.addNumber(9);
		value.addNumber(11);
		std::cout << "subject example \n\n";
		std::cout << "Shortest Span " << value.shortestSpan() << std::endl;
		std::cout << "Longest Span " << value.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << "threw exception " << e.what() << std::endl;
	}
}

void ten_thousand(void) {
	try {
		int n = 10000;
		Span value(n);
		for (size_t i = 0; i < n; i++) {
			int number = n + rand() % n * 2;
			if (value.exists(number) && i--)
				continue;
			value.addNumber(number);
		}
		std::cout << "\n10000 example \n\n";
		std::cout << "Shortest Span " << value.shortestSpan() << std::endl;
		std::cout << "Longest Span " << value.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << "threw exception " << e.what() << std::endl;
	}
}