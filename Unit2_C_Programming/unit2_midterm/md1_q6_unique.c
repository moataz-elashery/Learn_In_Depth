/*
 * md1_q6_unique.c
 *
 *  Created on: Sep 18, 2022 at 2:45:11 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"
#define arraysize 7
int getUnique(int [], int size, int idx);
void printArray(int [], int size);
int main()
{
	int input[arraysize]={4,2,5,2,5,7,4};
	printArray(input,arraysize);
	/*Two loops one using recursion and the other using a for loop*/
	int result=getUnique(input, arraysize,0);
	printf("\nOutput: %d ",result);
	return 0;
}

int getUnique(int arr [], int size, int idx)
{
	int i;
	/* If an equal is found call the function again to try with the next element  */
	for(i=0;i<size && idx<size;i++)
	{
		if((arr[idx]==arr[i]) && (i!=idx)) /* i!=idx to make sure the element isn't compared to itself*/
			{return getUnique(arr,size,idx+1);}
	}
	return arr[idx];
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

