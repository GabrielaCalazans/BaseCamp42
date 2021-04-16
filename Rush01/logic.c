/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcalazan <gcalazan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:05:10 by gfelicio          #+#    #+#             */
/*   Updated: 2021/04/11 18:39:03 by gcalazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//Todos os ifs(que eu consegui pensar pelo menos) de condição para impressão!
char database(char* args[])
{
	int rr;
	int rl;
	char *array = {NULL};
	char rowleft;
	char rowright;

	rr = 13;
	rl = 9;

	while (*args[rl] <= *args[12])
	{
		rowleft = *args[rl];
		rowright = *args[rr];

	if (rowleft == '4' && rowright == '1')
	{
		array[0] = '1';
		array[1] = '2';
		array[2] = '3';
		array[3] = '4';
		createpuzzle(array);
	}
	if (rowleft == '3' && rowright == '1')
	{
		array[0] = '1';
		array[1] = '3';
		array[2] = '2';
		array[3] = '4';
		createpuzzle(array);
	}

	if (rowleft == '3' && rowright == '2')
	{
		array[0] = '1';
		array[1] = '2';
		array[2] = '4';
		array[3] = '3';
		createpuzzle(array);
	}
	if (rowleft == '2' && rowright == '3')
	{
		array[0] = '1';
		array[1] = '4';
		array[2] = '3';
		array[3] = '2';
		createpuzzle(array);
	}

	if (rowleft == '2' && rowright == '2')
	{
		array[0] = '1';
		array[1] = '4';
		array[2] = '2';
		array[3] = '3';
		createpuzzle(array);
	}

	if (rowleft == '4' && rowright == '1')
	{
		array[0] = '1';
		array[1] = '2';
		array[2] = '3';
		array[3] = '4';
		createpuzzle(array);
	}

	if (rowleft == '2' && rowright == '1')
	{
		array[0] = '3';
		array[1] = '1';
		array[2] = '2';
		array[3] = '4';
		createpuzzle(array);
	}

	if (rowleft == '1' && rowright == '2')
	{
		array[0] = '4';
		array[1] = '1';
		array[2] = '2';
		array[3] = '3';
		createpuzzle(array);
	}

	if (rowleft == '1' && rowright == '3')
	{
		array[0] = '4';
		array[1] = '1';
		array[2] = '3';
		array[3] = '2';
		createpuzzle(array);
	}

	if (rowleft == '1' && rowright == '4')
	{
		array[0] = '4';
		array[1] = '3';
		array[2] = '2';
		array[3] = '1';
		createpuzzle(array);
	}
	}
	return 0;
}
