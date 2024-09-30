/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:41:39 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/10 19:43:38 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	_ideas[100] = copy._ideas[100];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}