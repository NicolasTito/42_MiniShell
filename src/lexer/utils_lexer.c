/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lexer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:27:03 by nide-mel          #+#    #+#             */
/*   Updated: 2022/05/12 15:31:01 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/* ************************************************************************** *\
 *																			   *
 * Alloc memory in array of strings to store tokens							   *
 *																			   *
\* ************************************************************************** */
int	malloc_token(char *str, t_lexer *lexer, int count)
{
	if (str == NULL && count == 0)
	{
		if (!lexer->token)
		{
			lexer->token = malloc(sizeof(char *) + 1);
			if (!lexer->token)
				return (0);
			lexer->token[0] = 0;
		}
	}
	else
	{
		lexer->token = ft_realloc(lexer->token, sizeof(char *) * (count + 1),
				sizeof(char *) * (count + 2));
		lexer->token[count++] = ft_strdup(str);
		lexer->token[count] = 0;
	}
	return (1);
}

/**************************************************************************** *\
 * Function to initialize the lexer                                           *
\**************************************************************************** */
t_lexer	*init_lexer(t_lexer *lexer)
{
	lexer->token = NULL;
}

