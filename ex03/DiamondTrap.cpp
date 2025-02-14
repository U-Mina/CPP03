/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:46:28 by ewu               #+#    #+#             */
/*   Updated: 2025/02/14 21:29:24 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

/**
 * in the member init list:
 * ClapTrap("Default_usr_clap_name"): init base class with the name "Default_usr_clap_name"
 * fragtrap() & scavtrap(): init these two with its default consructor
 * _name(): init member var _name with the value "Default-usr"
 */
DiamondTrap::DiamondTrap() :
	ClapTrap("Default_Dia_clap_name"),
	FragTrap(),
	ScavTrap(),
	name("Default_Dia")//init diamondtrap private name attribute
{
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap default constructor called!" << "\n";
}

DiamondTrap::DiamondTrap(const std::string& name) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name"),
	name(name)//iniit with parameter
{
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	//std::cout << "DiamondTrap parameterized constructor called!" << "\n";
	//std::cout << "DiamondTrap" << name << " constructor called!" << "\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	*this = other;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);//!!!base class assignment called!!
		ScavTrap:;operator=(other);
		FragTrap::operator=(other);
		// this->HitPoints = other.FragTrap::HitPoints;
		// this->EnergyPoints = other.ScavTrap::EnergyPoints;
		// this->AttackDamage = other.FragTrap::AttackDamage;
		name = other.name;
	}
	return *this;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destuctor called" << "\n";
}
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is: " << name << "\n";
	std::cout << "ClapTrap name is: " << ClapTrap::name << "\n";
}
