// Basic function used in the program

#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "function.h"

void swap (unsigned char *a, unsigned char *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int GCD (int a, int b)
{
	if (a > b)
	{
		if (a%b == 0)
			return b;
		else
			return GCD (b, a%b);
	}
	else
	{
		if (b%a == 0)
			return a;
		else
			return GCD (a, b%a);
	}
}

// Salt the clear message
char *Salt()
{
	
	unsigned char *string = malloc(sizeof(unsigned char) * 16);
	srand(time(NULL));
	int i = 0;

	while (i < 16)
	{
		int random = rand() % 2;
		int key = rand() % 26;

		if (random == 0)
			string[i] = (char)((key-65) % 26 + 65);
		else if (random == 1)
			string[i] = (char)((key-97) % 26 + 97);
		i += 1;
	}
	return string;
}

	
