/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:05:40 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/30 17:05:41 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Cat.hpp"

// Default constructor
Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain(); // allocate
	std::cout << "Cat constructor called\n";
}

// Copy Constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*other._brain); // deep copy
}

// Operator=
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other); // copy "_type"
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain); // deep copy
	}
	return *this;
}

//Destructor
Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called\n";
}

// Override Method
void Cat::makeSound() const
{
	std::cout << "Meow meow!!!\n";
}