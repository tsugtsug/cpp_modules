/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:23:51 by yokamura          #+#    #+#             */
/*   Updated: 2024/02/03 14:27:44 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{

	// --- Sample Code ---
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	// --- Sample Code ---

	// --- Optional Code ---

	IMateriaSource* ms = new MateriaSource();
	ms->learnMateria(new Ice());
	ms->learnMateria(new Cure());

	ICharacter* player1 = new Character("player1");
	ICharacter* player2 = new Character("player2");

	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = ms->createMateria("ice");
	player1->equip(tmp1);
	tmp2 = ms->createMateria("cure");
	player1->equip(tmp2);

	player1->use(0, *player2);
	player1->use(1, *player2);
	player1->use(2, *player2);

	player1->unequip(0);

	player1->use(0, *player2);
	player1->use(1, *player2);
	player1->use(2, *player2);

	player1->unequip(2);

	player1->use(0, *player2);
	player1->use(1, *player2);
	player1->use(2, *player2);

	player1->unequip(1);

	delete	player1;
	delete	player2;
	delete	ms;
	if (tmp1 != NULL)
		delete	tmp1;
	if (tmp2 != NULL)
		delete	tmp2;

	// --- Optional Code ---
	
	system("leaks -q InterfaceAndrecap");
	return (0);
}
