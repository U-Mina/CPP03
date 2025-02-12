/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:38:10 by ewu               #+#    #+#             */
/*   Updated: 2025/02/12 20:48:12 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap tester1("Mikey");
	tester1.attack("Mario");
	tester1.takeDamage(5);
	tester1.beRepaired(3);
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