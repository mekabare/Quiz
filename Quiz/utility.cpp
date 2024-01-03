#include "utility.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>

void shuffleAnswers(Question& q) {

    // Container to shuffle answers in
    vector<string> answers = { q.answer1, q.answer2, q.answer3, q.answer4 };
    // Shuffle, reassign in next step
    random_shuffle(answers.begin(), answers.end()); 
    q.answer1 = answers[0];
    q.answer2 = answers[1];
    q.answer3 = answers[2];
    q.answer4 = answers[3];
}

// Should be done first
void shuffleQuestions(vector<Question>& questions) {
    srand(static_cast<unsigned>(time(0))); // Seed
    random_shuffle(questions.begin(), questions.end());
}
