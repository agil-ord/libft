/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:14:39 by agil-ord          #+#    #+#             */
/*   Updated: 2022/09/23 19:30:52 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <stdio.h>
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 48 & c <= 57 || c >= 65 & c <= 90
		|| c >= 97 & c <= 122)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = '-';
	printf("alphanumeric: %d", ft_isalnum(c));
	printf("\nalphanumeric: %d", isalnum(c));
	return (0);
}
*/