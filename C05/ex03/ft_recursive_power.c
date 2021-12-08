/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:50:11 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 03:51:06 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
