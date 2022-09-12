/*
 * hw4_q4_power_recursion.c
 *
 *  Created on: Sep 12, 2022 at 2:47:16 AM
 *      Author: Moataz Elashery
 */


#include "stdio.h"

int calcPower(int,int);
int main()
{
	int base,power,result;
	printf("Enter base number: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&base);
	printf("Enter positive integer: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&power);
	if(power<1)
	{
		printf("Program terminated enter a power larger than 0 \n");
		return 0;
	}

	result=calcPower(base,power);
	printf("%d ^ %d = %d ",base,power,result);

	return 0;
}

int calcPower(int num,int power)
{
	if (power==1)
		return num;

	return (num*calcPower(num,power-1));
}


