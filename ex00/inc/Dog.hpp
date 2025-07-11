/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:05:06 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/16 20:36:05 by jorgutie         ###   ########.fr       */
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