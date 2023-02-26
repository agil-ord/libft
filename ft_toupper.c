/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-ord <agil-ord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:11:23 by agil-ord          #+#    #+#             */
/*   Updated: 2022/09/22 16:38:06 by agil-ord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_toupper(int ch)
{
	if (ch >= 97 & ch <= 122)
		ch -= 32;
	return (ch);
}
/*
int	main(void)
{
	int	ch;

	ch = '5';
	printf("la letra es: %d y ahora es %d", ch, ft_toupper(ch));
	printf("la funcion buena ls letra antes %d y despues %d", ch, toupper(ch));
}
*/