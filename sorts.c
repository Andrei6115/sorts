#include "header.h"

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	shell(int *array, int size)
{
	int	i;
	int j;
	int dist;

	dist = size / 2;
	while (dist > 0)
	{
		i = dist;
		while (i < size)
		{
			j = i - dist - 1;
			while (j >= 0 && array[j] > array[j + dist])
			{
				swap(&array[j], &array[j + dist]);
				printArray(array, size);
				j -= dist;
			}
			i++;
		}
		dist /= 2;
	}
	
}

void	printArray(int *array, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("\t[%d]", array[i]);
		i++;
	}
	printf("\n");
	
}

void	selection(int *array, int size)
{
	int	i;
	int j;
	int	*select;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		select = &array[0];
		while (j < size - i)
		{
			if (*select < array[j])
				select = &array[j];
			j++;
		}
		swap(select, &array[size - 1 - i]);
		printArray(array, size);
		i++;
	}
	
}

void	bubble(int *array, int size)
{
	int	i;
	int j;
	int flag;

	i = 0;
	j = 0;
	flag = 1;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				flag = 0;
				swap(&array[j], &array[j + 1]);
				printArray(array, size);
			}
			j++;
		}
		i++;
		if (flag)
			return;
		flag = 1;
	}
}

void	insertion(int *array, int size)
{
	int temp;
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < size)
	{
		j = i - 1;
		temp = array[i];
		while (array[j] > temp && j >=0)
		{
			array[j + 1] = array[j];
			printf("temp: %d", temp);
			printArray(array, size);
			
			j-= 1;
		}
		array[j + 1] = temp;
		printf("temp: %d", temp);
		printArray(array, size);
		i++;
	}
}
