#include <unistd.h>

int ft_strlen(char *str)
{
	int length_str;

	length_str = 0;
	while (*str)
	{
		length_str++;
		str++;
	}
	return (length_str);
}

int	main(int argc, char **argv)
{
	int	counter_column;

	counter_column = 0;
	if (argc == 2)
	{
		while (argv[1][counter_column] == ' ' || argv[1][counter_column] == '\t')
			counter_column++;
		while (argv[1][counter_column] != '\0' && argv[1][counter_column] != ' ' && argv[1][counter_column] != '\t')
		{
			write (1, &argv[1][counter_column], 1);
			counter_column++;
		}

	}
	write (1, &"\n", 1);
}
