void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i < '7')
	{
		j = i;
		while (++j <= '8')
		{
			k = j;
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);

				if (i != '7' || j != '8' || k != '9')
				{
					write(1, ", ", 2);
				}
				k++;
			}
			i++;
		}
	}
	
}
/*
int	main(void)
{
	write(1, &ft_print_comb, 1);
}
*/