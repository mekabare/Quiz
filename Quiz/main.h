#include "continue.h"
#include "game.h"
#include "menu.h"
#include "utility.h"

#include <string>
#include <vector>
#include <windows.h>
constexpr auto nline = "\n";


using namespace std;

struct player {

	string name; //player namer
	char difficulty; //current difficulty, default is easy
	int highscore; //current highscore

};

struct Question {

private:
	string q; //question
	string wAnswer_1, wAnswer_2, wAnswer_3; //answers
	string cAnswer; //correct answer

public:
	
	vector <Question> dataset; //dataset, which gets loaded (or saved for debugging)
};


struct txtbox {

	string str;

	txtbox() {


	}

};

struct quizbox {

	string a1, a2, a3, a4;

	quizbox(string, string, string, string) {
	
		
	}
};

