/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                	saved[++i]                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:03:47 by nide-mel          #+#    #+#             */
/*   Updated: 2022/05/19 14:59:20 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	saved_token(char **token, char *saved)
{

}

/******************************************************************************\
 *                                                                            *
 * Function:		ft_strtok                                                 *
 *                                                                            *
 * Return value:	-1 if a erro                                              *
 * Return value:	0  if finish str                                          *
 * Return value:	1  if continue str                                        *
\******************************************************************************/
int	ft_strtok(char *str, char **token)
{
	static char	*saved = NULL;
	char		*temp;
	int			i;

	i = -1;
	if (!token)
		return (-1);
	if (saved == NULL && str != NULL)
		saved = str;
	while (is_space(saved[i]))
		i++;
	while (saved[++i])
	{
		if (ft_strchr(saved[i], '\'') || ft_strchr(saved[i], '\"'))
			;
		else
		{
			if (is_space(saved[i]))
				break ;
		}
	}
}
