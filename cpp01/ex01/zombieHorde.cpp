/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:10 by yokamura          #+#    #+#             */
/*   Updated: 2023/11/04 17:52:32 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombieList = new Zombie[N];
	int	i = 0;
    while (i < N)
	{
        zombieList[i].setName(name);
		i++;
    }
    return zombieList;
}
