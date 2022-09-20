/*
 * md1_q7_sum100.c
 *
 *  Created on: Sep 13, 2022 at 3:19:39 AM
 *      Author: Moataz Elashery
 */


#include "stdio.h"

int sumFunc(int num);
int main()
{
	int result;
	result=sumFunc(100);
	printf("%d",result);
	return 0;
}

int sumFunc(int num)
{
	static int sum = 0;
	if(num>=0)
	{
		sum+=num;
		sumFunc(--num);
	}
	return sum;
}


