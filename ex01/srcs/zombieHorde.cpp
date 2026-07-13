/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 12:12:50 by uvadakku          #+#    #+#             */
/*   Updated: 2026/07/13 16:38:49 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "The horde has failed to be created." << std::endl;
		return NULL;
	}

	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::ostringstream index;
		index << (i + 1);
		horde[i].setName(name + index.str() + ": ");
	}
	return horde;
}
