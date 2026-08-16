#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

struct Course {
    string name;
    double grade;
    double creditHours;
    double gradePoints;
};

int main() {
    int numberOfCourses;

    cout << "====================================\n";
    cout << "          CGPA CALCULATOR\n";
    cout << "====================================\n";

    cout << "Enter number of courses: ";
    cin >> numberOfCourses;

    if (numberOfCourses <= 0) {
        cout << "Invalid number of courses.\n";
        return 1;
    }

    vector<Course> courses(numberOfCourses);

    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    // Input course details
    for (int i = 0; i < numberOfCourses; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter course name: ";
        cin >> courses[i].name;

        cout << "Enter grade point: ";
        cin >> courses[i].grade;

        cout << "Enter credit hours: ";
        cin >> courses[i].creditHours;

        if (courses[i].grade < 0 || courses[i].creditHours <= 0) {
            cout << "Invalid input.\n";
            return 1;
        }

        // Grade Point × Credit Hours
        courses[i].gradePoints =
            courses[i].grade * courses[i].creditHours;

        totalCredits += courses[i].creditHours;
        totalGradePoints += courses[i].gradePoints;
    }

    // Calculate GPA
    double cgpa = totalGradePoints / totalCredits;

    // Display results
    cout << "\n\n====================================\n";
    cout << "              RESULT\n";
    cout << "====================================\n";

    cout << left
         << setw(20) << "Course"
         << setw(12) << "Grade"
         << setw(15) << "Credits"
         << "Grade Points" << endl;

    cout << "------------------------------------\n";

    for (const Course& course : courses) {
        cout << left
             << setw(20) << course.name
             << setw(12) << course.grade
             << setw(15) << course.creditHours
             << course.gradePoints << endl;
    }

    cout << "------------------------------------\n";

    cout << fixed << setprecision(2);

    cout << "Total Credits   : " << totalCredits << endl;
    cout << "Total Grade Pts : " << totalGradePoints << endl;
    cout << "Final CGPA      : " << cgpa << endl;

    cout << "====================================\n";

    return 0;
}
