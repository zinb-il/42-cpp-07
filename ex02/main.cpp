/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:09:39 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/07 22:50:32 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
    test<int>(10, 1);
    test<double>(10, 2);
    test<char>(10, 3);
    
    std::cout << RED << std::setfill('*') << std::setw(46);
    std::cout << "Test: " << std::setfill('*') << std::setw(46) << WHT << std::endl;
    Array<std::string> arr1(3);
    arr1[0] = "chaine1";
    arr1[1] = "chaine2";
    arr1[2] = "chaine3";
    for (std::size_t i = 0 ; i < arr1.size() ; ++i)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;
    Array<std::string> arr2(arr1);
    for (std::size_t i = 0 ; i < arr1.size() ; ++i)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;
    Array<std::string> arr3;
    arr3 = arr1;
    for (std::size_t i = 0 ; i < arr1.size() ; ++i)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;
    try {
        std::cout << arr3[67];
    } 
    catch (std::exception& e) 
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}

