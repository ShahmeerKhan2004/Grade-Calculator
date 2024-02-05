//
// Created by Shahmeer Khan on 02/02/2024.
//

#ifndef GRADE_CALCULATOR_MAIN_H
#define GRADE_CALCULATOR_MAIN_H
#include <iostream>

using namespace std;

int main() {

    int points;

    cout << "Please enter your total points: ";
    cin >> points;

    if (points >= 90 && points <= 100) {
        cout << "Your grade is an A+.";
    } else if (points >= 80 && points <= 89) {
        cout << "Your grade is an A.";
    } else if (points >= 70 && points <= 79) {
        cout << "Your grade is a B.";
    } else if (points >= 60 && points <= 69) {
        cout << "Your grade is a C.";
    } else if (points >= 50 && points <= 59) {
        cout << "Your grade is a D.";
    } else {
        cout << "You have failed the module.";
    }

    return 0;


}

#endif //GRADE_CALCULATOR_MAIN_H
