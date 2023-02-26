/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:34:41 by agil-ord          #+#    #+#             */
/*   Updated: 2022/09/21 19:40:41 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <strings.h>
#include <stdio.h>
*/
size_t	ft_strlen(const char *c)
{
	size_t	l;

	l = 0;
	while (c[l] != '\0')
	{
		l++;
	}
	return (l);
}
/*
int	main(void)
{
	const char	*c;

	c = "544fd4v84f";
	printf("size of string: %zu", strlen(c));
	printf("\n My size of string: %zu", ft_strlen(c));
}
*/