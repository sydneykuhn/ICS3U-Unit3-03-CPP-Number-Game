// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program is a random number guessing game

#include <iostream>
#include <random>

int main() {
    // this function is the game
    int number_guessed;
    int someRandomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    someRandomNumber = idist(rgen);

    // input
    std::cout << "Guess a number between 0-9: ";
    std::cin >> number_guessed;

    // process & output
    if (number_guessed == someRandomNumber) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong!" << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "The correct answer was" " "<< someRandomNumber << std::endl;
    std::cout << "Done." << std::endl;
}
