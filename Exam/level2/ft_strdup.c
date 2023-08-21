/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:02:06 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/22 14:48:28 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
            char *dest;
            int i;
           // int len;

            i = 0;
            // len = 0;

            // while (src[len])
            //             len++;
            dest = malloc(sizeof(char *) * src[i + 1]);
            if (!dest) 
                        return (NULL);
            while (src[i])
            {
                        dest[i] = src[i];
                        i++;
            }
            return (dest);
}

int main()
{
            char *src = "H";
            //char *dest = "1";
            char *result;

            result = ft_strdup(src);

            printf("Source: %s\nResult: %s\n", src, result);
            printf("Shorter ver: %s\n", ft_strdup(src));
}