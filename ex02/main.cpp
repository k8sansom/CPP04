/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:34:29 by ksansom           #+#    #+#             */
/*   Updated: 2024/06/21 11:39:20 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    int animalCount = 10;
    AAnimal* animals[animalCount];

    for (int i = 0; i < animalCount / 2; ++i) {
        animals[i] = new Dog();
    }

    for (int i = animalCount / 2; i < animalCount; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < animalCount; ++i) {
        animals[i]->makeSound();
    }

	// Deep copy test
    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Original idea");

    Dog copiedDog = originalDog;
    copiedDog.getBrain()->setIdea(0, "Copied idea");

    std::cout << "Original Dog Brain Idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog Brain Idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;


    for (int i = 0; i < animalCount; ++i) {
        delete animals[i];
    }
    return 0;
}