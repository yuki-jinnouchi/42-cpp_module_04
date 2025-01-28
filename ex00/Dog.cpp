/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:39:10 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 23:01:33 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Orthodox Canonical Form
Dog::Dog()
  : Animal("Dog") {
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
    << "from " << src.type \
    << " called." << std::endl;
  *this = src;
}

Dog &Dog::operator=(const Dog &rhs) {
  std::cout \
    << "Dog assignment operator " \
    << "from " << rhs.type \
    << " called." << std::endl;
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

// Member functions
void Dog::makeSound(void) const {
  std::cout << "Wan Wan!!" << std::endl;
}
