/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:54:46 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/29 20:48:18 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Unnamed")
{
	std::cout << "Unnamed Character default constructor called" << std::endl;
	for (int i= 0; i < 4; i++)
		_inventory[i] = NULL;
	_deleted = 0;
}

Character::Character(std::string name) : _name(name), _deleted(0)
{
	for (int i= 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character& copy) : _name(copy.getName()), _deleted(copy._deleted)
{
	for (int i= 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

Character& Character::operator=(const Character& src)
{
	std::cout << "Character copy assignment operator called" << std::endl;
	_name = src.getName();
	_deleted = src._deleted;
		for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = src._inventory[i];
	}
}

std::string const&	Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "Couldn't equip materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m->clone();
			std::cout << this->getName() << " equipped materia " << m->getType() << " on slot " << i << std::endl;
			return;
		}
	}
	std::cout << this->getName() << "'s inventory is full so it's not possible to equip anything.\n"
		<< "Please unequip any item before trying to equip something" << std::endl;
	return;
}

void	Character::unequip(int idx)
{
	if (idx > 3)
		return;
	if (this->_inventory[idx] != NULL)
	{
		
	}
}

void	Character::use(int idx, ICharacter& target)
{
	
}