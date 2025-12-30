//student.cpp
#include "student.h"
#include <iostream>
using namespace std;

Student::Student()
    : id(8), name("tcg"), gender('m')
{
}

Student::Student(int id, const std::string& name, char gender)
    : id(id), name(name), gender(gender)
{
}

void Student::display() const 
{
    std::cout << "ID: " << id << ", Name: " << name << ", Gender: " << gender << std::endl;
}