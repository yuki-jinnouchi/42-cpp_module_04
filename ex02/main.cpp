/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:24:37 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 17:12:35 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AAnimal.hpp"
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

  // AAnimal defaultAnimal;
  Dog dog;
  Cat cat;
  std::cout << std::endl;

  // defaultAnimal.makeSound();
  dog.makeSound();
  cat.makeSound();
  std::cout << std::endl;

  return 0;
}
