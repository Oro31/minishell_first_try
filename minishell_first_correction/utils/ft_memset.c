/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:29:35 by rvalton           #+#    #+#             */
/*   Updated: 2021/12/28 07:09:05 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

void	ft_memset(void *s, int c, size_t n)
{
	char	*t;
	size_t	i;

	t = (char *)s;
	i = 0;
	while (i < n)
	{
		*(t + i) = (char)c;
		i++;
	}
}
