/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:22:37 by agil-ord          #+#    #+#             */
/*   Updated: 2022/09/20 14:59:04 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isalpha(int c)
{
	if (c >= 65 & c <= 90 || c >= 97 & c <= 122)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 's';
	printf("es un numero: %d", ft_isalpha(c));
	printf("\ne55s un numero: %d", isalpha(c));
	return (0);
}
*/