/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:58:06 by nide-mel          #+#    #+#             */
/*   Updated: 2022/04/12 16:14:29 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_STRUCT_H
# define MS_STRUCT_H

# include "minishell.h"

typedef struct s_env {
	char			*key;
	char			*content;
	struct s_env	*next;
}					t_env;

typedef struct s_lexer
{
	char			*command;
}					t_lexer;

typedef struct s_data {
	int				status;
	char			**token;
	t_env			*env;
}					t_data;
#endif
