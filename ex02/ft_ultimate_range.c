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
int	main(void)
{
	int	i;
	int *range;
	int min = 0;
	int max = 30;
	
	i = 0;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (i < max)	
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
