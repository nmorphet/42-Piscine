/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:16:52 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/26 10:30:41 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char a[] = "Test";
	ft_strlen(a);
	printf("%d\n",ft_strlen(a));
	return (0);
}
*/
