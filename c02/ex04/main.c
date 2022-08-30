/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:33:35 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/24 10:52:48 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_str_is_lowercase(char *str);

int main (void)
{
	char low[] = "jgfhgfhrtyrt";
	char *l;
	char c;

	l = low;
	ft_str_is_lowercase(l);
	c = ft_str_is_lowercase(l) + 48;
	write (1, &c, 1);
	return(0);
}
