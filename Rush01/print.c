/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcalazan <gcalazan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:05:16 by gfelicio          #+#    #+#             */
/*   Updated: 2021/04/11 18:43:49 by gcalazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky.h"
void	ft_putchar(char c);

int ** createpuzzle()
{
	int ** puzzle;
	int i, j;
	int array[4][4]= {{0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0},
					  {0, 0, 0, 0}};

	i = 0;
	j = 0;
	puzzle = (int**)malloc(sizeof(int*)*4);
	while(i < 4)
	{
		puzzle[i] = (int*)malloc(sizeof(int)*4);
		while(j < 4)
		{
			puzzle[i][j] = array[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return puzzle;
}

void printpuzzle(int ** puzzle)
{
	int i, j;
	i = 0;
	j = 0;
	while(i < 4)
	{
		while(j < 4)
		{
			//printf(" %d ", puzzle[i][j]);
			ft_putchar('0'+ puzzle[i][j]);
			j++;
		}
		j = 0;
		//printf("\n");
		ft_putchar('\n');
		i++;
	}
}