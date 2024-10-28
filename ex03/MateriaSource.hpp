/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:28:56 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/28 20:33:51 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _materia[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource& copy);
	~MateriaSource();

	MateriaSource& operator=(const MateriaSource& src);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const& type);
	void		printList() const;

};

#endif