/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:24:35 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/30 21:45:15 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const int size = 4;

	Animal* arranimals[size];

	for (int i = 0; i < size / 2; i++)
		arranimals[i] = new Dog;

	for (int i = size / 2; i < size; i++)
		arranimals[i] = new Cat();

	for (int i = 0; i < size; i++)
		arranimals[i]->makeSound();
	
	for (int i = 0; i < size; i++)
		delete arranimals[i];

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* unknown = new Animal();

	dog->makeSound();
	cat->makeSound();
	unknown->makeSound();
		
	delete dog;
	delete cat;
	delete unknown;

	Dog basic;

	basic.writeIdea("Who am I?", 0);

	Dog tmp = basic;

	std::cout << basic.getIdea(0) << std::endl;
	std::cout << tmp.getIdea(0) << std::endl;

	basic.makeSound();
	tmp.makeSound();
	
	return (0);
}