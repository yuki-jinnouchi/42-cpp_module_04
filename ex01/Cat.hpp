/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:37:36 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 23:36:57 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat :public Animal{
  private:
    Brain *brain;
  public:
    // Orthodox Canonical Form
    Cat();
    ~Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &rhs);

    // Getters and Setters
    Brain *getBrain(void) const;
    void setBrain(Brain *newBrain);

    // Member functions
    void makeSound(void) const;
};

#endif
