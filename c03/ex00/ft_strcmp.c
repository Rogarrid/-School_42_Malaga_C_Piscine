/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:17:30 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/27 15:23:56 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] != '\0') && (s2[counter] != '\0')
		&& (s1[counter] == s2[counter]))
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}
