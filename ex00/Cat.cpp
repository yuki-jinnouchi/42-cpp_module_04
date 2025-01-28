/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:37:33 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 23:01:08 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Orthodox Canonical Form
Cat::Cat()
  : Animal("Cat") {
  std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat &src)
  : Animal(src) {
  std::cout \
    << "Cat copy constructor " \
    << "from " << src.type \
    << " called." << std::endl;
  *this = src;
}

Cat &Cat::operator=(const Cat &rhs) {
  std::cout \
    << "Cat assignment operator " \
    << "from " << rhs.type \
    << " called." << std::endl;
  if (this != &rhs)
    this->type = rhs.type;
  return *this;
}

// Member functions
void Cat::makeSound(void) const {
  std::cout << "..." << std::endl;
}
