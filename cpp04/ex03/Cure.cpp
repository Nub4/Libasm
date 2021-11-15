#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &src){
    *this = src;
}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure &rhs){
    AMateria::operator=(rhs);
    return *this;
}

AMateria* Cure::clone() const{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
