/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:05:31 by rvalton           #+#    #+#             */
/*   Updated: 2022/01/05 22:59:30 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

/*this function is used to add a new element at the end
of a list of type t_cmd, it returns the pointer to the head of the list*/

t_cmd	*ft_eadd_tolist_cmd(t_cmd *list, char **split, int *redir,
		t_heredoc *heredoc)
{
	t_cmd	*newelem;
	t_cmd	*tmp;

	newelem = malloc(sizeof(t_cmd));
	if (!newelem)
	{
		perror("malloc failed\n");
		return (NULL);
	}
	newelem->heredoc = heredoc;
	newelem->argv = split;
	newelem->redir = redir;
	newelem->nxt = NULL;
	if (list == NULL)
		return (newelem);
	else
	{
		tmp = list;
		while (tmp->nxt != NULL)
			tmp = tmp->nxt;
		tmp->nxt = newelem;
		return (list);
	}
}
