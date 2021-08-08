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


char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int cmpt;
	int len;

	i = 0;
	cmpt = 0;
	len = ft_strlen(sep);
	while (i < size)
	{
		cmpt += ft_strlen(strs[i]);	
		if (i < ft_strlen(strs[i])
			cmpt += len;
		i++;
	}	
}


	
