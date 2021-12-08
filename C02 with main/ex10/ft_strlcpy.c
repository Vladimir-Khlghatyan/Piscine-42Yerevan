/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:04:42 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 14:36:13 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	q;
	unsigned int	i;

	q = 0;
	i = 0;
	while (src[q] != '\0')
		q++;
	if (size != 0)
	{	
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (q);
}

int	main(void)
{
	char			dest[14];
	char			src[1000] = {"Hello friends!"};
	unsigned int	n;

	n = 10;
	strlcpy(dest, src, n);
	printf("C language: %s\n", dest);
	ft_strlcpy(dest, src, n);
	printf("      Vlad: %s\n", dest);
	if (strlcpy(dest, src, n) == ft_strlcpy(dest, src, n))
		printf("%s\n", "true");
	else
		printf("%s\n", "false");
	return (0);
}
