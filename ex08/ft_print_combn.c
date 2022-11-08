void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(int	start, int n)
{
	int	i;

	if (n == 0)
	{
		ft_putchar(', ');
		ft_putchar(' ');
		return ;
	}
	i = start + 1;
	while (1 < 10)
	{
		ft_putchar(start + '0');
		ft_putchar(i + '0');
		ft_print_comb(i, n - 1);
		i++;
	}
}

void ft_print_combn(int	n)
{
	ft_print_comb(0,n);
}
/*
int	main(void)
{
	write(1, &ft_print_combn, 1);
}
*/