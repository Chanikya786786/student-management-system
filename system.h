#ifndef SYSTEM_H
#define SYSTEM_H

#include "Student.h"
#include <vector>

class System {
private:
    std::vector<Student> students;

public:
    void load();
    void save();

    void addStudent();
    void displayAll();
    void searchStudent();
    void deleteStudent();
};

#endif
