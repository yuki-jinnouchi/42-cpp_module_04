/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:38:06 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 16:51:42 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
  protected:
    std::string type;

  public:
    // Orthodox Canonical Form
    Animal();
    virtual ~Animal();
    Animal(const Animal &src);
    Animal &operator=(const Animal &rhs);

    // Optional Constructor
    Animal(const std::string newType);

    // Getters and Setters
    std::string getType(void) const;
    void setType(const std::string newType);

    // Member functions
    virtual void makeSound(void) const;
};

#endif
