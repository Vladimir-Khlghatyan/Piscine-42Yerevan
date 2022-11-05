/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:26:41 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/06 13:53:28 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (str)
		while (str[i])
			i++;
	if (c == '\0')
		return (str + i);
	i = -1;
	while (str[++i])
		if (str[i] == (char)c)
			return (str + i);
	return (NULL);
}

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = 0;
	if (str)
		while (str[i])
			i++;
	if (c == '\0')
		return (str + i);
	while (--i >= 0)
		if (str[i] == (char) c)
			return (str + i);
	return (NULL);
}

int	ft_check_base(char *base)
{
	int	i;
	int	len;

	len = 0;
	if (base)
		while (base[len])
			len++;
	if (len < 2)
		return (0);
	i = -1;
	while (base[++i])
		if (base[i] == '-' || base[i] == '+')
			return (0);
	i = -1;
	while (base[++i])
		if (ft_strchr(base, base[i]) != ft_strrchr(base, base[i]))
			return (0);
	return (1);
}

int	ft_strset(char *str, char *set)
{
	int	i;

	if (!str || !set)
		return (0);
	i = -1;
	if (str[++i] == '-' || str[i] == '+')
		i++;
	while (str[++i])
		if (!ft_strchr(set, str[i]))
			return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	i;
	int	sign;
	int	num;

	if (!ft_check_base(base) || !ft_strset(str, base))
		return (0);
	size = 0;
	if (base)
		while (base[size])
			size++;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	num = 0;
	while (str[i])
		num = num * size + ft_strchr(base, str[i++]) - base;
	return (num * sign);
}
