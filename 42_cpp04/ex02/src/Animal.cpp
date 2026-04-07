/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 02:40:10 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/18 03:22:15 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
    std::cout << "Animal copied" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other)
        type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

