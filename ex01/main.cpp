/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:05:33 by mpapin            #+#    #+#             */
/*   Updated: 2025/11/18 16:55:44 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(const int& n) {
    std::cout << n << std::endl;
}

void printMessage(int& n) {
    std::cout << n << " become " << (n+1) << std::endl;
    n++;
}

int main( void )
{
    int arr[] = {1, 2, 3, 4};
    iter(arr, 4, printInt);
    iter(arr, 4, printMessage);
    std::cout << std::endl;
    iter(arr, 4, printMessage);
}