/*
 * md1_q4_reverse_num.c
 *
 *  Created on: Sep 13, 2022 at 3:27:03 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"


int reverseDigits(int num);


int main()
{
	int num,reverse;

	printf("Enter number: \n");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&num);
	reverse=reverseDigits(num);
	printf("Digits reversed = %d",reverse);

	return 0;
}

int reverseDigits(int num)
{
	int sum=0;
	while(num>0)
	{
		sum*=10;
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}



