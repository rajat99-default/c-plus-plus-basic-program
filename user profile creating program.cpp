#include <iostream>
#include <vector>
#include <string>

using namespace std; 

class User {
public:
    User(const string& name, int age) : name(name), age(age) {}

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

private:
    string name;
    int age;
};

class UserManagementSystem {
public:
    void createUser(const string& name, int age) {
        users.push_back(User(name, age));
    }

    void viewUsers() {
        cout << "User List:\n";
        for (const User& user : users) {
            cout << "Name: " << user.getName() << ", Age: " << user.getAge() << endl;
        }
    }

    void updateUser(const string& name, const string& newName, int newAge) {
        for (User& user : users) {
            if (user.getName() == name) {
                user.setName(newName);
                user.setAge(newAge);
                cout << "User updated successfully.\n";
                return;
            }
        }
        cout << "User not found.\n";
    }

    void deleteUser(const string& name) {
        for (auto it = users.begin(); it != users.end(); ++it) {
            if (it->getName() == name) {
                users.erase(it);
                cout << "User deleted successfully.\n";
                return;
            }
        }
        cout << "User not found.\n";
    }

private:
    vector<User> users;
};

int main() {
    UserManagementSystem userSystem;

    while (true) {
        cout << "\nUser Management System\n";
        cout << "1. Create User\n";
        cout << "2. View Users\n";
        cout << "3. Update User\n";
        cout << "4. Delete User\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                int age;
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter age: ";
                cin >> age;
                userSystem.createUser(name, age);
                break;
            }
            case 2:
                userSystem.viewUsers();
                break;
            case 3: {
                string name, newName;
                int newAge;
                cout << "Enter name of the user to update: ";
                cin >> name;
                cout << "Enter new name: ";
                cin >> newName;
                cout << "Enter new age: ";
                cin >> newAge;
                userSystem.updateUser(name, newName, newAge);
                break;
            }
            case 4: {
                string name;
                cout << "Enter name of the user to delete: ";
                cin >> name;
                userSystem.deleteUser(name);
                break;
            }
            case 5:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
