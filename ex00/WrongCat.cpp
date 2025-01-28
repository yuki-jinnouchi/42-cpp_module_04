/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:29:50 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 23:02:08 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>
#include <string>

// Orthodox Canonical Form
WrongCat::WrongCat()
  : WrongAnimal("WrongCat") {
  std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
  : WrongAnimal(src) {
  std::cout \
    << "WrongCat copy constructor " \
    << "from " << src.type \
    << " called." << std::endl;
  *this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
  std::cout \
    << "WrongCat assignment operator " \
    << "from " << rhs.type \
    << " called." << std::endl;
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

// Member functions
void WrongCat::makeSound(void) const {
  WrongAnimal::makeSound();
}
