#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

#define MEALS 3

int main()
{
	int calories[MEALS];
	int x, total;

	total = 0;				/* initialize total */

	puts("Calorie Counter");

	for (x = 0; x < MEALS; x++) {
		printf("Calories at meal %d: ", x + 1);
		scanf("%d", &calories[x]);
		total = total + calories[x];
	}

	printf("You had a total of %d calories.\n", total);

	_getch();
	return(0);
}