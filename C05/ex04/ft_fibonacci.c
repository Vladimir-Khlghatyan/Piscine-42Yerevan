/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 21:21:57 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/28 00:15:57 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
