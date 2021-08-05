#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	length = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc(length * 4 + 1);
	if (!range)
		return (-1);
	i = 0;
	while (min < max)
		range[0][i++] = min++;
	*range[i] = '\0';
	return (length);
}
/*
int	main(int ac, char **av)
{
	int	i;
	int forange;
	int *range2;
	int **range;
	int length;
	
	forange = 19;
	range2 = &forange;
	range = &range2;

	i = 0;
	length = ft_ultimate_range(range, atoi(av[1]), atoi(av[2]));
	if (ac >= 0)
	{
		printf("%d\n%d", length, i);
//		while (*range[i])
//			printf("%d\n", *range[i++]);
	}
	return (0);
}
*/
