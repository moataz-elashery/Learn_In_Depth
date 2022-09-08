/*
 * hw3_q7.c
 *
 *  Created on: Sep 8, 2022 at 5:23:09 PM
 *      Author: Moataz Elashery
 */




#include "stdio.h"
#include "string.h"
int main()
{
	int i,size_strlen,size_manual=0;
	char sentence[100];

	printf("Enter string:");
	fflush(stdin); 	fflush(stdout);
	gets(&sentence[0]);

	size_strlen=strlen(sentence);
	printf("Size using strlen: %d",size_strlen);
	if(size_strlen<100)
	{
		for(i=0;i<100;i++)
		{
			if(sentence[i]!=0)
			{size_manual++;}
			else
				{break;}
		}
		printf("\nSize calculated manually: %d",size_manual);
	}
	else
		printf("Sentence size must be less than 100 characters");
	return 0;
}
