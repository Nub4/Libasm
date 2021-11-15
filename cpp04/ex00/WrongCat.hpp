#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();

        WrongCat &operator=(WrongCat const &rhs){
            WrongAnimal::operator=(rhs);
            return (*this);
        }

        void    makeSound() const;
};

#endif