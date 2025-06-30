/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:04:40 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/30 17:06:39 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

// Colors
#define RESET   "\033[0m"
#define YELLOW  "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RED "\033[0;31m"
#define L_GREEN "\033[1;32m"

class Animal
{
	protected:
		std::string _type;
		
	public:
		Animal();                               // Default Constructor
		Animal(const std::string& type);        // Param Constructor
		Animal(const Animal& other);            // Copy Constructor
		Animal& operator=(const Animal& other); // Assignment operator
		virtual ~Animal();   // "virtual" to cleanup not only the base class, but the inherited too.
	
		virtual void makeSound() const = 0; // ABSTRACT METHOD
		std::string getType() const;
	
};

#endif