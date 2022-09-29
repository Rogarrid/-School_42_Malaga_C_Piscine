#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size_str;

	size_str = 0;
	while (*str)
	{
		size_str++;
		str++;
	}
	return (size_str);
}

int	main(int argc, char **argv)
{
	int	counter_column;

	ft_strlen(argv[1]);
	counter_column = ft_strlen(argv[1]);
	if (argc == 2)
	{
		while (counter_column > 0)
		{
			write(1, &argv[1][counter_column - 1], 1);
			counter_column--;
		}
	}
	write (1, &"\n", 1);
	return (0);
}
