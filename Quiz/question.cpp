#include "question.h"
#include "utility.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

     // Function to read questions from a file, filename is given from outside
 vector<Question> Question::readFromFile(const string& fileName) {

    ifstream file(fileName);
        vector<Question> allQuestions; //vector array for questions

        if (file.is_open()) {
            Question q; //instance of Question

            while (getline(file, q.questionText)) {

                getline(file, q.answer1);
                getline(file, q.answer2);
                getline(file, q.answer3);
                getline(file, q.answer4);

                file >> q.tier; //assign tier data to q
                allQuestions.push_back(q); //put everything into the vector array
                file.ignore(); // Ignore newline
            }

            file.close();
        }
        else {
            cerr << "Unable to open file: " << fileName << std::endl;
        }

        return allQuestions; //vector for further use
  }


 vector<Question> Question::filterByTier(const vector<Question>& allQuestions, int tier) {
     vector<Question> filteredQuestions;
     for (const auto& q : allQuestions) {
         if (q.tier == tier) {
             filteredQuestions.push_back(q);
         }
     }
     return filteredQuestions;
 }

 void displayQuestion(int position, const vector <Question> tieredQuestions, Question q){

     q = tieredQuestions[position];
     position++; // moves on to the next question with each call

     // Create a vector to hold the shuffled answers
     vector<string> shuffledAnswers = { q.answer1, q.answer2, q.answer3, q.answer4 };
     shuffleAnswers(q);  // Shuffle the answers

     // Display the question
     cout << "+--------------------------------------------------------------+" << endl;
     cout << "|                            QUESTION                          |" << endl;
     cout << "+--------------------------------------------------------------+" << endl;
     cout << "| " << setw(61) << left << q.questionText << " |" << endl;
     cout << "+--------------------------------------------------------------+" << endl;

     // Display the shuffled answers
     for (int i = 0; i < shuffledAnswers.size()/2 ; ++i) {
         char A = 65;
         cout << "| " << setw(2) << A + i << ")" << setw(46 / 2) << left << shuffledAnswers[i] << " | " 
              << setw(2) << A + i++ << ")" << setw(46 / 2) << left << shuffledAnswers[i + 1] << " |" << endl;
     }

     cout << "+-------------------------------------------------------------+" << std::endl;
 }