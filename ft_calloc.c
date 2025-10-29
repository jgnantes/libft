/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:59:30 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/08 19:03:06 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*mem;
	size_t	mem_size;

	mem_size = size * nmeb;
	if ((nmeb != 0 && size > SIZE_MAX / nmeb)
		|| (size != 0 && nmeb > SIZE_MAX / size))
		return (NULL);
	mem = malloc(mem_size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, mem_size);
	return (mem);
}
