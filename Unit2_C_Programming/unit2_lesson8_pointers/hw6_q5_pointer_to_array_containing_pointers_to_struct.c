/*
 * hw6_q5_pointer_to_array_containing_pointers_to_struct.c
 *
 *  Created on: Oct 18, 2022 at 4:16:09 PM
 *      Author: Moataz Elashery
 */

#include <stdio.h>


struct employee
{
	char name[50];
	int ID;

};


int main()
{
	struct employee emp1={.name="Helen",.ID=5};
	struct employee emp2={.name="Noha",.ID=8};
	struct employee emp3={.name="Alex",.ID=1002};
	struct employee *pt_arr[3];
	pt_arr[0]=&emp1;
	pt_arr[1]=&emp2;
	pt_arr[2]=&emp3;
	struct employee* (*pt)[3]=&pt_arr;

	/*printf("Hello\n");*/
	/*printf("%d\n", pt_arr[0]->ID);*/

	printf("EmployeeName: ");
	printf("%s\n", (*pt)[2]->name);

	printf("EmployeeID: ");
	printf("%d\n", (*pt)[2]->ID);

	return 0;
}



