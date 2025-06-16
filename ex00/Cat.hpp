/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:07:16 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/16 17:34:37 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();                            // Default Constructor
		Cat(std::string type);            // Param Constructor
		Cat(const Cat& other);            // Copy Constructor
		Cat& operator=(const Cat& other); // Assignment operator
		~Cat();
		
		void makeSound(std::string sound);
};


#endif