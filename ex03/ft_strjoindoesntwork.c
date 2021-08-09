#include <stdlib.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_create_str(int size, char **strs, char *sep)
{
    char    *str;
    int        len;
    int        i;

    len = 0;
    i = 0;
    while (i < size)
    {
        len += ft_strlen(strs[i]);
        i++;
    }
    len += (ft_strlen(sep) * size - 1);
    if (size == 0)
        str = (NULL);
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (0);
    return (str);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int        i;
    int        j;
    int        k;
    char    *str;

    str = ft_create_str(size, strs, sep);
    i = -1;
    k = 0;
    while (++i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            str[k++] = strs[i][j];
            j++;
        }
        j = 0;
        while (sep[j] && i != size - 1)
        {
            str[k++] = sep[j];
            j++;
        }
    }
    str[k] = '\0';
    return (str);
}
/*
#include <stdio.h>
int    main(int ac, char **av)
{
printf ( "%s\n", ft_strjoin(ac, av, "-"));
}
*/


#include <stdlib.h>
char	*ft_strcat(char *dest, char *src)
{
	int	desti;
	int	srci;

	desti = 0;
	srci = 0;
	while (dest[desti] != '\0')
		desti++;
	while (src[srci] != '\0')
	{
		dest[desti] = src[srci];
		srci++;
		desti++;
	}
	dest[desti] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_calcul(int size, char **strs, char *sep)
{
	int i;
	int	cmpt;
	int len;

	i = 0;
	cmpt = 0;
	len = ft_strlen(sep);
	while (i < size)
	{
		cmpt += ft_strlen(strs[i]);	
		if (i < ft_strlen(strs[i]))
			cmpt += len;
		i++;
	}	
	return (cmpt);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int	result;
	char *str;

	result = ft_calcul(size, strs, sep);
	if (size == 0)
	{
		if (!(str = malloc(sizeof(char) * 1)))
			str[0] = '\0';
		return (str);
	}
	if (!(str = malloc(sizeof(char) * result * 1)))
	while (i < size)
	{
	str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	int	i = 5;
	char sep [] = "...";
	char *test[5];
	test[0] = "abcdef";
	test[1] = "ghijk";
	test[2] = "lmnopqrs";
	test[3] = "tuvhijklmn";
	test[4] = "qrstuvwxyz";
	printf("%s\n", ft_strjoin(i, test, sep));
	return (0);
}
