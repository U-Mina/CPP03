/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:38:10 by ewu               #+#    #+#             */
/*   Updated: 2025/02/14 21:35:08 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	//test default
	ClapTrap claptrap;
	ScavTrap scavtrap;
	FragTrap fragtrap;
	claptrap.attack("Target_under_attck");
	scavtrap.attack("scav");
	fragtrap.attack("Frag_taget_under_default_ClapTrap_attack");
	
	ClapTrap tester1("Mikey");
	tester1.attack("Mario");
	ScavTrap tester2("Princess Happy");
	tester2.attack("cherry");
	FragTrap tester3("Lemon");
	tester3.attack("Tree");
	
	tester1.takeDamage(5);
	tester1.beRepaired(3);
	tester1.attack("1st bad guy");
	
	tester2.takeDamage(59);
	tester2.beRepaired(39);
	tester2.attack("2nd bad guy");
	tester2.guardGate();
	
	tester3.takeDamage(90);
	tester3.beRepaired(77);
	tester3.attack("3rd bad guy");
	tester3.highFivesGuys();
	
	return 0;
}

/** NOTE:
 * inheritance: inherit the arrtributs and methods from one class to another
 * 	- base class (parent)
 * 	- devrived class (child)
 * 	- systax ':'
 * EG: class Car(child) inherit from Vehicle(parent)
 * class Vehicle{
 * public: 
 * 		string brand name; void honk(){};};
 * 	class Car : public Vehicle{
 * 	public:
 * 		double price;};
 * 
 * int main(){
 * 	Car myCar;
 * 	myCar.honk();
 * 	cout << myCar.brand << '\n'; }
 * function honk() and attribute brand is inherited from Vehicle
 */