/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_heredoc_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:05:31 by rvalton           #+#    #+#             */
/*   Updated: 2022/01/05 23:07:43 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

void	ft_free_list_heredoc(t_heredoc *list)
{
	t_heredoc	*tmp;

	tmp = NULL;
	if (list)
	{
		while (list)
		{
			tmp = list->nxt;
			free(list->line);
			free(list);
			list = tmp;
		}
	}
}

void	ft_print_list_heredoc(t_heredoc *list, int fd)
{
	t_heredoc	*tmp;

	if (list != NULL)
	{
		tmp = list;
		while (tmp)
		{
			write(fd, tmp->line, ft_strlen(tmp->line));
			write(fd, "\n", 1);
			tmp = tmp->nxt;
		}
	}
}
