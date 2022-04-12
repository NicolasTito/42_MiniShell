/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_program.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:25:28 by nide-mel          #+#    #+#             */
/*   Updated: 2022/04/12 16:32:10 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_lexer()
{

}

void	free_env(t_env	**env)
{
	t_env	*aux;

	while (*env && env)
	{
		aux = (*env)->next;
		free((*env)->content);
		free((*env)->key);
		free((*env));
		(*env) = aux;
	}
}
