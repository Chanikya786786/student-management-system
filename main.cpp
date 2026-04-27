#include "System.h"
#include <iostream>

int main() {
    System sys;
    sys.load();

    int choice;

    do {
        std::cout << "\n1. Add Student\n";
        std::cout << "2. Display All\n";
        std::cout << "3. Search\n";
        std::cout << "4. Delete\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: sys.addStudent(); break;
        case 2: sys.displayAll(); break;
        case 3: sys.searchStudent(); break;
        case 4: sys.deleteStudent(); break;
        case 5: break;
        default: std::cout << "Invalid\n";
        }

    } while (choice != 5);

    return 0;
}
