/*
 * hw4_q1_prime_numbers.c
 *
 *  Created on: Sep 12, 2022 at 1:21:49 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"

void printPrime(int,int);
void main()
{
	int lowBound,highBound;

	printf("Enter two numbers (intervals): \n");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&lowBound);
	scanf("%d",&highBound);

	printf("\nPrime numbers between %d and %d are: ",lowBound,highBound);
	printPrime(lowBound,highBound);


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
