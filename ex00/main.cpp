/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:09:07 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/16 18:32:08 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	// Creation of Animals
	Animal a;
	const Animal* meta = new Animal("Bobo");
	
	// Calling methods
	a.getType();
	meta->getType();
   
	// Manual Destruction of Animal
	delete meta;
	return 0;
}