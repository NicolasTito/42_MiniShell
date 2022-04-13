/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:58:04 by nide-mel          #+#    #+#             */
/*   Updated: 2022/04/13 18:17:16 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_FUNCTIONS_H
# define MS_FUNCTIONS_H

# include "minishell.h"

t_data	*init_data(char **env);
t_data	*get_data(t_data *data);
void	init_env(char **env);
void	free_split(char **split);
void	free_env(t_env	**env);
char	**str_token(char *command);

#endif
