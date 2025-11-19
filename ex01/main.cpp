/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:05:33 by mpapin            #+#    #+#             */
/*   Updated: 2025/11/19 14:45:51 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(const int& n) {
    std::cout << n << std::endl;
}

template <typename T>
void increment(T& n) {
    n++;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4};
    iter(arr, 4, printInt);
    iter(arr, 4, increment<int>);
    std::cout << std::endl;
    iter(arr, 4, printInt);
}