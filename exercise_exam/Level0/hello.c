#include <unistd.h>

void	ft_said_hello (char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int main(void)
{
char str[] = "Hello World!";
ft_said_hello (str);

return (0);
}
