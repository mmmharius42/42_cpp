/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:47:44 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/06 03:03:59 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// int main( void ) {
//     Fixed a;
//     Fixed b( a );
//     Fixed c;
    
//     c = b;
    
//     std::cout << a.getRawBits() << std::endl;
//     std::cout << b.setRawBits() << std::endl;
//     std::cout << c.getRawBits() << std::endl;
    
//     return 0;
// }

int main(void) {
    
    Fixed a;

    std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl;
    a.setRawBits(123);
    std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl;

    Fixed b(a);
    std::cout << "b.getRawBits() = " << b.getRawBits() << std::endl;
    
    Fixed c;
    std::cout << "c.getRawBits() = " << c.getRawBits() << std::endl;
    c = a;
    std::cout << "c.getRawBits() = " << c.getRawBits() << std::endl;
    
    a.setRawBits(100);
    std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl;
    std::cout << "b.getRawBits() = " << b.getRawBits() << std::endl;
    std::cout << "c.getRawBits() = " << c.getRawBits() << std::endl;
    
}