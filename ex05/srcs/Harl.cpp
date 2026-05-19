/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:20:41 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/19 18:17:44 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[DEBUG] \n I love extra bacon for my 7XL-double-cheese-triple-pickle-special-kitchup-burger. I really do!" << std::endl;
}

void Harl::info(void) { 
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; 
} 

void Harl::warning(void) { 
 std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; 
} 

void Harl::error(void) { 
 std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl; 
} 

void Harl::complain(std::string level)
{
	//define the pointer to member function type
	typedef void (Harl::*HarlMemFn)(void);
	//array of member fns ptrs
	HarlMemFn functions[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	//matching array of strings
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++) //loop to find match and execute
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "[unknown complaining level]" <<std::endl;
}
