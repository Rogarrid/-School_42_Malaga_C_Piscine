/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:54:20 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/23 12:43:46 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putstr (char *str);
char *ft_strlowcase(char *str);
int main (void)
{
	char up[] = "HOLA";
	char *u;
	char *c;

	u = up;
	ft_strlowcase(u);
	c = ft_strlowcase(u);
	ft_putstr(c);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &*str, 1);
		str++;
	}
}
