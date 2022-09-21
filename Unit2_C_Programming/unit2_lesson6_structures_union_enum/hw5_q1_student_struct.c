/*
 * student_struct.c
 *
 *  Created on: Sep 21, 2022 at 5:39:34 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"

struct SStudent
{
	char name[50];
	int roll;
	float marks;
};

int main()
{
	struct SStudent student1;
	printf("Enter student name: ");
	fflush(stdin);fflush(stdout);
	gets(student1.name);

	printf("Enter student's roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&student1.roll);

	printf("Enter student's marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&student1.marks);



	printf("\nDisplaying Information");

	printf("\nStudent Name: %s ",student1.name);
	printf("\nStudent's roll number: %d ",student1.roll);
	printf("\nStudent's marks: %.2f ",student1.marks);

	return 0;
}


