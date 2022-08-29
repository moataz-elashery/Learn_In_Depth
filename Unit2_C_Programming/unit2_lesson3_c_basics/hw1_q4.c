/*
 * hw1_q4.c
 *
 *  Created on: Aug 29, 2022
 *      Author:  Moataz Elashery
 */


#include "stdio.h"

int main()
{
	float var1,var2;
	printf("Enter two decimal numbers:");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&var1);
	scanf("%f",&var2);
	printf("Product: %f",var1*var2);
	return 0;
}
