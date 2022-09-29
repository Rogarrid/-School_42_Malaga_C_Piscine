#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter_column;

	counter_column = 0;
	if (argc == 2)
	{
		while (argv[1][counter_column] != '\0')
		{
			if (argv[1][counter_column] >= 'a' && argv[1][counter_column] <= 'z')
			{
				argv[1][counter_column] = argv[1][counter_column] + 13;
				write (1, &argv[1][counter_column], 1);
			}
			else if (argv[1][counter_column] >= 'A' && argv[1][counter_column] <= 'Z')
			{
				argv[1][counter_column] = argv[1][counter_column] + 13;
				write (1, &argv[1][counter_column], 1);
			}
			else
				write (1, &argv[1][counter_column], 1);
			counter_column++;
		}
	}
	write (1, &"\n", 1);
	return (0);
}

