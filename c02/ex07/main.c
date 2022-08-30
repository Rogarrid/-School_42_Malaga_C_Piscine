/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:15:43 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/23 11:49:20 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 
char *ft_strupcase(char *str);
void ft_putstr(char *str);

 int main (void)
{
	char low[] = "hola";
	char *i;
	char *c;

	i = low;
	ft_strupcase(i);
	c = ft_strupcase(i);
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
