/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:57:20 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/29 11:48:08 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		write(1, &a, 1);
		i++;
	}
}

int main()
{
	ft_putstr("this is a test");
	return (0);
}

