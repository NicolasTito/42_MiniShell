/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:58:06 by nide-mel          #+#    #+#             */
/*   Updated: 2022/03/07 17:49:10 by nide-mel         ###   ########.fr       */
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

typedef struct s_data {
	int				status;
	char			**token;
	t_env			*env;
}					t_data;
#endif
