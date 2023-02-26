/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:19:18 by agil-ord          #+#    #+#             */
/*   Updated: 2022/09/20 17:24:41 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_tolower(int ch)
{
	if (ch >= 65 & ch <= 90)
		ch += 32;
	return (ch);
}
/*
int	main(void)
{
	int	ch;

	ch = 's';
	//printf("la letra es: %d y ahora es %d", ch, ft_tolower(ch));
	printf("la funcion buena ls letra antes %d y despues %d", ch, tolower(ch));
}
*/