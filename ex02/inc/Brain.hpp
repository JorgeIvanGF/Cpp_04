/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:57:00 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/30 17:04:51 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();                            // Default constructor
		Brain(const Brain& other);         // Copy constructor
		Brain& operator=(const Brain& other); // Assignment operator
		~Brain();                           // Destructor

		std::string getIdea(int index) const;
		void setIdea(int index, const std::string& idea);
};

#endif