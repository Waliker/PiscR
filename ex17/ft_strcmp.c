

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != 0 && s2[j] != 0)
	{
		i++;
		j++;
	}
	return (i - j);
}
