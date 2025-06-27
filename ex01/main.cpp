/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 22:58:32 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/27 23:34:41 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"

int main()
{
	std::cout << MAGENTA << "\nCreating Animals ===\n"<< RESET;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << MAGENTA << "\nMaking Sounds\n"<< RESET;
	j->makeSound(); // Woof woof!!!
	i->makeSound(); // Meow meow!!!

	std::cout << MAGENTA << "\nDeleting Animals\n"<< RESET;
	delete j; // should call Dog and Brain destructors
	delete i; // should call Cat and Brain destructors

	std::cout << MAGENTA << "\nDeep Copy Test\n"<< RESET;

	Dog dog1;
	dog1.makeSound();

	// Set an idea in dog1's brain
	//dog1.getType(); // just for fun
	// can't access _brain directly (private)

	// Copy dog1 into dog2
	Dog dog2 = dog1; // copy constructor

	std::cout << MAGENTA << "Destroying dog1 and dog2...\n"<< RESET;

	return 0;
}