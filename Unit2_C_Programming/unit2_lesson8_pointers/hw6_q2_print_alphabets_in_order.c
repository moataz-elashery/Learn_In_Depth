/*
 * hw6_q2_print_alphabets_in_order.c
 *
 *  Created on: Oct 18, 2022 at 2:45:55 PM
 *      Author: Moataz Elashery
 */

#include <stdio.h>

int main()
{
	char c='A';
	char *pc=&c;
	int i;
	for(i=0;i<26;i++)
	{
		printf("%c  ",*pc);
		c++;
	}






	return 0;
}


