#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function to calculate total score
double calculateTotal(const double marks[], int numSubjects) {
    double total = 0.0;
    for (int i = 0; i < numSubjects; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate percentage average
double calculateAverage(double total, int numSubjects) {
    return total / numSubjects;
}

// Function to compute letter grade
char computeGrade(double average) {
    if (average >= 90.0) return 'A';
    if (average >= 75.0) return 'B';
    if (average >= 60.0) return 'C';
    if (average >= 50.0) return 'D';
    return 'F';
}

int main() {
    int numStudents, numSubjects;

    cout << "==========================================\n";
    cout << "       STUDENT REPORT GENERATOR           \n";
    cout << "==========================================\n";

    cout << "Enter total number of students: ";
    cin >> numStudents;

    cout << "Enter total number of subjects: ";
    cin >> numSubjects;

    string studentNames[numStudents];
    double totalMarks[numStudents];
    double averageMarks[numStudents];
    char grades[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "\n------------------------------------------\n";
        cout << "Enter details for Student " << (i + 1) << ":\n";
        cout << "  Name: ";
        cin.ignore();
        getline(cin, studentNames[i]);

        double marks[numSubjects];
        cout << "  Enter marks for " << numSubjects << " subjects:\n";
        for (int j = 0; j < numSubjects; j++) {
            cout << "    Subject " << (j + 1) << ": ";
            cin >> marks[j];
        }

        totalMarks[i] = calculateTotal(marks, numSubjects);
        averageMarks[i] = calculateAverage(totalMarks[i], numSubjects);
        grades[i] = computeGrade(averageMarks[i]);
    }

    // Output Performance Report
    cout << "\n===============================================================\n";
    cout << "                       ACADEMIC REPORT                         \n";
    cout << "===============================================================\n";
    cout << left << setw(20) << "Name" 
         << setw(15) << "Total Marks" 
         << setw(15) << "Average (%)" 
         << setw(10) << "Grade" << endl;
    cout << "---------------------------------------------------------------\n";

    cout << fixed << setprecision(2);
    for (int i = 0; i < numStudents; i++) {
        cout << left << setw(20) << studentNames[i]
             << setw(15) << totalMarks[i]
             << setw(15) << averageMarks[i]
             << setw(10) << grades[i] << endl;
    }
    cout << "===============================================================\n";

    return 0;
}
