#pragma once
#include <string>
#include <list>

constexpr auto DOWN = 's' || 'S';
constexpr auto UP = 'w' || 'W';
constexpr auto KEY_ENTER = 13;
constexpr auto WHITE = 15;
constexpr auto BLUE = 3;

using namespace std;

string TextColor(int c, string str);

int ArrowMenu(string prefix, int maxPosition, string options[], int color1, int color2);