/*
 * hw5_q4_student_struct_array.c
 *
 *  Created on: Sep 21, 2022 at 6:12:03 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"

#define no_of_students 10

struct SStudent
{
	char name[50];
	float marks;
};

struct SStudent getData();
void printData(struct SStudent);
int main()
{
	struct SStudent student[no_of_students];
	int i;
	for(i=0;i<no_of_students;i++)
	{
		printf("\nFor roll number %d ",i+1);
		student[i]=getData();
	}

	for(i=0;i<no_of_students;i++)
	{
		printf("\nInformation for roll number %d ",i+1);
		printData(student[i]);
	}

	return 0;
}

struct SStudent getData()
{
	struct SStudent student;
	printf("\nEnter name: ");
	fflush(stdin);fflush(stdout);
	gets(student.name);

	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&student.marks);

	return student;

}

void printData(struct SStudent student)
{
	printf("\nStudent Name: %s ",student.name);
	printf("\nStudent's marks: %.2f ",student.marks);
}


