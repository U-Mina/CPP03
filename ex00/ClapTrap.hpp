/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:21:04 by ewu               #+#    #+#             */
/*   Updated: 2025/02/12 21:20:24 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
	std::string name;
	int HitPoints;//HP
	int EnergyPoints;//repairing points
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

	//getters
	// std::string getName() const;
	// unsigned int getDamage() const;
	// unsigned int getHP() const;
	// unsigned int getEnergy() const;
};

#endif