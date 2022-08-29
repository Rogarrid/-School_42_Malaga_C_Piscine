/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:55:33 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/25 13:21:37 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	var_aux;

	counter = 0;

	while(counter != (size / 2))
	{
		var_aux = tab[counter];
		tab[counter] = tab[size -1 -counter];
		tab[size - 1 - counter] = var_aux;
		counter++;
	}
}
