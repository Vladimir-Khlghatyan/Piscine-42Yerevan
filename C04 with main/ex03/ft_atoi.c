/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:58:10 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 16:27:32 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\v' || c == '\n')
		return (1);
	else if (c == '\r' || c == '\f' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		nshan;
	int		tiv;

	i = 0;
	nshan = 1;
	tiv = 0;
	if (!str[i])
		return (0);
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nshan = -nshan;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tiv = (tiv * 10) + (str[i] - 48);
		i++;
	}
	return (tiv * nshan);
}

int	main(void)
{
	char	str[100] = {"     -------++++1545fgdf451 jhdkvdsdjkfskuusdj"};

	printf("%d", ft_atoi(str));
	return (0);
}
