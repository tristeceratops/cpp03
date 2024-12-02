#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Default"), _hitPoint(10), _energypoint(10), _attackdamage(0)
{
	std::cout << "Unnamed ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hitPoint(10), _energypoint(10), _attackdamage(0)
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
		_hitPoint = rhs._hitPoint;
		_energypoint = rhs._energypoint;
		_attackdamage = rhs._attackdamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energypoint > 0 && _hitPoint > 0)
	{
		std::cout << "Claptrap " << _name << " attacks " << target << " ,causing " << this->_attackdamage << " points of damage !" << std::endl;
		this->_energypoint--;
	}
	else
		std::cout << "Claptrap " <<_name <<  (_energypoint > 0 ? " is already dead" :" is too low on energy !" ) << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint > amount)
		this->_hitPoint -= amount;
	else if (this->_hitPoint > 0)
		this->_hitPoint = 0;
	else
	{
		std::cout << "Claptrap " << _name << " is already dead !" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << _name << " take " << amount << " of damage !" << std::endl;

}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energypoint > 0 && this->_hitPoint > 0)
	{
		this->_hitPoint += amount;
		std::cout << "ClapTrap " << this->_name << " repaired itself and gained " << amount << " of hit points, he now has " << this->_hitPoint << "hit points." << std::endl;
		this->_energypoint--;
	}
	else if (this->_energypoint == 0)
		std::cout << "ClapTrap " << this->_name << " is not able to repair itself, because he doesn't have enough energy points." << std::endl;
	else if (this->_hitPoint == 0)
		std::cout << "ClapTrap " << this->_name << " is not able to repair itself, because he doesn't have enough hit points." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " can't be repaired to have more than 10 hit points." << std::endl;
}