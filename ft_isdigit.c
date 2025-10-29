/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:42:18 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 11:42:48 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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

	c = ft_isdigit(48);
	printf("ft:%d\n", c);
	c = isdigit(48);
	printf("or:%d\n", c);
	
	c = ft_isdigit(1);
	printf("ft:%d\n", c);
	c = isdigit(1);
	printf("or:%d\n", c);
}
*/
