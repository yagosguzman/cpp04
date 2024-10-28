/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:12:28 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/28 20:47:54 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] != NULL)
			delete _materia[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	std::cout << "Copy assignment operator called for MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src._materia[i] != NULL)
			this->_materia[i]  = src._materia[i];
		else
			this->_materia[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m || m->getType() == "Unknown")
	{
		std::cout << "Impossible to learn unknown materia :(" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
		{
			_materia[i] = m->clone();
			std::cout << "Materia " << m->getType() << " learnt correctly and stored in slot #" << i << std::endl;
			return;
		}
	}
	std::cout << "Impossible to learn any more materias, storage is full :(" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] != NULL && type != "Unknown" && _materia[i]->getType().compare(type))
		{
			std::cout << "Materia of type " << type << " created successfully" << std::endl;
			return (_materia[i]->clone());
		}
	}
	std::cout << "No matching type of materia was found... Unable to create materia of type " << type << std::endl;
	return (NULL);
}

void	MateriaSource::printList() const
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
			std::cout << "Slot #" << i << " is empty yet" << std::endl;
		else
			std::cout << "Slot #" << i << " contains materia of type " << _materia[i]->getType() << std::endl;
	}
}