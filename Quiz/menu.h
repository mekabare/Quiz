#pragma once
#include <string>
using namespace std;

/// <summary>
/// 
/// </summary>
/// <returns>bool if it worked</returns>
bool printTitle();

/// <summary>
/// Prints menu, if fails, returns 0 and ends main
/// </summary>
/// <param name=1> local user input for menu
string printMenu(char&,int width);

int getUserChoice();