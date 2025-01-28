/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:22:17 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 22:37:30 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

#define SUCCESS 0
#define FAILURE 1

class Brain{
  private:
    std::string ideas[100];
  public:
    // Orthodox Canonical Form
    Brain();
    ~Brain();
    Brain(const Brain &src);
    Brain &operator=(Brain const &rhs);

    // Getter and Setter
    std::string getIdea(int const index) const;

    // Member functions
    int setIdea(int const index, const std::string idea);
};

#endif
