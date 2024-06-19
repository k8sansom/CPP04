/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:18:55 by ksansom           #+#    #+#             */
/*   Updated: 2024/06/19 11:30:19 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), _type("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy) {
	*this = copy;
	std::cout << "Dog copy constructor called" << std::endl;
}
Dog	&Dog::operator=(const Dog &src) {
	if (this != &src) {
		*this = src;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}