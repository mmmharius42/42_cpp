/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 04:08:06 by mpapin            #+#    #+#             */
/*   Updated: 2025/08/27 15:45:37 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Adresse de la variable string: " << &str << std::endl;
    std::cout << "Adresse contenue dans stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse de stringREF: " << &stringREF << std::endl;

    std::cout << "Valeur de la variable string: " << str << std::endl;
    std::cout << "Valeur pointee par stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valeur de stringREF: " << stringREF << std::endl;
    
    return 0;
}