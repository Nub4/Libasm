#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "WrongCat construtor called\n";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called\n";
}

void    WrongCat::makeSound() const{
    std::cout << "WrongCat makes a sound!\n";
}