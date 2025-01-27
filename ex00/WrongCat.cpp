/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:29:50 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 17:28:51 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>
#include <string>

// Orthodox Canonical Form
WrongCat::WrongCat(){
  std::cout << "WrongCat default constructor called." << std::endl;
  this->setType("WrongCat");
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
  : WrongAnimal(src) {
  std::cout \
    << "WrongCat copy constructor " \
    << "from " << src.getType() \
    << " called." << std::endl;
  *this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &lhs) {
  std::cout \
    << "WrongCat assignment operator " \
    << "from " << lhs.getType() \
    << " called." << std::endl;
  if (this != &lhs)
    this->setType(lhs.getType());
  return *this;
}

// Member functions
void WrongCat::makeSound(void) const {
  WrongAnimal::makeSound();
}
