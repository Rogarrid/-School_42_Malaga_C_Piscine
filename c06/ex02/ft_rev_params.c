/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:17:15 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/29 14:29:41 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	counter_row;

	counter_row = argc - 1;
	argc = 0;
	while (counter_row > argc)
	{
		ft_print_str(argv[counter_row]);
		write (1, &"\n", 1);
		counter_row--;
	}
	return (0);
}
