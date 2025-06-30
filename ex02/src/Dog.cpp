/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:05:45 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/30 17:05:46 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Dog.hpp"

// Default Constructor
Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain(); // "new" to allocates memory dynamically
	std::cout << "Dog default constructor Called" << std::endl;
}

// Copy Constructor
Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*other._brain); // Deep Copy
}

// Operator=
Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other); // Copy "_type"
		if(_brain)
			delete _brain; // delete old brain if exists
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