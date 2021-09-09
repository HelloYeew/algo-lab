#include <iostream>
using namespace std;

// Write a program that reads a student's score (as an integer) and determines the grade according to the following rule:
// if the score is at least 80, you program should output Excellent job.
// if the score is lower than 80 but is at least 50, you program should output Okay.
// otherwise, you program should output Please try harder.

int main() {
    int score;
    cin >> score;

    if (score >= 80) {
        cout << "Excellent job." << endl;
    } else if (score >= 50) {
        cout << "Okay." << endl;
    } else {
        cout << "Please try harder." << endl;
    }
    return 0;
}