/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:25:35 by yokamura          #+#    #+#             */
/*   Updated: 2023/11/04 10:33:53 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "myawesomephonebook.h"

class PhoneBook
{
private:
	Contact	_array[8];
	int		_size;
	int		_numberContacts;
public:
	PhoneBook();
	~PhoneBook();
	void	begin();
	void	add();
	void	search();
};


#endif
