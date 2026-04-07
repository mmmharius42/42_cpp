/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:01:27 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/17 20:12:01 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("Default"), _PointHealth(10), _AttackDamage(0), _PointEnergy(10) {
    std::cout << "ClapTrap " << _Name <<  " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _PointHealth(10), _AttackDamage(0), _PointEnergy(10) {
    std::cout << "ClapTrap " << _Name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _Name(other._Name), _PointHealth(other._PointHealth),
        _AttackDamage(other._AttackDamage), _PointEnergy(other._PointEnergy) {
    std::cout << "ClapTrap " << _Name << " created" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _Name = other._Name;
        _PointHealth = other._PointHealth;
        _PointEnergy = other._PointEnergy;
        _AttackDamage = other._AttackDamage;
    }
    std::cout << "ClapTrap " << _Name << " assigned" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for: " << _Name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_PointHealth <= 0 || _PointEnergy <= 0) {
        std::cout << "ClapTrap " << _Name << " can t attack" << std::endl;
        return;
    }
    _PointEnergy--;
    std::cout << "ClapTrap " << _Name << " attacks " << target
              << ", causing " << _AttackDamage << " attack damage"  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    _PointHealth -= static_cast<int>(amount);
    if (_PointHealth < 0) _PointHealth = 0;
    std::cout << "ClapTrap " << _Name << " take(s) " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_PointHealth <= 0 || _PointEnergy <= 0) {
        std::cout << "ClapTrap " << _Name << " can t repair" << std::endl;
        return;
    }
    _PointEnergy--;
    _PointHealth += amount;
    std::cout << "ClapTrap " << _Name << " repairs itself " << amount << " points" << std::endl;
}

