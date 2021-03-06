/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:15:23 by rvalton           #+#    #+#             */
/*   Updated: 2022/01/05 17:57:14 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

/*the function ft_get_env is used to get the value of an env variable
the function return a string that you will have 
to free before the end of your program*/

int	ft_strcomp(char *str1, char *str2)
{
	int	i;

	if (!str1)
		return (-999);
	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

char	*ft_get_env(t_env *env, char *name, int *env_path)
{
	t_env	*tmp;

	if (env_path)
		*env_path = 0;
	tmp = NULL;
	if (!env)
		return (NULL);
	tmp = env;
	if (ft_strcomp(name, tmp->name) == -999)
		return (NULL);
	while (tmp && ft_strcomp(name, tmp->name) != 0)
		tmp = tmp->nxt;
	if (!tmp)
		return (NULL);
	if (env_path)
		*env_path = 1;
	return (ft_str_copy_nofree(tmp->value));
}
