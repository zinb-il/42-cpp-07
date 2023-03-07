/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:09:39 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/07 20:15:56 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main(void)
{
    Awesome a(8), b(9);
    
    test<char>('d', 'c', 1);
    test<int>(2, 3, 2);
    test<float>(5.4f, 4.2f, 3);
    test<double>(5.5, 3.14, 4);
    test("chaine1", "chaine2", 5);
    test(std::string("chaine1"), std::string("chaine2"), 6);
    test(a, b, 7);
    test(Awesome(44), Awesome(45), 8);

    
    return 0;
}


// int main( void ) {
//     int a = 2;
//     int b = 3;
//     ::swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
//     return 0;
// }


// int main(void)
// {
//     Awesome a(2), b(4);
//     swap(a, b);
//     std::cout << a << " " << b << std::endl;
//     std::cout << max(a, b) << std::endl;
//     std::cout << min(a, b) << std::endl;
    
//     return 0;
// }