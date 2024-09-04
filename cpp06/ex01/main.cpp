/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 00:15:49 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/10 00:31:12 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	myData(42);
	Data*	originalPtr = &myData;

	uintptr_t	serialized = Serializer::serialize(originalPtr);
	Data*		deserializedPtr = Serializer::deserialize(serialized);

	std::cout << "Original pointer: " << originalPtr << ", value: " << originalPtr->value << std::endl;
	std::cout << "Deserialized pointer: " << deserializedPtr << ", value: " << deserializedPtr->value << std::endl;

	if (originalPtr == deserializedPtr)
		std::cout << "Success: The deserialized pointer matches the original pointer." << std::endl;
	else
		std::cout << "Error: The deserialized pointer does not match the original pointer." << std::endl;
	return (0);
}
