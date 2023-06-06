/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 22:10:01 by vkhlghat          #+#    #+#             */
/*   Updated: 2023/06/06 14:58:30 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	start;
	int	end;
	int	mid;

	if (nb < 1 || nb > 2147395600)
		return (0);
	start = 0;
	end = 46341;
	while (end - start > 1)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid > nb)
			end = mid;
		else
			start = mid;
	}
	return (0);
}
