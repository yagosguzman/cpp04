/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:24:35 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/01 18:35:06 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const int size = 4;

	AAnimal* arranimals[size];

	for (int i = 0; i < size / 2; i++)
		arranimals[i] = new Dog;

	for (int i = size / 2; i < size; i++)
		arranimals[i] = new Cat();

	for (int i = 0; i < size; i++)
		arranimals[i]->makeSound();
	
	for (int i = 0; i < size; i++)
		delete arranimals[i];

	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	dog->makeSound();
	cat->makeSound();
		
	delete dog;
	delete cat;

	Dog basic;

	basic.writeIdea("Who am I?", 0);

	Dog tmp = basic;

	std::cout << basic.getIdea(0) << std::endl;
	std::cout << tmp.getIdea(0) << std::endl;

	basic.makeSound();
	tmp.makeSound();
	
	// const AAnimal* unknown = new AAnimal(); // We can't use this line cause AAnimal is now an abstract class
	// unknown->makeSound();
	// delete unknown;

	return (0);
}