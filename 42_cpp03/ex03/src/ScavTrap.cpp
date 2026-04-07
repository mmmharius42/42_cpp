/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:56:02 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 20:31:04 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_PointHealth = 100;
    this->_PointEnergy = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap default constructor called for: " << _Name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_PointHealth = 100;
    this->_PointEnergy = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap constructor called for: " << _Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called for: " << _Name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap assignment operator called for: " << _Name << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for: " << _Name << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_PointEnergy > 0 && _PointHealth > 0) {
        std::cout << "ScavTrap " << _Name << " attacks " << target
                  << ", causing " << _AttackDamage << " points of damage!" << std::endl;
        _PointEnergy--;
    } else {
        std::cout << "ScavTrap " << _Name << " can't attack. Not enough energy or health." << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _Name << " is now in Gate keeper mode." << std::endl;
}

