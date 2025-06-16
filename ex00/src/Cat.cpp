/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:41:28 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/16 20:57:41 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Default constructor
Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat constructor called\n";
}

// Copy Constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	*this = other;
	std::cout << "Cat copy constructor called" << std::endl;
}

// Operator=
Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

//Destructor
Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

// Override Method
void Cat::makeSound() const
{
	std::cout << "Meow meow!!!\n";
}