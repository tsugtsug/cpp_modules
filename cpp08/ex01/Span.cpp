/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:50:57 by yokamura          #+#    #+#             */
/*   Updated: 2024/03/28 00:30:19 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &rhs) : _n(rhs._n), _vec(rhs._vec) {}

Span&	Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_vec = rhs._vec;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int n)
{
	if (this->_vec.size() >= this->_n)
		throw std::length_error("Span has reached its maximum capacity.");
	this->_vec.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_vec.size() < 2)
		throw std::logic_error("Not enough elements to find a span.");
	unsigned int shortestSpan = std::numeric_limits<unsigned int>::max();
	for (std::vector<int>::const_iterator it1 = this->getVec().begin(); it1 != this->getVec().end(); it1++)
	{
		for (std::vector<int>::const_iterator it2 = this->getVec().begin() + 1; it2 != this->getVec().end(); it2++)
		{
			if (it1 == it2)
				continue ;
			unsigned int currentSpan = std::abs(*it1 - *it2);
			if (currentSpan < shortestSpan)
				shortestSpan = currentSpan;
		}
	}
	return (shortestSpan);
}

unsigned int	Span::longestSpan() const
{
	if (this->_vec.size() < 2)
		throw std::logic_error("Not enough elements to find a span.");
	return (*std::max_element(this->getVec().begin(), this->getVec().end()) - *std::min_element(this->getVec().begin(), this->getVec().end()));
}

const std::vector<int>&	Span::getVec() const
{
	return (this->_vec);
}

std::ostream&	operator<<(std::ostream &os, const Span &rhs)
{
	for (std::vector<int>::const_iterator it = rhs.getVec().begin(); it != rhs.getVec().end(); it++)
		os << *it << " ";
	return (os);
}
