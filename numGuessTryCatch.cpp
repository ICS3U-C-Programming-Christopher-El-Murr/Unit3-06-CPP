// Copyright (c) 2025 Christopher El-Mur All rights reserved
// Created by Christopher El-Mur
// Date:Oct 23 2025
// This program asks the user for a number between 1-9
// and tells them if it matches with a randomly generated number
// the program will also tell them if the number is a valid integer
#include <cstdlib>
#include <iostream>

int main() {
    int correctNumber;
    int numberGuess;

    // Initialize random seed
    srand(static_cast<unsigned>(time(NULL)));

    // Generate a random number between 1 and 100
    correctNumber = rand() % 9 + 1;
    // ask the user for their guess
    std::cout << "Enter your guess: ";
    std::cin >> numberGuess;

    // Tell the user if their guess is correct or incorrect
    if (numberGuess == correctNumber) {
        std::cout << "CORRECT! :)" << std::endl;
    } else {
        std::cout << " Guess again :(, The correct answer was "
        << correctNumber << "." << std::endl;
    }
}
