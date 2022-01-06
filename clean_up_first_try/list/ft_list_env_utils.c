/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_env_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:05:31 by rvalton           #+#    #+#             */
/*   Updated: 2022/01/05 22:55:10 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

/*those functions works with list of type t_env*/

void	ft_free_list_env(t_env **list)
{
	t_env	*tmp;

	if (!list)
		return ;
	if (!*list)
		return ;
	while (*list)
	{
		tmp = (*list)->nxt;
		if ((*list)->name)
			free((*list)->name);
		if ((*list)->value)
			free((*list)->value);
		(*list)->name = NULL;
		(*list)->value = NULL;
		free(*list);
		*list = NULL;
		*list = tmp;
	}
}

int	ft_size_list_env(t_env *list)
{
	t_env	*tmp;
	int		i;

	if (!list)
		return (0);
	tmp = list;
	i = 0;
	while (tmp)
	{
		tmp = tmp->nxt;
		i++;
	}
	if (i > 0)
		return (i);
	else
		return (0);
}

void	ft_print_list_env(t_env *list)
{
	t_env	*tmp;

	if (list)
	{
		tmp = list;
		while (tmp)
		{
			ft_print_str(tmp->name);
			ft_print_str("=");
			ft_print_str(tmp->value);
			ft_print_str("\n");
			tmp = tmp->nxt;
		}
	}
}
