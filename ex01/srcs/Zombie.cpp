/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 12:31:09 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/17 07:10:46 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name(""){
}
	//Default constructor -initializes name to empty string

Zombie::Zombie(const std::string &zombieName) : name (zombieName){
}

Zombie::~Zombie() {
	std::cout << name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string newName) { 
	name = newName;
}

void Zombie::announce(void) {
	std::cout << name << "Moar Brainz!" << std::endl;
}

