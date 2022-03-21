/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:57:23 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/31 09:21:00 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	value;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	value = nb;
	return (value * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
printf("%d\n", ft_recursive_factorial(7));
return (0);
}
*/
