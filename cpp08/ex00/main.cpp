/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:49:29 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/20 15:34:49 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	try
	{
		std::vector<int> vec;
		int vecArray[] = {1, 2, 3, 4, 5};
		vec.insert(vec.end(), vecArray, vecArray + sizeof(vecArray) / sizeof(int));

		std::vector<int>::iterator vecIt = easyfind(vec, 3);
		std::cout << "Found value in vector at position: " << std::distance(vec.begin(), vecIt) << std::endl;

		std::list<int> lst;
		int lstArray[] = {5, 4, 3, 2, 1};
		lst.insert(lst.end(), lstArray, lstArray + sizeof(lstArray) / sizeof(int));

		std::list<int>::iterator lstIt = easyfind(lst, 4);
		std::cout << "Found value in list at position: " << std::distance(lst.begin(), lstIt) << std::endl;

		std::deque<int> deq;
		int deqArray[] = {1, 2, 3, 4, 5};
		deq.insert(deq.end(), deqArray, deqArray + sizeof(deqArray) / sizeof(int));

		std::deque<int>::iterator deqIt = easyfind(deq, 3);
		std::cout << "Found value in deque at position: " << std::distance(deq.begin(), deqIt) << std::endl;

		std::vector<int> vec2;
		int vec2Array[] = {1, 2, 3, 4, 5};
		vec2.insert(vec2.end(), vec2Array, vec2Array + sizeof(vec2Array) / sizeof(int));

		std::vector<int>::iterator vec2It = easyfind(vec, 10);
		std::cout << "Found value in vector at position: " << std::distance(vec.begin(), vec2It) << std::endl;
	
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found." << std::endl;
	}	
	return 0;
}
