/*
 * hw1_q3.c
 *
 *  Created on: Aug 29, 2022
 *      Author:  Moataz Elashery
 */


#include "stdio.h"

int main()
{
	int var1,var2;
	printf("Enter two integers:");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&var1);
	scanf("%d",&var2);
	printf("Sum: %d",var1+var2);
	return 0;
}

