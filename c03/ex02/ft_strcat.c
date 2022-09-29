/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:13:13 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/28 16:07:03 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter_dest;
	int	counter_src;

	counter_dest = 0;
	while (dest[counter_dest] != '\0')
	{
		counter_dest++;
	}
	counter_src = 0;
	while (src[counter_src] != '\0')
	{
		dest[counter_dest] = src[counter_src];
		counter_dest++;
		counter_src++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
