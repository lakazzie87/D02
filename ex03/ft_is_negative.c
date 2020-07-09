/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:41:08 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/09 15:59:03 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_is_negative(void)
{
	int n

	if(n < 0)
	{
		ft_putchar("Negative");
	}
	else
	{
		ft_putchar("Positive");
	}
}
