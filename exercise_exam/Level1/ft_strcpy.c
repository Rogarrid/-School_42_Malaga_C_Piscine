char	*ft_strcpy(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter])
	{
		s2[counter] = s1[counter];
		counter++;
	}
	s2[counter] = '\0';
	return (s2);
}
