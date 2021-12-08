/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:39:52 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/24 15:08:20 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	i;
	int	p;

	i = 0;
	if (!*(str + i))
		return (1);
	while (*(str + i))
	{
		p = (*(str + i) >= 32 && *(str + i) <= 127);
		if (!p)
			return (0);
		i++;
	}
	return (1);
}
