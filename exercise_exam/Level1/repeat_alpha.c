#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter_column;
	int number_repeat;

	counter_column = 0;

	if (argc == 2)
	{
		while (argv[1][counter_column] != '\0')
		{
			if (argv[1][counter_column] >= 'A' && argv[1][counter_column] <= 'Z')
			{
				number_repeat = (argv[1][counter_column] - 'A') + 1;

			}
			else if (argv[1][counter_column] >= 'a' && argv[1][counter_column] <= 'z')
			{
				number_repeat = (argv[1][counter_column] - 'a') + 1;
			}
			while (1 <= number_repeat)
			{
				write (1, &argv[1][counter_column], 1);
				number_repeat--;
			}
			counter_column++;
		}
	}
	write (1, &"\n", 1);
	return (0);
}

