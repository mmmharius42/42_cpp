/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:28:40 by mpapin            #+#    #+#             */
/*   Updated: 2025/11/20 16:01:00 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    Array<int> empty;
    std::cout << "empty, size : " << empty.size() << std::endl;
    
    Array<int> numbers(5);
    std::cout << "numbers(5), size: " << numbers.size() << std::endl;
    
    std::cout << "numbers(5), values: ";
    for (unsigned int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    for (unsigned int i = 0; i < numbers.size(); i++) {
        numbers[i] = i * 10;
    }
    
    std::cout << "Modified values: ";
    for (unsigned int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    numbers[6] = 1;
    std::cout << std::endl;
}