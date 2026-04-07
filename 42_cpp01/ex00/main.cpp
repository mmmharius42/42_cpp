/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 04:10:03 by mpapin            #+#    #+#             */
/*   Updated: 2025/08/28 15:45:53 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "===== heap =====" << std::endl;
	Zombie* heapZombie = newZombie("Zomblar1");
	heapZombie->announce();
	delete heapZombie;

	std::cout << std::endl << "===== stack =====" << std::endl;
	randomChump("Zomblar2");

	std::cout << std::endl << "===== multiple zomblar =====" << std::endl;
	Zombie* zombie1 = newZombie("Zomblar3");
	Zombie* zombie2 = newZombie("Zomblar4");
	
	zombie1->announce();
	zombie2->announce();
	
	delete zombie1;
	delete zombie2;

	return 0;
}