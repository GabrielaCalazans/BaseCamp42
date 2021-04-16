/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcalazan <gcalazan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 03:00:02 by gcalazan          #+#    #+#             */
/*   Updated: 2021/04/12 22:22:35 by gcalazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnumbers(char n1, char n2, char n3);

void	ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	while (n1 < '8')
	{
		n2 = n1 + 1;
		while (n2 < '9' && n2 > n1)
		{
			n3 = n2 + 1;
			while (n3 <= '9' && n3 > n2)
			{
				printnumbers(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

void	printnumbers(char n1, char n2, char n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
	if (!(n1 == '7' && n2 == '8' && n3 == '9'))
	{
		write(1, ", ", 2);
	}
}
