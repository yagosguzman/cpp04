/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:24:35 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/10 19:52:55 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* isdog = new Animal("Dog");
	const Animal* unknown = new Animal("Tiger");
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << isdog->getType() << " " << std::endl;
	std::cout << unknown->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	meta->makeSound();
	isdog->makeSound();
	unknown->makeSound();
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();

	delete meta;
	delete unknown;
	delete isdog;
	delete dog;
	delete cat;
	
	return (0);
}