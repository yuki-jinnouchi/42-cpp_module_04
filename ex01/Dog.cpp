/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:39:10 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 16:36:00 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Orthodox Canonical Form
Dog::Dog()
  : Animal("Dog") {
  std::cout << "Dog default constructor called." << std::endl;
  this->brain = new Brain();
}

Dog::~Dog() {
  std::cout << "Dog destructor called." << std::endl;
  delete this->brain;
}

Dog::Dog(const Dog &src)
: Animal(src) {
  std::cout \
    << "Dog copy constructor " \
    << "from " << src.type \
    << " called." << std::endl;
  this->brain = new Brain(*src.brain);
}

Dog &Dog::operator=(const Dog &rhs) {
  std::cout \
    << "Dog assignment operator " \
    << "from " << rhs.type \
    << " called." << std::endl;
  if (this == &rhs)
    return *this;
  this->type = rhs.type;
  if (this->brain)
    delete this->brain;
  this->brain = new Brain(*rhs.brain);
  return *this;
}

// Getters and Setters
Brain *Dog::getBrain(void) const {
  return this->brain;
}

void Dog::setBrain(Brain *newBrain) {
  this->brain = newBrain;
}

// Member functions
void Dog::makeSound(void) const {
  std::cout << "Wan Wan!!" << std::endl;
}
