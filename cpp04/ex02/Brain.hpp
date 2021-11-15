#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    public:
        Brain();
        Brain(Brain const &src);
        ~Brain();

        Brain &operator=(Brain const &rhs){
            *_ideas = *rhs._ideas;
            return (*this);
        }

    private:
        std::string _ideas[100];
};

#endif