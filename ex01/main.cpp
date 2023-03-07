/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:09:39 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/07 18:02:59 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main(void)
{
    char t1[5] = {'a', 'b', 'c', 'd', 'e'};
    int t2[5] = {1, 2, 3, 4, 5};
    float t3[5] = {4.2f, 0.1f, 5.2f, 12.7f, 14.56f};
    double t4[5] = {0.2, 1.8, 5, 7.5, 7.0003};
    std::string t5[3] = {"chaine1", "chaine2", "chaine3"};
    
    test(t1, sizeof(t1) / sizeof(*t1), ft_print, 1);
    test(t2, sizeof(t2) / sizeof(*t2), ft_print, 2);
    test(t3, sizeof(t3) / sizeof(*t3), ft_print, 3);
    test(t4, sizeof(t4) / sizeof(*t4), ft_print, 4);
    test(t5, sizeof(t5) / sizeof(*t5), ft_print, 5);

    std::cout << std::endl << RED << "Intra Test" << WHT << std::endl;
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];
    iter(tab, 5, print);
    iter(tab2, 5, print);
    return 0;

    return 0;
}

