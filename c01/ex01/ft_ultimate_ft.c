/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:11:40 by nmorphet          #+#    #+#             */
/*   Updated: 2022/01/19 13:12:48 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h> /*only including this library to use printf function for 
					testing */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
int main()
{
	int a;							
	int		*pointer1;
	int		**pointer2;
	int 	***pointer3;
	int 	****pointer4;
	int		*****pointer5;
	int 	******pointer6;
	int		*******pointer7;
	int		********pointer8;
	int 	*********pointer9;
	
	a = 100;
	pointer1 = &a;
	pointer2 = &pointer1;
	pointer3 = &pointer2;
	pointer4 = &pointer3;
	pointer5 = &pointer4;
	pointer6 = &pointer5;
	pointer7 = &pointer6;
	pointer8 = &pointer7;
	pointer9 = &pointer8;
	ft_ultimate_ft(pointer9);
	printf("%d\n", a);

	return (0);
}
*/
