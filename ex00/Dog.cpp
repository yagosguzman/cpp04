/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:23:56 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/30 19:10:36 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	setType("Dog");
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog &copy) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = copy._type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOOOF WOOOOF" << std::endl;
}