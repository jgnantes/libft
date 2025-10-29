/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:05:35 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/14 12:05:38 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	while (src[i - dest_len] != '\0' && i < size - 1)
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	unsigned int size1;
	unsigned int size2;
  
	size1 = ft_strlcat("Oi", "Tchau", 7);
	printf("%d\n", size1);
	
	//size2 = strlcat("Oi", "Tchau", 7);
	//printf("%d\n", size2);
	
	return 0;
}
*/
