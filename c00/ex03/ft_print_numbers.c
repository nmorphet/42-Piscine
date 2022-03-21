/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 09:21:45 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/13 14:56:55 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	n ;

	n = '0' ;
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
/* to test program

int main(void) {
	ft_print_numbers();	
}
*/
