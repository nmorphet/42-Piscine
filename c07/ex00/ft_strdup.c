/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:47:36 by nmorphet          #+#    #+#             */
/*   Updated: 2022/02/03 08:50:00 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char 	*copy;
	int i;

	copy = malloc(sizeof(*src));
		if (copy == NULL)
			return (NULL);
		i = 0;
		while (src[i] != '\0')
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
}
/*
int main()
{
	printf("%s\n", ft_strdup("Test"));
	return (0);
}
*/
