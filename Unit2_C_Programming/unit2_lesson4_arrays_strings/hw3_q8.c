/*
 * hw3_q8.c
 *
 *  Created on: Sep 8, 2022 at 5:28:06 PM
 *      Author: Moataz Elashery
 */


#include "stdio.h"
#include "string.h"
int main()
{
	int i,size;
	char sentence[100],reverse[100];

	printf("Enter string:");
	fflush(stdin); 	fflush(stdout);
	gets(&sentence[0]);

	size=strlen(sentence);
	printf("Size: %d",size);
	if(size<100)
	{
		for(i=0;i<size;i++)
		{
			reverse[i]=sentence[size-i-1];
		}
		reverse[i]=0;
		printf("\nReverse String is: %s",reverse);
	}
	else
		printf("Sentence size must be less than 100 characters");
	return 0;
}



