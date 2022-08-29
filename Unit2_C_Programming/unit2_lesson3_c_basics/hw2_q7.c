/*
 * hw2_q7.c
 *
 *  Created on: Aug 29, 2022 at 9:04:37 PM
 *      Author: Moataz Elashery
 */


#include "stdio.h"

int main()
{
	int n,i,product=1;
	printf("Enter value of n:");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&n);
	if(n<0)
	{
		printf("\nError!!!! Factorial of negative number doesn't exist");
	}
	else if(n==0)
	{
		printf("\nFactorial of zero =1");

	}
	else
	{
		for(i=1;i<n+1;i++)
		{
			product*=i;
		}
		printf("\nFactorial= %d",product);
	}

	return 0;
}
