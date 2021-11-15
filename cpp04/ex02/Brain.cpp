#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor called\n";
}

Brain::Brain(Brain const &src){
    std::cout << "Brain copy constructor called\n";
    *this = src;
}

Brain::~Brain(){
    std::cout << "Brain deconstructor called\n";
}