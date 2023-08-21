/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:31:23 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/22 18:23:04 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str)
{
            int i;
            int len;
			char tmp;

			len = 0;
			i = 0;

			while (str[len])
            {
				len++;
			}
            while (i < len - 1)
			{
				tmp = str[i];
				str[i] = str[len - 1];
				str[len - 1] = tmp;
				i++; 
				len--;
			}
			return (str);
}

int main()
{
                        char str[] = "reverse";
                        ft_strrev(str);
						printf("%s", str);
}