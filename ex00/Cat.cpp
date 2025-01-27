/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:37:33 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 17:25:17 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Orthodox Canonical Form
Cat::Cat(){
  std::cout << "Cat default constructor called." << std::endl;
  this->setType("Cat");
}

Cat::~Cat() {
  std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat &src)
  : Animal(src) {
  std::cout \
    << "Cat copy constructor " \
    << "from " << src.getType() \
    << " called." << std::endl;
  *this = src;
}

Cat &Cat::operator=(const Cat &lhs) {
  std::cout \
    << "Cat assignment operator " \
    << "from " << lhs.getType() \
    << " called." << std::endl;
  if (this != &lhs)
    this->setType(lhs.getType());
  return *this;
}

// Member functions
void Cat::makeSound(void) const {
  std::cout << "..." << std::endl;
}
