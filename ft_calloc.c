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

/*#include <stdio.h>
int	main(void)
{
	void	*ptr;
	size_t	n;
	size_t	size;

	// 1. Caso normal: 5 inteiros inicializados em 0
	n = 5;
	size = sizeof(int);
	ptr = ft_calloc(n, size);
	if (ptr)
	{
		printf("Teste 1: sucesso, memória alocada e zerada:\n");
		for (size_t i = 0; i < n; i++)
			printf("%d ", ((int *)ptr)[i]);
		printf("\n");
		free(ptr);
	}
	else
		printf("Teste 1: falha inesperada\n");

	// 2. nmeb = 0, size > 0
	ptr = ft_calloc(0, 10);
	printf("Teste 2: n=0, size=10 -> retorno: %p\n", ptr);
	free(ptr);

	// 3. size = 0, nmeb > 0
	ptr = ft_calloc(10, 0);
	printf("Teste 3: n=10, size=0 -> retorno: %p\n", ptr);
	free(ptr);

	// 4. Ambos zero
	ptr = ft_calloc(0, 0);
	printf("Teste 4: n=0, size=0 -> retorno: %p\n", ptr);
	free(ptr);

	// 5. Overflow proposital — deve retornar NULL
	ptr = ft_calloc(SIZE_MAX, 2);
	printf("Teste 5: overflow esperado (SIZE_MAX,2) -> retorno: %p\n", ptr);

	// 6. Overflow reverso (trocando ordem)
	ptr = ft_calloc(2, SIZE_MAX);
	printf("Teste 6: overflow esperado (2,SIZE_MAX) -> retorno: %p\n", ptr);

	// 7. Alocação grande (mas viável)
	ptr = ft_calloc(1000000, 1);
	if (ptr)
	{
		printf("Teste 7: alocação grande bem-sucedida (1MB)\n");
		free(ptr);
	}
	else
printf("Teste 7: falha de alocação (pode ocorrer por falta de memória)\n");


	return (0);
}*/
