#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Unnamed ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	std::cout << "ClapTrap named " << name <<" is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	this->_name = src._name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->ad = src.ad;
	std::cout << "ClapTrap named " << src._name <<" is copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << (_name.empty() ? "no name": _name) << " is destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	*this = rhs;
	std::cout << "ClapTrap named " << rhs._name <<" is copied" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (ep > 0)
	{
		std::cout << "Claptrap " << (_name.empty() ? "no name": _name) << " attacks " << target << " ,causing " << this->ad << " points of damage !" << std::endl;
		this->ep--;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << (_name.empty() ? "no name": _name) << " is hurt and take " << amount << "damage" << std::endl; 
	this->hp -= amount;
}
void ClapTrap::beRepaired(unsigned int amount){}