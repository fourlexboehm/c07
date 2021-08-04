#include <unistd.h>
#include <stdlib.h>
char *ft_strdup(char *src)
{
	int		i;
	char 	*clone;

	clone = malloc(sizeof(src));
	if (!clone || !src)
		return (0);
		
	

	while (*src != '\0' && *clone != '\0')
		*clone++ = *src++
	*clone = "\0";
	return (clone);

}
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
