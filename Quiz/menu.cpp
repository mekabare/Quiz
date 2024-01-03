#include "menu.h"
#include "arrowmenu.h"
#include <iostream>
#include <sstream>
#include <conio.h>

#include <fstream>
#include <iomanip>
#include <array>
#include <vector>
#include <windows.h>

using namespace std;

bool printTitle() {

	ifstream title;
	string output;
	title.open("Resource/Menu/title.txt", ios::in);

	while (getline(title, output)) {

		cout <<fixed << output;
	}
	if (title.eof()) {
		return true;
	}
	if (title.bad()) {

		cerr << "Bad bit.";
		return false;
	}
	else if (title.fail()) {

		cerr << "Failed bit.";
		return false;
	}
}

string openMenu(char& input,int width, int maxOptions) {
		
	ifstream file("/resources/menu/menu.txt");
	// put into string array

}

string TextColor(int c, string str) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	const int length = str.length() + 1;

	SetConsoleTextAttribute(handle, c);
	return str;

}

int ArrowMenu(string prefix, int maxPosition, string options[], int color1, int color2) {

	char input;
	int choice;
	int position = 1;
	bool ok = true;;

	while (ok) {

		std::cout << TextColor(color1, prefix) << "\n\n";
		std::cout << TextColor(color2, options[0]) << "\n";
		for (int i = 1; i < maxPosition; ++i) {
			std::cout << TextColor(color1, options[i]) << "\n";
		}

		// arrow position tracker
		while (position > 0) {
			input = _getch();
			switch (input) {

			case 's': {
				if (position < maxPosition) {
					position++;

					break;
				}
				else if (position == maxPosition) {
					break;
				}
			}

			case 'w': {
				if (position != 1) {
					position--;
					break;
				}
				else if (position == 1) {
					break;
				}
			}
			case KEY_ENTER: {
				_putch(position);
				choice = position;
				position = 0;
				return choice;}
			}


			system("CLS");
			std::cout << TextColor(color1, prefix) << "\n\n";
			switch (position) {

			case 1: {
				std::cout << "";
				std::cout << TextColor(color2, options[position - 1]) << "\n";
				for (int i = 1; i < maxPosition; ++i) {
					std::cout << TextColor(color1, options[i]) << "\n";
				}
				break;
			}

			default: {
				std::cout << "";
				for (int i = 0; i < position - 1; i++) {
					std::cout << TextColor(color1, options[i]) << "\n";
				}

				std::cout << TextColor(color2, options[position - 1]) << "\n";

				for (int i = position; i < maxPosition; i++) {
					std::cout << TextColor(color1, options[i]) << "\n";
				}
				break;
			}
			}
		}
	}

}

int getUserChoice()
{
	return 0;
}
