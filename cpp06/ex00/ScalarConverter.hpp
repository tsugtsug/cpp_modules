/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:26:49 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/13 17:42:05 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cmath>
#include <cstdlib>

#define CHAR_MIN_CAST std::numeric_limits<char>::min()
#define CHAR_MAX_CAST std::numeric_limits<char>::max()
#define INT_MIN_CAST std::numeric_limits<int>::min()
#define INT_MAX_CAST std::numeric_limits<int>::max()
#define FLOAT_MIN_CAST std::numeric_limits<float>::min()
#define FLOAT_MAX_CAST std::numeric_limits<float>::max()
#define DOUBLE_MIN_CAST std::numeric_limits<double>::min()
#define DOUBLE_MAX_CAST std::numeric_limits<double>::max()

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &rhs);
		ScalarConverter&	operator=(const ScalarConverter &rhs);
		~ScalarConverter();

		static void	handleFloatLiteral(const std::string& literal);
		static void	printResults(char value);
		static void	printResults(int value);
		static void	printResults(float value);
		static void	printResults(double value);
		static void	printCharResult(char value);
		static void	printIntResult(int value);
		static void	printFloatResult(float value);
		static void	printDoubleResult(double value);
		static void	printNanResults();
		static void	printInfPlus();
		static void	printInfMinus();
		static void	printImpossibleConversion();
		static bool	literalCheck(const std::string& literal);

	public:
		static void	convert(const std::string& literal);
};

#endif
