/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:33:17 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/28 14:53:09 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strstr(char *str, char *to_find)
{
	char	counter;

	counter = 48;
	while (str[counter] != to_find)
	{
		counter++;
	}
	return (counter);
}

