/*
 * hw3_q4.c
 *
 *  Created on: Sep 8, 2022 at 3:36:51 PM
 *      Author: Moataz Elashery
 */



#include "stdio.h"

int main()
{
	int i,size,new,location;
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
		printf("Enter element to be inserted:");
		fflush(stdin); 	fflush(stdout);
		scanf("%d",&new);

		printf("Enter location:");
		fflush(stdin); 	fflush(stdout);
		scanf("%d",&location);


		for(i=size;i>=0 ;i--)
		{
			// location -1 because C is zero indexed but the task is one indexed
			if(i != (location-1))
			{ num[i]=num[i-1];}
			else
			{
				num[i]=new;
				break;
			}
		}

		for(i=0;i<size+1;i++)
		{
			printf("%d\t",num[i]);
		}
	}
	else
		printf("Array size must be less than 100");
	return 0;
}

