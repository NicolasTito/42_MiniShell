/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:51:19 by nide-mel          #+#    #+#             */
/*   Updated: 2022/03/07 18:35:29 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/******************************************************************************\
*
\******************************************************************************/
static void	start_program(char **env)
{
	t_data	*data;

	data = init_data(env);
	while (data->status == 0)
	{
		
	}
}

int	main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	start_program(env);
	return (0);
}