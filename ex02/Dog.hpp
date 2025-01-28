/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:37:41 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 17:10:54 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
  private:
    Brain *brain;
  public:
    // Orthodox Canonical Form
    Dog();
    ~Dog();
    Dog(const Dog &src);
    Dog &operator=(const Dog &rhs);

    // Getters and Setters
    Brain *getBrain(void) const;
    void setBrain(Brain *newBrain);

    // Member functions
    void makeSound(void) const;
};

#endif
