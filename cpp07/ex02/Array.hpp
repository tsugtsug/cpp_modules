/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:46:18 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/14 16:21:43 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class	Array
{
	private:
		T*				_elements;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		T& operator[](unsigned int index) const;
		unsigned int size() const;

		class outOfBoundsException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Index out of bounds");
				}
		};
};

#include "Array.tpp"

#endif
