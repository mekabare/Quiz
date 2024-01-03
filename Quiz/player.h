
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

enum Difficulty {
    EASY,
    NORMAL,
    HARD
};

struct Player {
    string name;
    Difficulty unlockedDifficulty;

    void readFromFile();
    void writeToFile();

}

#endif // PLAYER_H