/*
 * hw1_q6.c
 *
 *  Created on: Aug 29, 2022
 *      Author:  Moataz Elashery
 */


#include "stdio.h"

int main()
{
	float a,b,temp;
	printf("Enter value of a:");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;

	printf("After swapping, value of a: %f",a);
	printf("\nAfter swapping, value of b: %f",b);
	return 0;
}
