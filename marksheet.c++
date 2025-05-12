#include<iostream>
#include<stdio.h>

class Student {
    char name[50];
    char rollNo[10];
    char motherName[50];
    char fatherName[50];
    char dob[20];
    char schoolName[100];
    int marks[5][3]; // Theory, Practical, Total
    char grades[5][20]; // Grades in words
public:
    void inputDetails();
    void calculateTotalMarks();
    void displayMarksheet();
};

void Student::inputDetails() {
    cout << "Enter Name of Student: ";
    cin >> name;
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter Mother's Name: ";
    cin >> motherName;
    cout << "Enter Father's Name: ";
    cin >> fatherName;
    cout << "Enter Date of Birth (DD/MM/YYYY): ";
    cin >> dob;
    cout << "Enter School Name: ";
    cin >> schoolName;
    
    // Input marks for subjects
    cout << "\nEnter marks for subjects (Theory, Practical):\n";
    cout << "English Comm: ";
    cin >> marks[0][0] >> marks[0][1];
    cout << "Hindi Course-A: ";
    cin >> marks[1][0] >> marks[1][1];
    cout << "Mathematics: ";
    cin >> marks[2][0] >> marks[2][1];
    cout << "Science: ";
    cin >> marks[3][0] >> marks[3][1];
    cout << "Social Science: ";
    cin >> marks[4][0] >> marks[4][1];
}

void Student::calculateTotalMarks() {
    for (int i = 0; i < 5; i++) {
        marks[i][2] = marks[i][0] + marks[i][1]; // Total = Theory + Practical
        if (marks[i][2] >= 90) {
            strcpy(grades[i], "A1");
        } else if (marks[i][2] >= 80) {
            strcpy(grades[i], "A2");
        } else {
            strcpy(grades[i], "B");
        }
    }
}

void Student::displayMarksheet() 
    cout << "\n\nMarksheet\n";
    cout << "Name of Student: " << name << "\n";
    cout << "Roll No: " << rollNo << "\n";
    cout << "Mother's Name: " << motherName << "\n";
    cout << "Father's Name: " << fatherName << "\n";
    cout << "Date of Birth: " << dob << "\n";
    cout << "School: " << schoolName << "\n";
    cout << "-----------------------------------------\n";
    cout << "SUBJECT           THEORY      PRACTICAL     TOTAL     GRADE\n";
    cout << "-------------------------------------------------------------\n";
    cout << "English Comm:     " << marks[0][0] << "          " << marks[0][1] << "           " << marks[0][2] << "        " << grades[0] << "\n";
    cout << "Hindi Course-A:   " << marks[1][0] << "          " << marks[1][1] << "           " << marks[1][2] << "        " << grades[1] << "\n";
    cout << "Mathematics:      " << marks[2][0] << "          " << marks[2][1] << "           " << marks[2][2] << "        " << grades[2] << "\n";
    cout << "Science:          " << marks[3][0] << "          " << marks[3][1] << "           " << marks[3][2] << "        " << grades[3] << "\n";
    cout << "Social Science:   " << marks[4][0] << "          " << marks[4][1] << "           " << marks[4][2] << "        " << grades[4] << "\n";
    cout << "-------------------------------------------------------------\n";
    getch();
}

void main() {
    Student s;
    s.inputDetails();
    s.calculateTotalMarks();
    s.displayMarksheet();
}