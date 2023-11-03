#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <list>
# include <deque>
# include <algorithm>

template <typename T>
void easyfind(T container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);

	if (it != container.end())
		std::cout << "Number found at index " << std::distance(container.begin(), it) << std::endl;
	else
		throw std::runtime_error("Number not found");
}
#endif
