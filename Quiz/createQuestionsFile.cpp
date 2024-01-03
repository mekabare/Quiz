#include "\My Drive\Uni\Informatik\Sem1\Quiz\Quiz\createQuestionsFile.h"
#include "question.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to create a questions.txt file interactively
void createQuestionsFile() {
    string filename;
    cout << "Creating for difficulty (easy, normal, hard): ";
    cin >> filename;
    std::ofstream file;

        int numQuestions;
        cout << "Enter the number of questions: ";
        std::cin >> numQuestions;
        std::cin.ignore();  // Consume the newline character

        for (int i = 1; i <= numQuestions; i++){
            file.open(filename + "_questions.txt", std::ios::out | std::ios::app);

        if (file.is_open()) {
            Question q;
            system("CLS");

            std::cout << "Enter question " << i << ": ";
            std::getline(std::cin, q.questionText);

            std::cout << "Enter answer 1 (correct answer): ";
            std::getline(std::cin, q.answer1);

            std::cout << "Enter answer 2: ";
            std::getline(std::cin, q.answer2);

            std::cout << "Enter answer 3: ";
            std::getline(std::cin, q.answer3);

            std::cout << "Enter answer 4: ";
            std::getline(std::cin, q.answer4);

            std::cout << "Enter tier (1, 2, 3, 4, 5): ";
            std::cin >> q.tier;

            file << q.questionText << "\n";
            file << q.answer1 << "\n";
            file << q.answer2 << "\n";
            file << q.answer3 << "\n";
            file << q.answer4 << "\n";
            file << q.tier << "\n";
            file.close();
        }
        else {
            std::cout << "Unable to create questions.txt" << std::endl;
        }
        std::cout << filename << "questions.txt created successfully." << std::endl;
    }

}

int main() {
    createQuestionsFile();
    return 0;
}
