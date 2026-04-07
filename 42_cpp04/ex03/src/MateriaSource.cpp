/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 03:33:31 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/18 03:33:33 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) storage[i] = 0;
    std::cout << "MateriaSource created" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < 4; i++) {
        if (other.storage[i])
            storage[i] = other.storage[i]->clone();
        else
            storage[i] = 0;
    }
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (storage[i]) delete storage[i];
            if (other.storage[i])
                storage[i] = other.storage[i]->clone();
            else
                storage[i] = 0;
        }
    }
    std::cout << "MateriaSource copy assignment operator called" << std::endl;
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        if (storage[i]) delete storage[i];
    std::cout << "MateriaSource destroyed" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!storage[i]) {
            storage[i] = m->clone();
            std::cout << "MateriaSource learned " << m->getType() << std::endl;
            return;
        }
    }
    std::cout << "MateriaSource is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (storage[i] && storage[i]->getType() == type)
            return storage[i]->clone();
    }
    return 0;
}
