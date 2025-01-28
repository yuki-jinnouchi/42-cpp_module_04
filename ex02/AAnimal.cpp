/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:38:08 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 17:10:30 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Orthodox Canonical Form
AAnimal::AAnimal()
  : type("Default Animal"){
    std::cout << "Animal default constructor called." << std::endl;
}

AAnimal::~AAnimal() {
  std::cout << "Animal destructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
  std::cout \
    << "Animal copy constructor " \
    << "from " << src.type \
    << " called." << std::endl;
  *this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
  std::cout \
    << "Animal assignment operator " \
    << "from " << rhs.type \
    << " called." << std::endl;
  if (this == &rhs)
    return *this;
  this->type = rhs.type;
  return *this;
}

// Optional Constructor
AAnimal::AAnimal(const std::string newType)
  : type(newType) {
    std::cout << "Animal constructor called." << std::endl;
}

// Getters and Setters
std::string AAnimal::getType(void) const {
  return this->type;
}

void AAnimal::setType(const std::string newType) {
  this->type = newType;
}

// Member functions
void AAnimal::makeSound(void) const {
  std::cout << "default Animal sound" << std::endl;
}
