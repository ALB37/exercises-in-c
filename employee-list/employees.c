/* employees.c: request information about an arbitrary number of employees*/

#include "employees.h"
#include <stdio.h>
#include <string.h>

struct Employee {
	char last[16];
	char first[11];
	char position[16];
	int salary;
};

static struct Employee staff[BUFSIZ];
static int employeeCount = 0;

int addEmployee(void) {
	int wage;
	char lname[16];
	char fname[11];
	char title[16];
	if (employeeCount == BUFSIZ)
		return -1;

	printf("\nEnter an employee's last name: ");
	fflush(stdout);
	scanf("%s", lname);

	if (lname[0] == '0')
		return -1;

	printf("Enter that employee's first name: ");
	fflush(stdout);
	scanf("%s", fname);

	printf("Enter that employee's title: ");
	fflush(stdout);
	scanf("%s", title);

	printf("Enter that employee's salary: ");
	fflush(stdout);
	scanf("%d", &wage);

	strcpy(staff[employeeCount].last, lname);
	strcpy(staff[employeeCount].first, fname);
	strcpy(staff[employeeCount].position, title);
	staff[employeeCount].salary = wage;
	
	return employeeCount++;
}

int printEmployee(int i) {
	if (i >= employeeCount || i < 0)
		return -1;

	printf("%s: %s, %s; salary: $%d\n",
		   staff[i].position,
		   staff[i].last,
		   staff[i].first,
		   staff[i].salary);
	
	return 0;
}

int numEmployees(void) {
	return employeeCount;
}