/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 10:45:17 by saboulal          #+#    #+#             */
/*   Updated: 2024/05/06 14:55:48 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Value found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 42);
        std::cout << "Value found: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found" << std::endl;
    }


    return 0;
}