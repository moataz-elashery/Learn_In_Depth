/*
 * hw5_q2_add_distances.c
 *
 *  Created on: Sep 21, 2022 at 5:52:43 AM
 *      Author: Moataz Elashery
 */

#include "stdio.h"

struct SDistance
{
	int feet;
	float inch;
};

int main()
{
	struct SDistance dist1,dist2,sumDist;

	printf("Enter information for first distance: ");
	printf("\nEnter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&dist1.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&dist1.inch);

	printf("Enter information for second distance: ");
	printf("\nEnter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&dist2.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&dist2.inch);

	sumDist.feet= dist1.feet+dist2.feet;
	sumDist.inch= dist1.inch+dist2.inch;
	if (sumDist.inch>=12)
	{
		sumDist.inch-=12;
		sumDist.feet++;
	}

	printf("\nSum of Distances= %d' -%.1f\" ",sumDist.feet,sumDist.inch);

	return 0;
}


