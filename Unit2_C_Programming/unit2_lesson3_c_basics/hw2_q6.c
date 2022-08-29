/*
 * hw2_q6.c
 *
 *  Created on: Aug 29, 2022 at 9:00:50 PM
 *      Author: Moataz Elashery
 */



#include "stdio.h"

int main()
{
	int n,i,sum;
	printf("Enter value of n:");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&n);
	for(i=1,sum=0;i<n+1;i++)
	{
		sum+=i;
	}


	printf("\nSum= %d",sum);
	return 0;
}
