/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:05:17 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/30 17:05:18 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp" // New

class Dog : public Animal
{
	private:
		Brain* _brain; // //new attribute Brain Pointer
	
	public:
		Dog();                            // Default Constructor
		Dog(const Dog& other);            // Copy Constructor
		Dog& operator=(const Dog& other); // Assignment operator
		~Dog();
		
		void makeSound() const;
};


#endif