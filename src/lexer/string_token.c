/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_token.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:16:27 by nide-mel          #+#    #+#             */
/*   Updated: 2022/05/16 17:32:16 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/******************************************************************************\
* reads an array and separates it into tokens, separated by spaces
*
* Function returns the tokens in an array in array
*
* Everything between quotes is considered only a token
*
* The use of $ makes it expand from the environment variables
* (also works inside double quotes,
* but inside single quotes it uses what was written)
\******************************************************************************/
char	**str_token(char *str)
{
	t_lexer	*lexer;

	lexer = init_lexer(lexer);
	if (!malloc_token(str, lexer, 0))
		return (NULL);
	while ()
}


