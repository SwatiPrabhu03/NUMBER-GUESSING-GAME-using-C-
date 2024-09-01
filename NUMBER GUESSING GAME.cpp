#include <iostream>
#include <cstdlib>
#include <ctime>

void guessingGame() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));
    
    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;
    
    // Initialize the number of attempts
    int attempts = 0;
    
    std::cout << "Welcome to the number guessing game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;
    
    while (true) {
        // Ask the user for their guess
        int userGuess;
        std::cout << "Take a guess: ";
        std::cin >> userGuess;
        
        // Check if the user wants to quit
        if (userGuess == -1) {
            std::cout << "Okay, the number was " << numberToGuess << "." << std::endl;
            break;
        }
        
        // Increment the number of attempts
        attempts++;
        
        // Check if the user's guess is correct
        if (userGuess == numberToGuess) {
            std::cout << "Congratulations! You found the number in " << attempts << " attempts." << std::endl;
            break;
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low!" << std::endl;
        } else {
            std::cout << "Too high!" << std::endl;
        }
    }
}

int main() {
    guessingGame();
    return 0;
}