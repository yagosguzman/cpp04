/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:16:48 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/27 22:43:02 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(std::string type);
	Animal(Animal& copy);
	virtual ~Animal();

	Animal& operator=(const Animal& src);

	std::string		getType() const;
	void			setType(std::string type);
	virtual void	makeSound() const;
};

#endif