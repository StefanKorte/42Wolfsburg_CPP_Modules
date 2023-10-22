#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
    std::cout << "The weapon " << getType() << " gets created." << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "The weapon " << getType() << " gets destroyed." << std::endl;
}

const std::string &Weapon::getType(void) const
{
    return (_type);
}

void    Weapon::setType(std::string type)
{
    std::cout << "The weapon " << _type
        << " transforms into a " << type << "." << std::endl;
    _type = type;
}