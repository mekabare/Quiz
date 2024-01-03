#include "player.h"
#include <iostream>
#include <fstream>

using namespace std;

// Function to read player data from a file, assigning happens manually in Continue.cpp
void Player::readFromFile() {
    ifstream file("/resource/player data/" + name + "_player.txt");

    if (file.is_open()) {

        int difficulty; //container to save Difficulty
        file >> difficulty; //put integer in container
        unlockedDifficulty = static_cast<Difficulty>(difficulty); //Convert integer to Difficulty and assign to struct member unlockedDifficulty
        file.close();
    }
    else {
        cerr << "Unable to open file: " << name + "_player.txt" << endl;
    }
}


// Function to write player data to a file, assigning happens manually in newGame.cpp and Game.cpp
void Player::writeToFile() {
    ofstream file("/resource/player data/" + name + "_player.txt", ios::out | ios::trunc);

    if (file.is_open()) {
        file << static_cast<int>(unlockedDifficulty);
        file.close();
    }
    else {
        cerr << "Unable to open file: " << name + "_player.txt" << std::endl;
    }
}