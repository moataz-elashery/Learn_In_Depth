/*
 * hw3_q6.c
 *
 *  Created on: Sep 8, 2022 at 4:56:09 PM
 *      Author: Moataz Elashery
 */





#include "stdio.h"
#include "string.h"
int main()
{
	int i,reps=0,size;
	char sentence[100], target;

	printf("Enter string:");
	fflush(stdin); 	fflush(stdout);
	gets(&sentence[0]);

	size=strlen(sentence);
	printf("Size:%d",size);
	printf("\nEnter a character to find frequency:");
	fflush(stdin); 	fflush(stdout);
	scanf("%c",&target);
	if(size<100)
	{
		for(i=0;i<size;i++)
		{
			if(sentence[i]==target)
			{reps++;}
		}
		printf("Frequency of %c is :%d",target,reps);
	}
	else
		printf("Sentence size must be less than 100 characters");
	return 0;
}
