/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:37:17 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/07 17:54:56 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
#include <exception>
# include <iomanip>

#define GRN "\033[0;32m"
#define WHT "\033[0;0m"
#define RED "\033[0;31m"


template <typename T>
class Array
{
    public:
        Array<T>(): _a(NULL), _size(0){return;}
        Array<T>(unsigned int n): _a(NULL), _size(n)
        {
            if(_size)
                _a = new T[_size];
        };
        Array<T>(Array<T> const & obj)
        {
            _size = obj.size();
            if (_size)
                _a = new T[_size];
            for (size_t i = 0; i < _size; i++)
                _a[i] = obj[i];
        };
        ~Array<T>(){delete [] _a;_a = NULL; _size = 0;};
        Array<T> & operator=(Array<T> const & obj)
        {
            if (_size)
                delete [] _a;
            _a = NULL;
            _size = obj.size();
            _a = new T[_size];
            for (size_t i = 0; i < _size; i++)
                _a[i] = obj[i];
            return *this;
        };
        T & operator[](size_t i)
        {
            if (i >= _size)
                throw (Array::HorsPlage());
            return _a[i];
        };

        T const & operator[](size_t i) const
        {
            if (i >= _size)
                throw (HorsPlage());
            return _a[i];
        };

        size_t size() const{return this->_size;};
        class  HorsPlage: public std::exception
        {
            public:
                const char* what(void) const throw() {return "Hors Plage";};
        };

    private:
        T *_a;
        size_t _size;
};


template <typename T>
void test(std::size_t size , int i) {
    Array<T> b(size);

    std::cout << RED << std::setfill('*') << std::setw(46);
    std::cout << "Test: " << i << std::setfill('*') << std::setw(46) << WHT << std::endl;
    std::cout << "Remplir le tableau" << std::endl;
    for (std::size_t i = 0 ; i < size ; ++i) {
        b[i] = static_cast<T>(i + 'a');
        std::cout << b[i] << " ";
    }
    std::cout << std::endl << std::endl;
    try {
        std::cout << b[size] << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
# endif