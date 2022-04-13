/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:21:30 by nide-mel          #+#    #+#             */
/*   Updated: 2022/04/13 18:31:36 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/******************************************************************************\
* Stores the date data
\******************************************************************************/
t_data	*get_data(t_data *data)
{
	static t_data	*save;

	if (!save && data)
		save = data;
	return (save);
}

void	free_split(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
	split = NULL;
}

/******************************************************************************\
* Initialises the data struct
\******************************************************************************/
t_data	*init_data(char **env)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	data->env = NULL;
	data->status = 0;
	data->token = NULL;
	data = get_data(data);
	init_env(env);
	return (data);
}
