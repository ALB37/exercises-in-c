/* employees.c: request information about an arbitrary number of employees*/

#include <stdio.h>
#include <string.h>

struct Employee {
	char last[16];
	char first[11];
	char position[11];
	int salary;
};

struct Company {
	struct Employee staff[BUFSIZ];
	int employeeCount;
};

int main() {
	struct Company co;
	int i, wage;
	char lname[16];
	char fname[11];
	char title[11];
	co.employeeCount = 0;

	printf("Enter info about your company's employees below\n");
	printf("To exit data entry, enter a 0 as an employee's last name\n");

	while (co.employeeCount < BUFSIZ) {
		printf("\nEnter an employee's last name: ");
		fflush(stdout);
		scanf("%s", lname);

		if (lname[0] == '0') break;

		printf("Enter that employee's first name: ");
		fflush(stdout);
		scanf("%s", fname);

		printf("Enter that employee's title: ");
		fflush(stdout);
		scanf("%s", title);

		printf("Enter that employee's salary: ");
		fflush(stdout);
		scanf("%d", &wage);

		strcpy(co.staff[co.employeeCount].last, lname);
		strcpy(co.staff[co.employeeCount].first, fname);
		strcpy(co.staff[co.employeeCount].position, title);
		co.staff[co.employeeCount].salary = wage;
		co.employeeCount++;
	}

	printf("\nEmployee List:\n\n");

	for (i = 0; i < co.employeeCount; i++)
		printf("%s: %s, %s; salary: $%d\n",
			   co.staff[i].position,
			   co.staff[i].last,
			   co.staff[i].first,
			   co.staff[i].salary);
	
	return 0;
}