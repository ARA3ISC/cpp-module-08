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
	{
		// ? vector version
		std::vector<int> v;
		for (int i = 4; i < 6; i++)
			v.push_back(i);

		std::vector<int>::iterator it = easyfind(v, 5);
		if (it != v.end())
			std::cout << "found at index " << std::distance(v.begin(), it) << std::endl;
		else
			std::cout << "number doesn't exist" << std::endl;



		// ? list version
		// std::list<int> l;
		// for (int i = 0; i < 47; i++)
		// 	l.push_back(i);
		// std::list<int>::iterator it = easyfind(l, 11);

		// if (it != l.end())
		// 	std::cout << "found at index " << std::distance(l.begin(), it) << std::endl;
		// else
		// 	std::cout << "number doesn't exist" << std::endl;


		// // ? deque version
		// std::deque<int> q;
		// q.push_back(34);
		// q.push_back(1);
		// q.push_back(45);
		// q.push_back(98);
		// std::deque<int>::iterator it = easyfind(q, 980);

		// if (it != q.end())
		// 	std::cout << "found at index " << std::distance(q.begin(), it) << std::endl;
		// else
		// 	std::cout << "number doesn't exist" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
