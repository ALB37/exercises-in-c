// program.cpp
#include "employee.h"
#include <iostream>
using namespace std;

int main() {
    Employee p1("Hendrix", "Jimi", "Guitarist", 1903421);
    Employee p2("Joplin", "Janis", "Singer", 2032524);

    if (p2.getSalary() != 2100238)
        p2.setSalary(2100238);

    Employee p3("", "", "", 0);
    p3.setLast("Garcia");
    p3.setFirst("Jerry");
    p3.setTitle("Band Leader");
    p3.setSalary(1849430);

    p1.print();
    cout << endl;
    p2.print();
    cout << endl;
    p3.print();
    cout << endl;
}