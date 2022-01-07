/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:10:26 by rvalton           #+#    #+#             */
/*   Updated: 2022/01/05 23:15:47 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

char	*ft_str_copy(char **str)
{
	char	*tmp;
	int		i;

	tmp = NULL;
	if (!str || !*str)
		return (NULL);
	if (!ft_malloc_splchar(&tmp, ft_strlen(*str) + 1))
		return (NULL);
	i = -1;
	while ((*str)[++i])
		tmp[i] = (*str)[i];
	tmp[i] = '\0';
	free(*str);
	*str = NULL;
	return (tmp);
}

char	*ft_str_copy_nofree(char *str)
{
	char	*tmp;
	int		i;

	if (!str)
		return (NULL);
	if (!ft_malloc_splchar(&tmp, ft_strlen(str) + 1))
		return (NULL);
	i = -1;
	while (str[++i])
		tmp[i] = str[i];
	tmp[i] = '\0';
	return (tmp);
}
