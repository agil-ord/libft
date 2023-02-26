/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:55:03 by agil-ord          #+#    #+#             */
/*   Updated: 2022/09/25 13:25:06 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <string.h>
#include <stdio.h>
*/
/*this funtion introducce character "c" the times tell "len" in the string "b"*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len > 0)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	char	str[50];
	char	str2[50];

	strcpy (str, "This is string.h library function");
	puts (str);
	memset(str, '$', 7);
	puts(str);
	strcpy (str2, "This is string.h library function");
	puts (str2);
	memset(str2, '*', 7);
	puts (str2);
	return (0);
}
*/