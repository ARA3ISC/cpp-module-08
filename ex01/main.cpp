/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:07:24 by maneddam          #+#    #+#             */
/*   Updated: 2023/11/04 17:17:32 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		// Span sp = Span(6);

		// sp.addNumber(2);
		// sp.addNumber(32);
		// sp.addNumber(7);
		// sp.addNumber(7);
		// sp.addNumber(53);
		// sp.addNumber(13);
		// sp.addNumber(13); // span is full


		// ? filling the span at once test (10000 number)
		// Span sp = Span(10000);
		// int arr[] = any count of numbers
		// sp.fillSpanAtOnce(arr, 10000);


		// ? get shortest span
		Span sp = Span(15);
		sp.addNumber(-1);
		sp.addNumber(2);
		sp.addNumber(0);
		sp.addNumber(3);
		std::cout << "Shortest span :" << sp.shortestSpan() << std::endl;
		std::cout << "Longest span :" << sp.longestSpan() << std::endl;
		// sp.printSpanElements();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

