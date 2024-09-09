#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Default"), healpoint(10), hp_max(healpoint), energypoint(10), attackdamage(0)
{
	std::cout << "Unnamed ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): healpoint(10), hp_max(healpoint), energypoint(10), attackdamage(0)
{
	this->_name = name;
	std::cout << "ClapTrap named " << name <<" is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	this->_name = src._name;
	this->healpoint = src.healpoint;
	this->energypoint = src.energypoint;
	this->attackdamage = src.attackdamage;
	std::cout << "ClapTrap named " << src._name <<" is copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << _name << " is destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap named " << rhs._name <<" is copied" << std::endl;
	if (this != &rhs)
		*this = rhs;
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
	if (this->healpoint <= 0)
		return ;
	if (amount > INT_MAX)
		amount = INT_MAX;
	std::cout << "Claptrap " << _name << " is hurt and take " << amount << "damage" << std::endl;
	this->healpoint -= amount;
	std::cout << "He now has " << healpoint << " healpoint." << std::endl;
	if (healpoint <= 0)
		std::cout << "Claptrap " << _name << " is dead !" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energypoint > 0 && healpoint > 0)
	{
		std::cout << "Claptrap " << _name << " repaired itself  " << amount << " healpoint !" << std::endl;
		this->energypoint--;
		this->healpoint += amount;
		if (healpoint > hp_max)
			healpoint = hp_max;
		std::cout << "He now have " << healpoint << " healpoint." << std::endl;
	}
	else
		std::cout << "Claptrap " << _name << " is too low on energy !" << std::endl;
}