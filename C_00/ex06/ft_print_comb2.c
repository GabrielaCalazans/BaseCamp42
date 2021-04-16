/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcalazan <gcalazan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:52:18 by gcalazan          #+#    #+#             */
/*   Updated: 2021/04/13 03:28:47 by gcalazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_comb2(void)
{
	char	matnum[5];
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		matnum[0] = '0' + (a / 10);
		matnum[1] = '0' + (a % 10);
		matnum[2] = ' ';
		while (b++ < 99)
		{
			matnum[3] = '0' + (b / 10);
			matnum[4] = '0' + (b % 10);
			write(1, &matnum, 5);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
		}
		b = a++ + 1;
	}
}
