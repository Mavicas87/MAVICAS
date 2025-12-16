//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);

	size = max - min;
	range = malloc(sizeof(int) * size);
	if (!range)
		return (NULL);

	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;
	int	size;

	min = -9;
	max = 8;

	range = ft_range(min, max);
	if (!range)
	{
		printf("Error: rango invalido o malloc fallo\n");
		return (1);
	}

	size = max - min;
	i = 0;
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");

	free(range);
	return (0);
}
*/