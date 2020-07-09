/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:49:07 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/09 15:21:02 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unitstd.h>

int ft_putchar(char c);

void 	ft_print_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	num1
	char 	num2
	char	num3

	num1 = '0' - 1 ;
	while(++num1 <= '9')
	{
		num2 = '0' -1;
   		while(++num2 <= '9')
		{
			num3 = '0' -1;
			while(++num3 <= '9')
			{
				if(num1 < num2 && num2 < num3)
				{
					ft_putchar(num1);
					ft_putchar(num2);
					ft_putchar(num3);
					if(num1 != '7')
						ft_print_comma();
				}
			}
		}	
	}	
}
