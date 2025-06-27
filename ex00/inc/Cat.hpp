/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:07:16 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/27 21:20:19 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal //inherites
{
	public:
		Cat();                            // Default Constructor
		Cat(const Cat& other);            // Copy Constructor
		Cat& operator=(const Cat& other); // Assignment operator
		~Cat();
		
		void makeSound() const;
};


#endif