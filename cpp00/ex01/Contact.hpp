/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:25:23 by yokamura          #+#    #+#             */
/*   Updated: 2023/11/04 10:34:01 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "myawesomephonebook.h"

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string _phoneNumber;
	std::string _darksetSecret;
	int			_index;
	
	std::string	_getInput(std::string field);
	bool	_is_correctInput(std::string input, std::string field);
	std::string	_create10string(std::string field);
	bool	_isAllspace(std::string str);
public:
	Contact();
	~Contact();
	void	add(int index);
	void	displayContacts();
	void	displayInformation();
};

#endif
