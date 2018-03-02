// employee.cpp
#include "employee.h"
#include <iostream>
#include <string.h>

Employee::Employee(const char* lastname, const char* firstname, const char* position, int wage) {
    strcpy(last, lastname);
    strcpy(first, firstname);
    strcpy(title, position);
    salary = wage;
}
const char* Employee::getLast() const {
    return last;
}
const char* Employee::getFirst() const {
    return first;
}
const char* Employee::getTitle() const {
    return title;
}
int Employee::getSalary() const {
    return salary;
}
void Employee::setLast(const char* lastname) {
    strcpy(last, lastname);
}
void Employee::setFirst(const char* firstname) {
    strcpy(first, firstname);
}
void Employee::setTitle(const char* position) {
    strcpy(title, position);
}
void Employee::setSalary(int wage) {
    salary = wage;
}
void Employee::print() const {
    std::cout << last
              << ", " << first
              << "; Title: " << title
              << "; Salary: $" << salary;
}