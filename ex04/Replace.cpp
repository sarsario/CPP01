/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:15:53 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/19 10:03:49 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	this->_filename = filename;
	this->_s1 = s1;
	this->_s2 = s2;
}

Replace::~Replace(void)
{
	return ;
}

void	Replace::replace(void)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		line;
	std::string		new_filename;
	std::string		new_line;
	std::size_t		start_pos;
	std::size_t		s1_len;
	std::size_t		s2_len;

	ifs.open(this->_filename);
	if (!ifs.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		return ;
	}
	new_filename = this->_filename + ".replace";
	ofs.open(new_filename);
	if (!ofs.is_open())
	{
		std::cout << "Error: could not create file." << std::endl;
		ifs.close();
		return ;
	}
	s1_len = this->_s1.length();
	if (s1_len == 0)
	{
		std::cout << "Error: string to replace cannot be empty." << std::endl;
		ifs.close();
		ofs.close();
		return ;
	}
	s2_len = this->_s2.length();
	while (std::getline(ifs, line))
	{
		new_line = line;
		start_pos = new_line.find(this->_s1);
		if (start_pos == std::string::npos)
		{
			ofs << new_line << std::endl;
			continue ;
		}
		while (start_pos != std::string::npos)
		{
			new_line.erase(start_pos, s1_len);
			new_line.insert(start_pos, this->_s2);
			start_pos = new_line.find(this->_s1, start_pos + s2_len);
		}
		ofs << new_line << std::endl;
	}
	ifs.close();
	ofs.close();
	return ;
}
