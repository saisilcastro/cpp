#include "Array.h"

int	main(void) {
	try {
		Array<int> empty;
		std::cout << "empty array of " << empty.size() << " size!" << std::endl;
		unsigned int size = 4;
		Array<int> array(size);
		std::cout << "Array of " << array.size() << " has been created!" << std::endl;
		for (size_t i = 0; i < array.size(); i++)
			std::cout << "Array data: " << array[i] << "!" << std::endl;
		Array<int> clone(array);
		std::cout << "Array copy of size " << clone.size() << " has been created!" << std::endl;
		for (size_t i = 0; i < clone.size(); i++)
			std::cout << "Array clone data: " << clone[i] << "!" << std::endl;
		Array<int> assignment = array;
		std::cout << "Array assignment of size " << clone.size() << " has been created!" << std::endl;
		for (size_t i = 0; i < assignment.size(); i++)
			std::cout << "Array clone data: " << assignment[i] << "!" << std::endl;
		for (size_t i = 0; i < array.size(); i++) {
			array[i] = i + i;
			clone[i] = i + i + 1;
			assignment[i] = i + i + 2;
		}
		std::cout << std::endl;
		for (size_t i = 0; i < array.size(); i++) {
			std::cout << "Original " << array[i] << std::endl;
			std::cout << "Clone " << clone[i] << std::endl;
			std::cout << "Assignment " << assignment[i] << std::endl;
			std::cout << std::endl;
		}
		// out of bounds
		std::cout << "boundary " << array[3] << std::endl;
		const Array<int> keep(2);
		std::cout << "const test " << keep[0] << std::endl;
	} catch(std::exception &e) {
		std::cerr << "program threw the exception " << e.what() << std::endl;
	}
	return 0;
}