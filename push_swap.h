/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrechai <anrechai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:57:03 by anrechai          #+#    #+#             */
/*   Updated: 2022/04/26 19:45:45 by anrechai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_is_number(char **tab);
int		ft_is_integer(long long int *res, int i);
int		ft_is_duplicate(long long int *res, int i);
int		ft_size(char **tab);
int		ft_strlen(char *str);
int		ft_atoi(const char *tab);

void	ft_free(char **tab);
void	ft_putstr(char *str);

char	*ft_strjoin(int size, char **strs, char *sep);

char	**ft_split(char const *s, char c);

#endif
