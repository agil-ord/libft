/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:59:00 by agil-ord          #+#    #+#             */
/*   Updated: 2022/09/22 16:38:03 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isascii(int c)
{
	if (c >= 0 & c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 321;
	printf("la funcion buena devuelve: %d", isascii(c));
	printf("\nmi funcion devuelve: %d", ft_isascii(c));
}*/
