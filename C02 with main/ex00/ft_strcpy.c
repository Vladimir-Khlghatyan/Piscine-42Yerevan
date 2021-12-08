/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:24:38 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/23 18:00:54 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int	main(void)
{
	char			dest[50];
	char			src[] = {"Hello friends!"};

	strcpy(dest, src);
	printf("C language: %s\n", dest);
	ft_strcpy(dest, src);
	printf("      Vlad: %s\n", dest);
	if (strcpy(dest, src) == ft_strcpy(dest, src))
		printf("%s\n", "true");
	else
		printf("%s\n", "false");
	return (0);
}
