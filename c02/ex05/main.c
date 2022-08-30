/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:16:19 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/24 10:57:33 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_str_is_uppercase(char *str);

#include <unistd.h>

int main (void)
{
	char up[] = "DSFSADddfdsDFD1";
	char *u;
	char c;

	u = up;
	ft_str_is_uppercase(u);
	c = ft_str_is_uppercase(u) + 48;
	write (1, &c, 1);
return (0);
}
