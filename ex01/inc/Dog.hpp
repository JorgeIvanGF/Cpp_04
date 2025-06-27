/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:53:44 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/27 21:53:45 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();                            // Default Constructor
		Dog(const Dog& other);            // Copy Constructor
		Dog& operator=(const Dog& other); // Assignment operator
		~Dog();
		
		void makeSound() const;
};


#endif