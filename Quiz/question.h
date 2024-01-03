#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>
using namespace std;
 
struct Question {
    string questionText;
    string answer1; //right answer
    string answer2;
    string answer3;
    string answer4;
    int tier;

    /// <summary>
    /// reads question from txt file
    /// </summary>
    /// <param name="fileName">is determined by difficulty chosen</param>
    /// <returns>vector 'questions' containing questions/answers from txt file in struct Question format</returns>
    static vector<Question> readFromFile(const string& fileName);

    static vector<Question> filterByTier(const vector<Question>& questions, int tier);
};

/// <summary>
/// displays shuffled questions and answers
/// </summary>
/// <param name="q"></param>
void displayQuestion(Question& q);

#endif // QUESTION_H
