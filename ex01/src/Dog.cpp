/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:54:47 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/27 22:26:50 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Default Constructor
Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain(); // "new" to allocates memory
	std::cout << "Dog default constructor Called" << std::endl;
}

// Copy Constructor
Dog::Dog(const Dog& other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

// Operator=
Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other); // Copy base part
		if(_brain)
			delete _brain;
		_brain = new Brain(*other._brain); // deep copy
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain; // to clean up
	std::cout << "Dog destructor called" << std::endl;
}

// Override Method
void Dog::makeSound() const
{
	std::cout << "Woof woof!!!\n";
}