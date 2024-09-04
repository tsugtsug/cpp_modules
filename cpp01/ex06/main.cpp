/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:33:47 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/11 18:25:14 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return (1);
    }

	Harl				harl;
	std::string	level = argv[1];
	
	harl.complain(level);
	return (0);
}
