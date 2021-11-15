#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();

        Animal &operator=(Animal const &rhs){
            _type = rhs._type;
            return (*this);
        }
    
        virtual void    makeSound() const;
        std::string getType() const;

    protected:
        std::string _type;
};

#endif