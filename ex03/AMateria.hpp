/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:57:01 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/26 17:21:46 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(AMateria& copy);
	virtual ~AMateria();
	
	AMateria& operator=(const AMateria& src);

	std::string const&	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif