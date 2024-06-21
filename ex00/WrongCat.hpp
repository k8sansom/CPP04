# ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongAnimal &copy);
		WrongCat& operator=(const WrongAnimal &src);

		void		makeSound(void) const;
};

#endif