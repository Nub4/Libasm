#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(Cat const &src);
        ~Cat();
    
        Cat &operator=(Cat const &rhs){
            Animal::operator=(rhs);
            return (*this);
        }

        void    makeSound() const;
    
    private:
        Brain *_brain;
};

#endif