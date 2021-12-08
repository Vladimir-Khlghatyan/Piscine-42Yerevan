/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:58:10 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/27 17:25:50 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || \
			c == '\r' || c == '\f' || c == ' ')
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
