/*
 * md1_q1_sum_digits_in_num.c
 *
 *  Created on: Sep 13, 2022 at 2:59:07 AM
 *      Author: Moataz Elashery
 */




#include "stdio.h"


int sumDigits(int num);


int main()
{
	int num,sum;

	printf("Enter number: \n");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&num);
	sum=sumDigits(num);
	printf("Digits sum = %d",sum);

	return 0;
}

int sumDigits(int num)
{
	int sum=0;
	while(num>0)
	{
		sum += (num % 10);
		num /= 10;
	}

	return sum;
}
