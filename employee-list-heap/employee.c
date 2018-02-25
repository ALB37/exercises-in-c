/* employee.c: request information about an arbitrary number of employees */

#include "employee.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee*
    createEmployee(char* lastname, char* firstname, char* position, int wage) {
        struct Employee* pointer = malloc(sizeof(struct Employee));
        strcpy(pointer->last, lastname);
        strcpy(pointer->first, firstname);
        strcpy(pointer->title, position);
        pointer->salary = wage;
        return pointer;
    }

char* getLast(struct Employee* pointer) {
    return pointer ? pointer->last : "";    
}

char* getFirst(struct Employee* pointer) {
    return pointer ? pointer->first : "";
}

char* getTitle(struct Employee* pointer) {
    return pointer ? pointer->title : "";
}

int getSalary(struct Employee* pointer) {
    return pointer ? pointer->salary : 0;
}

void setLast(struct Employee* pointer, char* lastname) {
    if (pointer != NULL)
        strcpy(pointer->last, lastname);
}

void setFirst(struct Employee* pointer, char* firstname) {
    if (pointer != NULL)
        strcpy(pointer->first, firstname);
}

void setTitle(struct Employee* pointer, char* position) {
    if (pointer != NULL)
        strcpy(pointer->title, position);
}

void setSalary(struct Employee* pointer, int wage) {
    if (pointer != NULL)
        pointer->salary = wage;
}

void printEmployee(struct Employee* pointer) {

    if (pointer != NULL)
	    printf("%s: %s, %s; salary: $%d\n",
		        pointer->title,
		        pointer->last,
		        pointer->first,
		        pointer->salary);
}