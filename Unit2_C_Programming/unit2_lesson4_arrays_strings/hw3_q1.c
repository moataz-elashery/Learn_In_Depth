/*
 * hw3_q1.c
 *
 *  Created on: Sep 8, 2022 at 3:58:55 AM
 *      Author: Moataz Elashery
 */


#include "stdio.h"

#define rows 2
#define cols 2


int main()
{
	int i,j;
	float mat1[rows][cols],mat2[rows][cols],sum[rows][cols];
	printf("Enter elements of first matrix:\n");
	fflush(stdin); 	fflush(stdout);
	for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				printf("Enter a%d%d: ",i+1,j+1);
				fflush(stdin); 	fflush(stdout);
				scanf("%f",&mat1[i][j]);
			}

		}

	printf("Enter elements of Second matrix:\n");

	for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				printf("Enter b%d%d: ",i+1,j+1);
				fflush(stdin); 	fflush(stdout);
				scanf("%f",&mat2[i][j]);

				sum[i][j]=mat1[i][j]+mat2[i][j];
			}

		}
	printf("Sum of matrices:\n");
	printf("%.1f\t%.1f\n%.1f\t%.1f",sum[0][0],sum[0][1],sum[1][0],sum[1][1]);
	return 0;
}


