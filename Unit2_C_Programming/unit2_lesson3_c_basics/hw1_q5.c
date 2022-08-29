/*
 * hw1_q5.c
 *
 *  Created on: Aug 29, 2022
 *      Author:  Moataz Elashery
 */


#include "stdio.h"

int main()
{
	char var1;
	printf("Enter a character:");
	fflush(stdin); 	fflush(stdout);
	scanf("%c",&var1);
	printf("ASCII Value is: %d",var1);
	return 0;
}
