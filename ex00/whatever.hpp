/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:02:01 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/07 16:57:07 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>
# include <iomanip>

# include "Awesome.hpp"

#define GRN "\033[0;32m"
#define WHT "\033[0;0m"
#define RED "\033[0;31m"


//Template of swap
template <typename T>
void swap(T & a, T & b)
{
    T temp;
    
    temp = a;
    a = b;
    b = temp;
}

//Template of min
template <typename T>
T const & min(T const & a, T const & b)
{
    return a < b ? a : b;
}

//Template of max
template <typename T>
T const & max(T const & a, T const & b)
{
    return(a > b ? a : b);
}


//Template test

template <typename T>
void test(T a, T b, int i)
{
    std::cout << RED << std::setfill('*') << std::setw(46);
    std::cout << "Test: " << i << std::setfill('*') << std::setw(46) << WHT << std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;
    ::swap(a, b);
    std::cout << GRN << "Swap : " << WHT << "a: " << a << " , b: " << b << std::endl;
    std::cout << GRN << "Min : " << WHT << ::min(a, b)<< std::endl;
    std::cout << GRN << "Max : " << WHT << ::max(a, b)<< std::endl;
}

# endif