#include <stdio.h>

/**
 * main-program entry point.
 * Return:0 no error, non zero if error.
 */
int main(void)
{
	int a;

	for (a = '0'; a < 10; a++)
		printf("%d", a);

	printf("\n");

	return (0);
}
