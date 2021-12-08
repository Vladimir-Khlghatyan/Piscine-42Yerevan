/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:58:16 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/25 15:46:10 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
