/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 09:43:27 by ksansom           #+#    #+#             */
/*   Updated: 2024/06/21 10:02:55 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << _type << " constructor called" << std::endl;
	brain = new Brain();
	if (!brain) {
		std::cout << "Cat brain allocation failed" << std::endl;
		exit(1);
	}

}

Cat::Cat(const Cat &copy) : Animal(copy) {
	brain = new Brain(*copy.brain);
	if (!brain) {
		std::cout << "Cat brain copy allocation failed" << std::endl;
		exit(1);
	}
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	if (this != &src) {
		delete brain;
		brain = new Brain(*src.brain);
		if (!brain) {
			std::cout << "Cat copy assignment memory allocation failed" << std::endl;
			exit(1);
		}
		_type = src._type;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);		
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}
	
void	Cat::makeSound(void) const {
	std::cout << "meow" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}