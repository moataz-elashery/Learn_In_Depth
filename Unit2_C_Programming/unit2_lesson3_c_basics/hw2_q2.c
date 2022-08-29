/*
 * hw2_q2.c
 *
 *  Created on: Aug 29, 2022 at 7:47:11 PM
 *      Author: Moataz Elashery
 */

#include "stdio.h"

int main()
{
	char ch;
	char vowels[10]={'A','E','I','O','U','a','e','i','o','u'};
	printf("Enter character :");
	fflush(stdin); 	fflush(stdout);
	scanf("%c",&ch);
	int i=0;

	while(i<10)
	{
		if (ch==vowels[i])
		{
			printf("%c is a vowel",ch);
			break;
		}

		if(i==9)
		{
			printf("%c is a consonant",ch);
		}
		i++;
	}


	return 0;
}

