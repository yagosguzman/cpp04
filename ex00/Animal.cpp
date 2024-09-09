/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:18:52 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/09 21:23:36 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Unknown";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

void	Animal::makeSound(void)
{
	if (_type == "Cat")
		std::cout << "MEOOOOOWWWW" << std::endl;
	else if (_type == "Dog")
		std::cout << "WOOOF WOOOOF" << std::endl;
	else if (_type == "Unknown")
		std::cout << "*Unrecognizable sound*" << std::endl;
}