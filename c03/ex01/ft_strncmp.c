/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:19:05 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/29 12:30:21 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include<string.h>
#include<stdio.h>
int main()
{
	char str1[] = "haPpy";
	char str2[] = "h4ppy";
	printf("strncmp says: %d\n", strncmp(str1, str2, 1));
	printf("ft_strncmp says: %d\n", ft_strncmp(str1, str2, 2));
	return (0);
}

