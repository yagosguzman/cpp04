/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:19:42 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/10 19:58:47 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), Brain()
{
	this->_brain = &Brain();
	std::cout << "Cat default constructor called" << std::endl;
}


Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}