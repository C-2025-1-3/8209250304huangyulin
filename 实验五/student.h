#pragma once
#include <string>

class Student
{
private:
    int id;
    std::string name;
    char gender;
public:
    Student();
    Student(int id, const std::string& name, char gender);
    void display() const;
   
};

