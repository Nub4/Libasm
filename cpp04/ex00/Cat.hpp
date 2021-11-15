#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        ~Cat();
    
        Cat &operator=(Cat const &rhs){
            Animal::operator=(rhs);
            return (*this);
        }

        void    makeSound() const;
};

#endif