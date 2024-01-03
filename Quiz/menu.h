#ifndef MENU_H
#define MENU_H

/// <summary>
/// 
/// </summary>
/// <returns></returns>
bool printTitle();

using namespace std;
/// <summary>
/// Prints menu, if fails, returns 0 and ends main
/// </summary>
/// <param name=1> local user input for menu
int printMenu(char&,int width);

void arrowMenu();

int getUserChoice();

#endif // MENU_H