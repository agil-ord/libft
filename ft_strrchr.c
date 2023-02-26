/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:53:51 by agil-ord          #+#    #+#             */
/*   Updated: 2022/09/22 16:37:41 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len --;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*str;
	const char	*str2;
	char	c;
	char	*ret;
	char	*res;

	str = "http://www.tutorialspoint.com";
	str2 = "http://www.tutorialspoint.com";
	c = '.';
	ret = strrchr(str, c);
	res = ft_strrchr(str, c);
	printf("String after |%c| is - |%s|\n", c, ret);
	printf("\n\nString after |%c| is - |%s|\n", c, res);
	return (0);
}
*/