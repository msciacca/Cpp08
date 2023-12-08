/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msciacca <msciacca@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:52:13 by msciacca          #+#    #+#             */
/*   Updated: 2023/12/08 20:52:15 by msciacca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main(void) {

	std::cout << "======(MUTANT STACK)======" << std::endl;

	std::cout << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "======(LIST)======" << std::endl;
	std::cout << std::endl;

	std::list<int> list1;
	list1.push_back(5);
	list1.push_back(17);
	std::cout << list1.back() << std::endl;
	list1.pop_back();
	std::cout << list1.size() << std::endl;
	list1.push_back(3);
	list1.push_back(5);
	list1.push_back(737);
	list1.push_back(0);
	std::list<int>::iterator it1 = list1.begin();
	std::list<int>::iterator ite1 = list1.end();
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	return 0;
}
