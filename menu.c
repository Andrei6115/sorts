#include "header.h"

void	menu()
{
	int	size;
	int flag;
	int	*arr;
	int	i;

	
	printf("Enter size: ");
	scanf("%d", &size);
	system("clear");
	printf("1. Hand input\n2. Auto input\n");
	scanf("%d", &flag);
	switch (flag)
	{
	case 1:
		printf("Enter array size of %d:", size);
		i = 0;
		arr = malloc(sizeof(int));
		while (i < size)
		{
			scanf("%d", &arr[i]);
			i++;
		}
		break;
	case 2:
		arr = genArray(size);
	break;
	default:
		return;
	}
	system("clear");
	printArray(arr, size);
	printf("Select sort\n1. insertion\n2. bubble\n3. selection\n4. shell\n0. Exit\n");
	scanf("%d", &flag);
	switch (flag)
	{
	case 1:
	insertion(arr, size);
		break;
	case 2:
	bubble(arr, size);
		break;
	case 3:
	selection(arr, size);
		break;
	case 4:
	shell(arr,size);
		break;
	default:
		return;
	}
	free(arr);
}