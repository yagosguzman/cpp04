/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
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

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal& copy);
	virtual ~AAnimal();

	AAnimal& operator=(const AAnimal& src);

	std::string		getType() const;
	void			setType(std::string type);
	virtual void	makeSound() const = 0;
};

#endif