/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:21:25 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/23 18:09:20 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*(src + i) != '\0') && (i < n))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char			dest[14];
	char			src[1000] = {"Hello friends!"};
	unsigned int	n;

	n = 10;
	strncpy(dest, src, n);
	printf("C language: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("      Vlad: %s\n", dest);
	if (strncpy(dest, src, n) == ft_strncpy(dest, src, n))
		printf("%s\n", "true");
	else
		printf("%s\n", "false");
	return (0);
}
