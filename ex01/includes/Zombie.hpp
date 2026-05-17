#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
	private:
			std::string name;

	public:
				Zombie();
				Zombie(const std::string &zombieName); //default constructor is required for array allocation.
				~Zombie(); //destructor
				void announce(void);
				void setName(std::string newName); // give each zombie a name;
};


Zombie* zombieHorde( int N, std::string name );

#endif
