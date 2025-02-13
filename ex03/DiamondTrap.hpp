/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:46:24 by ewu               #+#    #+#             */
/*   Updated: 2025/02/13 15:17:52 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/**
 * need to update FragTrap and ScavTrap to 'inherit virtully' from ClapTrap
 * to avoid duplication when DiamondTrap inherit both
 * KEYWORD: class FragTrap/ScavTrap : virtual public ClapTrap {}
 */

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap();
	
	void attack(const std::string& target);
	void whoAmI();
};


#endif