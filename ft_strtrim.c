/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:17:55 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/24 15:18:08 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(const char *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;
	size_t	trim_len;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && check_char(set, s1[i]))
		i++;
	while (j > i && check_char(set, s1[j - 1]))
		j--;
	trim = malloc((j - i + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	trim_len = 0;
	while (i < j)
		trim[trim_len++] = s1[i++];
	trim[trim_len] = '\0';
	return (trim);
}

static int	check_char(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
