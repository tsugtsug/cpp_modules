/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:42:29 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/11 11:13:42 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class Sed
{
	private:
		std::string	_inputFile;
		std::string	_outputFile;
	public:
		Sed(std::string filename);
		~Sed();
		void	replace(std::string s1, std::string s2);
};

#endif
