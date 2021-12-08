/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:58:16 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/25 15:45:24 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_dest;
	unsigned int	j_src;
	unsigned int	res;

	i_dest = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	res = 0;
	while (src[res] != '\0')
		res++;
	if (size <= i_dest)
		res += size;
	else
		res += i_dest;
	j_src = 0;
	while (src[j_src] != '\0' && i_dest + 1 < size)
	{
		dest[i_dest] = src[j_src];
		i_dest++;
		j_src++;
	}
	dest[i_dest] = '\0';
	return (res);
}

int	main(void)
{
	char			c_dest[1000] = {"Hello "};
	char			my_dest[1000] = {"Hello "};
	char			src[1000] = {"Jhon"};
	unsigned int	n;
	unsigned int	c_return;
	unsigned int	my_return;

	n = 10;
	c_return = strlcat(c_dest, src, n);
	printf("C language: %s %u\n", c_dest, c_return);
	my_return = ft_strlcat(my_dest, src, n);
	printf("      Vlad: %s %u\n", my_dest, my_return);
	if (strlcat(c_dest, src, n) == ft_strlcat(my_dest, src, n))
		printf("%s\n", "true");
	else
		printf("%s\n", "false");
	return (0);
}
