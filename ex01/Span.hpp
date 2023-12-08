/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msciacca <msciacca@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:47:19 by msciacca          #+#    #+#             */
/*   Updated: 2023/12/08 20:50:52 by msciacca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <climits>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _vec;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& original);
		Span&    operator=(const Span& original);
		~Span();

		void addNumber(int num);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void fill(void);

		std::size_t getSize() const;
		void printVec();

		class VectorFullException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class SizeTooSmallException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

int gen(void);

#endif /* !SPAN_HPP */