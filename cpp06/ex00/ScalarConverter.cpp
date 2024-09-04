/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:16:23 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/13 17:42:29 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

void	ScalarConverter::handleFloatLiteral(const std::string& literal)
{
	double temp = std::strtod(literal.c_str(), NULL);

	if (FLOAT_MIN_CAST <= temp && temp <= FLOAT_MAX_CAST)
		printResults(static_cast<float>(temp));
	else
		printImpossibleConversion();
}

// --- printResults (char, int, float, double) ---

void	ScalarConverter::printResults(char value)
{
	printCharResult(value);
	printIntResult(static_cast<int>(value));
	printFloatResult(static_cast<float>(value));
	printDoubleResult(static_cast<double>(value));
}

void	ScalarConverter::printResults(int value)
{
	if (CHAR_MIN_CAST <= value && value <= CHAR_MAX_CAST)
		printCharResult(static_cast<char>(value));
	else
		std::cout << "char: impossible" << std::endl;
	printIntResult(value);
	printFloatResult(static_cast<float>(value));
	printDoubleResult(static_cast<double>(value));
}

void ScalarConverter::printResults(float value)
{
	if (CHAR_MIN_CAST <= value && value <= CHAR_MAX_CAST)
		printCharResult(static_cast<char>(value));
	else
		std::cout << "char: impossible" << std::endl;
	if (INT_MIN_CAST <= value && value <= INT_MAX_CAST)
		printIntResult(static_cast<int>(value));
	else
		std::cout << "int: impossible" << std::endl;
	printFloatResult(value);
	printDoubleResult(static_cast<double>(value));
}

void	ScalarConverter::printResults(double value)
{
	if (CHAR_MIN_CAST <= value && value <= CHAR_MAX_CAST)
		printCharResult(static_cast<char>(value));
	else
		std::cout << "char: impossible" << std::endl;
	if (INT_MIN_CAST <= value && value <= INT_MAX_CAST)
		printIntResult(static_cast<int>(value));
	else
		std::cout << "int: impossible" << std::endl;
	if (FLOAT_MIN_CAST <= value && value <= FLOAT_MAX_CAST)
		printFloatResult(static_cast<float>(value));
	else
		std::cout << "float: impossible" << std::endl;
	printDoubleResult(value);
}

//--- printCharResult, printIntResult, printFloatResult, printDobuleResult ---

void	ScalarConverter::printCharResult(char value)
{
	if (std::isprint(value))
		std::cout << "char: '" << value << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::printIntResult(int value)
{
	std::cout << "int: "<< value << std::endl;
}

void	ScalarConverter::printFloatResult(float value)
{
	if (value - static_cast<int>(value) == 0)
		std::cout << "float: " << value << ".0f" << std::endl;
	else
		std::cout << "float: " << value << "f" << std::endl;
}

void	ScalarConverter::printDoubleResult(double value)
{
	if (value - static_cast<int>(value) == 0)
		std::cout << "double: " << value << ".0" << std::endl;
	else
		std::cout << "double: " << value << std::endl;
}

// --- print specific literals ---

void	ScalarConverter::printNanResults()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void	ScalarConverter::printInfPlus()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: +inff" << std::endl;
	std::cout << "double: +inf" << std::endl;
}

void	ScalarConverter::printInfMinus()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: -inff" << std::endl;
	std::cout << "double: -inf" << std::endl;
}

void	ScalarConverter::printImpossibleConversion()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

// --- literal check function ---

bool	ScalarConverter::literalCheck(const std::string& literal)
{
	if (literal.length() == 0)
		return (false);
	int	hasF = 0;
	int hasPoint = 0;
	for (size_t i = 0; i < literal.length(); ++i)
	{
		if (i == 0 && (literal[i] == '-' || literal[i] == '+'))
			continue ;
		else if (!std::isdigit(literal[i]))
		{
			if (literal[i] == 'f')
				hasF++;
			else if (literal[i] == '.')
				hasPoint++;
			else
				return (false);
		}
	}
	if (hasF > 1 || hasPoint > 1)
		return (false);
	if (hasF == 1 && literal[literal.length() - 1] != 'f')
		return (false);
	return (true);
}

// --- convert function ---

void	ScalarConverter::convert(const std::string& literal)
{
	if (literal.compare("nan") == 0 || literal.compare("nanf") == 0)
		printNanResults();
	else if (literal.compare("inf") == 0 || literal.compare("+inf") == 0 || literal.compare("inff") == 0 || literal.compare("+inff") == 0)
		printInfPlus();
	else if (literal.compare("-inf") == 0 || literal.compare("-inff") == 0)
		printInfMinus();
	else if (literal.length() == 1 && !std::isdigit(literal[0]) && std::isprint(literal[0]))
		printResults(literal[0]);
	else if (!literalCheck(literal))
	{
		std::cerr << "Literal error" << std::endl;
		return ;
	}
	else if (literal.find('f') != std::string::npos)
		handleFloatLiteral(literal);
	else
	{
		double temp = std::strtod(literal.c_str(), NULL);
		if (INT_MIN_CAST <= temp && temp <= INT_MAX_CAST)
			printResults(static_cast<int>(temp));
		else if (DOUBLE_MIN_CAST <= temp && temp <= DOUBLE_MAX_CAST)
		{
			std::cout << temp << std::endl;
			std::cout << "ok" << std::endl;
			printResults(static_cast<double>(temp));
		}
		else
			printImpossibleConversion();
	}
}
