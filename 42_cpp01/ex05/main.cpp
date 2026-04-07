/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:55:02 by mpapin            #+#    #+#             */
/*   Updated: 2025/08/27 17:38:56 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
    Harl	harl;
    
    std::cout << "DEBUG :" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;
    
	std::cout << "INFO :" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
    
	std::cout << "WARNING :" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "ERROR :" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	return (0);
}