/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:26:41 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/11/04 13:53:28 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || \
			c == '\r' || c == ' ');
}

static int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_find_char(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		result;
	int		neg;
	int		base_len;

	result = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	while (ft_isspace(*str))
		str++;
	neg = *str == '-';
	str += (*str == '+' || *str == '-') ? 1 : 0;
	while (ft_find_char(*str, base) < base_len)
		result = result * base_len - ft_find_char(*str++, base);
	return (neg ? result : -result);
}

int	main(void)
{
	char	*base;
	char	*str;

	str = "-12fdb3";
	base = "0123456789ABCDEF";
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}
