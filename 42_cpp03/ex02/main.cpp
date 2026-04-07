/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:01:25 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 01:55:46 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap salut("numero1");
    salut.attack("target A");
    salut.takeDamage(5);
    salut.beRepaired(3);

    ScavTrap sava("numero2");
    sava.attack("numero1");
    sava.takeDamage(20);
    sava.beRepaired(10);
    sava.guardGate();

    FragTrap tranquille("numero3");
    tranquille.attack("numero2");
    tranquille.takeDamage(30);
    tranquille.beRepaired(15);
    tranquille.highFivesGuys();

    return 0;
}
