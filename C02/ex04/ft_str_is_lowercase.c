/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:21:16 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/06 15:00:51 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (!str || !str[0])
		return (1);
	i = -1;
	while (str[++i])
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	return (1);
}
