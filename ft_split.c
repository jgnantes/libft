/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:07:27 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/24 17:07:34 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_i_count(char const *str, char c, size_t *i);
static char	*ft_strndup(char const *src, size_t n);
static char	**free_array(char **arr, size_t i);

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	split = malloc((str_i_count(s, c, &i) + 1) * sizeof (char *));
	if (!split)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		j = 0;
		while (s[j] != c && s[j] != '\0')
			j++;
		split[i++] = ft_strndup((char *)s, j);
		if (!split[i - 1])
			return (free_array(split, i));
		s = s + j;
	}
	split[i] = NULL;
	return (split);
}

/*
#include <stdio.h>
int	main(void)
{
	char	**result;
	int		i;

	printf("---- TESTE 1: string normal ----\n");
	result = ft_split("um dois tres", ' ');
	i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("[%s]\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("retornou NULL\n");

	printf("\n---- TESTE 2: delimitadores múltiplos ----\n");
	result = ft_split("   um  dois   tres   ", ' ');
	i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("[%s]\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("retornou NULL\n");

	printf("\n---- TESTE 3: string vazia ----\n");
	result = ft_split("", ' ');
	if (!result)
		printf("retornou NULL\n");
	else
	{
		printf("(array vazio)\n");
		free(result);
	}

	printf("\n---- TESTE 4: apenas delimitadores ----\n");
	result = ft_split("     ", ' ');
	if (!result)
		printf("retornou NULL\n");
	else
	{
		printf("(array vazio)\n");
		free(result);
	}

	printf("\n---- TESTE 5: delimitador inexistente ----\n");
	result = ft_split("palavraunica", ' ');
	i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("[%s]\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("retornou NULL\n");

	printf("\n---- TESTE 6: string NULL ----\n");
	result = ft_split(NULL, ' ');
	if (!result)
		printf("retornou NULL (correto)\n");
	else
		printf("ERRO: deveria retornar NULL\n");

	printf("\n---- TESTE 7: delimitador é '\\0' ----\n");
	result = ft_split("abc", '\0');
	i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("[%s]\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("retornou NULL\n");

	printf("\n---- TESTE 8: delimitador no início ----\n");
	result = ft_split(" teste", ' ');
	i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("[%s]\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("retornou NULL\n");

	printf("\n---- TESTE 9: delimitador no fim ----\n");
	result = ft_split("finalmente ", ' ');
	i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("[%s]\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("retornou NULL\n");

	printf("\n---- TESTE 10: delimitador repetido ----\n");
	result = ft_split("a,b,,c", ',');
	i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("[%s]\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("retornou NULL\n");

	return (0);
}*/

static size_t	str_i_count(char const *str, char c, size_t *i)
{
	int	count;
	int	in_word;

	*i = 0;
	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*ft_strndup(char const *src, size_t n)
{
	char	*dest;
	size_t	i;

	dest = malloc((n + 1) * sizeof (char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = (char)src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**free_array(char **arr, size_t i)
{
	if (arr)
	{
		while (i > 0)
		{
			free(arr[i]);
			i--;
		}
		free(arr);
	}
	return (NULL);
}
