/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:22:23 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/29 17:19:33 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	abs(Fixed x)
{
	if (x < 0)
		return (x * (-1));
	return (x);
}

static Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed	x =	  (a.getX() * (b.getY() - c.getY())) \
				+ (b.getX() * (c.getY() - a.getY())) \
				+ (c.getX() * (a.getY() - b.getY()));
	Fixed	det = abs(x);
	return (det / 2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (a.isSame(point) || b.isSame(point) || c.isSame(point))
		return (false);
	Fixed	abc = abs(area(a, b, c));
	Fixed	abp = abs(area(a, b, point));
	Fixed	bcp = abs(area(b, c, point));
	Fixed	cap = abs(area(c, a, point));

	if (abc == 0 || abp == 0 || bcp == 0 || cap == 0)
		return (false);
	if (abc == abp + bcp + cap)
		return (true);
	else
		return (false);
}
