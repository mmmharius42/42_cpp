/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:19:07 by mpapin            #+#    #+#             */
/*   Updated: 2025/11/18 16:22:17 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <string>
#include <iostream>

template <typename T>
T min(T const& a, T const& b) {
    return (a < b ? a : b);
}

template <typename T>
T max(T const& a, T const& b) {
    return (a > b ? a : b);
}

template <typename T>
void swap(T& a, T& b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

#endif