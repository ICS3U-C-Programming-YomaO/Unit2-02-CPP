// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : September 28, 2025
// This program calculates the circumference of a circle
// with a user input using TAU

#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get radius from the user
    std::cout << "Enter the radius(mm): ";
    std::cin >> radius;

    // calculate circumference with TAU
    circumference = TAU * radius;

    // show circumference
    std::cout<< "\n";
    std::cout << "Circumference = " << circumference << "mm" << std::endl;
}
