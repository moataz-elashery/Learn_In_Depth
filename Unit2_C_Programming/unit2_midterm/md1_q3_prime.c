/*
 * md1_q3_prime.c
 *
 *  Created on: Sep 13, 2022 at 3:12:13 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"

void printPrime(int,int);
int main()
{
	int lowBound,highBound;

	printf("Enter n1: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&lowBound);
	printf("Enter n2: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&highBound);

	printf("Prime numbers between %d and %d are: ",lowBound,highBound);
	printPrime(lowBound,highBound);

	return 0;
}

void printPrime(int low,int high)
{
	int num,j,isPrime;
	for(num=low; num<high;num++)
	{
		isPrime=1;
		for(j=num-1;j>1;j--)
		{
			/* If number divided by any number other than itself and one with no remainder it is not prime  */
			if(!(num%j))
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime)
		{printf("%d ", num );}
	}
}


