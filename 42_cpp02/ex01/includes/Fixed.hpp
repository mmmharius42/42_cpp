/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:48:26 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/30 17:08:36 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

    public:

        Fixed(void);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed(void);   
        
        Fixed(const int value);  
        Fixed(const float value);  

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif