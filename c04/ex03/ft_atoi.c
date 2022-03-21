/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:44:28 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/29 12:09:23 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
	res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int main()
{

	char *s = "	---+--+1234ab567";

	printf("atoi: %d\n", atoi("12345"));
	printf("ft_atoi: %d\n", ft_atoi("12345"));

	printf("atoi: %d\n", atoi("12a3"));
	printf("ft_atoi: %d\n", ft_atoi("12a3"));

	printf("atoi: %d\n", atoi(s));
	printf("ft_atoi: %d\n", ft_atoi("	---+--+1234ab567"));
	return (0);
}

