/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:54:20 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/27 21:54:21 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Animal.hpp"

Animal::Animal() : _type("UnTyped")
{
	std::cout << "Animal default constructor Called" << std::endl;
}

Animal::Animal(const std::string& type) : _type(type)
{
	std::cout << "Animal " << YELLOW << type << RESET << " created." << std::endl;
}

Animal::Animal(const Animal &other)
	: _type(other._type)
{
	std::cout << "Animal copy constructor called with type " << YELLOW << other._type << RESET <<".\n";
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called.\n";
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal type " << YELLOW << _type << RESET << " destructed." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "General sound emited!!\n";
}

std::string Animal::getType() const
{
	return (_type);
}