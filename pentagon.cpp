// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program calculates the perimeter of a regular pentagon

#include <iostream>

int main() {
    // This function is the better number guessing game

    int length;
    int perimeter;

    // Input
    std::cout << "Enter length of the rectangle (cm): ";
    std::cin >> length;

    // Process
    perimeter = length*5;

    // Output
    std::cout << "" << std::endl;
    std::cout << "Perimeter is " << perimeter << " cm. " << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
