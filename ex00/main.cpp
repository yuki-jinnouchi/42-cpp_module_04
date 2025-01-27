/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:31:16 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 17:23:06 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  j->makeSound();
  i->makeSound(); //will output the cat sound!
  meta->makeSound();
  delete meta;
  delete j;
  delete i;

  std::cout << std::endl;

  const WrongAnimal* wrong_meta = new WrongAnimal();
  const WrongAnimal* wrong_j = new WrongCat();

  std::cout << wrong_j->getType() << " " << std::endl;
  wrong_j->makeSound();
  wrong_meta->makeSound();
  delete wrong_meta;
  delete wrong_j;

  return 0;
}
