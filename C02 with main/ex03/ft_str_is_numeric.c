/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:49:44 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 14:56:12 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	p;

	i = 0;
	if (*(str + i) == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		p = ((*(str + i) >= '0') && (*(str + i) <= '9'));
		if (!p)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "0154h51";

	printf("%d", ft_str_is_numeric(str));
	return (0);
}
