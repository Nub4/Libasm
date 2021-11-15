#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        virtual ~WrongAnimal();

        WrongAnimal &operator=(WrongAnimal const &rhs){
            _type = rhs._type;
            return (*this);
        }

        std::string getType() const;
        void    makeSound() const;
    
    protected:
        std::string _type;
};

#endif