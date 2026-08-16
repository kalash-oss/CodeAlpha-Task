#include <iostream>
#include <fstream>
#include <string>
#include <functional>

using namespace std;

const string FILE_NAME = "users.txt";

// Hash password before storing it
string hashPassword(const string& password) {
    hash<string> hasher;
    return to_string(hasher(password));
}

// Check whether username already exists
bool usernameExists(const string& username) {
    ifstream file(FILE_NAME);

    string storedUsername;
    string storedPassword;

    while (file >> storedUsername >> storedPassword) {
        if (storedUsername == username) {
            return true;
        }
    }

    return false;
}

// Validate username
bool isValidUsername(const string& username) {
    if (username.length() < 3) {
        return false;
    }

    for (char ch : username) {
        if (ch == ' ') {
            return false;
        }
    }

    return true;
}

// Validate password
bool isValidPassword(const string& password) {
    if (password.length() < 6) {
        return false;
    }

    return true;
}

// Registration function
void registerUser() {
    string username;
    string password;

    cout << "\n========== REGISTRATION ==========\n";

    cout << "Enter username: ";
    cin >> username;

    if (!isValidUsername(username)) {
        cout << "Error: Username must contain at least 3 characters "
             << "and cannot contain spaces.\n";
        return;
    }

    if (usernameExists(username)) {
        cout << "Error: Username already exists.\n";
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    if (!isValidPassword(password)) {
        cout << "Error: Password must contain at least 6 characters.\n";
        return;
    }

    // Store username and hashed password
    ofstream file(FILE_NAME, ios::app);

    if (!file) {
        cout << "Error: Unable to open user database.\n";
        return;
    }

    file << username << " " << hashPassword(password) << endl;

    file.close();

    cout << "Registration successful!\n";
    cout << "You can now login using your credentials.\n";
}

// Login function
void loginUser() {
    string username;
    string password;

    cout << "\n========== LOGIN ==========\n";

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream file(FILE_NAME);

    if (!file) {
        cout << "Error: No registered users found.\n";
        return;
    }

    string storedUsername;
    string storedPassword;

    string hashedPassword = hashPassword(password);

    while (file >> storedUsername >> storedPassword) {

        if (storedUsername == username &&
            storedPassword == hashedPassword) {

            cout << "\nLogin successful!\n";
            cout << "Welcome, " << username << "!\n";

            file.close();
            return;
        }
    }

    file.close();

    cout << "\nLogin failed!\n";
    cout << "Invalid username or password.\n";
}

// Main menu
int main() {

    int choice;

    cout << "=====================================\n";
    cout << "     LOGIN & REGISTRATION SYSTEM\n";
    cout << "=====================================\n";

    while (true) {

        cout << "\n----------- MENU -----------\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "----------------------------\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                registerUser();
                break;

            case 2:
                loginUser();
                break;

            case 3:
                cout << "\nThank you for using the system!\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
