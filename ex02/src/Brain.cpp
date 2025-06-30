/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:05:34 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/30 17:05:35 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Brain.hpp"

// Default constructor
Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = ""; // optional: initialize empty ideas
}

// Copy constructor (deep copy)
Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = other._ideas[i];
}

// Assignment operator (deep copy)
Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignment operator called =" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}

// Destructor
Brain::~Brain() {
	std::cout << "Brain destroyed" << std::endl;
}

// Accessor
std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return _ideas[index];
	return "";
}

// Mutator
void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}