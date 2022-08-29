/*
 * hw2_q5.c
 *
 *  Created on: Aug 29, 2022 at 8:54:47 PM
 *      Author: Moataz Elashery
 */


#include "stdio.h"

int main()
{
	char var;
	printf("Enter a character:");
	fflush(stdin); 	fflush(stdout);
	scanf("%c",&var);
	/*ASCII code for 'A' is 65,'Z' is 90,'a' is 97,'z' is 122*/
	if((var >= 65 && var <=90) || (var >= 97 && var <=122) )
	{
		printf("%c is an alphabet",var);
	}
	else
	{
		printf("%c is not an alphabet",var);
	}


	return 0;
}
