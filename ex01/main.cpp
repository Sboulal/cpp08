/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:15:47 by saboulal          #+#    #+#             */
/*   Updated: 2024/05/06 18:25:43 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(5);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
//     std::cout << "Longest span: " << sp.longestSpan() << std::endl;

//     Span sp2 = Span(10000);
//     for (int i = 0; i < 10000; i++)
//         sp2.addNumber(i);
//     std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
//     std::cout << "Longest span: " << sp2.longestSpan() << std::endl;

//     Span sp3 = Span(10000);
//     try
//     {
//         sp3.addNumber(1);
//         sp3.addNumber(2);
//         sp3.addNumber(3);
//         sp3.addNumber(4);
//         sp3.addNumber(5);
//         sp3.addNumber(6);
//         sp3.addNumber(7);
//         sp3.addNumber(8);
//         sp3.addNumber(9);
//         sp3.addNumber(10);
//         sp3.addNumber(11);
//     }
//     catch (std::exception &e)
//     {
//         std::cout << "Error: " << e.what() << std::endl;
//     }
//     std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
//     std::cout << "Longest span: " << sp3.longestSpan() << std::endl;

//     Span sp4 = Span(10000);
//     try
//     {
//         sp4.addNumber(1);
//         sp4.addNumber(2);
//         sp4.addNumber(3);
//         sp4.addNumber(4);
//         sp4.addNumber(5);
//         sp4.addNumber(6);
//         sp4.addNumber(7);
//         sp4.addNumber(8);
//         sp4.addNumber(9);
//         sp4.addNumber(10);
//         sp4.addNumber(11);
//         sp4.addNumber(12);
//     }
//     catch (std::exception &e)
//     {
//         std::cout << "Error: " << e.what() << std::endl;
//     }
//     std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;

//     return 0;   
// }

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}