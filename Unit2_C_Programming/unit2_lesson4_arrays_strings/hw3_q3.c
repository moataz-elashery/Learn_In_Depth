/*
 * hw3_q3.c
 *
 *  Created on: Sep 8, 2022 at 3:24:43 PM
 *      Author: Moataz Elashery
 */




#include "stdio.h"

#define max_rows 15
#define max_cols 15


int main()
{
	int i,j,rows,cols;
	int mat[max_rows][max_cols],t_mat[max_cols][max_rows];
	printf("Enter rows and columns of matrix: \n");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&rows);
	scanf("%d",&cols);

	printf("Enter elements of matrix:\n");
	fflush(stdin); 	fflush(stdout);
	for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				printf("Enter element a%d%d: ",i+1,j+1);
				fflush(stdin); 	fflush(stdout);
				scanf("%d",&mat[i][j]);
			}

		}

	printf("Entered matrix:\n");
	// Printing the matrix
	for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				printf("%d\t",mat[i][j]);
			}
			printf("\n");
		}
	// Getting the matrix transpose
	for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				t_mat[j][i]=mat[i][j];
			}

		}

	printf("Transpose matrix:\n");
	// Printing the transpose
	for(i=0;i<cols;i++)
		{
			for(j=0;j<rows;j++)
			{
				printf("%d\t",t_mat[i][j]);
			}
			printf("\n");
		}

	return 0;
}
