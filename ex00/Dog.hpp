/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:37:41 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 22:37:30 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal{
  public:
    // Orthodox Canonical Form
    Dog();
    ~Dog();
    Dog(const Dog &src);
    Dog &operator=(const Dog &rhs);

    // Member functions
    void makeSound(void) const;
};

#endif
