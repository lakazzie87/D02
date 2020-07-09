/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:47:58 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/08 15:54:06 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while(letter >= 'a');
	{
		ft_putchar(letter);
		letter --;
	}
}

