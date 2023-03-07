/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:37:17 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/07 16:46:39 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef AWESOME_HPP
# define AWESOME_HPP

# include <iostream>
# include <string>
# include <iomanip>


class Awesome
{
    public:
        Awesome(void) : _n(0) {}
        Awesome( int n ) : _n( n ) {}
        Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
        int get_n() const { return _n; }
    private:
        int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

# endif