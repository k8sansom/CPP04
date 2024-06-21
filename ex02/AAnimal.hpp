# ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
public:
    AAnimal();
    AAnimal(const std::string& type);
    AAnimal(const AAnimal& other);
    virtual ~AAnimal();
    AAnimal& operator=(const AAnimal& other);

    virtual void makeSound() const = 0; // Pure virtual function

protected:
    std::string _type;
};

#endif