# Task 1: CGPA Calculator — C++

A simple **C++ console-based CGPA Calculator** that calculates a student's CGPA using course-wise grade points and credit hours.

This project was created as part of my **CodeAlpha C++ Programming Internship**.

## Features

* Accepts the number of courses from the user
* Takes course name, grade point, and credit hours as input
* Calculates weighted grade points for each course
* Calculates total credit hours
* Calculates total weighted grade points
* Calculates the final CGPA
* Displays course-wise results in a formatted table
* Performs basic input validation
* Uses `struct` and `vector` to organize course data

## How CGPA Is Calculated

The program uses a weighted-average formula based on grade points and credit hours.

**Weighted Grade Points = Grade Point × Credit Hours**

**CGPA = Total Weighted Grade Points ÷ Total Credit Hours**

### Example

Suppose a student has:

| Course      | Grade Point | Credit Hours |
| ----------- | ----------: | -----------: |
| Mathematics |           9 |            4 |
| Programming |           8 |            3 |
| Physics     |           7 |            3 |

The calculation is:

```text
Mathematics: 9 × 4 = 36
Programming: 8 × 3 = 24
Physics:     7 × 3 = 21

Total Weighted Grade Points = 81
Total Credits               = 10

CGPA = 81 / 10
     = 8.10
```

## Technologies Used

* **C++**
* **C++ Standard Library**
* `iostream` — input and output
* `vector` — storing multiple course records
* `iomanip` — formatted console output
* `string` — storing course names

## Project Structure

```text
CodeAlpha-CGPA-Calculator/
│
├── main.cpp
└── README.md
```

## How to Run

### 1. Clone the repository

```bash
git clone <your-repository-url>
```

### 2. Open the project folder

```bash
cd CodeAlpha-CGPA-Calculator
```

### 3. Compile the program

Using `g++`:

```bash
g++ main.cpp -o cgpa
```

### 4. Run the program

**Windows:**

```bash
cgpa
```

**Linux/macOS:**

```bash
./cgpa
```

## Sample Output

```text
====================================
          CGPA CALCULATOR
====================================
Enter number of courses: 3

Course 1
Enter course name: Mathematics
Enter grade point: 9
Enter credit hours: 4

Course 2
Enter course name: Programming
Enter grade point: 8
Enter credit hours: 3

Course 3
Enter course name: Physics
Enter grade point: 7
Enter credit hours: 3


====================================
              RESULT
====================================
Course              Grade       Credits        Grade Points
------------------------------------
Mathematics         9           4              36
Programming         8           3              24
Physics             7           3              21
------------------------------------
Total Credits   : 10.00
Total Grade Pts : 81.00
Final CGPA      : 8.10
====================================
```

## Concepts Used

This project demonstrates several fundamental C++ programming concepts:

* Structures (`struct`)
* Vectors
* `for` loops
* Conditional statements
* User input and output
* Arithmetic operations
* Input validation
* Formatted console output
* Range-based `for` loops
* `const` references
* C++ Standard Library functions

## Input Validation

The program performs basic validation to ensure:

* The number of courses is greater than `0`
* Grade points are not negative
* Credit hours are greater than `0`

If invalid input is entered, the program displays an error message and terminates.

## Future Improvements

The project can be improved in the future by adding:

* Support for course names containing spaces
* Validation for maximum grade-point limits
* Letter-grade input such as `A`, `B+`, and `A-`
* Semester-wise GPA calculation
* Cumulative CGPA calculation across multiple semesters
* Better handling of invalid non-numeric input
* Saving results to a file
* A graphical user interface

## Learning Objective

The main objective of this project was to practice **fundamental C++ programming concepts** by building a practical console application.

Through this project, I practiced:

* Working with structures
* Managing collections using vectors
* Taking and validating user input
* Performing weighted calculations
* Formatting console output
* Organizing data in a simple C++ application

## Author

**Kalash Kumar**

C++ Programming Internship — **CodeAlpha**

## License

This project is created for **educational and internship purposes**.
