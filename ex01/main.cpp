/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:24:37 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 16:45:15 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

/*
  In your main function, create and fill an array of Animal objects. Half of it will
  be Dog objects and the other half will be Cat objects. At the end of your program
  execution, loop over this array and delete every Animal. You must delete directly dogs
  and cats as Animals. The appropriate destructors must be called in the expected order.
  ...
  A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies
  are deep copies!
*/

int main(){

  std::cout << "# Basic Tests" << std::endl;

  const Animal* j = new Dog();
  const Animal* i = new Cat();

  static_cast<const Dog*>(j)->getBrain()->setIdea(0, "Am I dog??");
  static_cast<const Cat*>(i)->getBrain()->setIdea(0, "Am I cat??");
  std::cout << std::endl;

  std::cout << static_cast<const Cat*>(i)->getBrain()->getIdea(0) << std::endl;
  std::cout << static_cast<const Dog*>(j)->getBrain()->getIdea(0) << std::endl;
  std::cout << std::endl;

  delete j;
  delete i;
  std::cout << std::endl;

  std::cout << "# Advanced Tests" << std::endl;

  const Animal* array[4];

  int k = 0;
  while(k < 2)
    array[k++] = new Dog();
  while(k < 4)
    array[k++] = new Cat();
  std::cout << std::endl;

  static_cast<const Dog*>(array[0])->getBrain()->setIdea(0, "I'm a Dog");
  static_cast<const Dog*>(array[1])->getBrain()->setIdea(0, "I'm a Dog too");
  static_cast<const Cat*>(array[2])->getBrain()->setIdea(0, "I'm a Cat");
  static_cast<const Cat*>(array[3])->getBrain()->setIdea(0, "I'm a Cat too");
  static_cast<const Dog*>(array[0])->getBrain()->setIdea(1, "I'm happy");
  static_cast<const Dog*>(array[1])->getBrain()->setIdea(1, "I'm hungry");
  static_cast<const Cat*>(array[2])->getBrain()->setIdea(1, "I'm sleepy");
  static_cast<const Cat*>(array[3])->getBrain()->setIdea(1, "I'm angry");

  std::cout \
    << static_cast<const Dog*>(array[0])->getBrain()->getIdea(0) << ", " \
    << static_cast<const Dog*>(array[0])->getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << static_cast<const Dog*>(array[1])->getBrain()->getIdea(0) << ", " \
    << static_cast<const Dog*>(array[1])->getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << static_cast<const Cat*>(array[2])->getBrain()->getIdea(0) << ", " \
    << static_cast<const Cat*>(array[2])->getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << static_cast<const Cat*>(array[3])->getBrain()->getIdea(0) << ", " \
    << static_cast<const Cat*>(array[3])->getBrain()->getIdea(1) \
    << std::endl;
  std::cout << std::endl;

  Dog dog1 = *static_cast<const Dog*>(array[0]);
  Dog dog2 = *static_cast<const Dog*>(array[1]);

  Cat cat1 = *static_cast<const Cat*>(array[2]);
  Cat cat2 = *static_cast<const Cat*>(array[3]);

  std::cout << std::endl;

  std::cout \
    << dog1.getBrain()->getIdea(0) << ", " \
    << dog1.getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << dog2.getBrain()->getIdea(0) << ", " \
    << dog2.getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << cat1.getBrain()->getIdea(0) << ", " \
    << cat1.getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << cat2.getBrain()->getIdea(0) << ", " \
    << cat2.getBrain()->getIdea(1) \
    << std::endl;
  std::cout << std::endl;

  dog2 = dog1;
  cat2 = cat1;
  std::cout << std::endl;

  std::cout \
    << dog1.getBrain()->getIdea(0) << ", " \
    << dog1.getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << dog2.getBrain()->getIdea(0) << ", " \
    << dog2.getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << cat1.getBrain()->getIdea(0) << ", " \
    << cat1.getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << cat2.getBrain()->getIdea(0) << ", " \
    << cat2.getBrain()->getIdea(1) \
    << std::endl;
  std::cout << std::endl;

  dog1.getBrain()->setIdea(0, "I'm a Dog?????");
  cat1.getBrain()->setIdea(0, "I'm a Cat?????");
  std::cout \
    << dog1.getBrain()->getIdea(0) << ", " \
    << dog1.getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << dog2.getBrain()->getIdea(0) << ", " \
    << dog2.getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << cat1.getBrain()->getIdea(0) << ", " \
    << cat1.getBrain()->getIdea(1) \
    << std::endl;
  std::cout \
    << cat2.getBrain()->getIdea(0) << ", " \
    << cat2.getBrain()->getIdea(1) \
    << std::endl;
  std::cout << std::endl;

  k = 0;
  while(k < 4)
    delete array[k++];

  return 0;
}
