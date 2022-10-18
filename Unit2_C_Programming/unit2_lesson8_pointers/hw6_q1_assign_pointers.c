/*
 * hw6_q1_assign_pointers.c
 *
 *  Created on: Oct 18, 2022 at 2:34:01 PM
 *      Author: Moataz Elashery
 */

#include <stdio.h>

int main()
{

	int m= 29;
	printf("Address of m %x\n",&m);
	printf("Value of m %d\n",m);
	printf("\n");

	int* ab=&m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab %x\n",ab);
	printf("Content of pointer ab %d\n",*ab);
	printf("\n");

	m=34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab %x\n",ab);
	printf("Content of pointer ab %d\n",*ab);
	printf("\n");

	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m %x\n",&m);
	printf("Value of m %d\n",m);

return 0;
}

