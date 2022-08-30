/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:27:20 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/24 10:59:42 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_printable(char *str);

int main (void)
{
	char impr[] = "dfáds545 @-";
	char *i;
	char c;
	
	i = impr;
	ft_str_is_printable(impr);
	c = ft_str_is_printable(impr) + 48;
	write (1, &c, 1);
	return (0);
}
