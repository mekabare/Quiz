
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

enum Difficulty {
    EASY = 'e',
    NORMAL = 'n',
    HARD = 'h'
};

struct Player {
    string name;
    Difficulty unlockedDifficulty;
    string score //money won in said difficulty

    void readFromFile();
    void writeToFile();

};

#endif // PLAYER_H