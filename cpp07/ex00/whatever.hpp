/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:20:33 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/14 11:25:41 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T	temp = a;

	a = b;
	b = temp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
	return (b <= a) ? b : a;
}

template <typename T>
T const &max(T const &a, T const &b)
{
	return (a <= b) ? b : a;
}

#endif
