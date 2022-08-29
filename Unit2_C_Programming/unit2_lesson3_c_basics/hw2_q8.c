/*
 * hw2_q8.c
 *
 *  Created on: Aug 29, 2022 at 9:12:48 PM
 *      Author: Moataz Elashery
 */


#include "stdio.h"

int main()
{
	char op;
	float a,b,res;
	printf("Enter operator either + or - or * or /:");
	fflush(stdin); 	fflush(stdout);
	scanf("%c",&op);
	printf("Enter Two operands:");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&b);

	switch(op)
	{
		case '+':

			res=a+b;
			break;

		case '-':

			res=a-b;
			break;

		case '*':

			res=a*b;
			break;


		case '/':

			res=a/b;
			break;

		default:

			printf("Try again");

	}

	printf("Result of operation: %f",res);

	return 0;
}
