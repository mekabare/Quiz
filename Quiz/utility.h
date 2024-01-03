#ifndef UTILITY_H
#define UTILITY_H

#include "question.h"

#include <vector>

/// <summary>
/// Should be used after shuffleQuestions, shuffles the answers within a Question instance
/// </summary>
/// <param name="q"> active instance of a Question</param>
void shuffleAnswers(Question& q);

/// <summary>
/// Shuffles Question instances saved in vector
/// </summary>
/// <param name="questions"> vector from readFromFile(), holds all the questions</param>
void shuffleQuestions(vector<Question>& questions);

#endif // UTILITY_H
