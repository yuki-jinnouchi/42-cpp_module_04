/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:37:36 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 22:43:41 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat :public Animal{
  public:
    // Orthodox Canonical Form
    Cat();
    ~Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &rhs);

    // Member functions
    void makeSound(void) const;
};

#endif
