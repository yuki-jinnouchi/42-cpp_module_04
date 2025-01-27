/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:28:44 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 17:33:28 by yjinnouc         ###   ########.fr       */
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
    << "from " << src.getType() \
    << " called." << std::endl;
  *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &lhs) {
  std::cout \
    << "WrongAnimal assignment operator " \
    << "from " << lhs.getType() \
    << " called." << std::endl;
  if (this != &lhs)
    this->type = lhs.type;
  return *this;
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
