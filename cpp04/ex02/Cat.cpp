#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    _brain = new Brain();
    std::cout << "Cat constructor called\n";
}

Cat::Cat(Cat const &src) : Animal(src){
    std::cout << "Cat copy constructor called\n";
 //   _brain = new Brain(*src._brain);
    *this = src;
}

Cat::~Cat(){
    delete _brain;
    std::cout << "Cat destructor called\n";
}

void    Cat::makeSound() const{
    std::cout << "Cat says: MIAUUUU\n";
}