/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:15:01 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/19 09:15:01 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

# include <iostream>
# include <string>
# include <fstream>

class	Replace
{
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace(void);

		void	replace(void);

	private:
		std::string		_filename;
		std::string		_s1;
		std::string		_s2;
};

#endif