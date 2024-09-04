/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:13:12 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 14:17:11 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	// std::cout << "Character " << this->_name << " was created" << std::endl;
}

Character::Character(Character const & src) : _name(src._name)
{
	*this = src;
}

Character&	Character::operator=(Character const & rhs)
{
	// std::cout << "Character " << this->_name << " was created" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (size_t j = 0; j < 4; j++)
		{
			if (this->_inventory[j] != NULL)
				delete this->_inventory[j];
		}
		for (size_t i = 0; i < 4; i++)
			this->_inventory[i] = rhs._inventory[i];
	}
	return (*this);
}

Character::~Character()
{
	// std::cout << "Character " << this->_name << " destroyed" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];	
	}
}

std::string	const&	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			// std::cout << "Character " << this->_name << " could not equip " << m->getType() << std::endl;
			return ;
		}
	}
	// std::cout << "Character " << this->_name << " could not equip " << m->getType() << "because the inventory is alreday full!!!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		// std::cout << "The index must be from 0 to 3." << std::endl;
		return ;
	}
	if (this->_inventory[idx] != NULL)
	{
		this->_inventory[idx] = NULL;
		// std::cout << "Character " << this->_name << " unequiped a materia of the index " << idx << std::endl; 
	}
	// else
		// std::cout << "Character " << this->_name << " could not unequipe a materia of the index " << idx << "because the inventory of the index " << idx 
				//   << " was empty!!!" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		// std::cout << "The index must be from 0 to 3." << std::endl;
		return ;
	}
	if (this->_inventory[idx] != NULL)
	{
		this->_inventory[idx]->use(target);
		// std::cout << "Character " << this->_name << " useed " << this->_inventory[idx]->getType() << " to the target " << target.getName() << std::endl;
	}
	// else
		// std::cout << "Character " << this->_name << " could not use a materia of the index " << idx << "because the inventory of the index " << idx 
				//   << " was empty!!!" << std::endl;
}
