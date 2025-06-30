/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:08:14 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/30 17:12:47 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "inc/Animal.hpp"
#include "inc/Dog.hpp"
#include "inc/Cat.hpp"

#define N 4 // Number of Animals for the array

int main()
{
    std::cout << MAGENTA << "\nCreating Animals ===\n"<< RESET;
	
	// // TO TEST ABSTRACT
	// const Animal a;
	
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

	// Copy dog1 into dog2
	std::cout << MAGENTA << "\nCopying Dogs\n"<< RESET;
	Dog dog2 = dog1; // copy constructor

	std::cout << MAGENTA << "Destroying dog1 and dog2...\n"<< RESET;

	std::cout << L_GREEN << "\n..............next test............\n"<< RESET;

    
	std::cout << MAGENTA << "\nARRAY OF ANIMALS" << RESET << std::endl;

	std::cout  << "Creating " << YELLOW << N << RESET <<" animals." << std::endl;

	Animal* animals[N];

	// Fill array: first half Dogs, second half Cats
	for (int i = 0; i < N / 2; ++i)
		animals[i] = new Dog();
	for (int i = N / 2; i < N; ++i)
		animals[i] = new Cat();

	std::cout << MAGENTA << "\nDELETING ANIMALS" << RESET << std::endl;

	for (int i = 0; i < N; ++i)
		delete animals[i]; // should call proper destructors

	std::cout << MAGENTA << "\nDEEP COPY TEST"<< RESET << std::endl;

	Dog original;
	Dog copy = original;

	std::cout << "Original address: " << &original << std::endl;
	std::cout << "Copy address    : " << &copy << std::endl;

	std::cout << "Modifying copy's brain..." << std::endl;
	copy.makeSound(); // still works

	// You could add `setIdea()` and `getIdea()` accessors if you want to test brains directly

	std::cout << MAGENTA << "\n Done " << RESET << std::endl;
	return 0;
}
