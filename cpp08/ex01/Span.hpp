/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:36:43 by yokamura          #+#    #+#             */
/*   Updated: 2024/03/28 00:25:51 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>
#include <algorithm>
#include <exception>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <limits>

class	Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_vec;

		Span();

	public:
		Span(unsigned int n);
		~Span();
		Span(const Span &rhs);
		Span&	operator=(const Span &rhs);

		void	addNumber(int number);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int 	shortestSpan() const;
		unsigned int 	longestSpan() const;
		const std::vector<int>&	getVec() const;
};

std::ostream&	operator<<(std::ostream &os, const Span &rhs);

#endif
