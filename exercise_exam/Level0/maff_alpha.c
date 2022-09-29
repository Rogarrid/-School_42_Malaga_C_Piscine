#include <unistd.h>

void	ft_alpha_low_up (void)
{
	char	letter;

	letter = 'a';

	while (letter <= 'z')
	{
		write (1, &letter, 1);
		letter++;
		while (letter <= 'z')
		{
			letter = letter - 32;
			write (1, &letter, 1);
			letter++;
			break;
		}
		letter = letter + 32;
	}
}

int main(void)
{
	ft_alpha_low_up();
	return (0);
}
