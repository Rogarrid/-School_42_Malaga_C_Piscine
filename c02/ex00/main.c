/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:19:50 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/21 15:39:46 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

 int main (void)
{
	char source[] = "Source string.";
	char destin[] = "Destination string.";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

    dest = ft_strcpy(destin, source);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}
