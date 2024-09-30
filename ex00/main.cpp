/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:24:35 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/30 20:31:58 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

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
	isdog->makeSound(); // will print unrecognizable sound because it's an Animal class
	unknown->makeSound();
	dog->makeSound();
	cat->makeSound(); //will output the cat sound!

	delete meta;
	delete unknown;
	delete isdog;
	delete dog;
	delete cat;

	const WrongAnimal* wanimal = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << "\nWRONG ANIMALS\n" << std::endl;
	
	std::cout << wanimal->getType() << ": ";
	wanimal->makeSound();
	std::cout << "\n" << wrongcat->getType() << ": ";
	wrongcat->makeSound(); // Will print wrong animal because the makeSound function is not virtual
	std::cout << std::endl;
	delete wanimal;
	delete wrongcat;
	WrongCat badcat;
	badcat.makeSound(); // Here it will make the Wrong Meow because it's not instantiated as a wrong animal pointer
	return (0);
}