#include "Student.h"
#include <iostream>

Student::Student() : id(0), name(""), age(0) {}

Student::Student(int id, std::string name, int age)
    : id(id), name(name), age(age) {}

int Student::getId() const { return id; }
std::string Student::getName() const { return name; }
int Student::getAge() const { return age; }

void Student::display() const {
    std::cout << "\nID: " << id
              << "\nName: " << name
              << "\nAge: " << age << "\n";
}
