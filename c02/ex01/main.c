/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:27:16 by rogarrid          #+#    #+#             */
/*   Updated: 2022/08/24 11:38:00 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

 char *ft_strncpy(char *dest, char *src, unsigned int n);

 int main (void)
{
	char source[] = "Hola carola";
	char desti[] = "";
	unsigned int n = 2;
	
	printf ("%s", ft_strncpy(desti, source, n));
}
