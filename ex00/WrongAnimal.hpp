/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:28:54 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 22:50:18 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
  protected:
    std::string type;

  public:
    // Orthodox Canonical Form
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal &operator=(const WrongAnimal &rhs);

    // Optional Constructor
    WrongAnimal(const std::string newType);

    // Getters and Setters
    std::string getType(void) const;
    void setType(const std::string newType);

    // Member functions
    void makeSound(void) const;
};

#endif
