/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:25:29 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/30 21:49:35 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain *_brain;

public:
	Dog();
	Dog(Dog &copy);
	~Dog();

	Dog& operator=(const Dog& src);

	void		makeSound() const;
	void		writeIdea(std::string thought, int i) const;
	std::string	getIdea(int i) const;
};

#endif