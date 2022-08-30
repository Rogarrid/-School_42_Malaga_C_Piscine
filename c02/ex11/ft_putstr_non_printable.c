/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:24:28 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/25 15:56:55 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	flag;

	counter = 0;
	flag = 0;
	while (str[counter] != '\0')
	{
		if (flag == 0 && ((str[counter] >= 'a') && (str[counter] <= 'z')))
		{
			str[counter] = str[counter] - 32;
			flag++;
		}
		else if (flag > 1 && ((str[counter] >= 'A') && (str[counter] <= 'Z')))
			str[counter] = str[counter] + 32;
		else if ((str[counter] < '0')
			|| ((str[counter] > '9') && (str[counter] < 'A'))
			|| ((str[counter] > 'Z') && (str[counter] < 'a'))
			|| (str[counter] > 'z'))
			flag = 0;
		else
			flag++;
		counter++;
	}
	return (str);
}
