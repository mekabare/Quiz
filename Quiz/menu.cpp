#include "menu.h"
#include <iostream>
#include <sstream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

bool print_title() {

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

int print_menu(char& input,int width) {

	if (print_title()) {

		cout << "\n\n\n";
		cout << setw(width) << "  1 NEW GAME \n";
		cout << setw(width) << "  2 CONTINUE \n";
		cout << setw(width+3) << "  3 HOW TO PLAY \n";
		cout << setw(width-3) << "  4 EXIT \n\n";
		cout << setw(width+8) << "Press a number to continue...";
	}
	else return 0;

	input=_getch();
}

