

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char **argv, int i, int j)
{
	int	x;
	int	stock;

	x = 0;
	stock = 0;
	while (argv[i][x] != 0 && argv[j][x] != 0)
	{
		stock = argv[i][x] - argv[j][x];
		if (stock != 0)
			return (stock);
		else
			x++;
	}
	if (argv[i][x] == 0)
		return (-argv[j][x]);
	else
		return (argv[i][x]);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv, i, j) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
				j = i;
			}
			j++;
		}
		i++;
		j = i;
	}
}


int		main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
