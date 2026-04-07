/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:48:26 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/15 13:33:28 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

    public:

        Fixed(void);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed(void);


        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif