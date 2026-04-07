/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:47:08 by mpapin            #+#    #+#             */
/*   Updated: 2025/11/20 15:59:39 by mpapin           ###   ########.fr       */
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
Array<T>::Array(const Array& other) : _array(NULL), _size(0) {
    *this = other;
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] _array;
        _size = other._size;
        if (_size > 0) {
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = other._array[i];
            }
        } else {
            _array = NULL;
        }
    }
    
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size) {
        throw Bounds();
    }
    return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _size) {
        throw Bounds();
    }
    return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

#endif