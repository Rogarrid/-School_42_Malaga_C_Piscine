/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:55:51 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/22 14:32:38 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main (void)
{
	char example[] = " ";
	char *pru;
	
	pru = example;

	printf("%s = %d", example, ft_str_is_alpha(example));

	return(0);
}
