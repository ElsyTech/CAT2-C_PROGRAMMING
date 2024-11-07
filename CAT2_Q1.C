//c structures
/*
Name:MWENDWA ELOSSY SIMON
Reg no:CT101/G/21429/24
*/
#include<stdio.h>//scanf(),printf()
#include<string.h>//strcpy
struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
}employee;
int main(){
	//struct employee employee;
	strcpy(employee.name,"John Doe");
	employee.id=1234;
	strcpy(employee.department,"Human Resources");
	employee.salary=55000.50;
	strcpy(employee.email,"john.doe@company.com");
	
	
	printf("Name:%s\n",employee.name);
	printf("Id:%d\n",employee.id);
	printf("Department:%s\n",employee.department);
	printf("Salary:%f\n",employee.salary);
	printf("Email:%s\n",employee.email);
	
	return 0;
}

