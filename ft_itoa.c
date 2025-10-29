/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:49:06 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/15 10:50:59 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check_neg(long *n, int *is_neg, int *i);
static void	revert(char *str, int n);
static int	dec_places(long n);

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		is_neg;
	long	nbr;

	nbr = (long)n;
	i = dec_places(nbr);
	check_neg(&nbr, &is_neg, &i);
	result = malloc((i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	if (nbr == 0)
		result[i++] = '0';
	while (nbr > 0)
	{
		result[i++] = '0' + (nbr % 10);
		nbr /= 10;
	}
	if (is_neg)
		result[i++] = '-';
	revert(result, i);
	result[i] = '\0';
	return (result);
}
/*#include <limits.h> 
#include <stdio.h> 
int main() 
{ 
	char* test1 = ft_itoa (5); 
	char* test2 = ft_itoa (123456); 
	char* test3 = ft_itoa (-42); 
	char* test4 = ft_itoa (0); 
	char* test5 = ft_itoa (INT_MAX); 
	char* test6 = ft_itoa (INT_MIN); 

	printf("RESULTADO: %s\n", test1); printf("RESULTADO: %s\n", test2); 
	printf("RESULTADO: %s\n", test3); printf("RESULTADO: %s\n", test4); 
	printf("RESULTADO: %s\n", test5); printf("RESULTADO: %s\n", test6); 
}*/

static void	check_neg(long *n, int *is_neg, int *i)
{
	if (*n < 0)
	{
		*n = -(*n);
		*is_neg = 1;
		(*i)++;
	}
	else
		*is_neg = 0;
}

static void	revert(char *str, int i)
{
	int		j;
	char	temp;

	j = 0;
	while (j < i)
	{
		temp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = temp;
		j++;
		i--;
	}
}

static int	dec_places(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
