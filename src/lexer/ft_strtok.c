/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:03:47 by nide-mel          #+#    #+#             */
/*   Updated: 2022/05/17 16:10:34 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"


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

	if (!token)
		return (-1);
	if (saved == NULL)
		saved = str;
}
