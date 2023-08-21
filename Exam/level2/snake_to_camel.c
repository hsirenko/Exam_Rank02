/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:21:11 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/24 19:33:11 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	int i;
	char upper;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				upper = argv[1][i + 1] - 32;
				write(1, &upper, 1);
				i++;
			}
			else 
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
}