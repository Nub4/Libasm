#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    _brain = new Brain();
    std::cout << "Dog constructor called\n";
}

Dog::Dog(Dog const &src) : Animal(src){
    std::cout << "Dog copy constructor called\n";
   // _brain = new Brain(*src._brain);
    *this = src;
}

Dog::~Dog(){
    delete _brain;
    std::cout << "Dog destructor called\n";
}

void    Dog::makeSound() const{
    std::cout << "Dog says: VUF VUF\n";
}