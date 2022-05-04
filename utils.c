/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:24:14 by anrechai          #+#    #+#             */
/*   Updated: 2022/05/03 19:49:20 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	i = -1;
	j = 0;
	while (++i < size)
		j = j + ft_strlen(strs[i]);
	if (size > 0)
		j = j + (size - 1) * ft_strlen(sep);
	dest = malloc((j + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 1;
	j = 0;
	while (i < size)
	{
		ft_strcpy(&dest[j], strs[i]);
		j = j + ft_strlen(strs[i]);
		i++;
		if (i < size)
			j = j + dest + j + ft_strlen(sep) - ft_strcpy(dest + j, sep);
	}
	dest[j] = '\0';
	return (dest);
}

long long int	ft_atoi(char *tab)
{
	long long int	i;
	long long int	sign;
	long long int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (tab[i] == ' ' || tab[i] == '\f' || tab[i] == '\n'
		|| tab[i] == '\r' || tab[i] == '\t' || tab[i] == '\v')
		i++;
	if (tab[i] == '+')
		i++;
	else if (tab[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (tab[i] >= '0' && tab[i] <= '9')
	{
		res = res * 10 + tab[i] - '0';
		i++;
	}
	return (res * sign);
}
