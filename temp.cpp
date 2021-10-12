// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program converts degrees celsius to farhrenheit
#include <iostream>

void Farhrenheit() {
    // convert user celsuis to farhrenheit

    std::string userTemp;
    int userTempInt;
    int convertFar;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> userTemp;
    std::cout << std::endl;

    // process & output
    try {
        userTempInt = std::stoi(userTemp);
        convertFar = (userTempInt * 9/5) + 32;

        std::cout << userTempInt << "°C is equal to " << convertFar << "°F";
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid number!";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}

int main() {
// this function just calls other functions

// call function
    Farhrenheit();
}
