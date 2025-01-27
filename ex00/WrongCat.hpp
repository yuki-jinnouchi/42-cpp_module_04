/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:29:27 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 17:32:18 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
  public:
    // Orthodox Canonical Form
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &src);
    WrongCat &operator=(const WrongCat &lhs);

    // Member functions
    void makeSound(void) const;
};

#endif
