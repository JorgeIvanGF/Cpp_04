/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:09:07 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/27 21:47:34 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/WrongCat.hpp"
#include "inc/WrongAnimal.hpp"

int main()
{
	// Creation of Animals
	std::cout << MAGENTA << "\nCreation of Animals:\n" << RESET;
	Animal a;
	const Animal* meta = new Animal("Bob");
	const Animal* b = new Dog();
	const Animal* c = new Cat();

	// Calling methods
	std::cout << MAGENTA << "\nCalling methods:\n" << RESET;
	std::cout << YELLOW << b->getType() << RESET << " makes sound: ";
	b->makeSound(); // Woof woof!
	std::cout << YELLOW << c->getType() << RESET << " makes sound: ";
	c->makeSound(); // Meow meow!
	std::cout << YELLOW << meta->getType() << RESET << " makes sound: ";
	meta->makeSound(); // *generic animal sound*
   
	// Manual Destruction of Animal
	std::cout << MAGENTA << "\nDestruction of Animals:\n" << RESET;
	delete meta;
	delete b;
	delete c;

	std::cout << MAGENTA << "\nWrongAnimal Tests " << RESET << std::endl;

	// To test if "virtual" affects the behavior or not
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "Type: " << wrongCat->getType() << std::endl;
	wrongCat->makeSound(); // Will call WrongAnimal::makeSound()

	std::cout << MAGENTA << "\nDestruction of WrongAnimals:\n" << RESET;
	
	delete wrong;
	delete wrongCat;
	
	return 0;
}