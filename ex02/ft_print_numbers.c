/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:47:31 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/09 11:32:27 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchat(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char num;

	num = '0';
	while(num <= '9')
	{
		ft_putchar(num);
		num ++;
	}
}
