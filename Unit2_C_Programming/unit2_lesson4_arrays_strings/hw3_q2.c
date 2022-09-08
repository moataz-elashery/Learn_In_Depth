/*
 * hw3_q2.c
 *
 *  Created on: Sep 8, 2022 at 4:25:34 AM
 *      Author: Moataz Elashery
 */




#include "stdio.h"



int main()
{
	int i,size;
	float num[100],sum=0,avg;

	printf("Enter number of data:");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&size);

	for(i=0;i<size && i<100 ;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin); 	fflush(stdout);
		scanf("%f",&num[i]);
		sum+=num[i];
	}

	avg= sum/size;
	printf("\nAverage= %.2f",avg);
	return 0;
}

