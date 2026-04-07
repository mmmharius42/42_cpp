/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 04:23:35 by mpapin            #+#    #+#             */
/*   Updated: 2025/08/27 15:45:13 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
    private:
        std::string type;
        
    public:
        Weapon(const std::string& type);
        ~Weapon();
        const std::string& getType() const;
        void setType(const std::string& newtype);
};

#endif