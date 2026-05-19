/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:04:38 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/18 16:12:43 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceString(std::string &line, const std::string &s1, const std::string &s2)
{
	if (!s1.empty())
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
	}
}
std::ifstream openInputFile(const std::string &filename)
{
	std::ifstream inputFile(filename);
	if(!inputFile.is_open())
	{
		std::cerr << "Error could not open file!" << std::endl;
	}
	return inputFile;
}

std::ofstream openOutputFile(const std::string &filename)
{
	std::ofstream outputFile(filename + ".replace");
	if(!outputFile.is_open())
	{
		std::cerr << "Error could not open file!" << std::endl;
	}
	return outputFile;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: parameters required are <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream inputFile = openInputFile(filename);
	if(!inputFile.is_open())
		return (1);
	std::ofstream outputFile = openOutputFile(filename);
	if(!outputFile.is_open()) 
	{
		inputFile.close();
		return (1);
	}
	std::string line; //string variable to hold the content of each line
	while (std::getline(inputFile, line)) 
	{
		replaceString(line, s1, s2);
		outputFile << line << std::endl; 
	}
	inputFile.close();
	outputFile.close();
	return (0);
}

