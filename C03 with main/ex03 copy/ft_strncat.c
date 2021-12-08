/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:24:44 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/25 15:41:02 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i_dest;
	unsigned int	i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest])
	{
		i_dest++;
	}
	while (src[i_src] && (i_src < nb))
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
	char			dest[100] = {"Hello "};
	char			src[100] = {"world"};
	unsigned int	nb;

	nb = 3;
	printf("%s\n", ft_strncat(dest, src, nb));
	if (ft_strncat(dest, src, nb) == strncat(dest, src, nb))
		printf("%s\n", "true");
	else
		printf("%s\n", "false");
	return (0);
}
