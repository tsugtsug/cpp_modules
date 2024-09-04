/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:43:53 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/24 12:13:38 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Sed.hpp"

Sed::Sed(std::string filename) : _inputFile(filename)
{
	this->_outputFile = filename + ".replace";
}

Sed::~Sed()
{
}

void	Sed::replace(std::string s1, std::string s2)
{
	if (!s1.compare(""))
	{
		std::cerr << "s1 must not be empty !!!" << std::endl;
		return ;
	}
	std::ifstream	inFile(_inputFile);
	if (inFile.is_open())
	{
		std::string		content;
		if (std::getline(inFile, content, '\0'))
		{
			std::ofstream	outFile(_outputFile);
			size_t			pos = 0;
			if (outFile.is_open())
			{		
				while ((pos = content.find(s1, pos)) != std::string::npos)
				{
					content.erase(pos, s1.length());
					content.insert(pos, s2);
					pos += s2.length();
				}
				outFile << content;
				outFile.close();
			}
			else
			{
				std::cerr << "Unable to open the file " << _outputFile << "!" << std::endl;
				inFile.close();
				exit(EXIT_FAILURE);
			}
		}
		else
			std::cerr << "The file " << _inputFile << " is empty!" << std::endl;
		inFile.close();
	}
	else
	{
        std::cerr << "Unable to open the file " << _inputFile << "!" << std::endl;
        exit(EXIT_FAILURE);
    }
}
