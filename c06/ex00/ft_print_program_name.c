/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:56:16 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/29 14:51:49 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_char(char *str)
{
	int	counter_char;

	counter_char = 0;
	while (*str)
	{
		counter_char++;
		str++;
	}
	return (counter_char);
}

int	main(int argc, char **argv)
{
	(void) argc;
	write (1, argv[0], ft_count_char(argv[0]));
}
