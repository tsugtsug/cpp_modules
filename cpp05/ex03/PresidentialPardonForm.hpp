/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:31:00 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/06 16:42:22 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	private:
		const std::string	_target;

		PresidentialPardonForm();

	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(const PresidentialPardonForm &rhs);

		void	execute(const Bureaucrat &executor) const;
};

#endif
