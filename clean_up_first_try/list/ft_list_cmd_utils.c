/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_cmd_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:57:41 by rvalton           #+#    #+#             */
/*   Updated: 2022/01/05 23:05:25 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

/*those functions work with list of type t_cmd*/

int	ft_size_list_cmd(t_cmd *list)
{
	t_cmd	*tmp;
	int		i;

	if (list == NULL)
		return (0);
	tmp = list;
	i = 0;
	while (tmp)
	{
		tmp = tmp->nxt;
		i++;
	}
	return (i);
}

void	ft_print_list_cmd(t_cmd *list)
{
	t_cmd	*tmp;
	int		i;

	if (list != NULL)
	{
		tmp = list;
		while (tmp)
		{
			i = -1;
			while (tmp->argv[++i])
			{
				ft_print_str(tmp->argv[i]);
				if (tmp->argv[i + 1])
					ft_print_str("/*newarg*/");
			}
			tmp = tmp->nxt;
		}
	}
}

void	ft_free_list_cmd(t_cmd **list)
{
	t_cmd	*tmp;

	if (!list)
		return ;
	if (!*list)
		return ;
	while (*list)
	{
		tmp = (*list)->nxt;
		ft_free_list_heredoc((*list)->heredoc);
		(*list)->heredoc = NULL;
		ft_free_ctab(&((*list)->argv));
		if ((*list)->redir)
			free((*list)->redir);
		(*list)->redir = NULL;
		free(*list);
		*list = NULL;
		*list = tmp;
	}
}
