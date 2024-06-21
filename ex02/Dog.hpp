/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:15:59 by ksansom           #+#    #+#             */
/*   Updated: 2024/06/21 11:35:38 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
	public:
		Dog();
		Dog(const Dog &copy);
		Dog	&operator=(const Dog &src);
		~Dog();

    	Brain* 	getBrain() const;
		void 	makeSound() const override;
	private:
		Brain *brain;
};

#endif