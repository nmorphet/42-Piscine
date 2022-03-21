/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:25:41 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/25 09:42:33 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include<string.h>
#include<stdio.h>
int main()
{
	char str1[] = "hello";
	char str2[] = "hi";
	printf("Using the string function %d\n", strcmp(str1, str2));
	printf("Using our function %d\n", ft_strcmp(str1, str2));
	return (0);
}
*/
