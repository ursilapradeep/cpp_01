/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 12:36:41 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/17 07:06:29 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int horde_size = 2;
	//create array of zombies // with default constructor
	Zombie *horde = zombieHorde(horde_size, "Zombies");
	if (horde)
	{
		for (int i = 0; i < horde_size; i++)
			horde[i].announce();
		delete[] horde;
	}
	return (0);
}
