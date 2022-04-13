/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:51:19 by nide-mel          #+#    #+#             */
/*   Updated: 2022/04/13 18:17:56 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/******************************************************************************\
* Reads the commands the user wants and separates them into tokens
*
* Returns what the user wrote in an array of arrays separating
* each word and command
\******************************************************************************/
static char	**read_command(void)
{
	char	*command;
	char	**token;

	command = readline(BGRN "➜  " BCYN "MiniShell:" RST);
	if (!command)
	{
		printf(REDB"EXIT ERROR" REDB"READLINE\n"RST);
		return (NULL);
	}
	if (command[0])
		add_history(command);
	token = str_token(command);
	if (!token)
		return (NULL);
	free(command);
	return (token);
}

/******************************************************************************\
* Start function for process startup
*
* Call function read_command
\******************************************************************************/
static void	start_program(char **env)
{
	t_data	*data;

	data = init_data(env);
	while (data->status == 0)
	{
		data->token = read_command();
		if (!data->token)
			break ;
	}
	free_env(&data->env);
}

int	main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	start_program(env);
	return (0);
}
