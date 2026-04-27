#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int id;
    std::string name;
    int age;

public:
    Student();
    Student(int id, std::string name, int age);

    int getId() const;
    std::string getName() const;
    int getAge() const;

    void display() const;
};

#endif
