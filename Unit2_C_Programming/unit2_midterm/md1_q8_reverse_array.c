/*
 * md1_q8_reverse_array.c
 *
 *  Created on: Sep 13, 2022 at 3:44:31 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"

#define arraysize 5

void reverseArray(int [],int [], int size);
void printArray(int [], int size);
int main()
{
	int input[arraysize]={1,2,3,4,5};
	int reverse[arraysize];
	printArray(input,arraysize);
	reverseArray(input,reverse,arraysize);
	printArray(reverse,arraysize);
	return 0;
}

void reverseArray(int input[],int reverse[], int size)
{
	/* When array size = -1 then the array should have already been reversed*/
	if (size+1)
	{
		/* Send the original array from the second element */
		reverse[size-1]=input[0];
		reverseArray( &input[1] ,reverse,size-1);
	}
}

void printArray(int arr [], int size)
{
	int i;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}


