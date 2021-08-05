#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int length;

	length = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc((max - min) * 4);
	if (!range)
		return (-1);
	i = 0;
	while (min < max)
		*range[i++] = min++;
	*range[i] = '\0';
	return (**range);
}

int	main(int ac, char **av)
{
	int	*p;
	int	i;
	int range; 
	int *range2;
	p = NULL;

		
	range2 = &range;
	i = 0;
	*p = ft_ultimate_range(&range2, atoi(av[1]), atoi(av[2]));
	if (ac >= 0)
	{
		while (p[i])
			printf("%d\n", p[i++]);
	}
	return (0);
}
