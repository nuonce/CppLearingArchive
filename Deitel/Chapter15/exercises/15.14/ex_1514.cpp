/*
 * =====================================================================================
 *
 *       Filename:  
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Thanks to github you know it
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author: Mahmut Erdem ÖZGEN   m.erdemozgen@gmail.com
 *   
 *
 * =====================================================================================
 */
#include <iostream>

#include "PhoneNumber.hpp"

int main(int argc, const char *argv[]) {
    PhoneNumber phone;

    std::cout << "Enter phone number in the form (800) 555-1212: ";
    // std::cin >> phone invokes operator>> by implicitly issuing
    // the non-member function call operator>>(std::cin, phone)
    std::cin >> phone;

    if (std::cin.fail()) {
        std::cout << "ERROR: Incorrect Input" << std::endl;
    } else {
        std::cout << "The phone number entered was: ";
        // std::cout << phone invokes operator<< by implicitly issuing
        // the non-member function call operator<<(std::cout, phone)
        std::cout << phone << std::endl;
    }

    return 0;
}
