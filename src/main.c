/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:51:19 by nide-mel          #+#    #+#             */
/*   Updated: 2022/04/12 16:24:50 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static char	**read_command(void)
{
	t_lexer	*lexer;
	char	**token;

	lexer = malloc(sizeof(t_lexer));
	lexer->command = readline(BGRN "➜  " BCYN "MiniShell:" RST);
	if (!lexer->command)
	{
		printf(REDB"EXIT ERROR" REDB"READLINE\n"RST);
		
		return (NULL);
	}
}

/******************************************************************************\
*
\******************************************************************************/
static void	start_program(char **env)
{
	t_data	*data;

	data = init_data(env);
	while (data->status == 0)
	{
		data->token = read_command();
		if (data->token)
			break;
	}
}

int	main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	start_program(env);
	return (0);
}
