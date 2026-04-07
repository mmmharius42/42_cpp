/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 03:35:11 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/18 03:35:12 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("unknown") {
    std::cout << "AMateria created" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type) {
    std::cout << "AMateria of type " << type << " created" << std::endl;
}

AMateria::AMateria(const AMateria& other) : type(other.type) {
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other)
        this->type = other.type;
    std::cout << "AMateria copy assignment operator called" << std::endl;
    return *this;
}

AMateria::~AMateria() {
    std::cout << "AMateria destroyed" << std::endl;
}

std::string const & AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
    std::cout << "* generic materia used *" << std::endl;
}
