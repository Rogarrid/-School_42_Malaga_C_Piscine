 #include <unistd.h>
void ft_rev_int_tab(int *tab, int size);

int main (void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size;
	char str;
	int counter;

	size = 9;
	ft_rev_int_tab(tab, size);
	counter = 0;;
	//str = tab[counter] + 48;
	while (counter < size)
	{
		str = tab[counter] + 48;
		write (1, &str, 1);
		counter++;
	}
	return(0);
}
