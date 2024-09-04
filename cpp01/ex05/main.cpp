/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:33:47 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/11 18:11:11 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	input;

	while (1)
	{
		std::cout << "Type a level below " << std::endl
				  << "(DEBUG, INFO, WARNING, ERROR):";
		std::cin >> input;
		harl.complain(input);
		if (!input.compare("EXIT"))
			break ;
	}
	return (0);
}
