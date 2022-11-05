/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:04:42 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/06 15:27:46 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len])
		len++;
	i = -1;
	if (size)
	{	
		while (src[++i] && i < (size - 1))
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (len);
}
