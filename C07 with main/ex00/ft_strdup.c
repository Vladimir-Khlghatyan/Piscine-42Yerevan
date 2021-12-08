/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:53:58 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/11/01 12:52:22 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src1[1000] = {"Hello world"};
	char	src2[1000] = {"Hello world"};

	printf("%p\n", ft_strdup(src1));
	printf("%p\n", strdup(src2));
	if (*ft_strdup(src1) == *strdup(src2))
		printf("yes");
	else
		printf("no");
	return (0);
}
