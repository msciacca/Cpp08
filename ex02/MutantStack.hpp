/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msciacca <msciacca@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:51:37 by msciacca          #+#    #+#             */
/*   Updated: 2023/12/08 20:52:03 by msciacca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
	private:

	public:
		MutantStack();
		MutantStack(const MutantStack& original);
		MutantStack& operator=(const MutantStack& original);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void);
		iterator end(void);
};

#include "MutantStack.tpp"
#endif /* !MUTANTSTACK_HPP */