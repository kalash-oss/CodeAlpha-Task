# Task 2: Login and Registration System — C++

A simple **C++ console-based Login and Registration System** that allows users to create an account, store their credentials, and log in using their registered username and password.

This project was created as part of my **CodeAlpha C++ Programming Internship**.

## Features

* Allows users to register a new account
* Takes username and password as input
* Performs basic username validation
* Performs basic password validation
* Checks for duplicate usernames
* Stores registered user credentials in a file
* Allows registered users to log in
* Verifies username and password during login
* Displays appropriate success and error messages
* Uses functions to organize registration and login operations
* Uses file handling for persistent user data
* Uses hashing before storing passwords

## How the System Works

The program provides three main options:

```text
1. Register
2. Login
3. Exit
```

### Registration

When a user selects the registration option:

1. The program asks for a username.
2. The username is validated.
3. The program checks whether the username already exists.
4. The user enters a password.
5. The password is validated.
6. The password is hashed before being stored.
7. The username and hashed password are stored in a file.

### Login

When a user selects the login option:

1. The program asks for the username.
2. The program asks for the password.
3. The entered password is hashed.
4. The program reads the stored credentials from the file.
5. The username and hashed password are compared.
6. A success message is displayed if the credentials match.
7. An error message is displayed if the credentials are invalid.

## Validation

The program performs basic validation to ensure:

* Username contains at least `3` characters
* Username does not contain spaces
* Password contains at least `6` characters
* Duplicate usernames are not allowed

If invalid input is entered, the program displays an appropriate error message.

## File Handling

The program uses a text file named:

```text
users.txt
```

The file is used to store registered usernames and their hashed passwords.

The program uses:

* `ofstream` — to write registered users to the file
* `ifstream` — to read stored user credentials
* `ios::app` — to add new users without overwriting existing users

The `users.txt` file is created automatically when the first user registers.

## Technologies Used

* **C++**
* **C++ Standard Library**
* `iostream` — input and output
* `fstream` — file handling
* `string` — storing usernames and passwords
* `functional` — hashing passwords

## Project Structure

```text
CodeAlpha_Login_Registration/
│
├── main.cpp
└── README.md
```

During program execution, the following file is created:

```text
users.txt
```

## How to Run

### 1. Clone the repository

```bash
git clone <your-repository-url>
```

### 2. Open the project folder

```bash
cd CodeAlpha_Login_Registration
```

### 3. Compile the program

Using `g++`:

```bash
g++ main.cpp -o login_system
```

### 4. Run the program

**Windows:**

```bash
login_system
```

**Linux/macOS:**

```bash
./login_system
```

## Sample Output

```text
=====================================
     LOGIN & REGISTRATION SYSTEM
=====================================

----------- MENU -----------
1. Register
2. Login
3. Exit
----------------------------
Enter your choice: 1

========== REGISTRATION ==========
Enter username: kalash
Enter password: 123456

Registration successful!
You can now login using your credentials.
```

### Successful Login

```text
----------- MENU -----------
1. Register
2. Login
3. Exit
----------------------------
Enter your choice: 2

========== LOGIN ==========
Enter username: kalash
Enter password: 123456

Login successful!
Welcome, kalash!
```

### Duplicate Username

```text
========== REGISTRATION ==========
Enter username: kalash

Error: Username already exists.
```

### Invalid Login

```text
========== LOGIN ==========
Enter username: kalash
Enter password: wrongpassword

Login failed!
Invalid username or password.
```

## Concepts Used

This project demonstrates several fundamental C++ programming concepts:

* Functions
* Strings
* File handling
* `ifstream`
* `ofstream`
* Loops
* Conditional statements
* User input and output
* Input validation
* Hashing
* Menu-driven programming
* `while` loops
* `switch` statements
* C++ Standard Library functions

## Input Validation

The program performs basic validation to ensure:

* Username contains at least `3` characters
* Username does not contain spaces
* Password contains at least `6` characters
* Username is not already registered

If invalid input is entered, the program displays an error message and returns to the main menu.

## Security Consideration

The program hashes the password before storing it in the user file instead of directly storing the entered password.

This demonstrates the basic concept of avoiding plain-text password storage.

However, the `std::hash` function used in this educational project is **not intended for production-grade password security**. Real-world authentication systems should use dedicated password-hashing algorithms such as Argon2, bcrypt, or scrypt.

## Future Improvements

The project can be improved in the future by adding:

* Stronger password validation
* Password confirmation during registration
* Email-based registration
* Password reset functionality
* Multiple user roles such as Admin and User
* Account lockout after multiple failed login attempts
* Better password hashing using a dedicated password-hashing algorithm
* Encryption for sensitive data
* Database integration using MySQL or SQLite
* Improved handling of invalid non-numeric input
* Graphical user interface
* User profile management

## Learning Objective

The main objective of this project was to practice **fundamental C++ programming concepts** by building a practical authentication system.

Through this project, I practiced:

* Working with functions
* Taking and validating user input
* Reading and writing files
* Managing user credentials
* Implementing registration and login logic
* Checking for duplicate usernames
* Working with strings
* Using hashing
* Organizing a menu-driven C++ application

## Author

**Kalash Kumar**

C++ Programming Internship — **CodeAlpha**

## License

This project is created for **educational and internship purposes**.

