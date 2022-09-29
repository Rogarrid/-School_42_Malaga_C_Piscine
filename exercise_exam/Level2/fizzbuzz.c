#include <unistd.h>

void	ft_strprint (int number)
{
	if (number > 9)
		ft_strprint (number / 10);
	write (1, &"0123456789" [number % 10], 1);
}

void	ft_mult_three_five(void)
{
	int	number;

	number = 0;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write (1, "buzz", 4);
		else if (number % 5 == 0)
			write (1, "fizz", 4);
		else 
			ft_strprint (number);
		number++;
		write (1, "\n", 1);

	}
}

int	main(void)
{
	ft_mult_three_five();
	return (0);
}
