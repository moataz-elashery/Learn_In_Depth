/*
 * hw2_q4.c
 *
 *  Created on: Aug 29, 2022 at 8:50:38 PM
 *      Author: Moataz Elashery
 */


#include "stdio.h"
int main()
{
	float a;
	printf("Enter a number:");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&a);

	if(a>0)
	{
		printf("%f is positive",a);
	}
	else if(a<0)
	{
		printf("%f is negative",a);
	}
	else
	{
		printf("You entered zero");
	}

	return 0;
}
