/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:36:12 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/25 19:26:37 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)

{
	int i;
	int j;

	i = 0;
	j = 0;
	
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' && argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126)
			{
				j = i + 1;
			}
			i++;
		}
		while (argv[1][j] >= 33 && argv[1][j] <= 126)
			{
				write(1, &argv[1][j], 1);
				j++;
			}
	}
	write(1, "\n", 1);
}