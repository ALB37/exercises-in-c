/* program.c: This is the executable component of this program */

#include "employees.h"
#include <stdio.h>

int main() {
	int i;
  
	printf("Enter info about your company's employees below\n");
	printf("To exit data entry and view the list of employees,\n");
	printf("enter 0 for an employee's last name\n");

	while (addEmployee() != -1)
		;

	printf("\nList of employees:\n");

	for (i = 0; i < numEmployees(); i++) {
		printEmployee(i);
	}

	return 0;
}