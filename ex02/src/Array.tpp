/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:47:08 by mpapin            #+#    #+#             */
/*   Updated: 2025/11/19 15:26:14 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {}


template <typename T>
Array<T>::Array(const Array& other) : _elements(NULL), _size(0) {
    std::cout << "Array copy constructor called" << std::endl;
    *this = other;
}

template <typename T>
Array<T>::~Array() {
    std::cout << "Array destructor called" << std::endl;
    delete[] _elements;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    std::cout << "Array assignment operator called" << std::endl;
    
    if (this != &other) {
        delete[] _elements;
        _size = other._size;
        if (_size > 0) {
            _elements = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                _elements[i] = other._elements[i];
            }
        } else {
            _elements = NULL;
        }
    }
    
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size) {
        throw std::exception();
    }
    return _elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _size) {
        throw std::exception();
    }
    return _elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

#endif