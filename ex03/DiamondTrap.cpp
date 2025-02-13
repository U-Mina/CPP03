/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:46:28 by ewu               #+#    #+#             */
/*   Updated: 2025/02/13 15:42:08 by ewu              ###   ########.fr       */
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
DiamondTrap::DiamondTrap()
	: ClapTrap("Default_usr_clap_name"), FragTrap(), ScavTrap(), _name("Default_usr")
{
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
	//std::cout << ??
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
	//std::cout << ??
}
DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	*this = other;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		// ClapTrap::operator=(other);
		// ScavTrap:;operator=(other);
		// FragTrap::operator=(other);
		this->HitPoints = other.FragTrap::HitPoints;
		this->EnergyPoints = other.ScavTrap::EnergyPoints;
		this->AttackDamage = other.FragTrap::AttackDamage;
		_name = other._name;
	}
	return *this;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "soemthing to pprint???" << "\n";
}
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is: " << _name << "\n";
	std::cout << "ClapTrap name is: " << ClapTrap::name << "\n";
}
