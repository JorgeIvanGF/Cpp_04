/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:54:47 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/27 21:54:58 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Default Constructor
Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog default constructor Called" << std::endl;
}

// Copy Constructor
Dog::Dog(const Dog& other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor called" << std::endl;
}

// Operator=
Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

// Override Method
void Dog::makeSound() const
{
	std::cout << "Woof woof!!!\n";
}