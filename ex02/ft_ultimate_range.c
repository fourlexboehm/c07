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
	*range = (int *) malloc(length * 5 + 10);
	if (!range)
		return (-1);
	i = 0;
	while (min < max)
		range[0][i++] = min++;
	range[0][i] = '\0';
	return (length);
}
/*
int	main(int ac, char **av)
{
	int	i;
	int length;
	int **range;
	
	range = NULL;

	i = 0;
	length = ft_ultimate_range(range, atoi(av[1]), atoi(av[2]));
	if (ac >= 0)
	{
		printf("%d\n%d", length, i);
		while (*range[i++])

			printf("%d\n", range[0][i]);
//			printf("%d\n", range[0][i++]);
	}
	return (0);
}
*/
