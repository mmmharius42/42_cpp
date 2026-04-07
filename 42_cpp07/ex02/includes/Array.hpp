/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:50:54 by mpapin            #+#    #+#             */
/*   Updated: 2025/11/20 15:56:34 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>
class Array {
    private :
        T*              _array;
        unsigned int    _size;
    
    public :
        Array(void);
        Array(unsigned int n);
        Array(const Array& other);
        ~Array();
        
        Array&          operator=(const Array& other);
        T&              operator[](unsigned int index);
        const T&        operator[](unsigned int index) const;
        unsigned int    size() const;
    
        class Bounds : public std::exception
        {
            public :
                virtual const char *what() const throw() {
                    return "index out of bounds";
                }
        };
};

#include "Array.tpp"

#endif 