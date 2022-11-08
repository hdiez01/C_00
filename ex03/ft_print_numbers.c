void ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= 9)
	{
		write(1, &number, 1);
		number++;
	}
}
/*
int	main(void)
{
	write(1, &ft_print_numbers, 1);
}
*/