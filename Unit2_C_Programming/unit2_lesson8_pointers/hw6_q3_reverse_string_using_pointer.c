/*
 * hw6_q3_reverse_string_using_pointer.c
 *
 *  Created on: Oct 18, 2022 at 3:10:26 PM
 *      Author: Moataz Elashery
 */

#include <stdio.h>
#include <string.h>

int main()
{
	printf("Input a string: ");
	char string[100];
	fflush(stdin);	fflush(stdout);

	gets(string);
	char *pc=&string[0];
	int i;
	int size=strlen(string);
	printf("Reverse of the string is: ");

	for(i=size;i>=0;i--)
	{
		printf("%c",*(pc+i));
	}






	return 0;
}



