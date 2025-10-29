/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:54:54 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/21 13:55:06 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src);

char	*ft_strdup(char *src)
{
	size_t	length;
	char	*dest;

	if (src == 0)
		return (0);
	length = (size_t)ft_strlen(src);
	dest = malloc(length + 1);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *string1 = "solta o ponto moulinette";
	char *string2 = "solta o ponto moulinette";
	
	printf("%s\n", ft_strdup(string1));
	printf("%s\n", strdup(string2));
}
*/

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
