/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:39:10 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 17:25:10 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Orthodox Canonical Form
Dog::Dog(){
  std::cout << "Dog default constructor called." << std::endl;
  this->setType("Dog");
}

Dog::~Dog() {
  std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog &src)
: Animal(src) {
  std::cout \
    << "Dog copy constructor " \
    << "from " << src.getType() \
    << " called." << std::endl;
  *this = src;
}

Dog &Dog::operator=(const Dog &lhs) {
  std::cout \
    << "Dog assignment operator " \
    << "from " << lhs.getType() \
    << " called." << std::endl;
  if (this != &lhs)
    this->setType(lhs.getType());
  return *this;
}

// Member functions
void Dog::makeSound(void) const {
  std::cout << "Wan Wan!!" << std::endl;
}
