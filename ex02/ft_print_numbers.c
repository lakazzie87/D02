/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:47:31 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/09 15:20:02 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchat(char c);

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
