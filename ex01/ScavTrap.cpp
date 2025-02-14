/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:06:54 by ewu               #+#    #+#             */
/*   Updated: 2025/02/14 19:16:34 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("default_Scav")
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap Default constrcutor is called!" << "\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap& other)
{
	*this = other;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
		//or a simpler syntax:
		// ClapTrap::operator=(other); ==> call base class '=' operator!
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor is called!" << "\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0)
	{
		std::cout << "ScavTrap: No Energy left!" << "\n";
		return ;
	}
	if (this->HitPoints <= 0 )
	{
		std::cout << "ScavTrap: No HP!" << target << " dead!" << "\n";
		return ;	
	}
	this->EnergyPoints--;
	//std::cout << "This is attack from ScavTrap: " << "\n";
	std::cout << "ScavTrap " << name << " attacks " << target
				<< ", causing " << AttackDamage << " points of damage!" << "\n";
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << name << " is now in Gate Keeper mode." << "\n";
}
