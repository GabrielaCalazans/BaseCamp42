/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfelicio <gfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:05:08 by gfelicio          #+#    #+#             */
/*   Updated: 2021/04/10 16:15:42 by gfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void create (void);

void check(int *args, int size)
{
	int count_Error;
	int count_Right;
	int i;
	int swap;

	swap = 0;
	i = 0;
	count_Error = 0;
	count_Right = 0;
//While para verificar se existe algum valor diferente de 1, 2, 3 ou 4 dentro da especificação de valores! Porém
//ainda falta criar o ponteiro/variavel/matriz que irá receber os valores!
	while(*args != '\0')
	{
		swap = args[i];
		if(swap >= 1 && swap <= 4)
			count_Right++;
		else
			count_Error++;
		i++;
	}
	if (count_Error > 0)
		write(1, "Error\n", 6);

}
