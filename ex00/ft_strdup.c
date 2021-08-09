#include <unistd.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*clone;

	clone = (char *) malloc(sizeof(src + 1));
	if (clone != NULL)
		ft_strcpy (clone, src);
	return (clone);
}
/*
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write (1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	if (ac > 0)
		ft_putstr(ft_strdup(av[1]));
	write (1, "\n", 1);
	return (0);
}
*/
