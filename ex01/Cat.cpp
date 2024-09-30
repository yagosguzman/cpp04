/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:19:42 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/30 21:43:09 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	setType("Cat");
	_brain = new Brain;
}

Cat::Cat(Cat &copy) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = copy._type;
	_brain = new Brain(*(copy._brain));
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat&	Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	_type = copy._type;
	_brain = copy._brain;
	return (*this);
}

void		Cat::makeSound() const
{
	std::cout << "MEOOOOOWWWW" << std::endl;
}

void		Cat::writeIdea(std::string thought, int i) const
{
	_brain->writeIdea(thought, i);
}

std::string	Cat::getIdea(int i) const
{
	return (_brain->getIdea(i));
}
