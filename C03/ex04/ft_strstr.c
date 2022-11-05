/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:50:33 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/11/05 15:43:52 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find || !to_find[0])
		return (str);
	i = -1;
	while (str[++i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			++j;
			if (!to_find[j])
				return (&str[i]);
		}
	}
	return (NULL);
}
