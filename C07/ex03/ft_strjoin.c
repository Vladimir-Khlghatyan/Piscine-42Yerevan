/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:07:24 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/11/02 12:16:17 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len_of_strs(int size, char **strs, char *sep)
{
	int	len_of_strs;
	int	i;

	len_of_strs = 0;
	i = 0;
	while (i < size)
	{
		len_of_strs += ft_strlen(strs[i]);
		if (i < size - 1)
			len_of_strs += ft_strlen(sep);
		i++;
	}
	return (len_of_strs);
}

char	*ft_malloc(int size, char **strs, char *sep)
{
	int		len_of_strs;
	char	*str;

	if (size <= 0)
		return (NULL);
	len_of_strs = ft_len_of_strs(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (len_of_strs + 1));
	if (str == NULL)
		return (0);
	return (str);
}

char	*ft_sep(char *sep, char *str, int b, int n)
{
	b = 0;
	while (sep[b])
	{
		str[n] = sep[b];
		b++;
		n++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		b;
	int		n;
	char	*str;

	a = -1;
	n = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	str = ft_malloc(size, strs, sep);
	while (strs[++a])
	{
		b = -1;
		while (strs[a][++b])
		{
			str[n] = strs[a][b];
			n++;
		}
		if (a == size - 1)
			break ;
		str = ft_sep(sep, str, b, n);
		n += ft_strlen(sep);
	}
	str[n] = '\0';
	return (str);
}
