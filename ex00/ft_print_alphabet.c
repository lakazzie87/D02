/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:23:53 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/09 15:26:43 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while(letter <= 'z')
	{
		ft_putchar(letter);
		letter ++;
	}
}
