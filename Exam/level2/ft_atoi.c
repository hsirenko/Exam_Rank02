/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:28:23 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/25 20:23:57 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int num;
	int sign;

	i = 0;
	num = 0;

	while (str[i])
	{
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + str[i] - 48;
			i++;
		}
		else if (str[i] >= '9' || str[i] <= 0 || str[i] == ' ')
		{
			i++;
		}
	}
	return (num * sign);
}

int main()
{
	char *str = "-1234567    sdf";
	int result = ft_atoi(str);
	printf("%d\n", result);
}