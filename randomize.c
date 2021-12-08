#include "header.h"
#include <time.h>
int *genArray(size_t size)
{
	int	*array;

	array = malloc(sizeof(int) * size);
	if (!array)
	{
		printf("Mem error\n");
		exit(1);
	}
	srand(time(NULL));
	while (size > 0)
	{
		size--;
		array[size] = rand() % 200 - 100;
	}
	return (array);
}