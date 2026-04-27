#include "System.h"
#include <fstream>
#include <iostream>

void System::load() {
    std::ifstream file("students.txt");
    int id, age;
    std::string name;

    while (file >> id >> name >> age) {
        students.emplace_back(id, name, age);
    }
}

void System::save() {
    std::ofstream file("students.txt");

    for (auto &s : students) {
        file << s.getId() << " "
             << s.getName() << " "
             << s.getAge() << "\n";
    }
}

void System::addStudent() {
    int id, age;
    std::string name;

    std::cout << "Enter ID: ";
    std::cin >> id;
    std::cout << "Enter Name: ";
    std::cin >> name;
    std::cout << "Enter Age: ";
    std::cin >> age;

    students.emplace_back(id, name, age);
    save();
}

void System::displayAll() {
    for (auto &s : students) {
        s.display();
    }
}

void System::searchStudent() {
    int id;
    std::cout << "Enter ID: ";
    std::cin >> id;

    for (auto &s : students) {
        if (s.getId() == id) {
            s.display();
            return;
        }
    }

    std::cout << "Student not found\n";
}

void System::deleteStudent() {
    int id;
    std::cout << "Enter ID: ";
    std::cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getId() == id) {
            students.erase(it);
            save();
            std::cout << "Deleted\n";
            return;
        }
    }

    std::cout << "Not found\n";
}
