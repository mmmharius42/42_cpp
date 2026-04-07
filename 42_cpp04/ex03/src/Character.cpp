/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 03:34:05 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/18 03:34:06 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name) {
    for (int i = 0; i < 4; i++) inventory[i] = 0;
    std::cout << "Character " << name << " created" << std::endl;
}

Character::Character(const Character& other) : name(other.name) {
    for (int i = 0; i < 4; i++) {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = 0;
    }
    std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        name = other.name;
        for (int i = 0; i < 4; i++) {
            if (inventory[i]) delete inventory[i];
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = 0;
        }
    }
    std::cout << "Character copy assignment operator called" << std::endl;
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        if (inventory[i]) delete inventory[i];
    std::cout << "Character " << name << " destroyed" << std::endl;
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!inventory[i]) {
            inventory[i] = m;
            std::cout << name << " equipped " << m->getType() << " in slot " << i << std::endl;
            return;
        }
    }
    std::cout << name << "'s inventory is full" << std::endl;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && inventory[idx]) {
        std::cout << name << " unequipped " << inventory[idx]->getType() << " from slot " << idx << std::endl;
        inventory[idx] = 0; // pas delete !
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}
