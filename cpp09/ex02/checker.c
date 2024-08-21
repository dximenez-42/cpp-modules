#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int last = -1;
	for (size_t i = 1; i < ac; i++)
	{
		if (atoi(av[i]) > last)
			last = atoi(av[i]);
		else
		{
			printf("Error: unordered between %d and %d\n", last, atoi(av[i]));
			return 1;
		}
	}
	printf("Ordered\n");
}