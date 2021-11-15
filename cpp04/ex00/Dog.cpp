#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog constructor called\n";
}

Dog::~Dog(){
    std::cout << "Dog destructor called\n";
}

void    Dog::makeSound() const{
    std::cout << "Dog says: VUF VUF\n";
}