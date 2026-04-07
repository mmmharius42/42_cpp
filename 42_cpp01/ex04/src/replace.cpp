/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:08:21 by mpapin            #+#    #+#             */
/*   Updated: 2025/08/28 16:03:10 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

replace::replace(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2)
{
    this->output_filename = filename + ".replace";
}

replace::~replace()
{
}

bool replace::isValid() const
{
    if (this->filename.empty()) {
        displayError("Filename cannot be empty");
        return false;
    }
    if (this->s1.empty()) {
        displayError("String to replace (s1) cannot be empty");
        return false;
    }
    return true;
}

bool replace::openFiles(std::ifstream& inputFile, std::ofstream& outputFile)
{
    inputFile.open(this->filename.c_str());
    if (!inputFile.is_open()) {
        displayError("Could not open input file: " + this->filename);
        return false;
    }

    outputFile.open(this->output_filename.c_str());
    if (!outputFile.is_open()) {
        displayError("Could not create output file: " + this->output_filename);
        inputFile.close();
        return false;
    }

    return true;
}

std::string replace::replaceAll(const std::string& str, const std::string& from, const std::string& to)
{
    std::string result;
    size_t pos = 0;
    size_t found = 0;

    while ((found = str.find(from, pos)) != std::string::npos) {
        result += str.substr(pos, found - pos);
        result += to;
        pos = found + from.length();
    }
    result += str.substr(pos);
    
    return result;
}

bool replace::processFile()
{
    if (!isValid()) {
        return false;
    }

    std::ifstream inputFile;
    std::ofstream outputFile;

    if (!openFiles(inputFile, outputFile)) {
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::string processedLine = replaceAll(line, this->s1, this->s2);
        outputFile << processedLine << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File processed successfully. Output: " << this->output_filename << std::endl;
    return true;
}

void replace::displayError(const std::string& message) const
{
    std::cerr << "Error: " << message << std::endl;
}