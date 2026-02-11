#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  printing numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("positive \n");
	else if (n == 0)
		printf("zero \n");
	else
		printf("negative \n");
	return (0);
}
