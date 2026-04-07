/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:04:20 by mpapin            #+#    #+#             */
/*   Updated: 2025/07/09 00:25:32 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* horde;
    int N;
    int i;
    std::string name;

    N = 10;
    name = "Walker";
    horde = zombieHorde(N, name);
    if (!horde)
        return (1);
    i = 0;
    while (i < N)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return (0);
}