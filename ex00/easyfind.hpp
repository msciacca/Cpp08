/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msciacca <msciacca@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:46:53 by msciacca          #+#    #+#             */
/*   Updated: 2023/12/08 20:51:21 by msciacca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

class NoOccurrenceFoundException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Exception: No occurrence found.");
		}
};

template <typename T>
void easyfind(const T& container, int n) {
	if (std::find(container.begin(), container.end(), n) != container.end())
		std::cout << n << " is in this container." << std::endl;
	else
		throw NoOccurrenceFoundException();
}

#endif /* !EASYFIND_HPP */