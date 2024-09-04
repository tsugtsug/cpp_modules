/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:04:16 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/29 15:51:14 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	std::cout << "-------------Mandatory Test cases-------------" << std::endl;

	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));

	std::cout << a					<< std::endl;
	std::cout << ++a				<< std::endl;
	std::cout << a					<< std::endl;
	std::cout << a++				<< std::endl;
	std::cout << a					<< std::endl;
	std::cout << b					<< std::endl;
	std::cout << Fixed::max(a, b)	<< std::endl;

	std::cout << "-------------Optional Test cases-------------" << std::endl;

	Fixed	c(1234.4321f);
	Fixed	d(5678.8765f);

	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << std::endl;
	std::cout << "-------------Comparaison > / < -------------" << std::endl;
	
	std::cout << "c > d : " << c.operator>(d) << std::endl;
	std::cout << "c < d : " << c.operator<(d) << std::endl;
	std::cout << "c > c : " << c.operator>(c) << std::endl;
	std::cout << "d < d : " << d.operator<(d) << std::endl;
	std::cout << std::endl;
	std::cout << "-------------Comparaison >= / <= -------------" << std::endl;
	std::cout << "c >= d : " << c.operator>=(d) << std::endl;
	std::cout << "c <= d : " << c.operator<=(d) << std::endl;
	std::cout << "c >= c : " << c.operator>=(c) << std::endl;
	std::cout << "d <= d : " << d.operator<=(d) << std::endl;
	std::cout << std::endl;
	std::cout << "-------------Comparaison == / != -------------" << std::endl;
	std::cout << "c == d : " << c.operator==(d) << std::endl;
	std::cout << "c != d : " << c.operator!=(d) << std::endl;
	std::cout << "c == c : " << c.operator==(c) << std::endl;
	std::cout << "d != d : " << d.operator!=(d) << std::endl;

	std::cout << std::endl;
	std::cout << "-------------Arithmetic operator + -------------" << std::endl;
	std::cout << "c + d = " << c.operator+(d) << std::endl;
	std::cout << "d + c = " << d.operator+(c) << std::endl;
	std::cout << std::endl;
	std::cout << "-------------Arithmetic operator - -------------" << std::endl;
	std::cout << "c - d = " << c.operator-(d) << std::endl;
	std::cout << "d - c = " << d.operator-(c) << std::endl;
	std::cout << std::endl;
	std::cout << "-------------Arithmetic operator * -------------" << std::endl;
	std::cout << "c * d = " << c.operator*(d) << std::endl;
	std::cout << "d * c = " << d.operator*(c) << std::endl;
	std::cout << std::endl;
	std::cout << "-------------Arithmetic operator / -------------" << std::endl;
	std::cout << "c / d = " << c.operator/(d) << std::endl;
	std::cout << "d / c = " << d.operator/(c) << std::endl;

	std::cout << std::endl;
	std::cout << "-------------Increment / Decriment -------------" << std::endl;
	std::cout << "c   = " << c << std::endl;
	std::cout << "-------------Pre-increment-------------" << std::endl;
	std::cout << "++c = " << ++c << std::endl;
	std::cout << "c   = " << c << std::endl;
	std::cout << "-------------Post-increment-------------" << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "c   = " << c << std::endl;
	std::cout << "-------------Pre-increment-------------" << std::endl;
	std::cout << "++c = " << ++c << std::endl;
	std::cout << "c   = " << c << std::endl;
	std::cout << "-------------Post-increment-------------" << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "c   = " << c << std::endl;
	std::cout << "-------------Pre-decrement-------------" << std::endl;
	std::cout << "--c = " << --c << std::endl;
	std::cout << "c   = " << c << std::endl;
	std::cout << "-------------Post-decrement-------------" << std::endl;
	std::cout << "c-- = " << c-- << std::endl;
	std::cout << "c   = " << c << std::endl;
	std::cout << "-------------Pre-decrement-------------" << std::endl;
	std::cout << "--c = " << --c << std::endl;
	std::cout << "c   = " << c << std::endl;
	std::cout << "-------------Post-decrement-------------" << std::endl;
	std::cout << "c-- = " << c-- << std::endl;
	std::cout << "c   = " << c << std::endl;

	std::cout << std::endl;
	std::cout << "------------- Max / Min -------------" << std::endl;

	const Fixed	e(7890.0987f);
	const Fixed	f(3456.6543f);

	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	std::cout << std::endl;
	std::cout << "------------ Min -------------" << std::endl;
	
	std::cout << "min(c, d)       : " << Fixed::min(c, d)<< std::endl;
	std::cout << "const min(e, f) : " << Fixed::min(e, f)<< std::endl;
	std::cout << "------------- Max  -------------" << std::endl;
	std::cout << "max(c, d)       : " << Fixed::max(c, d)<< std::endl;
	std::cout << "const max(e, f) : " << Fixed::max(e, f)<< std::endl;
	
	return (0);
}
