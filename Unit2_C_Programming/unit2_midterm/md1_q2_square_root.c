/*
 * md1_q2_square_root.c
 *
 *  Created on: Sep 20, 2022 at 3:07:58 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"
#include "math.h"
double squareRoot(int num,int lowerRoot);
int perfectSquare(int num);
int main()
{
	int num,lowerRoot;
	float root;
	printf("Enter number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	lowerRoot=perfectSquare(num);
	if(lowerRoot*lowerRoot==num)
		root=lowerRoot;
	else
		root=squareRoot(num,lowerRoot);

	printf("Square root of %d is %.3lf ",num,root);
	return 0;
}
int perfectSquare(int num)
{
	int lowerRoot=num/2;
	while(num<(lowerRoot*lowerRoot) || num>((lowerRoot+1)*(lowerRoot+1)))
	{
		if(num<(lowerRoot*lowerRoot))
			lowerRoot--;
		else
			lowerRoot++;
	}
	return lowerRoot;
}

double squareRoot(int num,int lowerRoot)
{
	double diff,factor,tolerance=0.001,root,upperLim,LowerLim;
	upperLim=lowerRoot+1, LowerLim=lowerRoot;
	factor=0.0001*num; /*As the number increases decrease factor's coefficient*/

	root=(LowerLim+upperLim)/2.0;
	diff=root*root-num;

	while(fabs(diff)>tolerance)
	{
		if(diff>0)
		{
			upperLim=root;
			root=upperLim- fabs(diff)*factor;
		}
		else if(diff<0)
		{
			LowerLim=root;
			root=LowerLim + fabs(diff)*factor;
		}

		diff=root*root-num;
	}
	return fabs(root);
}



