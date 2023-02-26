/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:17:11 by agil-ord          #+#    #+#             */
/*   Updated: 2022/10/05 16:27:00 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
#include <stdio.h>
#include <string.h>
*/
/*char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return ("NULL");
		i++;
	}
	return ((char *)s);
}

int	main(void)
{
	const char	*s = "http://www.tutorialspoint.com";
	const char	c = '.';
	char	*res;
	char	*ret;

	ret = ft_strchr(s, c);
	res = strchr(s, c);
	printf("String after |%c| is - |%s|\n", c, res);
	printf("la cadena despues de: %c es - %s\n", c, res);
	return (0);
}
*/