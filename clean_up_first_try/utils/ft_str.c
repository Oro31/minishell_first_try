/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:10:26 by rvalton           #+#    #+#             */
/*   Updated: 2022/01/05 23:24:24 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

/*some functions to manipulate strings*/

void	ft_print_str(char *str)
{
	int	length;

	if (str)
	{
		length = ft_strlen(str);
		if (length > 0 && length < 2000000000)
			write(1, str, length);
	}
}

int	ft_strlen(char *str)
{
	int		i;

	if (!str || !str[0])
		return (0);
	i = 0;
	while (str[i] && i >= 0 && i < 2000000000)
		i++;
	return (i);
}

int	ft_strcomp(char *str, char *comp)
{
	int	i;

	if (!str || !comp)
		return (-999);
	i = 0;
	while (str[i] && comp[i] && str[i] == comp[i])
		i++;
	return (str[i] - comp[i]);
}
