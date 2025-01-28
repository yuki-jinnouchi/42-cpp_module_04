/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:28:44 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 23:27:29 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

// Orthodox Canonical Form
WrongAnimal::WrongAnimal()
  : type("Default WrongAnimal") {
    std::cout << "WrongAnimal default constructor called." << std::endl;
  }

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
  std::cout \
    << "WrongAnimal copy constructor " \
    << "from " << src.type \
    << " called." << std::endl;
  *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  std::cout \
    << "WrongAnimal assignment operator " \
    << "from " << rhs.type \
    << " called." << std::endl;
  if (this == &rhs)
    return *this;
  this->type = rhs.type;
  return *this;
}

// Optional Constructor
WrongAnimal::WrongAnimal(const std::string newType)
  : type(newType) {
    std::cout << "WrongAnimal constructor called." << std::endl;
}

// Getters and Setters
std::string WrongAnimal::getType(void) const {
  return this->type;
}

void WrongAnimal::setType(const std::string newType) {
  this->type = newType;
}

// Member functions
void WrongAnimal::makeSound(void) const {
  std::cout << "WrongAnimal sound" << std::endl;
}
