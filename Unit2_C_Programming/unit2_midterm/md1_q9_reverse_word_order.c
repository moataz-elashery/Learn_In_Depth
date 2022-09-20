/*
 * md1_q9.c
 *
 *  Created on: Sep 18, 2022 at 3:18:56 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"
#include "string.h"
void reverseWords(char [],char []);
int main()
{
	char reverse[100];
	char sentence[100];
	printf("Enter a sentence: \n");
	fflush(stdin); 	fflush(stdout);
	gets(sentence);
	printf("\nWords: %s ",sentence);
	reverseWords(sentence,reverse);
	/* Puts null character after reversing the original sentence*/
	reverse[strlen(sentence)+1]='\0';
	printf("\nReversed words are:%s ",reverse);
	return 0;
}
void reverseWords(char sentence[], char reverse[])
{
	/*get sentence length*/
	int i,j,delimiter,length,rev=0;
	delimiter=length=strlen(sentence);
	for(i=length; i>=0 ;i--)
	{
		if(sentence[i]==' ' || i==0 )
		{
			if(i == 0)
				reverse[rev++]=' ';
			for(j=0;j<(delimiter-i);j++,rev++)
			{
				reverse[rev]=sentence[i+j];
			}
			delimiter=i;
		}
	}
}




