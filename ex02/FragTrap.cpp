/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:46:25 by ewu               #+#    #+#             */
/*   Updated: 2025/02/14 21:11:57 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("default_Frag")
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap: This is a different constructor: FragTrap default constructor called!" << "\n";
}

//obj created with parameterized default constructor (with name)
FragTrap::FragTrap(const std::string& name): ClapTrap(name)
// FragTrap::FragTrap(const std::string& name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}
FragTrap::FragTrap(const FragTrap& other)
{
	*this = other;//assign everything of CURRENT obj to other
}
/*
return '*this' is the actual OBJ itselt, not address to allow chain assignment
eg, this allows FragTrap obj1 obj2 obj3; obj1-obj2=obj3 operation
*/
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)//not same OBJ
		ClapTrap::operator=(other);
	return *this;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap: This is a different message from FragTrap destructor!" << "\n";
}
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: Let's High Five! Horaaay!!" << "\n";
}
