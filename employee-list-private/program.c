/* program.c */

#include "employee.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 5

int main() {
    Employee* employees[MAX_EMPLOYEES];
    Employee* pointer;
    int i, numEmployees = 0;

    employees[numEmployees++] = createEmployee("Hendrix", "Jimi", "Guitarist", 1903421);
    employees[numEmployees++] = createEmployee("Joplin", "Janis", "Singer", 2032524);

    if (getSalary(employees[numEmployees - 1]) != 2100238)
        setSalary(employees[numEmployees - 1], 2100238);

    pointer = createEmployee("", "", "", 0);
    setLast(pointer, "Garcia");
    setFirst(pointer, "Jerry");
    setTitle(pointer, "BandLeader");
    setSalary(pointer, 1849430);
    employees[numEmployees++] = pointer;

    for (i = 0; i < numEmployees; i++) {
        printEmployee(employees[i]);
        free(employees[i]);
    }

    return 0;
}