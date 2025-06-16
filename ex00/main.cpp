/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:09:07 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/16 18:42:47 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Animal.hpp"

int main()
{
	// Creation of Animals
	Animal a;
	const Animal* meta = new Animal("Bobo");
	
	// Calling methods
	a.getType();
	meta->getType();

	a.makeSoound();
	meta->makeSoound();
   
	// Manual Destruction of Animal
	delete meta;
	return 0;
}