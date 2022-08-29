/*
 * hw2_q1.c
 *
 *  Created on: Aug 29, 2022 at 7:42:34 PM
 *      Author: Moataz Elashery
 */

#include "stdio.h"

int main()
{
	int a;
	printf("Enter an integer you want to check:");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&a);
	if(a%2)
	{
		printf("%d is odd ",a);
	}
	else if(a%2 ==0)
	{
		printf("\n%d is even ",a);
	}

	return 0;
}
