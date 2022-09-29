/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:19:06 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/28 11:27:12 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter_dest;
	unsigned int	counter_src;

	counter_dest = 0;
	while ((dest[counter_dest] != '\0'))
	{
		counter_dest++;
	}
	counter_src = 0;
	while ((src[counter_src] != '\0') && (counter_src < nb))
	{
		dest[counter_dest] = src[counter_src];
		counter_dest++;
		counter_src++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
