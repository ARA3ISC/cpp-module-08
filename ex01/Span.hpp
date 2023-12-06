#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <cstdlib>

class Span
{
	private:
		std::vector<int> _cont;
		unsigned int _max;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& rhs);
		Span& operator=(const Span& rhs);
		~Span();

		void addNumber(int n);
		void fillSpanAtOnce(int *seq, unsigned int size);
		int shortestSpan();
		int longestSpan();
		void printSpanElements();
};

#endif
