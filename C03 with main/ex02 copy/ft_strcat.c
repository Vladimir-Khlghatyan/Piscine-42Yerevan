/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:40:25 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/25 15:39:02 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i_dest;
	int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest])
	{
		i_dest++;
	}
	while (src[i_src])
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[100] = {"Hello "};
	char	src[100] = {"world"};

	printf("%s\n", ft_strcat(dest, src));
	if (ft_strcat(dest, src) == strcat(dest, src))
		printf("%s\n", "true");
	else
		printf("%s\n", "false");
	return (0);
}
