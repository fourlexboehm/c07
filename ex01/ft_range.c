#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * 4);
	i = 0;
	if (!array)
		return (NULL);
	while (min < max)
		array[i++] = min++;
	array[i] = '\0';
	return (array);
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
}
*/
