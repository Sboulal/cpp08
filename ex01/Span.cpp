/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:15:44 by saboulal          #+#    #+#             */
/*   Updated: 2024/05/06 18:04:32 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    m_size = 0;
    m_index = 0;
    m_array = NULL;
}

Span::Span(unsigned int size)
{
    m_size = size;
    m_index = 0;
    m_array = new int[size];
}

Span::Span(Span const &span)
{
    m_size = span.m_size;
    m_index = span.m_index;
    m_array = new int[m_size];
    for (unsigned int i = 0; i < m_index; i++)
        m_array[i] = span.m_array[i];
}

Span &Span::operator=(Span const &span)
{
    m_size = span.m_size;
    m_index = span.m_index;
    m_array = new int[m_size];
    for (unsigned int i = 0; i < m_index; i++)
        m_array[i] = span.m_array[i];
    return *this;
}

Span::~Span()
{
    delete[] m_array;
}

void Span::addNumber(int number)
{
    if (m_index >= m_size)
        throw std::exception();
    m_array[m_index] = number;
    m_index++;
}

void Span::addNumber(int *begin, int *end)
{
    if (m_index + (end - begin) > m_size)
        throw std::exception();
    for (int *it = begin; it != end; it++)
    {
        m_array[m_index] = *it;
        m_index++;
    }
}

int Span::shortestSpan()
{
    if (m_index <= 1)
        throw std::exception();
    int min = m_array[1] - m_array[0];
    for (unsigned int i = 0; i < m_index; i++)
    {
        for (unsigned int j = i + 1; j < m_index; j++)
        {
            if (m_array[j] - m_array[i] < min)
                min = m_array[j] - m_array[i];
        }
    }
    return min;
}

int Span::longestSpan()
{
    if (m_index <= 1)
        throw std::exception();
    int max = m_array[1] - m_array[0];
    for (unsigned int i = 0; i < m_index; i++)
    {
        for (unsigned int j = i + 1; j < m_index; j++)
        {
            if (m_array[j] - m_array[i] > max)
                max = m_array[j] - m_array[i];
        }
    }
    return max;
}