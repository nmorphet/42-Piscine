/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:36:12 by nmorphet          #+#    #+#             */
/*   Updated: 2022/02/02 08:26:02 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	if (str[i] != 0)
	{
		while (str[i] != 0)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
