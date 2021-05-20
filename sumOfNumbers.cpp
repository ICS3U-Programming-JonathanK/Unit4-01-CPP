// Copyright (c) 2021 Jonathan Kene All rights reserved.
// 
// Created by: Jonthan
// Date: May 20, 2021
// This program asks the user for a positive integer. It 
// then calculates the sum of the numbers from 0 up to 
// that integer.

#include <iostream>


int main() {
     // initialize the loop counter and sum
    int counter = 0;
    int sum = 0;
    int numInt;
    std::string numString;

    // get the user's year
    std::cout << "Enter a postive number: ";
    std::cin >> numString;
    try {
        numInt = std::stoi(numString);
        if (numInt > 0) {
            // calculate the sum of all numbers from 0 to user number
            while (counter <= numInt) {
                sum = sum + counter;
                std::cout << "Tracking " << counter << " times through"
                             "the loop.\n";
                counter = counter + 1;
            }
            // display the sum to the user
                std::cout << "\n";
                std::cout << "\nThe sum of the numbers from 0 to " <<numInt <<
                             " is: " << sum << std::endl;
        } else {
            std::cout << "\n";
            std::cout << numInt << " is not a valid number." << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << "\n";
        std::cout << "Please enter a valid number.\n";
    }
    std::cout << "\n";
    std::cout << "Thank you for your input" << std::endl;
}
