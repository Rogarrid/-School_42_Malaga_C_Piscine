/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:31:15 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/22 12:47:17 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str);

int main (void)
{
	char prub[] = "";
	char *e;
	char c;
	
	e = prub;
	ft_str_is_numeric(e);
	c = ft_str_is_numeric(e) + 48;
	write(1, &c, 1);
	return (0);
}
