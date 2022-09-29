#include <unistd.h>

void	ft_count_number_asc(void)
{
	int	number;
	
	number = '0';
	while (number <= '9')
	{
		write (1, &number, 1);
		number++;
	}
}

int main(void)
{
	ft_count_number_asc();
}
