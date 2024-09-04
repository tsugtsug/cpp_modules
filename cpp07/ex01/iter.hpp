/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:27:49 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/14 14:38:06 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* array, size_t length, void (*func)(const T&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void printElement(const T& element)
{
	std::cout << element << std::endl;
}

#endif
