/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:46:28 by ewu               #+#    #+#             */
/*   Updated: 2025/02/15 13:24:34 by ewu              ###   ########.fr       */
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
	ClapTrap(),//"Default_Dia_clap_name"
	FragTrap(),
	ScavTrap(),
	name("Default_Dia")//init diamondtrap private name attribute
{
	this->HitPoints = FragTrap::HitPoints;//100
	this->EnergyPoints = ScavTrap::EnergyPoints;//50
	this->AttackDamage = FragTrap::AttackDamage;//30
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
//cp consstructor, use better form
// *this = other; ==>this way works but not good practice, cuz it create an OBJ with 
//default initialization and then assign val, not efficient
DiamondTrap::DiamondTrap(const DiamondTrap& other) :
//litral meaning: construct ClapTrap part of this OBJ using other's data
	ClapTrap(other),
	ScavTrap(other),
	FragTrap(other),
	name(other.name)
{
	// std::cout << "DiamondTrap copy constructor called!" << "\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		//!!!base class assignment called!!
		//calls ClapTrap's '=' operator to copy ClapTrap's members
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
