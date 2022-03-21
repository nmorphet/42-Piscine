/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:03:36 by adunne            #+#    #+#             */
/*   Updated: 2022/03/22 09:33:49 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	rush(int width, int height)
{
	int	w;
	int	h;

	h = 0;
	while (h++ < height)
	{
		w = 0;
		while (w++ < width)
		{
			if (h == 1 && (w == 1 || w == width))
				ft_putchar('o');
			else if (h == height && (w == 1 || w == width))
				ft_putchar('o');
			else if (w == 1 || w == width)
				ft_putchar('|');
			else if (h == 1 || h == height)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
