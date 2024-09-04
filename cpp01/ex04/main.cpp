/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:36:42 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/11 12:45:16 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
        std::cerr << "Error: unexpected inputs and errors." << std::endl \
				  << "USAGE: ./Sedisforlosers <filename> <s1> <s2>" << std::endl;
        return (1);
 	}
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    Sed sed(filename);
    sed.replace(s1, s2);
	return (0);
}
