/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:02:01 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/07 18:00:55 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <iomanip>

# include "Awesome.hpp"

#define GRN "\033[0;32m"
#define WHT "\033[0;0m"
#define RED "\033[0;31m"


//Template ft_print
template <typename T>
void ft_print(T const & a)
{
    std::cout << a << " ";
}

//Template print
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


//Template iter

template <typename T>
void iter(T *t, size_t s, void (*f)(T const &))
{
    for (size_t i = 0; i < s; i++)
        f(t[i]);
}


//Template test

template <typename T>
void test(T * a, size_t s, void (*f)(T const &) , int i)
{
    std::cout << RED << std::setfill('*') << std::setw(46);
    std::cout << "Test: " << i << std::setfill('*') << std::setw(46) << WHT << std::endl;
    iter(a, s, f);
    std::cout << std::endl;
}


# endif