/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgiraldi <cgiraldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 02:05:14 by gfelicio          #+#    #+#             */
/*   Updated: 2021/04/10 22:24:43 by cgiraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky.h"

int main(int argc, char* args[])
{
	argc = 0;
	int ** puzzle;
	database(args);
	puzzle = createpuzzle();
	printpuzzle(puzzle);
	return 0;
}