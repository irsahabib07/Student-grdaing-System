/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
	const int max_students = 50;
    string studentNames[max_students];
    int grades[max_students];
    int arr = 0;
    string name;
    int grade;
    cout << "\t\t\t~~~STUDENT GRADING SYSTEM~~~" << "\n\n";
    cout << "\nKINDLY ENTER STUDENTS DATA!!:\n";
    do {
        cout << "\nEnter Student Name:\n";
        cout<<"(Write exit when you enter all students)\n";
        cin >> name;
        if (name == "exit") {
            break;
        }
    cout << "Enter " << name << "'s grade:";
    cin >> grade;
    studentNames[arr] = name;
    grades[arr] = grade;
    arr++;
    } while (arr< max_students);
    if (arr == 0) {
        cout << "Invalid Data!" << endl;
        return 0;
    }
    float sum = 0.0;
    for (int i = 0; i < arr; i++) {
        sum += grades[i];
    }
    double averageGrade = sum / arr;
    int highestGrade = grades[0];
    int lowestGrade = grades[0];
    for (int i = 1; i < arr; i++) {
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
        }
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
    }
    cout << "\t\t\t<<<FINAL RESULT>>>" << endl;
    for (int i = 0; i < arr; i++) {
        cout << studentNames[i] << ": " << grades[i] << endl;
    }

    cout << "Average Grade is:" << averageGrade << "\n\n";
    cout << "Highest Grade is:" << highestGrade << "\n\n";
    cout << "Lowest Grade is:" << lowestGrade << "\n\n";

    return 0;
}
