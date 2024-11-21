#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Default"), healpoint(10), energypoint(10), attackdamage(0)
{
	std::cout << "Unnamed ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): healpoint(10), energypoint(10), attackdamage(0)
{
	this->_name = name;
	std::cout << "ClapTrap named " << name <<" is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap named " << copy._name <<" is copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << _name << " is destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap named " << rhs._name <<" is copied" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		healpoint = rhs.healpoint;
		energypoint = rhs.energypoint;
		attackdamage = rhs.attackdamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energypoint > 0 && healpoint > 0)
	{
		std::cout << "Claptrap " << _name << " attacks " << target << " ,causing " << this->attackdamage << " points of damage !" << std::endl;
		this->energypoint--;
	}
	else
		std::cout << "Claptrap " <<_name <<  (energypoint > 0 ? " is already dead" :" is too low on energy !" ) << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->healpoint > amount)
		this->healpoint -= amount;
	else if (this->healpoint > 0)
		this->healpoint = 0;
	else
	{
		std::cout << "Claptrap " << _name << " is already dead !" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << _name << " take" << amount << " of damage !" << std::endl;

}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energypoint > 0 && this->healpoint > 0 && this->healpoint + amount <= 10)
	{
		this->healpoint += amount;
		std::cout << "ClapTrap " << this->_name << " repaired itself and gained " << amount << " of hit points, he now has " << this->healpoint << "hit points." << std::endl;
		this->energypoint--;
	}
	else if (this->energypoint == 0)
		std::cout << "ClapTrap " << this->_name << " is not able to repair itself, because he doesn't have enough energy points." << std::endl;
	else if (this->healpoint == 0)
		std::cout << "ClapTrap " << this->_name << " is not able to repair itself, because he doesn't have enough hit points." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " can't be repaired to have more than 10 hit points." << std::endl;
}