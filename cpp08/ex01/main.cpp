/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:35:52 by yokamura          #+#    #+#             */
/*   Updated: 2024/03/28 00:46:06 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	try
	{
		Span sp = Span(10000);

		sp.addNumber(6);
		sp.addNumber(-1);
		sp.addNumber(9);
		sp.addNumber(17);
		sp.addNumber(-2147283648);
		sp.addNumber(2147483647);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(11);
		std::cout << "completed" << std::endl;
		std::cout << sp << std::endl;
		std::vector<int>	added;
		for (int i = 0;i < 10000; i++)
		{
			added.push_back(i);
		}
		sp.addNumber(added.begin(), added.end());
		std::cout << sp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
