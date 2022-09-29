#include <unistd.h>

void	ft_only_a(char letter)
{
	write (1, &letter, 1);
}

int	main(void)
{
	char	character;
	
	character = 'a';
	ft_only_a(character);
	return (0);
}
