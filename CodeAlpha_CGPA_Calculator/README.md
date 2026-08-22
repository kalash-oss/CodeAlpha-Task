# Task 1: CGPA Calculator — C++

A simple **C++ console-based GPA and CGPA Calculator** that calculates a student's **semester GPA** and **overall CGPA** using course-wise grade points and credit hours.

This project was created as part of my **CodeAlpha C++ Programming Internship**.

## Features

* Accepts the number of semesters from the user
* Accepts the number of courses for each semester
* Takes course name, grade point, and credit hours as input
* Calculates weighted grade points for each course
* Calculates the GPA for each semester
* Calculates total credit hours across all semesters
* Calculates total weighted grade points across all semesters
* Calculates the overall CGPA
* Displays course-wise results in a formatted table
* Performs basic input validation
* Supports course names containing spaces
* Uses `struct` and `vector` to organize course data

## How GPA and CGPA Are Calculated

The program uses a weighted-average formula based on grade points and credit hours.

**Weighted Grade Points = Grade Point × Credit Hours**

### Semester GPA

The GPA for each semester is calculated as:

**Semester GPA = Total Weighted Grade Points ÷ Total Credit Hours**

### Overall CGPA

The overall CGPA is calculated using the weighted grade points and credit hours from all semesters:

**Overall CGPA = Total Weighted Grade Points from All Semesters ÷ Total Credit Hours from All Semesters**

### Example

Suppose a student has two semesters.

#### Semester 1

| Course      | Grade Point | Credit Hours |
| ----------- | ----------: | -----------: |
| Mathematics |           9 |            4 |
| Programming |           8 |            3 |
| Physics     |           7 |            3 |

```text
Mathematics: 9 × 4 = 36
Programming: 8 × 3 = 24
Physics:     7 × 3 = 21

Total Weighted Grade Points = 81
Total Credits               = 10

Semester GPA = 81 / 10
             = 8.10
```

#### Semester 2

| Course           | Grade Point | Credit Hours |
| ---------------- | ----------: | -----------: |
| Data Structures  |           9 |            4 |
| Database Systems |           8 |            3 |

```text
Data Structures: 9 × 4 = 36
Database Systems: 8 × 3 = 24

Total Weighted Grade Points = 60
Total Credits               = 7

Semester GPA = 60 / 7
             = 8.57
```

The overall CGPA is then calculated using the data from both semesters:

```text
Total Weighted Grade Points = 81 + 60 = 141
Total Credits               = 10 + 7 = 17

Overall CGPA = 141 / 17
             = 8.29
```

## Technologies Used

* **C++**
* **C++ Standard Library**
* `iostream` — input and output
* `vector` — storing course records
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
       GPA & CGPA CALCULATOR
====================================

Enter number of semesters: 2

===== Semester 1 =====

Enter number of courses: 3

Course 1 name: Mathematics
Enter grade point: 9
Enter credit hours: 4

Course 2 name: Programming
Enter grade point: 8
Enter credit hours: 3

Course 3 name: Physics
Enter grade point: 7
Enter credit hours: 3

----- Semester 1 Results -----

Course                   Grade       Credits        Grade Points
----------------------------------------------------------------
Mathematics              9           4              36
Programming              8           3              24
Physics                  7           3              21

Semester GPA: 8.10


===== Semester 2 =====

Enter number of courses: 2

Course 1 name: Data Structures
Enter grade point: 9
Enter credit hours: 4

Course 2 name: Database Systems
Enter grade point: 8
Enter credit hours: 3

----- Semester 2 Results -----

Course                   Grade       Credits        Grade Points
----------------------------------------------------------------
Data Structures           9           4              36
Database Systems          8           3              24

Semester GPA: 8.57


====================================
Overall CGPA: 8.29
====================================
```

## Concepts Used

This project demonstrates several fundamental C++ programming concepts:

* Structures (`struct`)
* Vectors
* Functions
* `for` loops
* Conditional statements
* User input and output
* Arithmetic operations
* Input validation
* Formatted console output
* Range-based `for` loops
* `const` references
* C++ Standard Library

## Input Validation

The program performs basic validation to ensure:

* The number of semesters is greater than `0`
* The number of courses is greater than `0`
* Grade points are between `0` and `10`
* Credit hours are greater than `0`

If invalid input is entered, the program displays an error message.

## Future Improvements

The project can be improved in the future by adding:

* Letter-grade input such as `A`, `B+`, and `A-`
* Better handling of invalid non-numeric input
* Saving results to a file
* Loading previously saved academic records
* A graphical user interface

## Learning Objective

The main objective of this project was to practice **fundamental C++ programming concepts** by building a practical console application.

Through this project, I practiced:

* Working with structures
* Managing collections using vectors
* Creating and using functions
* Taking and validating user input
* Performing weighted GPA and CGPA calculations
* Formatting console output
* Organizing data in a simple C++ application

## CodeAlpha Internship Task

This project fulfills **Task 1: CGPA Calculator** of the **CodeAlpha C++ Programming Internship**.

The implementation includes:

* Course-wise grade and credit-hour input
* Weighted grade-point calculation
* Semester GPA calculation
* Overall CGPA calculation
* Course-wise result display
* Basic input validation

## Author

**Kalash Kumar**

C++ Programming Internship — **CodeAlpha**

## License

This project is created for **educational and internship purposes**.
