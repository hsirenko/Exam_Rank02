/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:27:47 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/25 21:41:34 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int comp;
	int i;

	comp = 0;
	i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
		{
			comp = 1;
		}
		else if (s1[i] < s2[i])
		{
			comp = -1;
		}
		else if (s1[i] == s2[i])
		{
			comp = 0;
		}
		i++;
	}
	return (comp);
}

int main()
{
	char *s1 = "coucou";
	char *s2 = "CC";
	int result = ft_strcmp(s1, s2);
	printf("%d\n", result);
}
