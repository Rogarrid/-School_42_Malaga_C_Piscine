/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:40:22 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/29 14:12:48 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_colums(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	counter_row;

	counter_row = 1;
	while (argc > counter_row)
	{
		ft_colums(argv[counter_row]);
		write (1, &"\n", 1);
		counter_row++;
	}
	return (0);
}
