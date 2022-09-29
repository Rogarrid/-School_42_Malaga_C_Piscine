#include <unistd.h>

int main(int argc, char **argv)
{
	int counter_str;
		int counter_char;

	counter_str = 0;
	counter_char = 0;
	if (argc == 2)
	{
		while(argv[1][counter_str] != '\0')
		{
			if (argv[1][counter_str] >= 'a' && argv[1][counter_str] <= 'z')
				counter_char = (argv[1][counter_str] - 'a') + 1;
			else if (argv[1][counter_str] >= 'A' && argv[1][counter_str] <= 'Z')
				counter_char = (argv[1][counter_str] - 'A') + 1;
			while (counter_char >= 1)
			{
				write(1, &argv[1][counter_str], 1);
				counter_char--;
			}
			counter_char = 0;
			counter_str++;
		}
	}
	return 0;
}
