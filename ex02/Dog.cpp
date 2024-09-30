/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:23:56 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/10 20:02:18 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() : AAnimal()
{
	std::cout << "Dog default constructor called" << std::endl;
	setType("Dog");
	_brain = new Brain;
}

Dog::Dog(Dog &copy) : AAnimal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = copy._type;
	_brain = new Brain(*(copy._brain));
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog&	Dog::operator=(const Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	_type = copy._type;
	_brain = copy._brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOOOF WOOOOF" << std::endl;
}