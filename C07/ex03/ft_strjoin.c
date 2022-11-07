/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:07:24 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/08 12:16:17 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len_of_strs(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = -1;
	while (++i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
	}
	return (len);
}

char	*ft_malloc(int size, char **strs, char *sep)
{
	int		len;
	char	*str;

	if (size <= 0)
		return (NULL);
	len = ft_len_of_strs(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_sep(char *sep, char *str, int b, int n)
{
	b = -1;
	while (sep[++b])
		str[n++] = sep[b];
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
			str[n++] = strs[a][b];
		if (a == size - 1)
			break ;
		str = ft_sep(sep, str, b, n);
		n += ft_strlen(sep);
	}
	str[n] = '\0';
	return (str);
}
