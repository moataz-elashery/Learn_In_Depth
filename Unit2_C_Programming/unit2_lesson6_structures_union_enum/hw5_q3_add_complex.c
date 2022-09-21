/*
 * hw5_q3_add_complex.c
 *
 *  Created on: Sep 21, 2022 at 6:01:41 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"

struct SComplex
{
	float m_real;
	float m_img;
};


struct SComplex  addComplex(struct SComplex,struct SComplex);
int main()
{
	struct SComplex num1,num2,result;

	printf("Enter information for first Complex: ");
	printf("\nEnter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num1.m_real);
	scanf("%f",&num1.m_img);

	printf("Enter information for second Complex: ");
	printf("\nEnter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num2.m_real);
	scanf("%f",&num2.m_img);
	result=addComplex(num1,num2);


	printf("\nSum = %.1f+%.1fi ",result.m_real,result.m_img);

	return 0;
}

struct SComplex  addComplex(struct SComplex num1,struct SComplex num2)
{
	struct SComplex result;
	result.m_real= num1.m_real+num2.m_real;
	result.m_img= num1.m_img+num2.m_img;
	return result;
}
