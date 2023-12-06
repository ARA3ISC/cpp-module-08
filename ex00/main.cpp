/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:48:46 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/30 19:48:46 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{ // ? vector version
		std::vector<int> v;
		for (int i = 4; i < 6; i++)
			v.push_back(i);
		easyfind(v, 5);

		// ? list version
		// std::list<int> l;
		// for (int i = 0; i < 47; i++)
		// 	l.push_back(i);
		// easyfind(l, 99);

		// ? deque version
		// std::deque<int> q;
		// q.push_back(34);
		// q.push_back(1);
		// q.push_back(45);
		// q.push_back(98);
		// easyfind(q, 98);
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
