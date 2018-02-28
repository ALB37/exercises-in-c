/* employee.c: request information about an arbitrary number of employees */

#include "employee.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char last[16];
    char first[11];
    char title[16];
    int salary;
};

Employee* createEmployee(char* lastname, char* firstname, char* position, int wage) {
    Employee* pointer = malloc(sizeof(Employee));
    strcpy(pointer->last, lastname);
    strcpy(pointer->first, firstname);
    strcpy(pointer->title, position);
    pointer->salary = wage;
    return pointer;
}

char* getLast(Employee* pointer) {
    return pointer ? pointer->last : "";    
}

char* getFirst(Employee* pointer) {
    return pointer ? pointer->first : "";
}

char* getTitle(Employee* pointer) {
    return pointer ? pointer->title : "";
}

int getSalary(Employee* pointer) {
    return pointer ? pointer->salary : 0;
}

void setLast(Employee* pointer, char* lastname) {
    if (pointer != NULL)
        strcpy(pointer->last, lastname);
}

void setFirst(Employee* pointer, char* firstname) {
    if (pointer != NULL)
        strcpy(pointer->first, firstname);
}

void setTitle(Employee* pointer, char* position) {
    if (pointer != NULL)
        strcpy(pointer->title, position);
}

void setSalary(Employee* pointer, int wage) {
    if (pointer != NULL)
        pointer->salary = wage;
}

void printEmployee(Employee* pointer) {

    if (pointer != NULL)
	    printf("%s: %s, %s; salary: $%d\n",
		        pointer->title,
		        pointer->last,
		        pointer->first,
		        pointer->salary);
}
