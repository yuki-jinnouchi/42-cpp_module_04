/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:38:06 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 17:11:22 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal{
  protected:
    std::string type;

  public:
    // Orthodox Canonical Form
    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal &src);
    AAnimal &operator=(const AAnimal &rhs);

    // Optional Constructor
    AAnimal(const std::string newType);

    // Getters and Setters
    virtual std::string getType(void) const;
    virtual void setType(const std::string newType);

    // Member functions
    virtual void makeSound(void) const = 0;
};

#endif
