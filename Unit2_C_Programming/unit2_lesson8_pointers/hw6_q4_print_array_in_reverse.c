/*
 * hw6_q4_print_array_in_reverse.c
 *
 *  Created on: Oct 18, 2022 at 3:19:38 PM
 *      Author: Moataz Elashery
 */


#include <stdio.h>

#define size 5

int main()
{
	printf("Input 5 number of elements in the array: \n");
	int input[size];

	int i;
	int *pint=&input[0];
	for(i=0;i<size;i++)
	{
		printf("element - %d: ",i+1);
		fflush(stdin);	fflush(stdout);
		scanf("%d",pint+i);

	}

	printf("The elements of array in reverse order are :\n");

	for(i=size-1;i>=0;i--)
	{
		printf("element - %d: %d ",i+1,*(pint+i));

		printf("\n");
	}

	return 0;
}



