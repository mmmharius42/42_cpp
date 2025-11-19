/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:19:07 by mpapin            #+#    #+#             */
/*   Updated: 2025/11/19 14:44:13 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <string>
#include <iostream>

template <typename T, typename F>
void iter(T* array, const size_t length, F f) {
    size_t i = 0;
    while(i != length)
    {
        f(array[i]);
        i++;
    }
}

#endif