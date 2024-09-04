/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:06:48 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/29 17:20:34 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	if (bsp(Point(0, 0), Point(1, 0), Point(0, 1), Point(0.25, 0.25)))
	{
		std::cout << "Point is inside the triangle." << std::endl;
	}
	else
	{
		std::cout << "Point is not inside the triangle." << std::endl;
	}
	if (bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(1, 3)))
	{
		std::cout << "Point is inside the triangle." << std::endl;
	}
	else
	{
		std::cout << "Point is not inside the triangle." << std::endl;
	}
	return (0);
}
