/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:46:12 by ewu               #+#    #+#             */
/*   Updated: 2025/02/13 14:38:46 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

//init values in default construct
ClapTrap::ClapTrap() : name("default_usr"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "Default constructor called!" << "\n";	
}

ClapTrap::ClapTrap(const std::string& name) : name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {}

//copy of default construtor
ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;	
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called!" << "\n";
}

//!IMPORTANT: attack() just take a string as para, not OBJ
//so attck() has no influence on actually HP, just print a msg
void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0)
	{
		std::cout << "No Energy left!" << "\n";
		return ;
	}
	if (this->HitPoints <= 0 )
	{
		std::cout << "No HP!" << target << " dead!" << "\n";
		return ;	
	}
	this->EnergyPoints--;
	//this->HitPoints -= AttackDamage; ==> this line is in takedamage()
	std::cout << "ClapTrap " << name << " attacks " << target
				<< ", causing " << AttackDamage << " points of damage!" << "\n";
}
//!IMPORTANT: takedamage() is for ClapTrap OBJ itself!
// it does not directly influence the target!
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints <= 0 )
	{
		std::cout << "No HP! Dead already!" << "\n";
		return ;	
	}
	// AttackDamage = amount;
	HitPoints -= amount;
	std::cout << name << " damaged itself with " << amount << " HP!" << "\n";
	std::cout << "Current HP is: " << HitPoints << "\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoints <= 0)
	{
		std::cout << "No Energy left!" << "\n";
		return ;
	}
	if (this->HitPoints <= 0 )
	{
		std::cout << "No HP! Dead already!" << "\n";
		return ;	
	}
	this->EnergyPoints--;
	this->HitPoints += amount;
	std::cout << name << " has been repaired and gained " << amount << " points back!" << "\n";
	std::cout << "Current HP is: " << HitPoints << "\n";
}

/**
 * No Interaction Between Instances:
 * The ClapTrap instances should not interact directly with each other. 
 * For example, the attack function takes a std::string (the target's name) as a parameter,
 * not another ClapTrap object
 */
