/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:21:04 by ewu               #+#    #+#             */
/*   Updated: 2025/02/14 19:24:26 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

/**
 * protected attributes is accessible to drived class,
 * bc DiamondTrap will be given the exact name in base ClapTrap class
 */
class ClapTrap
{
//private:
//for ScavTrap class to access ClapTrap attribute directly
protected:
	std::string name;
	int HitPoints;
	int EnergyPoints;
	int AttackDamage;
public:
	ClapTrap();
	ClapTrap(const std::string& name);//check
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif