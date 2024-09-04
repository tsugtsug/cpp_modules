/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:50:55 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/18 11:35:02 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>
#include <iterator>
#include <deque>

template <typename T>
typename T::iterator easyfind(T& container, int value);

#include "easyfind.tpp"

#endif
