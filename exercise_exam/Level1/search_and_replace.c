#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	length_argv;
	length_argv = 0;

	while (*str)
	{
		length_argv++;
		str++;
	}
	return (length_argv);
}

int	main(int argc, char **argv)
{
	int	counter_column;
	int	pos_letter;
	
	pos_letter = 0;
	counter_column = 0;
	ft_strlen(argv[2]);
	ft_strlen(argv[3]);
 
	if (argc == 4 && (ft_strlen(argv[2]) == 1 || ft_strlen(argv[3]) == 1)) 
	{
		while (argv[1][counter_column] != '\0')
		{
			if (argv[1][counter_column] == argv[2][pos_letter])
				argv[1][counter_column] = argv[3][pos_letter];
			write (1, &argv[1][counter_column], 1);
			counter_column++;
		}
	}
	write (1, &"\n", 1);
	return (0);
}

