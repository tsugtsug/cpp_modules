/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:58:42 by yokamura          #+#    #+#             */
/*   Updated: 2023/12/28 11:30:01 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &rhs);
		Fixed&	operator=(const Fixed &rhs);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float   toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &os, const Fixed &rhs);

#endif
