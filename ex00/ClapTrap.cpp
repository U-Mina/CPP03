/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:46:12 by ewu               #+#    #+#             */
/*   Updated: 2025/02/12 20:47:20 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

//init values in default construct
ClapTrap::ClapTrap() : HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "Default constructor called!" << "\n";	
}

ClapTrap::ClapTrap(std::string name){}
//copy of default construtor
ClapTrap::ClapTrap(const ClapTrap& other)
{}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
		*this = other;
	return *this;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called!" << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	AttackDamage = amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	this->EnergyPoints--;
	if (this->EnergyPoints <= 0)
	{
		std::cout << "No Energy left!" << "\n";
		return ;
	}
	this->HitPoints += amount;
}
void ClapTrap::attack(const std::string& target)
{
	this->EnergyPoints--;
	if (this->EnergyPoints <= 0)
	{
		std::cout << "No Energy left!" << "\n";
		return ;
	}
	this->HitPoints -= AttackDamage;
	if (this->HitPoints <= 0 )
	{
		std::cout << "No HP!" << target << " dead!" << "\n";
		return ;	
	}
	std::cout << "ClapTrap " << name << " attacks " << target
				<< ", causing " << AttackDamage << " points of damage!" << "\n";
	
}

/**
 * No Interaction Between Instances:
 * The ClapTrap instances should not interact directly with each other. 
 * For example, the attack function takes a std::string (the target's name) as a parameter,
 * not another ClapTrap object
 */
