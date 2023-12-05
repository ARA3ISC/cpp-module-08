#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <stack>
# include <list>
# include <iterator>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack <T>
{
	public:
		MutantStack() {};
		MutantStack(MutantStack& rhs) {(void)rhs;}
		MutantStack& operator=(const MutantStack& rhs){(void)rhs;}
		~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}
};

#endif
