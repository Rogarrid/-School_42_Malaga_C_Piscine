/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:27:45 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/28 16:52:09 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while ((s1[counter] != '\0' || s2[counter] != '\0') && counter < n)
	{	
		if (s1[counter] > s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
		else if (s1[counter] < s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
		counter++;
	}	
	return (0);
}
