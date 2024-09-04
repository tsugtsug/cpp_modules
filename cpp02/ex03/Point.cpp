/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:06:33 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/29 17:15:16 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point &rhs) : _x(rhs._x), _y(rhs._y)
{
}

Point&	Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		(Fixed)this->_x = rhs.getX();
		(Fixed)this->_y = rhs.getY();
	}
	return (*this);
}

Point::~Point()
{
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

bool	Point::isSame(const Point &a) const
{
	if ((this->getX() == a.getX()) && (this->getY() == a.getY()))
		return (true);
	else
		return (false);
}
