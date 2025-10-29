/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:46:27 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 11:46:29 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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

	c = ft_isascii(48);
	printf("ft:%d\n", c);
	c = isascii(48);
	printf("or:%d\n", c);
	
	c = ft_isascii(1);
	printf("ft:%d\n", c);
	c = isascii(1);
	printf("or:%d\n", c);
}
*/
