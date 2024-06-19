/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:15:59 by ksansom           #+#    #+#             */
/*   Updated: 2024/06/19 11:27:20 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &copy);
		Dog	&operator=(const Dog &src);
	protected:
		std::string	_type;
};

#endif