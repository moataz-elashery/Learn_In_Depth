/*
 * md1_q10_count_ones_interval.c
 *
 *  Created on: Sep 20, 2022 at 2:39:40 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"
int countBinaryInterval(int num);
int main()
{
	int num,max;

	printf("Enter number: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&num);
	max=countBinaryInterval(num);
	printf("Max count of ones in %d between two zeros is  %d ",num,max);

	return 0;
}
int countBinaryInterval(int num)
{
	int count=0,isCount=0,max=0;
	while(num>0)
	{
		if(num%2 && isCount)
			count++;
		else if (num%2) /*When starting if the least significant bit is 1 .. skip it till you find zero */
			isCount=0;
		else
		{
			max = max>=count?max:count;
			count=0;
			isCount^=1;
		}
		num>>=1;
	}
	max = max>=count?max:count;
	return max;
}



