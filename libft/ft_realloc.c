/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 17:48:47 by nide-mel          #+#    #+#             */
/*   Updated: 2021/12/20 03:41:46 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t osize, size_t size)
{
	void	*ret;

	if (!ptr)
		return (malloc(size));
	ret = malloc(size);
	if (!ret)
		return (ptr);
	if (osize > size)
		osize = size;
	ft_memcpy(ret, ptr, osize);
	free(ptr);
	return (ret);
}
