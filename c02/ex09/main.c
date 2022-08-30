/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:25:07 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/25 15:41:45 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str);
void ft_putstr(char *str);

int main (void)
{
	char	cap[] = "salUT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*i;
	char	*c;

	i = cap;
	ft_strcapitalize(i);
	c = ft_strcapitalize(i);
	ft_putstr(c);

	return (0);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &*str, 1);
		str++;
	}
}
