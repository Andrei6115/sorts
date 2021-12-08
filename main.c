#include "header.h"
typedef struct s_array
{
	int		*data;
	size_t	size;
} t_array;

int main(void)
{
	t_array	array;

	array.size = 10;
	array.data = genArray(array.size);
	printArray(array.data, array.size);
	menu();
}