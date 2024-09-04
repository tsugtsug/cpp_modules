/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:29:06 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/14 14:42:27 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	const char charArray[] = { 'a', 'b', 'c', 'd', 'e', 'f'};
	size_t charLength = sizeof(charArray) / sizeof(*charArray);

	const int intArray[] = {1, 2, 3, 4, 5};
	size_t intLength = sizeof(intArray) / sizeof(*intArray);

	const double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	size_t doubleLength = sizeof(doubleArray) / sizeof(*doubleArray);

	const std::string stringArray[] = {"hello", "world", "template", "function"};
	size_t stringLength = sizeof(stringArray) / sizeof(*stringArray);

	std::cout << "Char array elements:" << std::endl;
	iter(charArray, charLength, printElement);
	
	std::cout << "Integer array elements:" << std::endl;
	iter(intArray, intLength, printElement);

	std::cout << "Double array elements:" << std::endl;
	iter(doubleArray, doubleLength, printElement);

	std::cout << "String array elements:" << std::endl;
	iter(stringArray, stringLength, printElement);

	return (0);
}
