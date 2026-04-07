/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 21:56:14 by mpapin            #+#    #+#             */
/*   Updated: 2025/08/27 15:45:14 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string& newtype) {
    this->type = newtype;
}