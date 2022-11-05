/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:34:37 by vkhlghat          #+#    #+#             */
/*   Updated: 2021/10/27 17:29:25 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	if (c == '\0')
		return (str + i);
	i = -1;
	while (str[++i])
		if (str[i] == (char)c)
			return (str + i);
	return (NULL);
}

char	*ft_strrchr(char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	if (c == '\0')
		return (str + i);
	while (--i >= 0)
		if (str[i] == (char) c)
			return (str + i);
	return (NULL);
}

int	ft_check_base(char *base)
{
	int	i;

	if (!base || ft_strlen(base) < 2)
		return (0);
	i = -1;
	while (base[++i])
		if (base[i] == '-' || base[i] == '+')
			return (0);
	i = -1;
	while (base[++i])
		if (ft_strchr(base, base[i]) != ft_strrchr(base, base[i]))
			return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	idx[100];
	unsigned int	n;
	int				base_size;
	int				i;

	if (!ft_check_base(base))
		return ;
	base_size = ft_strlen(base);
	if (nbr == 0)
		write(1, "0", 1);
	n = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	i = 0;
	while (n != 0)
	{
		idx[i] = n % base_size;
		n = n / base_size;
		i++;
	}
	while (--i >= 0)
		write(1, &base[idx[i]], 1);
}
