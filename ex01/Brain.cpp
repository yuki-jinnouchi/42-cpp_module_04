/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:22:19 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 22:37:30 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Orthodox Canonical Form
Brain::Brain() {
  std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain() {
  std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain &src) {
  std::cout << "Brain copy constructor called." << std::endl;
  *this = src;
}

Brain &Brain::operator=(const Brain &rhs) {
  std::cout << "Brain assignment operator called." << std::endl;
  if (this != &rhs) {
    for (int i = 0; i < 100; i++) {
      this->ideas[i] = rhs.ideas[i];
    }
  }
  return *this;
}

// Getter and Setter
std::string Brain::getIdea(int const index) const {
  if (index < 0 || index >= 100) {
    return "Index out of range.";
  }
  return this->ideas[index];
}

// Member functions
int Brain::setIdea(int const index, const std::string idea) {
  if (index < 0 || index >= 100) {
    return FAILURE;
  }
  this->ideas[index] = idea;
  return SUCCESS;
}
