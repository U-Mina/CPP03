/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:46:24 by ewu               #+#    #+#             */
/*   Updated: 2025/02/14 19:45:58 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/**
 * need to update FragTrap and ScavTrap to 'virtual inheritance' from ClapTrap
 * to avoid duplication when DiamondTrap inherit both
 * KEYWORD: class FragTrap/ScavTrap : virtual public ClapTrap {}
 */

class DiamondTrap : public ScavTrap, public FragTrap//grammer of inherit multiple class
{
private:
	std::string name;
public:
	DiamondTrap();//default cons
	DiamondTrap(const std::string& name);//parameterized cons
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap();
	
	void whoAmI();
	//or with: using ScavTrap::attack;
	void attack(const std::string& target);
	//created a new attack in DiamondTrap class, then specified in .cpp 
	//as {ScavTrap::attack(target);}
	//meaning: calling scavtrap::attack()
};


#endif