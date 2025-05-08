#include <iostream>
#include <string>
using namespace std;
// Function to calculate grade from marks
char calculateGrade(int marks) {
    if (marks >= 90 && marks <= 100) {
        return 'A';
    } else if (marks >= 80 && marks < 90) {
        return 'B';
    } else if (marks >= 70 && marks < 80) {
        return 'C';
    } else if (marks >= 60 && marks < 70) {
        return 'D';
    } else {
        return 'F';
    }
}
int main() {
    string studentName;
    int marks;
    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter marks (0-100): ";
    cin >> marks;
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered. Please enter marks between 0 and 100." << endl;
        return 1;
    }
    char grade = calculateGrade(marks);
    cout << "\nStudent Name: " << studentName << endl;
    cout << "Marks Obtained: " << marks << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}
