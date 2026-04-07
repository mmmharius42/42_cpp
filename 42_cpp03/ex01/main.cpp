/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:01:25 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 02:03:56 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

    return 0;
}
