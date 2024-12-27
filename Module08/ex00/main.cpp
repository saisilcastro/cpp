#include "easyfind.h"

int	main(void) {
	try {
		std::vector<int> iVect;
		for (int i = 0; i < 4; ++i)
	  		iVect.push_back(i + 2);
		std::cout << *easyfind(iVect, 4) << " has been found!" << std::endl;
		std::cout << *easyfind(iVect, 42) << " has been found!" << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}