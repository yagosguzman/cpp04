/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:54:46 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/28 21:18:09 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Unknown")
{
	for (int i= 0; i < 4; i++)
		_inventory[i] = NULL;
	_size = 0;
}

Character::Character(std::string name) : _name(name), _size(4)
{
	
}