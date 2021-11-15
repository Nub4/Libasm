#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        ~Dog();

        Dog &operator=(Dog const &rhs){
            Animal::operator=(rhs);
            return (*this);
        }
    
        void    makeSound() const;
};

#endif