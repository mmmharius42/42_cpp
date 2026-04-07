/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:08:25 by mpapin            #+#    #+#             */
/*   Updated: 2025/08/27 16:09:08 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>

class replace {
    private:
        std::string filename;
        std::string s1;
        std::string s2;
        std::string output_filename;

        std::string replaceAll(const std::string& str, const std::string& from, const std::string& to);
        bool openFiles(std::ifstream& inputFile, std::ofstream& outputFile);

    public:
        replace(const std::string& filename, const std::string& s1, const std::string& s2);
        ~replace();
        
        bool isValid() const;
        bool processFile();
        void displayError(const std::string& message) const;
};

#endif