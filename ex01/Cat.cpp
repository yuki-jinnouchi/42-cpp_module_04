/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:37:33 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 16:35:54 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Orthodox Canonical Form
Cat::Cat()
  : Animal("Cat") {
  std::cout << "Cat default constructor called." << std::endl;
  this->brain = new Brain();
}

Cat::~Cat() {
  std::cout << "Cat destructor called." << std::endl;
  delete this->brain;
}

Cat::Cat(const Cat &src)
  : Animal(src) {
  std::cout \
    << "Cat copy constructor " \
    << "from " << src.type \
    << " called." << std::endl;
  this->brain = new Brain(*src.brain);
}

Cat &Cat::operator=(const Cat &rhs) {
  std::cout \
    << "Cat assignment operator " \
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
Brain *Cat::getBrain(void) const {
  return this->brain;
}

void Cat::setBrain(Brain *newBrain) {
  this->brain = newBrain;
}

// Member functions
void Cat::makeSound(void) const {
  std::cout << "..." << std::endl;
}
