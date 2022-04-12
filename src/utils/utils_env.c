/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:56:50 by nide-mel          #+#    #+#             */
/*   Updated: 2022/03/07 17:15:39 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	add_env_list(t_env *new)
{
	t_data			*data;
	static t_env	*env = NULL;

	data = get_data(NULL);
	if (!env)
	{
		env = new;
		data->env = new;
	}
	else
	{
		env->next = new;
		env = new;
	}
}

static t_env	*new_env(char **env)
{
	t_env	*new;

	new = (t_env *)malloc(sizeof(t_env));
	if (!new)
		return (NULL);
	new->key = ft_strdup(env[0]);
	new->content = ft_strdup(env[1]);
	new->next = NULL;
	return (new);
}

void	init_env(char **env)
{
	int		i;
	t_env	*l_env;
	char	**path;

	l_env = NULL;
	i = -1;
	while (env[++i])
	{
		path = ft_split(env[i], '=');
		if (!path)
			return ;
		l_env = new_env(path);
		if (!l_env)
			return ;
		add_env_list(l_env);
		free_split(path);
		path = NULL;
	}
}
