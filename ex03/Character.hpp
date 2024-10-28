/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:12:05 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/28 20:07:32 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[4];
	int			_size;

public:
	Character();
	Character(std::string name);
	Character(Character& copy);
	~Character();

	Character& operator=(const Character& src);

	std::string const&	getName(void) const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif