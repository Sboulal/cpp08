/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:15:40 by saboulal          #+#    #+#             */
/*   Updated: 2024/05/06 18:13:33 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span
{
    private:
        unsigned int m_size;
        unsigned int m_index;
        int *m_array;
    public:
        Span();
        Span(unsigned int size);
        Span(Span const &span);
        Span &operator=(Span const &span);
        ~Span();
        void addNumber(int number);
        void addNumber(int *begin, int *end);
        int shortestSpan();
        int longestSpan();
};

#endif