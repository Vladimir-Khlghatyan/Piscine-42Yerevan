/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:21:16 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 14:59:59 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;
	int	p;

	i = 0;
	if (!*(str + i))
		return (1);
	while (*(str + i))
	{
		p = (*(str + i) >= 'a' && *(str + i) <= 'z');
		if (!p)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = {"sfsdDfsds"};

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
