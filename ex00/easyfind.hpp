#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <list>
# include <deque>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int toFind)
{
	return std::find(container.begin(), container.end(), toFind);
}
#endif
