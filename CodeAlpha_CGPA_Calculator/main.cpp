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

double calculateGPA(const vector<Course>& courses) {
    double totalGradePoints = 0;
    double totalCredits = 0;

    for (const Course& course : courses) {
        totalGradePoints += course.grade * course.creditHours;
        totalCredits += course.creditHours;
    }

    return totalGradePoints / totalCredits;
}

int main() {
    int numberOfSemesters;

    cout << "===== GPA & CGPA Calculator =====\n\n";

    cout << "Enter number of semesters: ";
    cin >> numberOfSemesters;

    if (numberOfSemesters <= 0) {
        cout << "Invalid number of semesters.\n";
        return 0;
    }

    double totalOverallGradePoints = 0;
    double totalOverallCredits = 0;

    for (int semester = 1; semester <= numberOfSemesters; semester++) {

        int numberOfCourses;

        cout << "\n===== Semester " << semester << " =====\n";
        cout << "Enter number of courses: ";
        cin >> numberOfCourses;

        if (numberOfCourses <= 0) {
            cout << "Invalid number of courses.\n";
            return 0;
        }

        vector<Course> courses(numberOfCourses);

        for (int i = 0; i < numberOfCourses; i++) {

            cout << "\nCourse " << i + 1 << " name: ";
            cin >> ws;
            getline(cin, courses[i].name);

            cout << "Enter grade (0-10): ";
            cin >> courses[i].grade;

            while (courses[i].grade < 0 || courses[i].grade > 10) {
                cout << "Invalid grade. Enter a grade between 0 and 10: ";
                cin >> courses[i].grade;
            }

            cout << "Enter credit hours: ";
            cin >> courses[i].creditHours;

            while (courses[i].creditHours <= 0) {
                cout << "Credit hours must be greater than 0. Enter again: ";
                cin >> courses[i].creditHours;
            }

            courses[i].gradePoints =
                courses[i].grade * courses[i].creditHours;

            totalOverallGradePoints += courses[i].gradePoints;
            totalOverallCredits += courses[i].creditHours;
        }

        // Calculate GPA for this semester
        double semesterGPA = calculateGPA(courses);

        cout << "\n----- Semester " << semester << " Results -----\n";

        cout << left << setw(25) << "Course"
             << setw(12) << "Grade"
             << setw(15) << "Credits"
             << "Grade Points\n";

        cout << "----------------------------------------------------------\n";

        for (const Course& course : courses) {
            cout << left << setw(25) << course.name
                 << setw(12) << course.grade
                 << setw(15) << course.creditHours
                 << course.gradePoints << '\n';
        }

        cout << fixed << setprecision(2);
        cout << "\nSemester GPA: " << semesterGPA << '\n';
    }

    // Calculate overall CGPA
    double overallCGPA =
        totalOverallGradePoints / totalOverallCredits;

    cout << "\n====================================\n";
    cout << "Overall CGPA: " << fixed << setprecision(2)
         << overallCGPA << '\n';
    cout << "====================================\n";

    return 0;
}
