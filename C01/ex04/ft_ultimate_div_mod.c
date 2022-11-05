/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:58:20 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/20 20:03:54 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	term_div;
	int	term_mod;

	term_div = *a / *b;
	term_mod = *a % *b;
	*a = term_div;
	*b = term_mod;
}
