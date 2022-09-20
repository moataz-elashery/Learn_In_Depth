/*
 * md1_q5_count_binary.c
 *
 *  Created on: Sep 13, 2022 at 3:32:40 AM
 *      Author: Moataz Elashery
 */


#include "stdio.h"


int countBinary(int num);


int main()
{
	int num,count;

	printf("Enter number: \n");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&num);
	count=countBinary(num);
	printf("Count of ones in %d is  %d ",num,count);

	return 0;
}

int countBinary(int num)
{
	int count=0;
	while(num>0)
	{
		count+=num%2;
		num>>=1;
	}

	return count;
}


