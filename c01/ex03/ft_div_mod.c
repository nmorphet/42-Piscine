/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 09:29:01 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/19 13:18:18 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()	
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	div = 2;
	mod = 1;

	ft_div_mod(a, b, &div, &mod);
	
	printf("%d\n%d\n", div, mod);
	return (0);
}
*/
