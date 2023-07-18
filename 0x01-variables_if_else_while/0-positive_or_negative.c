#include <stdlib.h>
#include <time.h>
/* more libraries goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int m;

	srand(time(0));
	m = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
