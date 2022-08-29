/*
 * hw2_q3.c
 *
 *  Created on: Aug 29, 2022 at 8:23:00 PM
 *      Author: Moataz Elashery
 */

#include "stdio.h"
int main()
{
	float a,b,c,largest;
	printf("Enter value of a:");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&b);
	printf("Enter value of c:");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&c);

	largest=a;
	if(largest<b)
	{
		largest=b;
	}
	else if(largest<c)
	{
		largest=c;
	}

	printf("Largest number= %f",largest);
	return 0;
}
