/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:03:02 by maneddam          #+#    #+#             */
/*   Updated: 2023/12/07 14:09:30 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _max(0) {}

Span::Span(unsigned int N): _max(N) {}

Span::Span(const Span& rhs)
{
	this->_max = rhs._max;
	this->_cont = rhs._cont;
}

Span& Span::operator=(const Span& rhs)
{
	if (this == &rhs)
		return *this;
	this->_max = rhs._max;
	this->_cont = rhs._cont;

	return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (this->_cont.size() < this->_max)
	{
		this->_cont.push_back(n);
		std::cout << "Added successfuly" << std::endl;
	}
	else
		throw std::out_of_range("Span is full");
}

void Span::fillSpanAtOnce(int *seq, unsigned int size)
{
	if (size > this->_max)
		throw std::out_of_range("Span connot hold this size");
	else
		this->_cont.insert(this->_cont.begin(), seq, seq + size);
}

int Span::shortestSpan()
{
	if (this->_cont.empty())
		throw std::runtime_error("Empty span");
	else if (this->_cont.size() == 1)
		throw std::runtime_error("There si just one item in the span");
	else
	{
		int shortest = abs(this->_cont[1] - this->_cont[0]);
		unsigned long int i = 0;
		while (i < _cont.size())
		{
			unsigned long int j = i + 1;
			while (j < _cont.size())
			{
				if (abs(_cont[j] - _cont[i]) < shortest)
					shortest = abs(_cont[j] - _cont[i]);
				j++;
			}
			i++;
		}
		return shortest;
	}
	return 0;
}

int Span::longestSpan()
{
	if (this->_cont.empty())
		throw std::runtime_error("Empty span");
	else if (this->_cont.size() == 1)
		throw std::runtime_error("There si just one item in the span");
	else
	{
		std::sort(this->_cont.begin(), this->_cont.end());
		return *(this->_cont.end() - 1) - *(this->_cont.begin());
	}
	return 0;
}

void Span::printSpanElements()
{
	long unsigned i = 0;
	while (i < this->_cont.size())
	{
		std::cout << this->_cont[i] << " ";
		i++;
	}
	std::cout << std::endl;
}
