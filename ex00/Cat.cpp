/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:19:42 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/30 19:10:36 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	setType("Cat");
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat &copy) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = copy._type;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	_type = copy._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MEOOOOOWWWW" << std::endl;
}