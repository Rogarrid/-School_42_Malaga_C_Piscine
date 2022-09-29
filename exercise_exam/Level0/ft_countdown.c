#include <unistd.h>

void	ft_count_number_descent(void)
{
	int	number;

	number = '9';
	while (number >= '0')
	{
		write (1, &number, 1);
		number--;
	}
	write (1, "\n", 1);
}

int main(void)
{
	ft_count_number_descent();
	return (0);
}
