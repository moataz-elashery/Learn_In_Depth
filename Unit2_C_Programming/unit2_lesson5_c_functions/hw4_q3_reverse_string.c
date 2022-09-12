/*
 * hw4_q3_reverse_string.c
 *
 *  Created on: Sep 12, 2022 at 2:06:24 AM
 *      Author: Moataz Elashery
 */


#include "stdio.h"
#include "string.h"

void reverseString(char [],char []);
int main()
{
	char sentence[100], reverse[100];

	printf("Enter a sentence: \n");
	fflush(stdin); 	fflush(stdout);
	gets(sentence);
	reverseString(sentence,reverse);
	/* Puts null character after reversing the original sentence*/
	reverse[strlen(sentence)]='\0';
	printf("\Reverse sentence is :%s ",reverse);
	return 0;
}

void reverseString(char sentence[], char reverse[])
{
	/*get sentence length*/
	int length=strlen(sentence);
	/* When sentence length =0 then the sentence should have already been reversed*/
	if (length)
	{
		/* Send the original sentence from the second letter */
		reverse[length-1]=sentence[0];
		reverseString( &sentence[1] ,reverse);
	}

}



