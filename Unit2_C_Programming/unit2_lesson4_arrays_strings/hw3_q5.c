/*
 * hw3_q5.c
 *
 *  Created on: Sep 8, 2022 at 3:53:42 PM
 *      Author: Moataz Elashery
 */




#include "stdio.h"

int main()
{
	int i,size,target,location;
	int num[100];

	printf("Enter number of elements:");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&size);

	if(size<100)
	{
		for(i=0;i<size;i++)
		{
			printf("%d. Enter number: ",i+1);
			fflush(stdin); 	fflush(stdout);
			scanf("%d",&num[i]);

		}
		printf("Enter element to be searched:");
		fflush(stdin); 	fflush(stdout);
		scanf("%d",&target);


		for(i=0;i<size;i++)
		{
			if(num[i]==target)
			{
				// location +1 because C is zero indexed but the task is one indexed
				location=i+1;
				break;
			}
		}

		printf("Number found at location: %d",location);

	}
	else
		printf("Array size must be less than 100");
	return 0;
}
