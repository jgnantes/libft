/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:14:21 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 11:28:24 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c;

	c = ft_isalpha(65);
	printf("ft:%d\n", c);
	c = isalpha(65);
	printf("or:%d\n", c);
	
	c = ft_isalpha(1);
	printf("ft:%d\n", c);
	c = isalpha(1);
	printf("or:%d\n", c);
}
*/
