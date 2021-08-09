#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	*p;
	int	i;

	i = 0;
	p = ft_range(atoi(av[1]), atoi(av[2]));
	if (ac > 0)
	{	
		while (p[i])
			printf("%d\n", p[i++]);
		return (0);
	}
	return (0);
}
*/
