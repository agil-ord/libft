/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:28:59 by agil-ord          #+#    #+#             */
/*   Updated: 2022/09/20 17:32:59 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isprint(int c)
{
	if (c >= 32 & c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 129;
	printf("la funcion buena devuelve: %d", isprint(c));
	printf("\nmi funcion devuelve: %d", ft_isprint(c));
}
*/