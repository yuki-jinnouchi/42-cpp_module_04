/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:38:08 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 17:34:21 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Orthodox Canonical Form
Animal::Animal()
  : type("Default Animal"){
    std::cout << "Animal default constructor called." << std::endl;
  }

Animal::~Animal() {
  std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal &src) {
  std::cout \
    << "Animal copy constructor " \
    << "from " << src.getType() \
    << " called." << std::endl;
  *this = src;
}

Animal &Animal::operator=(const Animal &lhs) {
  std::cout \
    << "Animal assignment operator " \
    << "from " << lhs.getType() \
    << " called." << std::endl;
  if (this != &lhs) {
    this->type = lhs.type;
  }
  return *this;
}

// Getters and Setters
std::string Animal::getType(void) const {
  return this->type;
}

void Animal::setType(const std::string newType) {
  this->type = newType;
}

// Member functions
void Animal::makeSound(void) const {
  std::cout << "default Animal sound" << std::endl;
}
