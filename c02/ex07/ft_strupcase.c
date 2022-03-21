/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:31:01 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/24 15:01:32 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		str[i] -= 32;
	i++;
	}
	return (str);
}
/*
#include<stdio.h>

int	main()
{
	char str[] = "Test";
	printf("%s\n", ft_strupcase(str));
	return (0);
}
*/
