/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:21:16 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 15:03:43 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;
	int	p;

	i = 0;
	if (!*(str + i))
		return (1);
	while (*(str + i))
	{
		p = (*(str + i) >= 'A' && *(str + i) <= 'Z');
		if (!p)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = {"JHGaHGF"};

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
