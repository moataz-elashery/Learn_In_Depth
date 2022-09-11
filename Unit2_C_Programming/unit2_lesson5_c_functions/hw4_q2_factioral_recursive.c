/*
 * hw4_q2_factioral_recursive.c
 *
 *  Created on: Sep 12, 2022 at 1:45:28 AM
 *      Author: Moataz Elashery
 */



#include "stdio.h"

int calcFactorial(int);
int main()
{
	int num,fact;

	printf("Enter positive integer: \n");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&num);
	if(num<1)
	{
		printf("Program terminated enter a number larger than 0 \n");
		return 0;
	}

	fact=calcFactorial(num);
	printf("\nFactorial of %d is: %d ",num,fact);

	return 0;
}

int calcFactorial(int num)
{
	if (num==1)
		return 1;

	return (num*calcFactorial(num-1));
}
