// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program will calculate the sum of two integers


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


int main() {
    std::string chosen_number_as_string;
    int chosen_number_as_int;
    srand(time(NULL));  // seed for random number depending on time
    int mystery_number = rand() % 10;

    // input
    std::cout << "Enter your guess between 0-9: " << std::endl;
    std::cin >> chosen_number_as_string;

    // process and output
    try {
        chosen_number_as_int = std::stoi(chosen_number_as_string);

        if (mystery_number == chosen_number_as_int) {
        std::cout << "Correct!!" << std::endl;
        } else {
        std::cout << "Wrong, the number was: " << mystery_number << std::endl;
    }} catch (std::invalid_argument) {
        std::cout << "That was not a number between 0-9";
}
}
